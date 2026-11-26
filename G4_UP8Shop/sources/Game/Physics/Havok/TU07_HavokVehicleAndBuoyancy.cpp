#include "Core/Utils/DecompTypes.h"
#include "TU07_HavokVehicleAndBuoyancy.h"

// ----------------------------------------------------------------------------
// Function: sub_6B9E80  (binary VA: 0x6b9e80)
// Original: sub_6B9E80
// ----------------------------------------------------------------------------
int sub_6B9E80()
{
  typedef uint8_t _g4_t_v1;
  typedef uint8_t _g4_t_v2[23];
  typedef uint32_t _g4_t_v3[46];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v1)) > _g4_s0 ? (4u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (81u + sizeof(_g4_t_v2)) > _g4_s1 ? (81u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (104u + sizeof(_g4_t_v3)) > _g4_s2 ? (104u + sizeof(_g4_t_v3)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 4u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 81u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 104u);

  sub_1900D70(&unk_20D6024);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20D6024, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D6028), "UNKNOWN", (int)(uintptr_t)(&v2[2]));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D6028, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D602C), "IMEI", (int)(uintptr_t)(&v2[1]));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D602C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D6030), "HDIDFV", (int)(uintptr_t)(v2));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D6030, &unk_20D1280);
  dword_20D6034 = 1056964608;
  dword_20D6038 = 1056964608;
  dword_20D603C = 1056964608;
  hkClass::Construct(
    (hkClass::Self *)&unk_20D5FE0,
    "PhysicsVehicleInstance",
    (const hkClass::Self *)&hkpVehicleInstanceClass,
    180,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2030980,
    2,
    nullptr,
    nullptr,
    0,
    0);
  *(uint32_t *)&v2[3] = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Construct(v3, 0);
  dword_20D5FC4 = (int)(uintptr_t)("PhysicsVehicleInstance");
  v3[32] = ((uint32_t)(uintptr_t)&off_2054E7C);
  *(uint32_t *)&v2[3] = ((uint32_t)(uintptr_t)&off_2054E28);
  v3[36] = 0;
  v3[39] = 0;
  v3[33] = 0;
  v3[34] = 0;
  dword_20D5FC8 = (int)(uintptr_t)("!PhysicsVehicleInstance");
  v3[35] = 0x80000000;
  LOBYTE(v3[37]) = 0;
  dword_20D5FCC = (int)(uintptr_t)(sub_688E40);
  v3[38] = 0;
  dword_20D5FD4 = (int)((uint32_t)(uintptr_t)&off_2054E28);
  dword_20D5FD0 = (int)(uintptr_t)(sub_682D20);
  dword_20D5FD8 = 180;
  dword_20D6040 = hkColor::rgbFromChars((hkColor::Self *)((char *)off_FC + 3), 255, 255, 112, v1);
  hkMemorySystem::FrameInfo::Construct((hkMemorySystem::FrameInfo::Self *)&unk_20D6020, 0x80000);
  dword_20D6014 = 16;
  dword_20D6010 = (int)((uint32_t)(uintptr_t)&off_2096CE8);
  dword_20D6018 = 0;
  dword_20D601C = 0;
  return __cxa_atexit((void (*)(void *))sub_6B1E30, &dword_20D6010, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_6BA150  (binary VA: 0x6ba150)
// Original: sub_6BA150
// ----------------------------------------------------------------------------
int sub_6BA150()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: nullsub_134  (binary VA: 0x6ba168)
// Original: nullsub_134
// ----------------------------------------------------------------------------
void nullsub_134()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA170  (binary VA: 0x6ba170)
// Original: sub_6BA170
// ----------------------------------------------------------------------------
int sub_6BA170()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA180  (binary VA: 0x6ba180)
// Original: sub_6BA180
// ----------------------------------------------------------------------------
int sub_6BA180(int a1, int a2)
{
  *(uint8_t *)(a1 + 4) = *(uint8_t *)(a2 + 40);
  *(uint8_t *)(a2 + 40) = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA1A0  (binary VA: 0x6ba1a0)
// Original: sub_6BA1A0
// ----------------------------------------------------------------------------
int sub_6BA1A0(int a1, int a2)
{
  *(uint8_t *)(a2 + 40) = *(uint8_t *)(a1 + 4);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA1B0  (binary VA: 0x6ba1b0)
// Original: sub_6BA1B0
// ----------------------------------------------------------------------------
int sub_6BA1B0()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: nullsub_135  (binary VA: 0x6ba1c8)
// Original: nullsub_135
// ----------------------------------------------------------------------------
void nullsub_135()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_136  (binary VA: 0x6ba1d8)
// Original: nullsub_136
// ----------------------------------------------------------------------------
void nullsub_136()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA1E0  (binary VA: 0x6ba1e0)
// Original: sub_6BA1E0
// ----------------------------------------------------------------------------
int sub_6BA1E0(int a1)
{
  *(float *)(a1 + 4) = 100.0 * *(float *)(a1 + 4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA210  (binary VA: 0x6ba210)
// Original: sub_6BA210
// ----------------------------------------------------------------------------
bool sub_6BA210(int a1)
{
  return G4_VCALL<int>(a1, 16) == 1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA230  (binary VA: 0x6ba230)
// Original: sub_6BA230
// ----------------------------------------------------------------------------
int sub_6BA230()
{
  return 5;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA240  (binary VA: 0x6ba240)
// Original: sub_6BA240
// ----------------------------------------------------------------------------
int sub_6BA240(int a1, int a2)
{
  *(uint8_t *)(a2 + 20) = 1;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: nullsub_137  (binary VA: 0x6ba258)
// Original: nullsub_137
// ----------------------------------------------------------------------------
void nullsub_137()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_138  (binary VA: 0x6ba268)
// Original: nullsub_138
// ----------------------------------------------------------------------------
void nullsub_138()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA270  (binary VA: 0x6ba270)
// Original: sub_6BA270
// ----------------------------------------------------------------------------
bool sub_6BA270(int a1)
{
  return G4_VCALL<int>(a1, 16) == 5;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA290  (binary VA: 0x6ba290)
// Original: sub_6BA290
// ----------------------------------------------------------------------------
uint32_t * sub_6BA290(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA2B0  (binary VA: 0x6ba2b0)
// Original: sub_6BA2B0
// ----------------------------------------------------------------------------
int sub_6BA2B0()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA2C0  (binary VA: 0x6ba2c0)
// Original: sub_6BA2C0
// ----------------------------------------------------------------------------
int sub_6BA2C0()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: nullsub_139  (binary VA: 0x6ba2d8)
// Original: nullsub_139
// ----------------------------------------------------------------------------
void nullsub_139()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_140  (binary VA: 0x6ba2e8)
// Original: nullsub_140
// ----------------------------------------------------------------------------
void nullsub_140()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_141  (binary VA: 0x6ba2f8)
// Original: nullsub_141
// ----------------------------------------------------------------------------
void nullsub_141()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA300  (binary VA: 0x6ba300)
// Original: sub_6BA300
// ----------------------------------------------------------------------------
bool sub_6BA300(int a1)
{
  return G4_VCALL<int>(a1, 16) == 4;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA320  (binary VA: 0x6ba320)
// Original: sub_6BA320
// ----------------------------------------------------------------------------
int sub_6BA320()
{
  return 13;
}

// ----------------------------------------------------------------------------
// Function: nullsub_142  (binary VA: 0x6ba338)
// Original: nullsub_142
// ----------------------------------------------------------------------------
void nullsub_142()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_143  (binary VA: 0x6ba348)
// Original: nullsub_143
// ----------------------------------------------------------------------------
void nullsub_143()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA350  (binary VA: 0x6ba350)
// Original: sub_6BA350
// ----------------------------------------------------------------------------
int sub_6BA350()
{
  return 12;
}

// ----------------------------------------------------------------------------
// Function: nullsub_144  (binary VA: 0x6ba368)
// Original: nullsub_144
// ----------------------------------------------------------------------------
void nullsub_144()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_145  (binary VA: 0x6ba378)
// Original: nullsub_145
// ----------------------------------------------------------------------------
void nullsub_145()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA380  (binary VA: 0x6ba380)
// Original: sub_6BA380
// ----------------------------------------------------------------------------
float * sub_6BA380(float *a1)
{
  float v2; // xmm0_4
  float v3; // xmm0_4

  a1[1] = a1[1] * 100.0;
  a1[2] = a1[2] * 100.0;
  a1[3] = 27.777779f * a1[3];
  a1[4] = a1[4] * 100.0;
  a1[6] = a1[6] * 100.0;
  a1[5] = a1[5] * 100.0;
  a1[7] = a1[7] * 100.0;
  v2 = 100.0 * a1[11];
  a1[10] = a1[10] * 100.0;
  a1[11] = v2;
  a1[18] = a1[18] * 0.017453292f;
  a1[20] = a1[20] * 0.017453292f;
  a1[21] = a1[21] * 0.017453292f;
  a1[22] = a1[22] * 0.017453292f;
  a1[23] = a1[23] * 0.017453292f;
  a1[24] = a1[24] * 0.017453292f;
  a1[25] = a1[25] * 0.017453292f;
  a1[26] = a1[26] * 0.017453292f;
  a1[27] = a1[27] * 0.017453292f;
  a1[28] = a1[28] * 0.017453292f;
  a1[29] = a1[29] * 0.017453292f;
  a1[30] = a1[30] * 0.017453292f;
  v3 = 0.017453292f * a1[34];
  a1[31] = a1[31] * 0.017453292f;
  a1[34] = v3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA4F0  (binary VA: 0x6ba4f0)
// Original: sub_6BA4F0
// ----------------------------------------------------------------------------
bool sub_6BA4F0(int a1)
{
  return G4_VCALL<int>(a1, 16) == 12;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA510  (binary VA: 0x6ba510)
// Original: sub_6BA510
// ----------------------------------------------------------------------------
int sub_6BA510()
{
  return 11;
}

// ----------------------------------------------------------------------------
// Function: nullsub_146  (binary VA: 0x6ba528)
// Original: nullsub_146
// ----------------------------------------------------------------------------
void nullsub_146()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_147  (binary VA: 0x6ba538)
// Original: nullsub_147
// ----------------------------------------------------------------------------
void nullsub_147()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA540  (binary VA: 0x6ba540)
// Original: sub_6BA540
// ----------------------------------------------------------------------------
float * sub_6BA540(float *a1)
{
  float v2; // xmm0_4

  a1[1] = a1[1] * 100.0;
  v2 = 100.0 * a1[3];
  a1[2] = a1[2] * 100.0;
  a1[3] = v2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA580  (binary VA: 0x6ba580)
// Original: sub_6BA580
// ----------------------------------------------------------------------------
bool sub_6BA580(int a1)
{
  return G4_VCALL<int>(a1, 16) == 11;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA5A0  (binary VA: 0x6ba5a0)
// Original: sub_6BA5A0
// ----------------------------------------------------------------------------
uint32_t * sub_6BA5A0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA5C0  (binary VA: 0x6ba5c0)
// Original: sub_6BA5C0
// ----------------------------------------------------------------------------
int sub_6BA5C0()
{
  return 16;
}

// ----------------------------------------------------------------------------
// Function: nullsub_148  (binary VA: 0x6ba5d8)
// Original: nullsub_148
// ----------------------------------------------------------------------------
void nullsub_148()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_149  (binary VA: 0x6ba5e8)
// Original: nullsub_149
// ----------------------------------------------------------------------------
void nullsub_149()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_150  (binary VA: 0x6ba5f8)
// Original: nullsub_150
// ----------------------------------------------------------------------------
void nullsub_150()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA600  (binary VA: 0x6ba600)
// Original: sub_6BA600
// ----------------------------------------------------------------------------
int sub_6BA600()
{
  return 15;
}

// ----------------------------------------------------------------------------
// Function: nullsub_151  (binary VA: 0x6ba618)
// Original: nullsub_151
// ----------------------------------------------------------------------------
void nullsub_151()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_152  (binary VA: 0x6ba628)
// Original: nullsub_152
// ----------------------------------------------------------------------------
void nullsub_152()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA630  (binary VA: 0x6ba630)
// Original: sub_6BA630
// ----------------------------------------------------------------------------
float * sub_6BA630(float *a1)
{
  float v2; // xmm0_4
  float v3; // xmm0_4

  a1[1] = a1[1] * 100.0;
  a1[2] = a1[2] * 100.0;
  a1[3] = 27.777779f * a1[3];
  a1[4] = a1[4] * 100.0;
  a1[6] = a1[6] * 100.0;
  a1[5] = a1[5] * 100.0;
  a1[7] = a1[7] * 100.0;
  v2 = 100.0 * a1[9];
  a1[8] = a1[8] * 100.0;
  a1[9] = v2;
  a1[16] = a1[16] * 0.017453292f;
  a1[17] = a1[17] * 0.017453292f;
  a1[19] = a1[19] * 0.017453292f;
  a1[20] = a1[20] * 0.017453292f;
  a1[18] = a1[18] * 0.017453292f;
  a1[21] = a1[21] * 0.017453292f;
  a1[22] = a1[22] * 0.017453292f;
  a1[23] = a1[23] * 0.017453292f;
  a1[24] = a1[24] * 0.017453292f;
  a1[25] = a1[25] * 0.017453292f;
  a1[26] = a1[26] * 0.017453292f;
  a1[27] = a1[27] * 0.017453292f;
  v3 = 0.017453292f * a1[31];
  a1[28] = a1[28] * 0.017453292f;
  a1[31] = v3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA790  (binary VA: 0x6ba790)
// Original: sub_6BA790
// ----------------------------------------------------------------------------
bool sub_6BA790(int a1)
{
  return G4_VCALL<int>(a1, 16) == 15;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA7B0  (binary VA: 0x6ba7b0)
// Original: sub_6BA7B0
// ----------------------------------------------------------------------------
int sub_6BA7B0()
{
  return 14;
}

// ----------------------------------------------------------------------------
// Function: nullsub_153  (binary VA: 0x6ba7c8)
// Original: nullsub_153
// ----------------------------------------------------------------------------
void nullsub_153()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_154  (binary VA: 0x6ba7d8)
// Original: nullsub_154
// ----------------------------------------------------------------------------
void nullsub_154()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA7E0  (binary VA: 0x6ba7e0)
// Original: sub_6BA7E0
// ----------------------------------------------------------------------------
float * sub_6BA7E0(float *a1)
{
  float v2; // xmm0_4

  a1[1] = a1[1] * 100.0;
  v2 = 100.0 * a1[3];
  a1[2] = a1[2] * 100.0;
  a1[3] = v2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA820  (binary VA: 0x6ba820)
// Original: sub_6BA820
// ----------------------------------------------------------------------------
bool sub_6BA820(int a1)
{
  return G4_VCALL<int>(a1, 16) == 14;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA840  (binary VA: 0x6ba840)
// Original: sub_6BA840
// ----------------------------------------------------------------------------
uint32_t * sub_6BA840(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA860  (binary VA: 0x6ba860)
// Original: sub_6BA860
// ----------------------------------------------------------------------------
uint32_t * sub_6BA860(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA880  (binary VA: 0x6ba880)
// Original: sub_6BA880
// ----------------------------------------------------------------------------
int sub_6BA880(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1[2];
  v5 = a1[1];
  a1[4] = 0;
  (*(void (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(v5 + 4 * v4) + 16))(
    *(uint32_t *)(v5 + 4 * v4),
    a1,
    a2,
    a3,
    a4);
  v6 = a1[1];
  a1[2] = a2;
  return (*(int (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(v6 + 4 * a2) + 12))(
           *(uint32_t *)(v6 + 4 * a2),
           a1,
           v4,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: sub_6BA910  (binary VA: 0x6ba910)
// Original: sub_6BA910
// ----------------------------------------------------------------------------
int sub_6BA910()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA920  (binary VA: 0x6ba920)
// Original: sub_6BA920
// ----------------------------------------------------------------------------
uint32_t * sub_6BA920(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: nullsub_155  (binary VA: 0x6ba948)
// Original: nullsub_155
// ----------------------------------------------------------------------------
void nullsub_155()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_156  (binary VA: 0x6ba958)
// Original: nullsub_156
// ----------------------------------------------------------------------------
void nullsub_156()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_157  (binary VA: 0x6ba968)
// Original: nullsub_157
// ----------------------------------------------------------------------------
void nullsub_157()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA970  (binary VA: 0x6ba970)
// Original: sub_6BA970
// ----------------------------------------------------------------------------
int sub_6BA970()
{
  return 25;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA980  (binary VA: 0x6ba980)
// Original: sub_6BA980
// ----------------------------------------------------------------------------
uint32_t * sub_6BA980(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA9A0  (binary VA: 0x6ba9a0)
// Original: sub_6BA9A0
// ----------------------------------------------------------------------------
int sub_6BA9A0(uint32_t *a1)
{
  return G4_VCALL<int>(a1, 20, a1[2]);
}

// ----------------------------------------------------------------------------
// Function: sub_6BA9C0  (binary VA: 0x6ba9c0)
// Original: sub_6BA9C0
// ----------------------------------------------------------------------------
int sub_6BA9C0(int a1, int a2)
{
  int result;

  result = 0;
  if ( (unsigned int)(a2 - 8) > 2 )
    return 2 - ((unsigned int)(a2 - 11) < 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BA9E0  (binary VA: 0x6ba9e0)
// Original: sub_6BA9E0
// ----------------------------------------------------------------------------
int sub_6BA9E0(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 32);
  if ( result != 0 )
    return (*(int (**)(uint32_t, uint32_t))(*(uint32_t *)result + 28))(*(uint32_t *)(a1 + 32), *(uint32_t *)(a2 + 8));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BAA10  (binary VA: 0x6baa10)
// Original: sub_6BAA10
// ----------------------------------------------------------------------------
int sub_6BAA10(uint32_t *a1)
{
  return sub_6BAA20((char *)a1 + *(uint32_t *)(*a1 - 28));
}

// ----------------------------------------------------------------------------
// Function: sub_6BAA20  (binary VA: 0x6baa20)
// Original: sub_6BAA20
// ----------------------------------------------------------------------------
int sub_6BAA20(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
    result = (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*(uint32_t *)(a1 + 8));
  *(uint32_t *)(a1 + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BAAC0  (binary VA: 0x6baa50)
// Original: sub_6BAAC0
// ----------------------------------------------------------------------------
int sub_6BAAC0(int a1, hkpEntity::Self *a2)
{
  return sub_6BAAD0((hkpUnaryAction::Self *)(a1 - 28), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_6BAAD0  (binary VA: 0x6baad0)
// Original: sub_6BAAD0
// ----------------------------------------------------------------------------
int sub_6BAAD0(hkpUnaryAction::Self *a1, hkpEntity::Self *a2)
{
  return (int)(uintptr_t)(hkpUnaryAction::entityRemovedCallback(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_6BAB00  (binary VA: 0x6bab00)
// Original: sub_6BAB00
// ----------------------------------------------------------------------------
void sub_6BAB00(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6BAB30  (binary VA: 0x6bab30)
// Original: sub_6BAB30
// ----------------------------------------------------------------------------
void sub_6BAB30(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6BAB60  (binary VA: 0x6bab60)
// Original: sub_6BAB60
// ----------------------------------------------------------------------------
void sub_6BAB60(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6BAB90  (binary VA: 0x6bab90)
// Original: sub_6BAB90
// ----------------------------------------------------------------------------
void sub_6BAB90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6BABC0  (binary VA: 0x6babc0)
// Original: sub_6BABC0
// ----------------------------------------------------------------------------
void sub_6BABC0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6BABF0  (binary VA: 0x6babf0)
// Original: sub_6BABF0
// ----------------------------------------------------------------------------
void sub_6BABF0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6BAC20  (binary VA: 0x6bac20)
// Original: sub_6BAC20
// ----------------------------------------------------------------------------
int sub_6BAC20(int a1)
{
  { sub_6BAC30((hkpUnaryAction::Self *)(a1 - 28)); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_6BAC30  (binary VA: 0x6bac30)
// Original: sub_6BAC30
// ----------------------------------------------------------------------------
void sub_6BAC30(hkpUnaryAction::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2057828);
  *((uint32_t *)a1 + 7) = (uint32_t)(uintptr_t)(&off_2054DE8);
  hkpUnaryAction::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6BAC70  (binary VA: 0x6bac70)
// Original: sub_6BAC70
// ----------------------------------------------------------------------------
int sub_6BAC70(int a1)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return sub_691380(*(uint32_t *)(a1 + 8));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BACA0  (binary VA: 0x6baca0)
// Original: sub_6BACA0
// ----------------------------------------------------------------------------
uint32_t * sub_6BACA0(uint32_t *a1, int a2, int a3)
{
  int v3;

  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 != 0 )
  {
    sub_691300(a1, v3, a3);
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BAD10  (binary VA: 0x6bad10)
// Original: sub_6BAD10
// ----------------------------------------------------------------------------
int sub_6BAD10(int a1, int a2, int a3)
{
  int v3;

  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 != 0 )
  {
    sub_691210((float *)a1, v3, a3);
  }
  else
  {
    *(uint32_t *)a1 = 0;
    *(uint32_t *)(a1 + 4) = 0;
    *(uint32_t *)(a1 + 8) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BAD80  (binary VA: 0x6bad80)
// Original: sub_6BAD80
// ----------------------------------------------------------------------------
int sub_6BAD80(int a1, int a2)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return sub_6911C0(*(uint32_t *)(a1 + 8), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BADC0  (binary VA: 0x6badc0)
// Original: sub_6BADC0
// ----------------------------------------------------------------------------
int * sub_6BADC0(int *a1, int a2)
{
  int *result;
  int v3;

  result = a1;
  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 != 0 )
  {
    sub_692850(a1, v3);
    return a1;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BAE20  (binary VA: 0x6bae20)
// Original: sub_6BAE20
// ----------------------------------------------------------------------------
int sub_6BAE20(uint32_t *a1)
{
  return ((sub_6BAE40((char *)a1 + *(uint32_t *)(*a1 - 12))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_6BAE30  (binary VA: 0x6bae30)
// Original: sub_6BAE30
// ----------------------------------------------------------------------------
int sub_6BAE30(int a1)
{
  return ((sub_6BAE40(a1 - 4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_6BAE40  (binary VA: 0x6bae40)
// Original: sub_6BAE40
// ----------------------------------------------------------------------------
void sub_6BAE40(int *a1)
{
  int v1;

  *a1 = (int)((uint32_t)(uintptr_t)&off_20582CC);
  a1[1] = (int)((uint32_t)(uintptr_t)&off_2058354);
  v1 = a1[2];
  a1[5] = (int)((uint32_t)(uintptr_t)&off_2058548);
  if ( v1 != 0 )
    G4_VCALL<void>(v1, 4);
  a1[2] = 0;
  sub_690AE0(a1 + 1, (int *)off_2058294);
  sub_6A0AF0(a1, (int *)&off_2058294[-4]);
  sub_6AC370((int)(uintptr_t)(a1 + 5));
}

// ----------------------------------------------------------------------------
// Function: sub_6BAED0  (binary VA: 0x6baed0)
// Original: sub_6BAED0
// ----------------------------------------------------------------------------
void sub_6BAED0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2057908);
  sub_6AC520((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_6BAF00  (binary VA: 0x6baf00)
// Original: sub_6BAF00
// ----------------------------------------------------------------------------
int sub_6BAF00(hkpAction::Self *a1)
{
  hkpWorld::Self *v1;
  int result;

  if ( *((uint32_t *)a1 + 2) != 0 )
  {
    v1 = *(hkpWorld::Self **)(*((uint32_t *)a1 + 6) + 8);
    hkpWorld::lock(v1);
    hkpWorld::removeAction(v1, a1);
    return hkpWorld::unlock(v1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BAF60  (binary VA: 0x6baf60)
// Original: sub_6BAF60
// ----------------------------------------------------------------------------
int sub_6BAF60(int a1, int a2, int a3, int a4)
{
  int result;

  result = *(uint32_t *)(a3 + 4);
  switch ( result )
  {
    case 11:
      return G4_VCALL<int>(a2, 8, 11, a3, a4);
    case 12:
      if ( *(uint8_t *)(a3 + 165) != 0 )
        return G4_VCALL<int>(a2, 8, 12, a3, a4);
      break;
    case 10:
      return G4_VCALL<int>(a2, 8, 10, a3, a4);
    default:
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB000  (binary VA: 0x6bb000)
// Original: sub_6BB000
// ----------------------------------------------------------------------------
int sub_6BB000(int a1, int a2, int a3, int a4)
{
  int result;

  result = *(uint32_t *)(a3 + 4);
  switch ( result )
  {
    case 11:
      if ( *(uint8_t *)(a3 + 164) != 0 )
        return G4_VCALL<int>(a2, 8, 11, a3, a4);
      break;
    case 13:
      return G4_VCALL<int>(a2, 8, 13, a3, a4);
    case 9:
      return G4_VCALL<int>(a2, 8, 9, a3, a4);
    default:
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB0A0  (binary VA: 0x6bb0a0)
// Original: sub_6BB0A0
// ----------------------------------------------------------------------------
int sub_6BB0A0(int a1, int a2, int a3, int a4)
{
  int result;

  result = *(uint32_t *)(a3 + 4);
  switch ( result )
  {
    case 12:
      if ( *(uint8_t *)(a3 + 164) == 0 )
        return G4_VCALL<int>(a2, 8, 12, a3, a4);
      break;
    case 13:
      return G4_VCALL<int>(a2, 8, 13, a3, a4);
    case 8:
      return G4_VCALL<int>(a2, 8, 8, a3, a4);
    default:
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB140  (binary VA: 0x6bb140)
// Original: sub_6BB140
// ----------------------------------------------------------------------------
int sub_6BB140(int a1, int a2, int a3, int a4)
{
  int result;

  result = *(uint32_t *)(a3 + 4);
  switch ( result )
  {
    case 14:
      return G4_VCALL<int>(a2, 8, 14, a3, a4);
    case 15:
      if ( *(uint8_t *)(a3 + 165) != 0 )
        return G4_VCALL<int>(a2, 8, 15, a3, a4);
      break;
    case 10:
      return G4_VCALL<int>(a2, 8, 10, a3, a4);
    default:
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB1E0  (binary VA: 0x6bb1e0)
// Original: sub_6BB1E0
// ----------------------------------------------------------------------------
int sub_6BB1E0(int a1, int a2, int a3, int a4)
{
  int result;

  result = *(uint32_t *)(a3 + 4);
  switch ( result )
  {
    case 14:
      if ( *(uint8_t *)(a3 + 164) != 0 )
        return G4_VCALL<int>(a2, 8, 14, a3, a4);
      break;
    case 16:
      return G4_VCALL<int>(a2, 8, 16, a3, a4);
    case 9:
      return G4_VCALL<int>(a2, 8, 9, a3, a4);
    default:
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB280  (binary VA: 0x6bb280)
// Original: sub_6BB280
// ----------------------------------------------------------------------------
int sub_6BB280(int a1, int a2, int a3, int a4)
{
  int result;

  result = *(uint32_t *)(a3 + 4);
  switch ( result )
  {
    case 15:
      if ( *(uint8_t *)(a3 + 164) == 0 )
        return G4_VCALL<int>(a2, 8, 15, a3, a4);
      break;
    case 16:
      return G4_VCALL<int>(a2, 8, 16, a3, a4);
    case 8:
      return G4_VCALL<int>(a2, 8, 8, a3, a4);
    default:
      break;
  }
  return result;
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: sub_6BB380  (binary VA: 0x6bb380)
// Original: sub_6BB380
// ----------------------------------------------------------------------------
int sub_6BB380(int a1, int a2)
{
  return (int)(uintptr_t)(sub_6BB390((hkpAction::Self *)(a1 - 28), a2));
}

// ----------------------------------------------------------------------------
// Function: sub_6BB390  (binary VA: 0x6bb390)
// Original: sub_6BB390
// ----------------------------------------------------------------------------
hkpAction::Self * sub_6BB390(hkpAction::Self *a1, int a2)
{
  hkpAction::Self *result;

  result = a1;
  if ( *((uint32_t *)a1 + 2) == 0 )
    return (hkpAction::Self *)hkpWorld::addAction(*(hkpWorld::Self **)(a2 + 8), a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB3E0  (binary VA: 0x6bb3e0)
// Original: sub_6BB3E0
// ----------------------------------------------------------------------------
int sub_6BB3E0(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = *(uint32_t *)(a3 + 4);
  switch ( v4 )
  {
    case 6:
      return G4_VCALL<int>(a2, 8, 6, a3, a4);
    case 7:
      return G4_VCALL<int>(a2, 8, 7, a3, a4);
    case 5:
      return G4_VCALL<int>(a2, 8, 5, a3, a4);
    case 3:
      return G4_VCALL<int>(a2, 8, 3, a3, a4);
    case 1:
      return G4_VCALL<int>(a2, 8, 1, a3, a4);
    default:
      break;
  }
  result = *(uint32_t *)(a3 + 152);
  if ( result != 0 )
    return G4_VCALL<int>(a2, 8, 0, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB4F0  (binary VA: 0x6bb4f0)
// Original: sub_6BB4F0
// ----------------------------------------------------------------------------
int sub_6BB4F0(int a1, int a2, int a3, int a4)
{
  int result;

  result = *(uint32_t *)(a3 + 4);
  switch ( result )
  {
    case 6:
      return G4_VCALL<int>(a2, 8, 6, a3, a4);
    case 7:
      return G4_VCALL<int>(a2, 8, 7, a3, a4);
    case 4:
      return G4_VCALL<int>(a2, 8, 4, a3, a4);
    case 3:
      return G4_VCALL<int>(a2, 8, 3, a3, a4);
    case 1:
      return G4_VCALL<int>(a2, 8, 1, a3, a4);
    default:
      break;
  }
  if ( *(uint32_t *)(a3 + 152) == 2 )
    return G4_VCALL<int>(a2, 8, 0, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB600  (binary VA: 0x6bb600)
// Original: sub_6BB600
// ----------------------------------------------------------------------------
int sub_6BB600(uint32_t *a1, int a2)
{
  return sub_6BB610((char *)a1 + *(uint32_t *)(*a1 - 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_6BB610  (binary VA: 0x6bb610)
// Original: sub_6BB610
// ----------------------------------------------------------------------------
int sub_6BB610(uint32_t *a1, int a2)
{
  int v2;
  char v3;
  int v4;
  int v5;
  hkString::Self *v6;
  char v7;
  int v8;

  v2 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 28);
  v3 = sub_683390((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), a2);
  v4 = 0;
  if ( v3 != 0 )
  {
    v5 = a1[1];
    if ( v5 == 0 )
    {
      v5 = G4_VCALL<int>(v2, 160, *(uint32_t *)(a2 + 12), 0, 0, 1);
      a1[1] = v5;
      if ( v5 == 0 )
      {
        v8 = 0;
        goto LABEL_7;
      }
    }
    *(uint32_t *)(v5 + 12) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    v6 = *(hkString::Self **)(a2 + 8);
    if ( *((uint32_t *)v6 - 3) != 0 )
      hkStringPtr::opAssign((hkStringPtr::Self *)(a1[1] + 120), v6);
    v7 = sub_6833D0((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12)), a2);
    v4 = 0;
    if ( v7 != 0 )
    {
      v8 = a1[1];
LABEL_7:
      LOBYTE(v4) = v8 != 0;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB700  (binary VA: 0x6bb700)
// Original: sub_6BB700
// ----------------------------------------------------------------------------
int sub_6BB700(hkpAction::Self *a1)
{
  int result;
  hkpWorld::Self *v2;

  result = *((uint32_t *)a1 + 6);
  if ( result != 0 )
  {
    v2 = *(hkpWorld::Self **)(result + 8);
    if ( v2 != nullptr && *((uint32_t *)a1 + 2) == 0 )
    {
      hkpWorld::lock(*(hkpWorld::Self **)(result + 8));
      hkpWorld::addAction(v2, a1);
      return hkpWorld::unlock(v2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB770  (binary VA: 0x6bb770)
// Original: sub_6BB770
// ----------------------------------------------------------------------------
hkpEntity::Self * sub_6BB770(int a1)
{
  hkpEntity::Self *result;
  uint8_t v2[13];

  result = *(hkpEntity::Self **)(*(uint32_t *)(a1 + 24) + 8);
  if ( result != nullptr )
    return (hkpEntity::Self *)hkpWorld::removeEntity((hkpWorld::Self *)v2, result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB7B0  (binary VA: 0x6bb7b0)
// Original: sub_6BB7B0
// ----------------------------------------------------------------------------
hkpEntity::Self * sub_6BB7B0(int a1, hkpWorld::Self *a2)
{
  hkpEntity::Self *result;

  result = *(hkpEntity::Self **)(a1 + 24);
  if ( *((uint32_t *)result + 2) == 0 )
    return (hkpEntity::Self *)hkpWorld::addEntity(a2, result, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB7F0  (binary VA: 0x6bb7f0)
// Original: sub_6BB7F0
// ----------------------------------------------------------------------------
int sub_6BB7F0(uint32_t *a1)
{
  int v1;
  int v2;

  v1 = 0;
  if ( a1[1] <= 0x18u )
  {
    v2 = a1[33];
    if ( v2 == 0 || (*(uint8_t (**)(uint32_t))(*(uint32_t *)v2 + 12))(a1[33]) != 0 )
    {
      v1 = 1;
      if ( a1[34] != 0 )
        return sub_663A80();
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB860  (binary VA: 0x6bb860)
// Original: sub_6BB860
// ----------------------------------------------------------------------------
int sub_6BB860(int a1, int a2, int a3, float *a4)
{
  int result;
  int v5;
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm0_4

  result = a3;
  v5 = *(uint32_t *)(a3 + 4);
  switch ( v5 )
  {
    case 2:
      return G4_VCALL<int>(a2, 8, 2, a3, a4);
    case 6:
      return G4_VCALL<int>(a2, 8, 6, a3, a4);
    case 7:
      return G4_VCALL<int>(a2, 8, 7, a3, a4);
    case 1:
      return G4_VCALL<int>(a2, 8, 1, a3, a4);
    default:
      break;
  }
  if ( *(uint32_t *)(a3 + 152) == 0 )
  {
    if ( *(uint8_t *)(a1 + 20) != 0 )
    {
      v6 = *(float *)(a3 + 200);
      v7 = *(float *)(a3 + 204);
      v8 = *(float *)(a3 + 208);
      v9 = (float)((float)(*(float *)(a3 + 12) * v7) + (float)(*(float *)(a3 + 8) * v6))
         + (float)(*(float *)(a3 + 16) * v8);
      a4[1] = a4[1] - (float)(v9 * v6);
      a4[2] = a4[2] - (float)(v7 * v9);
      a4[3] = a4[3] - (float)(v9 * v8);
    }
    return G4_VCALL<int>(a2, 8, 3, a3, a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BB9D0  (binary VA: 0x6bb9d0)
// Original: sub_6BB9D0
// ----------------------------------------------------------------------------
void sub_6BB9D0(int a1, int a2, int a3, int a4)
{
  float *v4;
  int v5;

  v4 = *(float **)(a3 + 132);
  if ( v4 != nullptr && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v4 + 12))(*(uint32_t *)(a3 + 132)) != 0 )
  {
    v5 = *(uint32_t *)(a3 + 4);
    if ( v5 == 6 )
    {
      G4_VCALL<void>(a2, 8, 6, a3, a4);
    }
    else if ( v5 == 7 )
    {
      G4_VCALL<void>(a2, 8, 7, a3, a4);
    }
    else if ( *(uint32_t *)(a3 + 152) == 2
           && (float)((float)((float)(0.01f * v4[1]) + *(float *)(a3 + 44)) - *(float *)(a3 + 220)) >= 0.1f )
    {
      G4_VCALL<void>(a2, 8, 0, a3, a4);
    }
    else if ( *(uint8_t *)(a3 + 129) == 0 )
    {
      G4_VCALL<void>(a2, 8, 3, a3, a4);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_6BBB10  (binary VA: 0x6bbb10)
// Original: sub_6BBB10
// ----------------------------------------------------------------------------
int sub_6BBB10(uint32_t *a1, int a2)
{
  return sub_6BBB20((char *)a1 + *(uint32_t *)(*a1 - 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_6BBB20  (binary VA: 0x6bbb20)
// Original: sub_6BBB20
// ----------------------------------------------------------------------------
int sub_6BBB20(long double a1, uint32_t *a2, int a3)
{
  int v3;
  int address;
  uint32_t *v6;
  int v7;

  v3 = 0;
  if ( a2[2] == 0
    && (**(int (***)(int))a3)(a3) == 8
    && (uint8_t)sub_683390((int)(uintptr_t)(a2) + *(uint32_t *)(*a2 - 12), a3) != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     224);
    sub_690B00((int)(uintptr_t)(v6));
    a2[2] = (uint32_t)(uintptr_t)(v6);
    a2[3] = *(uint32_t *)(a3 + 1984);
    a2[4] = *(uint32_t *)(a3 + 1988);
    if ( (uint8_t)sub_692CB0(a1, v6, a3, a2) != 0 )
    {
      return sub_6833D0((uint32_t *)((char *)a2 + *(uint32_t *)(*a2 - 12)), a3);
    }
    else
    {
      v7 = a2[2];
      if ( v7 != 0 )
        (*(void (**)(uint32_t))(*(uint32_t *)v7 + 4))(a2[2]);
      a2[2] = 0;
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_6BBC20  (binary VA: 0x6bbc20)
// Original: sub_6BBC20
// ----------------------------------------------------------------------------
void sub_6BBC20(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2057908);
  sub_6AC520((int)(uintptr_t)(a1));
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6BBC60  (binary VA: 0x6bbc60)
// Original: sub_6BBC60
// ----------------------------------------------------------------------------
int sub_6BBC60(int a1)
{
  return sub_6BBC70((hkpUnaryAction::Self *)(a1 - 28));
}

// ----------------------------------------------------------------------------
// Function: sub_6BBC70  (binary VA: 0x6bbc70)
// Original: sub_6BBC70
// ----------------------------------------------------------------------------
int sub_6BBC70(hkpUnaryAction::Self *a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2057828);
  *((uint32_t *)a1 + 7) = (uint32_t)(uintptr_t)(&off_2054DE8);
  hkpUnaryAction::Destroy(a1);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 36;
  if ( *((uint16_t *)a1 + 3) != 0xFFFF )
    v2 = *((uint16_t *)a1 + 3);
  return G4_VCALL<int>(v1, 12, a1, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_6BBCF0  (binary VA: 0x6bbcf0)
// Original: sub_6BBCF0
// ----------------------------------------------------------------------------
int sub_6BBCF0(int a1)
{
  if ( (uint8_t)sub_6D5970(a1 + 140) != 0 && (unsigned int)(*(uint32_t *)(a1 + 376) - 11) <= 2 )
    return sub_6BB7F0((uint32_t *)(a1 + 372));
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6BBD60  (binary VA: 0x6bbd60)
// Original: sub_6BBD60
// ----------------------------------------------------------------------------
hkpUnaryAction::Self * sub_6BBD60(int a1, hkpEntity::Self ***a2)
{
  hkpEntity::Self *v2;
  int address;
  hkpUnaryAction::Self *v4;
  int v5;

  v2 = **a2;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (hkpUnaryAction::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           36);
  v5 = *(uint32_t *)(a1 + 32);
  hkpUnaryAction::Construct(v4, v2, 0);
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_2057828);
  *((uint32_t *)v4 + 7) = ((uint32_t)(uintptr_t)&off_205786C);
  *((uint32_t *)v4 + 8) = v5;
  if ( v2 != nullptr )
    hkpEntity::addEntityListener(v2, (char *)v4 + 28);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_6BBE10  (binary VA: 0x6bbe10)
// Original: sub_6BBE10
// ----------------------------------------------------------------------------
int sub_6BBE10(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  int v4;
  int v5;

  a3[4] = a2[5];
  a3[5] = a2[6];
  a3[6] = a2[7];
  a3[1] = a2[2];
  a3[2] = a2[3];
  a3[3] = a2[4];
  result = G4_VCALL<int>(a2, 8);
  if ( (uint8_t)result != 0 )
  {
    (*(void (**)(uint32_t, uint32_t *, uint32_t *, uint32_t *))(**(uint32_t **)(a1[1] + 4 * a1[2]) + 24))(
      *(uint32_t *)(a1[1] + 4 * a1[2]),
      a1,
      a2,
      a3);
    v4 = a1[2];
    if ( v4 == a1[3] )
    {
      v5 = *(uint32_t *)(a1[1] + 4 * v4);
      G4_VCALL<void>(v5, 20, a1, a2, a3);
      v4 = a1[2];
    }
    a1[3] = v4;
    ++a1[4];
    return G4_VCALL<int>(a3, 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BBED0  (binary VA: 0x6bbed0)
// Original: sub_6BBED0
// ----------------------------------------------------------------------------
int sub_6BBED0(uint32_t *a1)
{
  return sub_6BBEF0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_6BBEE0  (binary VA: 0x6bbee0)
// Original: sub_6BBEE0
// ----------------------------------------------------------------------------
int sub_6BBEE0(int a1)
{
  return sub_6BBEF0(a1 - 4);
}

// ----------------------------------------------------------------------------
// Function: sub_6BBEF0  (binary VA: 0x6bbef0)
// Original: sub_6BBEF0
// ----------------------------------------------------------------------------
int sub_6BBEF0(int *a1)
{
  int v1;
  int address;

  *a1 = (int)((uint32_t)(uintptr_t)&off_20582CC);
  a1[1] = (int)((uint32_t)(uintptr_t)&off_2058354);
  v1 = a1[2];
  a1[5] = (int)((uint32_t)(uintptr_t)&off_2058548);
  if ( v1 != 0 )
    G4_VCALL<void>(v1, 4);
  a1[2] = 0;
  sub_690AE0(a1 + 1, (int *)off_2058294);
  sub_6A0AF0(a1, (int *)&off_2058294[-4]);
  sub_6AC370((int)(uintptr_t)(a1 + 5));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a1,
           100);
}

// ----------------------------------------------------------------------------
// Function: sub_6BBFB0  (binary VA: 0x6bbfb0)
// Original: sub_6BBFB0
// ----------------------------------------------------------------------------
int sub_6BBFB0(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1[2];
  v5 = a1[1];
  a1[4] = 0;
  (*(void (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(v5 + 4 * v4) + 16))(
    *(uint32_t *)(v5 + 4 * v4),
    a1,
    a2,
    a3,
    a4);
  v6 = a1[1];
  a1[2] = a2;
  return (*(int (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(v6 + 4 * a2) + 12))(
           *(uint32_t *)(v6 + 4 * a2),
           a1,
           v4,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: sub_6BC040  (binary VA: 0x6bc040)
// Original: sub_6BC040
// ----------------------------------------------------------------------------
int sub_6BC040(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1[2];
  v5 = a1[1];
  a1[4] = 0;
  (*(void (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(v5 + 4 * v4) + 16))(
    *(uint32_t *)(v5 + 4 * v4),
    a1,
    a2,
    a3,
    a4);
  v6 = a1[1];
  a1[2] = a2;
  return (*(int (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(v6 + 4 * a2) + 12))(
           *(uint32_t *)(v6 + 4 * a2),
           a1,
           v4,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: sub_6BC0D0  (binary VA: 0x6bc0d0)
// Original: sub_6BC0D0
// ----------------------------------------------------------------------------
int sub_6BC0D0(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1[2];
  v5 = a1[1];
  a1[4] = 0;
  (*(void (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(v5 + 4 * v4) + 16))(
    *(uint32_t *)(v5 + 4 * v4),
    a1,
    a2,
    a3,
    a4);
  v6 = a1[1];
  a1[2] = a2;
  return (*(int (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(v6 + 4 * a2) + 12))(
           *(uint32_t *)(v6 + 4 * a2),
           a1,
           v4,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: sub_6BC160  (binary VA: 0x6bc160)
// Original: sub_6BC160
// ----------------------------------------------------------------------------
int sub_6BC160(float *a1, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int64_t a30, float a31, float a32, float a33, int a34, float a35, float a36, float a37, int a38, float a39, float a40, float a41, float a42, float a43, float a44, float a45, float a46)
{
  int result;
  int v47;
  int v48;
  const hkVector4f::Self *v49;
  int v50;
  float v51; // xmm1_4
  float v52; // xmm0_4
  float v53; // xmm2_4
  float v54; // xmm3_4
  __m128i v55;
  float v56; // xmm2_4
  __m128i v57;
  int v58;
  int v59;
  float v60; // xmm4_4
  __m128 v61;
  float v62; // xmm3_4
  float v63; // xmm6_4
  float v64; // xmm4_4
  __m128 v65;
  __m128 v66;
  __m128 v67;
  float v68; // xmm7_4
  float v69; // xmm3_4
  __m128 v70;
  __m128 v71;
  float v72; // xmm5_4
  __m128 v73;
  __m128 v74;
  __m128 v75;
  float *v76;
  float v77; // xmm1_4
  float v78; // xmm0_4
  float v79; // xmm5_4
  float v80; // xmm4_4
  float v81; // xmm3_4
  float v82; // xmm1_4
  int v83;
  hkpEntity::Self *v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  unsigned int retaddr;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;

  result = G4_VCALL<int>(a1, 108, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135);
  if ( (uint8_t)result == 0 )
  {
    v47 = *(uint32_t *)a1;
    a33 = 1.0;
    a31 = 0.0;
    a32 = 0.0;
    a34 = 0;
    *(float *)&retaddr = 0.0;
    v140 = 1.0 / a2;
    v48 = (*(int (**)(float *))(v47 + 104))(a1);
    hkVector4f::setRotatedDir((hkVector4f::Self *)&a35, (const hkQuaternionf::Self *)(v48 + 352), (const hkVector4f::Self *)&a31);
    v49 = (const hkVector4f::Self *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 2) + 24) + 28) + 80);
    v50 = G4_VCALL<int>(a1, 104);
    hkVector4f::setRotatedDir((hkVector4f::Self *)&a39, (const hkQuaternionf::Self *)(v50 + 352), v49);
    v143 = a39;
    v144 = a40;
    v51 = 0.0;
    v52 = a41;
    v53 = -(float)((float)((float)(a40 * a32) + (float)(a39 * a31)) + (float)(a41 * a33));
    v54 = (float)(a39 * v53) + a31;
g4_m128_raw(v55) = LODWORD(a40);
    *(float *)g4_m128_ptr<int32_t>(v55) = (float)(a40 * v53) + a32;
    v56 = (float)(v53 * a41) + a33;
    v57 = v55;
    *(float *)g4_m128_ptr<int32_t>(v57) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v55) * *(float *)g4_m128_ptr<int32_t>(v55)) + (float)(v54 * v54))
                            + (float)(v56 * v56);
    if ( *(float *)g4_m128_ptr<int32_t>(v57) <= 0.0 )
    {
      v64 = *(float *)&retaddr;
      v68 = *(float *)&retaddr;
      v141 = a36;
g4_m128_raw(v67) = 0x7FFFFFFFu;
g4_m128_raw(v65) = LODWORD(a35);
g4_m128_raw(v61) = LODWORD(a37);
      v142 = *(float *)&retaddr;
      a30 = retaddr | 0x3FC90FDB00000000LL;
    }
    else
    {
      v58 = _mm_cvtsi128_si32(v57) >> 1;
      v59 = (_mm_cvtsi128_si32(v57) + 2139095040) >> 31;
      *(float *)&a30 = COERCE_FLOAT(v59 & (1597463174 - v58))
                     * (float)(1.5
                             - (float)((float)(COERCE_FLOAT(v59 & (1597463174 - v58))
                                             * COERCE_FLOAT(v59 & (1597463174 - v58)))
                                     * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v57))));
      v60 = (float)(1.5
                  - (float)((float)((float)(*(float *)&a30
                                          * (float)(1.5
                                                  - (float)((float)(*(float *)&a30 * *(float *)&a30)
                                                          * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v57)))))
                                  * (float)(*(float *)&a30
                                          * (float)(1.5
                                                  - (float)((float)(*(float *)&a30 * *(float *)&a30)
                                                          * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v57))))))
                          * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v57))))
          * (float)(*(float *)&a30
                  * (float)(1.5
                          - (float)((float)(*(float *)&a30 * *(float *)&a30) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v57)))));
g4_m128_raw(v61) = LODWORD(a37);
      v62 = v54 * v60;
      v63 = *(float *)g4_m128_ptr<int32_t>(v55) * v60;
      v64 = v60 * v56;
      *(float *)&a30 = v62;
      v142 = v63;
      v141 = a36;
g4_m128_raw(v65) = LODWORD(a35);
g4_m128_lane<float>(v66, 0) = (float)((float)(v142 * a36) + (float)(v62 * a35)) + (float)(v64 * a37);
g4_m128_raw(v67) = 0x7FFFFFFFu;
      if ( fabs(g4_m128_lane<float>(v66, 0)) < 1.0 )
      {
        v139 = a41;
        v137 = a37;
        v138 = a35;
        *((float *)&a30 + 1) = acosf(g4_m128_lane<float>(v66, 0));
g4_m128_raw(v65) = LODWORD(v138);
g4_m128_raw(v61) = LODWORD(v137);
        v51 = *(float *)&retaddr;
        v52 = v139;
      }
      else
      {
        HIDWORD(a30) =g4_m128_lane<uint32_t>(_mm_andnot_ps(_mm_cmplt_ss(G4_BITCAST<__m128>(retaddr), v66), g4_m128_u32(0x40490FDBu)), 0);
      }
      v68 = v142;
    }
    v69 = (float)(v141 * v64) - (float)(v68 *g4_m128_lane<float>(v61, 0));
g4_m128_lane<float>(v61, 0) = (float)(g4_m128_lane<float>(v61, 0) * *(float *)&a30) - (float)(v64 *g4_m128_lane<float>(v65, 0));
g4_m128_lane<float>(v65, 0) = (float)(g4_m128_lane<float>(v65, 0) * v142) - (float)(*(float *)&a30 * v141);
    v70 = _mm_and_ps(v61, v67);
    if (g4_m128_lane<float>(v70, 0) < COERCE_FLOAT(LODWORD(v69) &g4_m128_lane<int32_t>(v67, 0)) )
    {
g4_m128_lane<float>(v61, 0) = v69;
g4_m128_raw(v70) = (unsigned int)(LODWORD(v69) &g4_m128_lane<int32_t>(v67, 0));
    }
    LODWORD(a30) =g4_m128_lane<int32_t>(v65, 0) &g4_m128_lane<int32_t>(v67, 0);
    v71 = _mm_cmpgt_ss(v70, *(__m128 *)&a30);
    LODWORD(v72) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v71, v65), 0) |g4_m128_lane<int32_t>(v61, 0) &g4_m128_lane<int32_t>(v71, 0);
    v73 = _mm_and_ps(g4_m128_from<__m128>(LODWORD(v143)), v67);
    v74 = _mm_and_ps(g4_m128_from<__m128>(LODWORD(v144)), v67);
g4_m128_lane<int32_t>(v67, 0) &= LODWORD(v52);
    if (g4_m128_lane<float>(v74, 0) <g4_m128_lane<float>(v73, 0) )
    {
      v144 = v143;
      v74 = v73;
    }
    v75 = _mm_cmple_ss(v74, v67);
    if ( v51 > COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v75, g4_m128_from<__m128>(LODWORD(v144))), 0) | LODWORD(v52) &g4_m128_lane<int32_t>(v75, 0)) != v51 > v72 )
      *((float *)&a30 + 1) = -*((float *)&a30 + 1);
    v76 = (float *)G4_VCALL<int>(a1, 104);
    v77 = v140 * a1[3];
    v78 = (float)(v140 * a1[4]) * *((float *)&a30 + 1);
    v79 = v76[113] * v77;
    v80 = v76[114] * v77;
    v81 = v76[115] * v77;
    v82 = v77 * v76[112];
    v83 = *(uint32_t *)a1;
    a44 = (float)(a40 * v78) - v79;
    a45 = (float)(a41 * v78) - v80;
    a46 = (float)(a42 * v78) - v81;
    a43 = (float)(v78 * a39) - v82;
    v84 = (hkpEntity::Self *)(*(int (**)(float *))(v83 + 104))(a1);
    hkpEntity::activate(v84);
    return (*(int (**)(uint32_t *, float *))(*((uint32_t *)v84 + 56) + 104))((uint32_t *)v84 + 56, &a43);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BC710  (binary VA: 0x6bc710)
// Original: sub_6BC710
// ----------------------------------------------------------------------------
int sub_6BC710(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  int v4;
  int v5;

  a3[4] = a2[5];
  a3[5] = a2[6];
  a3[6] = a2[7];
  a3[1] = a2[2];
  a3[2] = a2[3];
  a3[3] = a2[4];
  result = G4_VCALL<int>(a2, 8);
  if ( (uint8_t)result != 0 )
  {
    (*(void (**)(uint32_t, uint32_t *, uint32_t *, uint32_t *))(**(uint32_t **)(a1[1] + 4 * a1[2]) + 24))(
      *(uint32_t *)(a1[1] + 4 * a1[2]),
      a1,
      a2,
      a3);
    v4 = a1[2];
    if ( v4 == a1[3] )
    {
      v5 = *(uint32_t *)(a1[1] + 4 * v4);
      G4_VCALL<void>(v5, 20, a1, a2, a3);
      v4 = a1[2];
    }
    a1[3] = v4;
    ++a1[4];
    return G4_VCALL<int>(a3, 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BC7D0  (binary VA: 0x6bc7d0)
// Original: sub_6BC7D0
// ----------------------------------------------------------------------------
int sub_6BC7D0(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  int v4;
  int v5;

  a3[4] = a2[5];
  a3[5] = a2[6];
  a3[6] = a2[7];
  a3[1] = a2[2];
  a3[2] = a2[3];
  a3[3] = a2[4];
  result = G4_VCALL<int>(a2, 8);
  if ( (uint8_t)result != 0 )
  {
    (*(void (**)(uint32_t, uint32_t *, uint32_t *, uint32_t *))(**(uint32_t **)(a1[1] + 4 * a1[2]) + 24))(
      *(uint32_t *)(a1[1] + 4 * a1[2]),
      a1,
      a2,
      a3);
    v4 = a1[2];
    if ( v4 == a1[3] )
    {
      v5 = *(uint32_t *)(a1[1] + 4 * v4);
      G4_VCALL<void>(v5, 20, a1, a2, a3);
      v4 = a1[2];
    }
    a1[3] = v4;
    ++a1[4];
    return G4_VCALL<int>(a3, 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BC890  (binary VA: 0x6bc890)
// Original: sub_6BC890
// ----------------------------------------------------------------------------
int sub_6BC890(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  int v4;
  int v5;

  a3[4] = a2[5];
  a3[5] = a2[6];
  a3[6] = a2[7];
  a3[1] = a2[2];
  a3[2] = a2[3];
  a3[3] = a2[4];
  result = G4_VCALL<int>(a2, 8);
  if ( (uint8_t)result != 0 )
  {
    (*(void (**)(uint32_t, uint32_t *, uint32_t *, uint32_t *))(**(uint32_t **)(a1[1] + 4 * a1[2]) + 24))(
      *(uint32_t *)(a1[1] + 4 * a1[2]),
      a1,
      a2,
      a3);
    v4 = a1[2];
    if ( v4 == a1[3] )
    {
      v5 = *(uint32_t *)(a1[1] + 4 * v4);
      G4_VCALL<void>(v5, 20, a1, a2, a3);
      v4 = a1[2];
    }
    a1[3] = v4;
    ++a1[4];
    return G4_VCALL<int>(a3, 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BC950  (binary VA: 0x6bc950)
// Original: sub_6BC950
// ----------------------------------------------------------------------------
int sub_6BC950(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  int v4;
  int v5;

  a3[4] = a2[5];
  a3[5] = a2[6];
  a3[6] = a2[7];
  a3[1] = a2[2];
  a3[2] = a2[3];
  a3[3] = a2[4];
  result = G4_VCALL<int>(a2, 8);
  if ( (uint8_t)result != 0 )
  {
    (*(void (**)(uint32_t, uint32_t *, uint32_t *, uint32_t *))(**(uint32_t **)(a1[1] + 4 * a1[2]) + 24))(
      *(uint32_t *)(a1[1] + 4 * a1[2]),
      a1,
      a2,
      a3);
    v4 = a1[2];
    if ( v4 == a1[3] )
    {
      v5 = *(uint32_t *)(a1[1] + 4 * v4);
      G4_VCALL<void>(v5, 20, a1, a2, a3);
      v4 = a1[2];
    }
    a1[3] = v4;
    ++a1[4];
    return G4_VCALL<int>(a3, 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BCA10  (binary VA: 0x6bca10)
// Original: sub_6BCA10
// ----------------------------------------------------------------------------
int sub_6BCA10(int a1, float a2, uint32_t *a3, int a4, int a5)
{
  float v5; // xmm1_4
  int v6;
  __m128i v7;
  int v8;
  float v9; // xmm3_4
  float v10; // xmm2_4
  int result;
  int v12;
  char v13;
  float *v14;
  float *v15;
  float v16; // xmm2_4
  float v17; // xmm0_4
  bool v18;
  float v19; // xmm0_4
  int v20;
  int v21;
  float v22;
  bool v23;
  char v24;
  int v25;
  int v26;
  int v27;

  v5 = *(float *)(a4 + 4);
  v22 = 0.0;
  v6 = a3[6];
g4_m128_raw(v7) = *(unsigned int *)(v6 + 436);
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7))
                                 + (float)(*(float *)(v6 + 432) * *(float *)(v6 + 432)))
                         + (float)(*(float *)(v6 + 440) * *(float *)(v6 + 440));
  if ( *(float *)g4_m128_ptr<int32_t>(v7) > 0.0 )
  {
    v8 = ((_mm_cvtsi128_si32(v7) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v7) >> 1));
    v9 = (float)(1.5 - (float)((float)(*(float *)&v8 * *(float *)&v8) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7))))
       * *(float *)&v8;
    v10 = (float)(1.5 - (float)((float)(v9 * v9) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)))) * v9;
    v22 = *(float *)g4_m128_ptr<int32_t>(v7)
        * (float)(v10 * (float)(1.5 - (float)((float)(v10 * v10) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)))));
  }
  result = a3[7];
  if ( *(char *)(result + 32) <= 0 )
    goto LABEL_19;
  v25 = 0;
  v23 = *(uint8_t *)(a4 + 12) != 0;
  v26 = 0;
  v27 = 0;
  v24 = 0;
  v21 = 0;
  do
  {
    *(uint8_t *)(*(uint32_t *)(a5 + 140) + v21) = v23 && *(uint8_t *)(*(uint32_t *)(a1 + 8) + v27 + 8) != 0;
    v13 = 1;
    v14 = (float *)(*(uint32_t *)(a1 + 8) + v27);
    if ( v5 <= v14[1] )
      v13 = v24;
    v24 = v13;
    v15 = (float *)(v25 + *(uint32_t *)(a3[7] + 140));
    v16 = *v14 * v5;
    v17 = (float)((float)(v15[1] * *v15) * (float)-(float)(*v15 * *(float *)(a3[19] + v26 + 192))) * (float)(1.0 / a2);
    if ( fabs(v17) > v16 )
    {
      v18 = v17 > 0.0;
      v17 = *v14 * v5;
      if ( !v18 )
        v17 = -v16;
    }
    *(float *)(*(uint32_t *)a5 + 4 * v21) = v17;
    v27 += 12;
    v26 += 224;
    v25 += 40;
    ++v21;
    result = *(uint8_t *)(a3[7] + 32);
    v12 = (char)result;
  }
  while ( (char)result > v21 );
  if ( v24 != 0 )
  {
    v19 = *(float *)(a5 + 184);
    if ( v19 >= *(float *)(a1 + 20) || v22 < *(float *)(a1 + 24) )
    {
      if ( (char)result > 0 )
      {
        result = 0;
        v20 = 0;
        do
        {
          if ( v5 > *(float *)(*(uint32_t *)(a1 + 8) + v20 + 4) )
          {
            *(uint8_t *)(*(uint32_t *)(a5 + 140) + result) = 1;
            v12 = *(char *)(a3[7] + 32);
          }
          ++result;
          v20 += 12;
        }
        while ( v12 > result );
      }
    }
    else
    {
      *(float *)(a5 + 184) = v19 + a2;
    }
  }
  else
  {
LABEL_19:
    *(uint32_t *)(a5 + 184) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BCCF0  (binary VA: 0x6bccf0)
// Original: sub_6BCCF0
// ----------------------------------------------------------------------------
int sub_6BCCF0(uint32_t *a1)
{
  int v1;
  int v3;

  v1 = 0;
  if ( (unsigned int)(a1[1] - 14) <= 2 )
  {
    v3 = a1[33];
    if ( v3 == 0 || (*(uint8_t (**)(uint32_t))(*(uint32_t *)v3 + 12))(a1[33]) != 0 )
    {
      v1 = 1;
      if ( a1[34] != 0 )
        return sub_663A80();
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BCD60  (binary VA: 0x6bcd60)
// Original: sub_6BCD60
// ----------------------------------------------------------------------------
int sub_6BCD60(uint32_t *a1)
{
  int v1;
  int v3;

  v1 = 0;
  if ( (unsigned int)(a1[1] - 11) <= 2 )
  {
    v3 = a1[33];
    if ( v3 == 0 || (*(uint8_t (**)(uint32_t))(*(uint32_t *)v3 + 12))(a1[33]) != 0 )
    {
      v1 = 1;
      if ( a1[34] != 0 )
        return sub_663A80();
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_6BCDD0  (binary VA: 0x6bcdd0)
// Original: sub_6BCDD0
// ----------------------------------------------------------------------------
__m128 sub_6BCDD0(int a1)
{
  int v1;
  __m128 v2;
  __m128 result;
  if ( *(uint32_t *)(a1 + 4) <= 7u )
  {
    if ( *(uint32_t *)(a1 + 152) == 0
      || (g4_m128_raw(v2) = *(unsigned int *)(a1 + 156),
g4_m128_lane<float>(v2, 0) = (float)((float)((float)(g4_m128_lane<float>(v2, 0) *g4_m128_lane<float>(v2, 0))
                                         + (float)(*(float *)(a1 + 160) * *(float *)(a1 + 160)))
                                 + -1.0)
                         + (float)(*(float *)(a1 + 164) * *(float *)(a1 + 164)),
          result = _mm_and_ps(v2, g4_m128_u32(0x7FFFFFFFu)),
g4_m128_lane<float>(result, 0) < 0.000001f) )
    {
      v1 = *(uint32_t *)(a1 + 132);
      if ( (v1 == 0 || (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 12))(*(uint32_t *)(a1 + 132)) != 0)
        && *(uint32_t *)(a1 + 136) != 0 )
      {
        sub_663A80();
      }
    }
  }
  return result;
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: sub_6BCF10  (binary VA: 0x6bcf10)
// Original: sub_6BCF10
// ----------------------------------------------------------------------------
int sub_6BCF10(uint32_t *a1)
{
  return sub_6BCF20((char *)a1 + *(uint32_t *)(*a1 - 28));
}

// ----------------------------------------------------------------------------
// Function: sub_6BCF20  (binary VA: 0x6bcf20)
// Original: sub_6BCF20
// ----------------------------------------------------------------------------
int sub_6BCF20(uint32_t *a1)
{
  int result;
  int v2;
  int32_t v3;
  int v4;
  int32_t v5;
  int32_t v6; // ett

  if ( a1[1] != 0 )
  {
    G4_VCALL<void>(a1, 24, 0);
    result = a1[1];
    *(uint32_t *)(result + 12) = 0;
    v2 = a1[1];
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v2 + 4);
        HIWORD(v4) = HIWORD(v3);
        LOWORD(v4) = 0;
        v5 = v4 | (uint16_t)(v3 - 1);
        v6 = v3;
        result = __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v3, v5);
      }
      while ( v6 != result );
      if ( (uint16_t)v5 == 0 )
        result = G4_VCALL<int>(v2, 16);
    }
    a1[1] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BCFA0  (binary VA: 0x6bcfa0)
// Original: sub_6BCFA0
// ----------------------------------------------------------------------------
int sub_6BCFA0(uint32_t *a1)
{
  return sub_6BCFB0((char *)a1 + *(uint32_t *)(*a1 - 28));
}

// ----------------------------------------------------------------------------
// Function: sub_6BCFB0  (binary VA: 0x6bcfb0)
// Original: sub_6BCFB0
// ----------------------------------------------------------------------------
int sub_6BCFB0(int a1)
{
  int result;
  int v2;
  int32_t v3;
  int v4;
  int32_t v5;
  int32_t v6; // ett

  result = *(uint32_t *)(a1 + 84);
  if ( result != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)result + 56))(*(uint32_t *)(a1 + 84));
    result = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 84) + 48))(*(uint32_t *)(a1 + 84));
    v2 = *(uint32_t *)(a1 + 84);
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v2 + 4);
        HIWORD(v4) = HIWORD(v3);
        LOWORD(v4) = 0;
        v5 = v4 | (uint16_t)(v3 - 1);
        v6 = v3;
        result = __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v3, v5);
      }
      while ( v6 != result );
      if ( (uint16_t)v5 == 0 )
        result = G4_VCALL<int>(v2, 16);
    }
    *(uint32_t *)(a1 + 84) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BD030  (binary VA: 0x6bd030)
// Original: sub_6BD030
// ----------------------------------------------------------------------------
int sub_6BD030(uint32_t *a1)
{
  return sub_6BD040((char *)a1 + *(uint32_t *)(*a1 - 28));
}

// ----------------------------------------------------------------------------
// Function: sub_6BD040  (binary VA: 0x6bd040)
// Original: sub_6BD040
// ----------------------------------------------------------------------------
int sub_6BD040(int a1)
{
  int result;
  int v2;
  int32_t v3;
  int v4;
  int32_t v5;
  int32_t v6; // ett

  result = *(uint32_t *)(a1 + 128);
  if ( result != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)result + 56))(*(uint32_t *)(a1 + 128));
    result = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 128) + 48))(*(uint32_t *)(a1 + 128));
    v2 = *(uint32_t *)(a1 + 128);
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v2 + 4);
        HIWORD(v4) = HIWORD(v3);
        LOWORD(v4) = 0;
        v5 = v4 | (uint16_t)(v3 - 1);
        v6 = v3;
        result = __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v3, v5);
      }
      while ( v6 != result );
      if ( (uint16_t)v5 == 0 )
        result = G4_VCALL<int>(v2, 16);
    }
    *(uint32_t *)(a1 + 128) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BD0C0  (binary VA: 0x6bd0c0)
// Original: sub_6BD0C0
// ----------------------------------------------------------------------------
int sub_6BD0C0(uint32_t *a1)
{
  return ((sub_6BD0D0((char *)a1 + *(uint32_t *)(*a1 - 12))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD0D0  (binary VA: 0x6bd0d0)
// Original: sub_6BD0D0
// ----------------------------------------------------------------------------
void sub_6BD0D0(int *a1)
{
  int v1;
  int v2;
  int32_t v3;
  int v4;
  int32_t v5;

  v1 = a1[1];
  *a1 = (int)((uint32_t)(uintptr_t)&off_205750C);
  a1[2] = (int)((uint32_t)(uintptr_t)&off_205770C);
  if ( v1 != 0 )
  {
    sub_684850((int)(uintptr_t)(a1), 0);
    *(uint32_t *)(a1[1] + 12) = 0;
    v2 = a1[1];
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v2 + 4);
        HIWORD(v4) = HIWORD(v3);
        LOWORD(v4) = 0;
        v5 = v4 | (uint16_t)(v3 - 1);
      }
      while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v3, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(v2, 16);
    }
    a1[1] = 0;
  }
  sub_690AE0(a1, (int *)((uint32_t)(uintptr_t)&off_20574DC));
  sub_6AC370((int)(uintptr_t)(a1 + 2));
}

// ----------------------------------------------------------------------------
// Function: sub_6BD190  (binary VA: 0x6bd190)
// Original: sub_6BD190
// ----------------------------------------------------------------------------
int sub_6BD190(uint32_t *a1)
{
  return sub_6BD1A0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_6BD1A0  (binary VA: 0x6bd1a0)
// Original: sub_6BD1A0
// ----------------------------------------------------------------------------
int sub_6BD1A0(int *a1)
{
  int v1;
  int v2;
  int32_t v3;
  int v4;
  int32_t v5;
  int address;

  v1 = a1[1];
  *a1 = (int)((uint32_t)(uintptr_t)&off_205750C);
  a1[2] = (int)((uint32_t)(uintptr_t)&off_205770C);
  if ( v1 != 0 )
  {
    sub_684850((int)(uintptr_t)(a1), 0);
    *(uint32_t *)(a1[1] + 12) = 0;
    v2 = a1[1];
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v2 + 4);
        HIWORD(v4) = HIWORD(v3);
        LOWORD(v4) = 0;
        v5 = v4 | (uint16_t)(v3 - 1);
      }
      while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v3, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(v2, 16);
    }
    a1[1] = 0;
  }
  sub_690AE0(a1, (int *)((uint32_t)(uintptr_t)&off_20574DC));
  sub_6AC370((int)(uintptr_t)(a1 + 2));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a1,
           88);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD280  (binary VA: 0x6bd280)
// Original: sub_6BD280
// ----------------------------------------------------------------------------
int sub_6BD280(uint32_t *a1)
{
  return ((sub_6BD2A0((char *)a1 + *(uint32_t *)(*a1 - 12))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD290  (binary VA: 0x6bd290)
// Original: sub_6BD290
// ----------------------------------------------------------------------------
int sub_6BD290(int a1)
{
  return ((sub_6BD2A0(a1 - 124)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD2A0  (binary VA: 0x6bd2a0)
// Original: sub_6BD2A0
// ----------------------------------------------------------------------------
void sub_6BD2A0(int *a1)
{
  int v1;
  int v2;
  int32_t v3;
  int v4;
  int32_t v5;

  *a1 = (int)((uint32_t)(uintptr_t)&off_20561CC);
  a1[31] = (int)((uint32_t)(uintptr_t)&off_2056258);
  v1 = a1[32];
  a1[33] = (int)((uint32_t)(uintptr_t)&off_205644C);
  if ( v1 != 0 )
  {
    G4_VCALL<void>(v1, 56);
    G4_VCALL<void>(a1[32], 48);
    v2 = a1[32];
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v2 + 4);
        HIWORD(v4) = HIWORD(v3);
        LOWORD(v4) = 0;
        v5 = v4 | (uint16_t)(v3 - 1);
      }
      while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v3, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(v2, 16);
    }
    a1[32] = 0;
  }
  sub_690AE0(a1 + 31, (int *)off_2056194);
  sub_69F150(a1, (int *)&off_2056194[-4]);
  sub_6AC370((int)(uintptr_t)(a1 + 33));
}

// ----------------------------------------------------------------------------
// Function: sub_6BD380  (binary VA: 0x6bd380)
// Original: sub_6BD380
// ----------------------------------------------------------------------------
int sub_6BD380(uint32_t *a1)
{
  return sub_6BD3A0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_6BD390  (binary VA: 0x6bd390)
// Original: sub_6BD390
// ----------------------------------------------------------------------------
int sub_6BD390(int a1)
{
  return sub_6BD3A0(a1 - 124);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD3A0  (binary VA: 0x6bd3a0)
// Original: sub_6BD3A0
// ----------------------------------------------------------------------------
int sub_6BD3A0(int *a1)
{
  int v1;
  int v2;
  int32_t v3;
  int v4;
  int32_t v5;
  int address;

  *a1 = (int)((uint32_t)(uintptr_t)&off_20561CC);
  a1[31] = (int)((uint32_t)(uintptr_t)&off_2056258);
  v1 = a1[32];
  a1[33] = (int)((uint32_t)(uintptr_t)&off_205644C);
  if ( v1 != 0 )
  {
    G4_VCALL<void>(v1, 56);
    G4_VCALL<void>(a1[32], 48);
    v2 = a1[32];
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v2 + 4);
        HIWORD(v4) = HIWORD(v3);
        LOWORD(v4) = 0;
        v5 = v4 | (uint16_t)(v3 - 1);
      }
      while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v3, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(v2, 16);
    }
    a1[32] = 0;
  }
  sub_690AE0(a1 + 31, (int *)off_2056194);
  sub_69F150(a1, (int *)&off_2056194[-4]);
  sub_6AC370((int)(uintptr_t)(a1 + 33));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a1,
           212);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD4B0  (binary VA: 0x6bd4b0)
// Original: sub_6BD4B0
// ----------------------------------------------------------------------------
int sub_6BD4B0(uint32_t *a1)
{
  return ((sub_6BD4D0((char *)a1 + *(uint32_t *)(*a1 - 12))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD4C0  (binary VA: 0x6bd4c0)
// Original: sub_6BD4C0
// ----------------------------------------------------------------------------
int sub_6BD4C0(int a1)
{
  return ((sub_6BD4D0(a1 - 80)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD4D0  (binary VA: 0x6bd4d0)
// Original: sub_6BD4D0
// ----------------------------------------------------------------------------
void sub_6BD4D0(int *a1)
{
  int v1;
  int v2;
  int32_t v3;
  int v4;
  int32_t v5;

  *a1 = (int)((uint32_t)(uintptr_t)&off_2056E2C);
  a1[20] = (int)((uint32_t)(uintptr_t)&off_2056EB0);
  v1 = a1[21];
  a1[22] = (int)((uint32_t)(uintptr_t)&off_20570A4);
  if ( v1 != 0 )
  {
    G4_VCALL<void>(v1, 56);
    G4_VCALL<void>(a1[21], 48);
    v2 = a1[21];
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v2 + 4);
        HIWORD(v4) = HIWORD(v3);
        LOWORD(v4) = 0;
        v5 = v4 | (uint16_t)(v3 - 1);
      }
      while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v3, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(v2, 16);
    }
    a1[21] = 0;
  }
  sub_690AE0(a1 + 20, (int *)off_2056DF4);
  sub_69F860(a1, (int *)&off_2056DF4[-4]);
  sub_6AC370((int)(uintptr_t)(a1 + 22));
}

// ----------------------------------------------------------------------------
// Function: sub_6BD5A0  (binary VA: 0x6bd5a0)
// Original: sub_6BD5A0
// ----------------------------------------------------------------------------
int sub_6BD5A0(uint32_t *a1)
{
  return sub_6BD5C0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_6BD5B0  (binary VA: 0x6bd5b0)
// Original: sub_6BD5B0
// ----------------------------------------------------------------------------
int sub_6BD5B0(int a1)
{
  return sub_6BD5C0(a1 - 80);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD5C0  (binary VA: 0x6bd5c0)
// Original: sub_6BD5C0
// ----------------------------------------------------------------------------
int sub_6BD5C0(int *a1)
{
  int v1;
  int v2;
  int32_t v3;
  int v4;
  int32_t v5;
  int address;

  *a1 = (int)((uint32_t)(uintptr_t)&off_2056E2C);
  a1[20] = (int)((uint32_t)(uintptr_t)&off_2056EB0);
  v1 = a1[21];
  a1[22] = (int)((uint32_t)(uintptr_t)&off_20570A4);
  if ( v1 != 0 )
  {
    G4_VCALL<void>(v1, 56);
    G4_VCALL<void>(a1[21], 48);
    v2 = a1[21];
    if ( *(uint16_t *)(v2 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v2 + 4);
        HIWORD(v4) = HIWORD(v3);
        LOWORD(v4) = 0;
        v5 = v4 | (uint16_t)(v3 - 1);
      }
      while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v3, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(v2, 16);
    }
    a1[21] = 0;
  }
  sub_690AE0(a1 + 20, (int *)off_2056DF4);
  sub_69F860(a1, (int *)&off_2056DF4[-4]);
  sub_6AC370((int)(uintptr_t)(a1 + 22));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a1,
           168);
}

// ----------------------------------------------------------------------------
// Function: sub_6BD6B0  (binary VA: 0x6bd6b0)
// Original: sub_6BD6B0
// ----------------------------------------------------------------------------
int sub_6BD6B0(int result, float *a2)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm5_4

  v2 = a2[2];
  v3 = -v2;
  v4 = a2[1];
  v5 = v3 * v3;
  v6 = v4 * v4;
  if ( fabs((float)(v3 * v3) + (float)(v4 * v4)) > 0.000001f )
  {
    v7 = 0.0;
    v2 = 0.0;
  }
  else
  {
    v4 = -*a2;
    v7 = v2 * v2;
    v6 = v4 * v4;
    v5 = 0.0;
    v3 = 0.0;
  }
  v8 = (float)(v6 + v7) + v5;
  if ( v8 != 0.0 )
  {
    v9 = 1.0 / fsqrt(v8);
    v10 = (float)((float)((float)(v8 * v9) * v9) + -3.0) * (float)(v9 * -0.5);
    v2 = v2 * v10;
    v3 = v3 * v10;
    v4 = v4 * v10;
  }
  *(float *)result = v2;
  *(uint32_t *)(result + 12) = -1287930578;
  *(float *)(result + 4) = v3;
  *(float *)(result + 8) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BD790  (binary VA: 0x6bd790)
// Original: sub_6BD790
// ----------------------------------------------------------------------------
int sub_6BD790(int a1, int a2, int a3, float *a4)
{
  int result;
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm6_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  float v35; // xmm0_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm7_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm7_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75[4];
  typedef float _g4_t_v76[4];
  typedef uint32_t _g4_t_v77[55];
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (12u + sizeof(_g4_t_v48)) > _g4_s0 ? (12u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v49)) > _g4_s1 ? (32u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (116u + sizeof(_g4_t_v50)) > _g4_s2 ? (116u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (120u + sizeof(_g4_t_v51)) > _g4_s3 ? (120u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (124u + sizeof(_g4_t_v52)) > _g4_s4 ? (124u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (128u + sizeof(_g4_t_v53)) > _g4_s5 ? (128u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (132u + sizeof(_g4_t_v54)) > _g4_s6 ? (132u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (136u + sizeof(_g4_t_v55)) > _g4_s7 ? (136u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (140u + sizeof(_g4_t_v56)) > _g4_s8 ? (140u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (160u + sizeof(_g4_t_v57)) > _g4_s9 ? (160u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (164u + sizeof(_g4_t_v58)) > _g4_s10 ? (164u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (168u + sizeof(_g4_t_v59)) > _g4_s11 ? (168u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (172u + sizeof(_g4_t_v60)) > _g4_s12 ? (172u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (176u + sizeof(_g4_t_v61)) > _g4_s13 ? (176u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (184u + sizeof(_g4_t_v62)) > _g4_s14 ? (184u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (192u + sizeof(_g4_t_v63)) > _g4_s15 ? (192u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (196u + sizeof(_g4_t_v64)) > _g4_s16 ? (196u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (200u + sizeof(_g4_t_v65)) > _g4_s17 ? (200u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (204u + sizeof(_g4_t_v66)) > _g4_s18 ? (204u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (208u + sizeof(_g4_t_v67)) > _g4_s19 ? (208u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (212u + sizeof(_g4_t_v68)) > _g4_s20 ? (212u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (216u + sizeof(_g4_t_v69)) > _g4_s21 ? (216u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (220u + sizeof(_g4_t_v70)) > _g4_s22 ? (220u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (224u + sizeof(_g4_t_v71)) > _g4_s23 ? (224u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (228u + sizeof(_g4_t_v72)) > _g4_s24 ? (228u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (232u + sizeof(_g4_t_v73)) > _g4_s25 ? (232u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (236u + sizeof(_g4_t_v74)) > _g4_s26 ? (236u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (240u + sizeof(_g4_t_v75)) > _g4_s27 ? (240u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (256u + sizeof(_g4_t_v76)) > _g4_s28 ? (256u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (272u + sizeof(_g4_t_v77)) > _g4_s29 ? (272u + sizeof(_g4_t_v77)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 116u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 120u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 124u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 128u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 136u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 140u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 160u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 164u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 168u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 172u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 176u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 184u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 192u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 196u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 200u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 204u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 208u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 212u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 216u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 220u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 224u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 228u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 232u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 236u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 240u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 256u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 272u);

  result = sub_6634F0((int)(uintptr_t)(v77), (float *)(a3 + 48), (float *)(a3 + 64), (float *)(a3 + 8), (float *)(a3 + 20));
  if ( *(uint8_t *)(a3 + 166) != 0 )
  {
    if ( *(uint8_t *)(a3 + 164) != 0 )
    {
      v20 = 0.5 * *(float *)(a3 + 32);
      v59 = (float)-*(float *)(a3 + 8) * v20;
      v60 = (float)-*(float *)(a3 + 12) * v20;
      v61 = v20 * (float)-*(float *)(a3 + 16);
    }
    else
    {
      v61 = 0.0;
      v60 = 0.0;
      v59 = 0.0;
    }
    v65 = *(float *)&v77[16];
    v66 = *(float *)&v77[17];
    v67 = *(float *)&v77[18];
    sub_6645E0();
    v5 = v65;
    v68 = 0.0;
    v6 = v66;
    v69 = 0.0;
    v70 = 1.0;
    v71 = 0.0;
    v7 = v67;
    v72 = 0.0;
    v73 = 0.0;
    v74 = 1.0;
    v8 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
    if ( v8 != 0.0 )
    {
      v9 = 1.0 / fsqrt(v8);
      v10 = (float)((float)((float)(v8 * v9) * v9) + -3.0) * (float)(v9 * -0.5);
      v5 = v65 * v10;
      v6 = v66 * v10;
      v7 = v67 * v10;
    }
    if ( v7 >= 0.999999f )
      goto LABEL_17;
    if ( v7 <= -0.999999f )
    {
      sub_6BD6B0((int)(uintptr_t)(&v71), &v65);
      v12 = v71;
      v13 = v72;
      v14 = v73;
      v15 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
    }
    else
    {
      v11 = fsqrt((float)(v7 + 1.0) + (float)(v7 + 1.0));
      v74 = v11 * 0.5;
      v12 = v6 * (float)(1.0 / v11);
      v13 = (float)-v5 * (float)(1.0 / v11);
      v14 = 0.0;
      v71 = v12;
      v72 = v13;
      v15 = fsqrt((float)(v13 * v13) + (float)(v12 * v12));
    }
    if ( fabs(v15) <= 0.000001f || v74 > 1.0 || v74 < -1.0 )
    {
LABEL_17:
      v17 = 0.0;
      v63 = 0.0;
      v16 = 0.0;
      v62 = *(float *)(a3 + 24);
      v53 = 0.0;
      v54 = 0.0;
      v58 = 1.0;
      v19 = 1.3962634f;
    }
    else
    {
      v48 = acosf(v74);
      v63 = v48 + v48;
      v58 = v13 * (float)(1.0 / v15);
      v16 = v14 * (float)(1.0 / v15);
      v17 = v12 * (float)(1.0 / v15);
      v18 = fminf(fmaxf(fabs(v48 + v48) * 0.95492965f, 0.0), 1.0);
      v19 = (float)((float)(1.0 - v18) * 1.3962634f) + (float)(v18 * 1.7453293f);
      v62 = (float)((float)(*(float *)(a3 + 20) * v17) + (float)(*(float *)(a3 + 28) * v16))
          + (float)(v58 * *(float *)(a3 + 24));
      v54 = v62 * v17;
      v53 = v62 * v16;
      if ( fabs(v19) < 0.000001f )
        v19 = 0.87266463f;
    }
    v76[0] = v62;
    v76[1] = v19;
    v49 = v16;
    v76[2] = 1.7453293f;
    v76[3] = 1.7453293f;
    v64 = 0.0;
    sub_6629D0((float *)(a3 + 32), (unsigned int *)&v63, v76, &v64, 0);
    memset(v75, 0, 12);
    v75[3] = 1.0;
    v29 = v68;
    v30 = v70;
    v52 = v17 * (float)(v64 - v62);
    v31 = v69;
    v51 = v58 * (float)(v64 - v62);
    v50 = (float)(v64 - v62) * v49;
    v32 = v65;
    v33 = v66;
    v34 = v67;
    v35 = (float)((float)(v31 * v31) + (float)(v29 * v29)) + (float)(v30 * v30);
    if ( v35 != 0.0 )
    {
      v36 = 1.0 / fsqrt(v35);
      v37 = (float)((float)((float)(v35 * v36) * v36) + -3.0) * (float)(v36 * -0.5);
      v29 = v68 * v37;
      v31 = v69 * v37;
      v30 = v70 * v37;
    }
    v38 = (float)((float)(v66 * v66) + (float)(v65 * v65)) + (float)(v67 * v67);
    if ( v38 == 0.0 )
    {
      v55 = v67;
      v41 = v66;
      v56 = v66;
      v42 = v65;
      v57 = v65;
    }
    else
    {
      v39 = fsqrt(v38);
      v40 = (float)((float)((float)(v38 * (float)(1.0 / v39)) * (float)(1.0 / v39)) + -3.0)
          * (float)((float)(1.0 / v39) * -0.5);
      v57 = v65 * v40;
      v56 = v66 * v40;
      v55 = v40 * v67;
      v41 = v66 * v40;
      v42 = v57;
    }
    v43 = (float)((float)(v41 * v31) + (float)(v42 * v29)) + (float)(v55 * v30);
    if ( v43 < 0.999999f )
    {
      if ( v43 > -0.999999f )
      {
        v47 = fsqrt((float)(v43 + 1.0) + (float)(v43 + 1.0));
        v75[0] = (float)((float)(v55 * v31) - (float)(v56 * v30)) * (float)(1.0 / v47);
        v75[3] = v47 * 0.5;
        v75[1] = (float)((float)(v30 * v57) - (float)(v55 * v29)) * (float)(1.0 / v47);
        v75[2] = (float)((float)(v29 * v56) - (float)(v31 * v57)) * (float)(1.0 / v47);
      }
      else
      {
        sub_6BD6B0((int)(uintptr_t)(v75), &v68);
        v32 = v65;
        v33 = v66;
        v34 = v67;
      }
    }
    result = v77[43];
    v44 = fminf(fmaxf(fabs(v63) * 1.9098593f, 0.0), 1.0);
    v45 = (float)((float)(1.0 - v44) * 0.2f) + (float)(v44 * 0.02f);
    v23 = (float)((float)(v54 - (float)(*(float *)(a3 + 20) - (float)(v32 * *(float *)v77[43]))) * v45) + v52;
    v46 = (float)((float)(v62 * v58) - (float)(*(float *)(a3 + 24) - (float)(v33 * *(float *)v77[43]))) * v45;
    v21 = (float)((float)(v53 - (float)(*(float *)(a3 + 28) - (float)(v34 * *(float *)v77[43]))) * v45) + v50;
    v24 = v59;
    v22 = v46 + v51;
  }
  else
  {
    v21 = 0.0;
    v22 = 0.0;
    v23 = 0.0;
    v61 = 0.0;
    v24 = 0.0;
    v60 = 0.0;
  }
  v25 = v23 + a4[4];
  v26 = v22 + a4[5];
  v27 = v21 + a4[6];
  a4[1] = v24 + a4[1];
  v28 = v60 + a4[2];
  a4[4] = v25;
  a4[5] = v26;
  a4[6] = v27;
  a4[2] = v28;
  a4[3] = v61 + a4[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BE1D0  (binary VA: 0x6be1d0)
// Original: sub_6BE1D0
// ----------------------------------------------------------------------------
int sub_6BE1D0(int a1, int a2, int a3, float *a4)
{
  int result;
  float *v5;
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm2_4
  __m128 v13;
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v27)) > _g4_s0 ? (4u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v34)) > _g4_s7 ? (32u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v35)) > _g4_s8 ? (36u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v36)) > _g4_s9 ? (44u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v37)) > _g4_s10 ? (56u + sizeof(_g4_t_v37)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);

  result = sub_6634F0((int)(uintptr_t)(&v37), (float *)(a3 + 48), (float *)(a3 + 64), (float *)(a3 + 8), (float *)(a3 + 20));
  v5 = *(float **)(a3 + 132);
  if ( v5 != nullptr )
  {
    result = (*(int (**)(uint32_t))(*(uint32_t *)v5 + 12))(*(uint32_t *)(a3 + 132));
    if ( (uint8_t)result != 0 )
    {
      v6 = *(float *)(*(uint32_t *)(a3 + 136) + 16);
      v7 = *(float *)(a3 + 32);
      v8 = v7 * v6;
      if ( v6 >= 0.000001f )
        v9 = v5[1];
      else
        v9 = v5[2];
      v10 = v8 * v9;
      v11 = *(float *)(a3 + 16);
      if ( fabs(v10) >= 0.000001f )
      {
        v12 = (float)(fsqrt(
                        (float)((float)(*(float *)(a3 + 144) * *(float *)(a3 + 144))
                              + (float)(*(float *)(a3 + 140) * *(float *)(a3 + 140)))
                      + (float)(*(float *)(a3 + 148) * *(float *)(a3 + 148)))
                    * v7)
            + v10;
      }
      else
      {
        v12 = fabs(v11);
g4_m128_raw(v13) = *(unsigned int *)(a3 + 16);
g4_m128_lane<int32_t>(v13, 0) = -(v11 < 0.0);
        v14 = (float)(v7 * v5[3])
            * COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v13, g4_m128_from<__m128>(0xBF800000)), 0) |g4_m128_lane<int32_t>(v13, 0) & 0x3F800000);
        if ( v12 >= v14 )
          v12 = fmaxf(-v12, v14);
      }
      v36 = *(float *)(a3 + 8);
      v35 = *(float *)(a3 + 64);
      v15 = -*(float *)(a3 + 12);
      v33 = *(float *)(a3 + 72);
      v34 = *(float *)(a3 + 68);
      v32 = *(float *)(a3 + 80);
      v30 = *(float *)(a3 + 88);
      v16 = (float)((float)(v34 * v15) + (float)(v35 * (float)-v36)) + (float)(v33 * (float)-v11);
      v31 = *(float *)(a3 + 84);
      v17 = (float)((float)(v31 * v15) + (float)(v32 * (float)-v36)) + (float)(v30 * (float)-v11);
      v29 = *(float *)(a3 + 96);
      v28 = *(float *)(a3 + 100);
      v27 = *(float *)(a3 + 104);
      v18 = (float)((float)(v15 * v28) + (float)((float)-v36 * v29)) + (float)((float)-v11 * v27);
      v19 = (float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18);
      if ( v19 != 0.0 )
      {
        v20 = 1.0 / fsqrt(v19);
        v21 = (float)((float)((float)(v19 * v20) * v20) + -3.0) * (float)(v20 * -0.5);
        v16 = v16 * v21;
        v17 = v17 * v21;
        v18 = v18 * v21;
      }
      v22 = v12 + a4[3];
      v23 = (float)((float)((float)((float)(*(float *)(a3 + 12) * 0.01f) * (float)(*(float *)(a3 + 12) * 0.01f))
                          + (float)((float)(v36 * 0.01f) * (float)(v36 * 0.01f)))
                  + (float)((float)(v11 * 0.01f) * (float)(v11 * 0.01f)))
          * v5[4];
      v24 = (float)(v5[5] * v23) * v16;
      v25 = (float)(v5[6] * v23) * v17;
      v26 = (float)(v23 * v5[7]) * v18;
      a4[1] = (float)((float)((float)(v35 * v24) + (float)(v32 * v25)) + a4[1]) + (float)(v29 * v26);
      a4[2] = (float)((float)((float)(v34 * v24) + (float)(v31 * v25)) + a4[2]) + (float)(v28 * v26);
      a4[3] = (float)((float)(v22 + (float)(v24 * v33)) + (float)(v25 * v30)) + (float)(v26 * v27);
      return (int)(uintptr_t)(a4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BE560  (binary VA: 0x6be560)
// Original: sub_6BE560
// ----------------------------------------------------------------------------
int sub_6BE560(int a1, int a2, int a3, float *a4)
{
  int result;
  float *v5;
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm2_4
  __m128 v13;
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v27)) > _g4_s0 ? (4u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v34)) > _g4_s7 ? (32u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v35)) > _g4_s8 ? (36u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v36)) > _g4_s9 ? (44u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v37)) > _g4_s10 ? (56u + sizeof(_g4_t_v37)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);

  result = sub_6634F0((int)(uintptr_t)(&v37), (float *)(a3 + 48), (float *)(a3 + 64), (float *)(a3 + 8), (float *)(a3 + 20));
  v5 = *(float **)(a3 + 132);
  if ( v5 != nullptr )
  {
    result = (*(int (**)(uint32_t))(*(uint32_t *)v5 + 12))(*(uint32_t *)(a3 + 132));
    if ( (uint8_t)result != 0 )
    {
      v6 = *(float *)(*(uint32_t *)(a3 + 136) + 16);
      v7 = *(float *)(a3 + 32);
      v8 = v7 * v6;
      if ( v6 >= 0.000001f )
        v9 = v5[1];
      else
        v9 = v5[2];
      v10 = v8 * v9;
      v11 = *(float *)(a3 + 16);
      if ( fabs(v10) >= 0.000001f )
      {
        v12 = (float)(fsqrt(
                        (float)((float)(*(float *)(a3 + 144) * *(float *)(a3 + 144))
                              + (float)(*(float *)(a3 + 140) * *(float *)(a3 + 140)))
                      + (float)(*(float *)(a3 + 148) * *(float *)(a3 + 148)))
                    * v7)
            + v10;
      }
      else
      {
        v12 = fabs(v11);
g4_m128_raw(v13) = *(unsigned int *)(a3 + 16);
g4_m128_lane<int32_t>(v13, 0) = -(v11 < 0.0);
        v14 = (float)(v7 * v5[3])
            * COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v13, g4_m128_from<__m128>(0xBF800000)), 0) |g4_m128_lane<int32_t>(v13, 0) & 0x3F800000);
        if ( v12 >= v14 )
          v12 = fmaxf(-v12, v14);
      }
      v36 = *(float *)(a3 + 8);
      v35 = *(float *)(a3 + 64);
      v15 = -*(float *)(a3 + 12);
      v33 = *(float *)(a3 + 72);
      v34 = *(float *)(a3 + 68);
      v32 = *(float *)(a3 + 80);
      v30 = *(float *)(a3 + 88);
      v16 = (float)((float)(v34 * v15) + (float)(v35 * (float)-v36)) + (float)(v33 * (float)-v11);
      v31 = *(float *)(a3 + 84);
      v17 = (float)((float)(v31 * v15) + (float)(v32 * (float)-v36)) + (float)(v30 * (float)-v11);
      v29 = *(float *)(a3 + 96);
      v28 = *(float *)(a3 + 100);
      v27 = *(float *)(a3 + 104);
      v18 = (float)((float)(v15 * v28) + (float)((float)-v36 * v29)) + (float)((float)-v11 * v27);
      v19 = (float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18);
      if ( v19 != 0.0 )
      {
        v20 = 1.0 / fsqrt(v19);
        v21 = (float)((float)((float)(v19 * v20) * v20) + -3.0) * (float)(v20 * -0.5);
        v16 = v16 * v21;
        v17 = v17 * v21;
        v18 = v18 * v21;
      }
      v22 = v12 + a4[3];
      v23 = (float)((float)((float)((float)(*(float *)(a3 + 12) * 0.01f) * (float)(*(float *)(a3 + 12) * 0.01f))
                          + (float)((float)(v36 * 0.01f) * (float)(v36 * 0.01f)))
                  + (float)((float)(v11 * 0.01f) * (float)(v11 * 0.01f)))
          * v5[4];
      v24 = (float)(v5[5] * v23) * v16;
      v25 = (float)(v5[6] * v23) * v17;
      v26 = (float)(v23 * v5[7]) * v18;
      a4[1] = (float)((float)((float)(v35 * v24) + (float)(v32 * v25)) + a4[1]) + (float)(v29 * v26);
      a4[2] = (float)((float)((float)(v34 * v24) + (float)(v31 * v25)) + a4[2]) + (float)(v28 * v26);
      a4[3] = (float)((float)(v22 + (float)(v24 * v33)) + (float)(v25 * v30)) + (float)(v26 * v27);
      return (int)(uintptr_t)(a4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BE8F0  (binary VA: 0x6be8f0)
// Original: sub_6BE8F0
// ----------------------------------------------------------------------------
int sub_6BE8F0(int a1, uint32_t *a2, float *a3, float *a4)
{
  int result;
  float v5; // xmm6_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  float v18; // xmm7_4
  float v19;

  result = (int)(uintptr_t)(a3);
  if ( a2[4] != 1 )
    return G4_VCALL<int>(a2, 8, 3, a3, a4);
  v5 = a3[47];
  v6 = a3[48];
  v19 = a3[52];
  v7 = a3[49];
  v8 = a3[50];
  v9 = a3[51];
  v10 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( v10 != 0.0 )
  {
    v11 = 1.0 / fsqrt(v10);
    v12 = (float)((float)((float)(v11 * v10) * v11) + -3.0) * (float)(v11 * -0.5);
    v10 = (float)((float)((float)(v6 * v12) * (float)(v6 * v12)) + (float)((float)(v12 * v7) * (float)(v12 * v7)))
        + (float)((float)(v5 * v12) * (float)(v5 * v12));
  }
  v13 = fabs(*(float *)(a1 + 4));
  v14 = a3[3];
  v15 = a3[4];
  v16 = fsqrt((float)(v13 + v13) * fsqrt(v10));
  v17 = (float)((float)((float)(v14 - a3[43]) * v9) + (float)((float)(a3[2] - a3[42]) * v8))
      + (float)((float)(v15 - a3[44]) * v19);
  if ( v16 > v17 )
  {
    v18 = v16 - v17;
    a4[1] = (float)(v8 * v18) + a3[2];
    a4[2] = (float)(v9 * v18) + v14;
    a4[3] = (float)(v18 * v19) + v15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6BEA80  (binary VA: 0x6bea80)
// Original: sub_6BEA80
// ----------------------------------------------------------------------------
int sub_6BEA80(uint32_t *a1, int a2, int a3, int a4)
{
  unsigned int v5;
  unsigned int v6;
  float v7; // xmm1_4
  int v8;
  int v9;
  int v11;
  typedef int _g4_t_v12;
  typedef int (**_g4_t_v13)(int);
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[9];
  typedef int (**_g4_t_v21)(int);
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
  typedef uint32_t _g4_t_v37[17];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t _g4_t_v40[16];
  typedef char _g4_t_v41;
  typedef uint32_t _g4_t_v42[16];
  typedef uint32_t _g4_t_v43[49];
  enum : size_t {
    _g4_s0 = 720u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v17)) > _g4_s5 ? (36u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v18)) > _g4_s6 ? (40u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v19)) > _g4_s7 ? (44u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v20)) > _g4_s8 ? (48u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v21)) > _g4_s9 ? (84u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v22)) > _g4_s10 ? (88u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v23)) > _g4_s11 ? (92u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v24)) > _g4_s12 ? (96u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v25)) > _g4_s13 ? (100u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v26)) > _g4_s14 ? (104u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v27)) > _g4_s15 ? (108u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v28)) > _g4_s16 ? (112u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v29)) > _g4_s17 ? (116u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v30)) > _g4_s18 ? (120u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v31)) > _g4_s19 ? (124u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v32)) > _g4_s20 ? (128u + sizeof(_g4_t_v32)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v33)) > _g4_s21 ? (132u + sizeof(_g4_t_v33)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v34)) > _g4_s22 ? (136u + sizeof(_g4_t_v34)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v35)) > _g4_s23 ? (140u + sizeof(_g4_t_v35)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v36)) > _g4_s24 ? (144u + sizeof(_g4_t_v36)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v37)) > _g4_s25 ? (148u + sizeof(_g4_t_v37)) : _g4_s25,
    _g4_s27 = (216u + sizeof(_g4_t_v38)) > _g4_s26 ? (216u + sizeof(_g4_t_v38)) : _g4_s26,
    _g4_s28 = (220u + sizeof(_g4_t_v39)) > _g4_s27 ? (220u + sizeof(_g4_t_v39)) : _g4_s27,
    _g4_s29 = (288u + sizeof(_g4_t_v40)) > _g4_s28 ? (288u + sizeof(_g4_t_v40)) : _g4_s28,
    _g4_s30 = (354u + sizeof(_g4_t_v41)) > _g4_s29 ? (354u + sizeof(_g4_t_v41)) : _g4_s29,
    _g4_s31 = (392u + sizeof(_g4_t_v42)) > _g4_s30 ? (392u + sizeof(_g4_t_v42)) : _g4_s30,
    _g4_s32 = (456u + sizeof(_g4_t_v43)) > _g4_s31 ? (456u + sizeof(_g4_t_v43)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 116u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 120u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 124u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 128u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 132u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 136u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 140u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 148u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 216u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 220u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 288u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 354u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 392u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 456u);

  v12 = a1[2];
  (*(void (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(a1[1] + 4 * v12) + 16))(
    *(uint32_t *)(a1[1] + 4 * v12),
    a1,
    a2,
    a3,
    a4);
  v5 = G4_VCALL<int>(a1, 16);
  v6 = G4_VCALL<int>(a1, 20, a2);
  v7 = (float)((float)HIWORD(v6) * 65536.0) + (float)(uint16_t)v6;
  if ( (float)((float)((float)HIWORD(v5) * 65536.0) + (float)(uint16_t)v5) == v7 )
  {
    v11 = a1[1];
    a1[2] = a2;
    return (*(int (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(v11 + 4 * a2) + 12))(
             *(uint32_t *)(v11 + 4 * a2),
             a1,
             v12,
             a3,
             a4);
  }
  else
  {
    v21 = (int (**)(int))(uintptr_t)(&off_2055818);
    v22 = 25;
    memset(v37, 0, 66);
    v8 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v38 = 0;
    v26 = 0;
    v39 = 0;
    v27 = 0;
    v28 = 0;
    v13 = (int (**)(int))(uintptr_t)(&off_2055830);
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 1065353216;
    v37[0] = 1065353216;
    v37[5] = 1065353216;
    v37[10] = 1065353216;
    v37[15] = 1065353216;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( v7 == 1.0 )
    {
      LOBYTE(v8) = 16;
      memset(v40, 0, 4 * v8);
      v40[0] = 1065353216;
      v37[0] = 1065353216;
      v37[1] = v40[1];
      v37[2] = v40[2];
      v37[3] = v40[3];
      v40[5] = 1065353216;
      v37[4] = v40[4];
      v37[5] = 1065353216;
      v37[6] = v40[6];
      v37[7] = v40[7];
      v37[8] = v40[8];
      v40[10] = 1065353216;
      v37[9] = v40[9];
      v37[10] = 1065353216;
      v37[11] = v40[11];
      v37[12] = v40[12];
      v37[13] = v40[13];
      v40[15] = 1065353216;
      v37[14] = v40[14];
      v37[15] = 1065353216;
      BYTE2(v37[16]) = v41;
    }
    else if ( v7 == 0.0 )
    {
      sub_6EEA50(v42);
      v22 = v42[1];
      v23 = v42[2];
      v24 = v42[3];
      v25 = v42[4];
      v26 = v42[5];
      v27 = v42[6];
      v28 = v42[7];
      v29 = v42[8];
      v30 = v42[9];
      v31 = v42[10];
      v32 = v42[11];
      v33 = v42[12];
      v34 = v42[13];
      v35 = v42[14];
      v36 = v42[15];
      std::memcpy(v37, v43, 67);
      v38 = v43[17];
      v42[0] = (uint32_t)(uintptr_t)(&off_2055818);
      v39 = v43[18];
      sub_6EECC0(v20);
      v20[0] = (uint32_t)(uintptr_t)(&off_2055830);
      v14 = v20[1];
      v15 = v20[2];
      v16 = v20[3];
      v17 = v20[4];
      v18 = v20[5];
      v19 = v20[6];
    }
    v9 = a1[1];
    a1[2] = a2;
    return (*(int (**)(uint32_t, uint32_t *, int, int (***)(int), int (***)(int)))(**(uint32_t **)(v9 + 4 * a2) + 12))(
             *(uint32_t *)(v9 + 4 * a2),
             a1,
             v12,
             &v21,
             &v13);
  }
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: sub_6C10F0  (binary VA: 0x6c10f0)
// Original: sub_6C10F0
// ----------------------------------------------------------------------------
int sub_6C10F0(uint32_t *a1, int a2)
{
  return sub_6C1100((char *)a1 + *(uint32_t *)(*a1 - 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_6C1100  (binary VA: 0x6c1100)
// Original: sub_6C1100
// ----------------------------------------------------------------------------
int sub_6C1100(uint32_t *a1, int a2)
{
  int v2;
  int address;
  int v5;
  int v6;
  const hkcdShape::Self *v7;
  hkpInertiaTensorComputer::Self *v8;
  typedef const hkcdShape::Self *_g4_t_v9;
  typedef hkpUnaryAction::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[4];
  typedef uint32_t _g4_t_v15[8];
  typedef uint8_t _g4_t_v16[48];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v10)) > _g4_s1 ? (36u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v11)) > _g4_s2 ? (40u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v12)) > _g4_s3 ? (40u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v13)) > _g4_s4 ? (44u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v14)) > _g4_s5 ? (48u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v15)) > _g4_s6 ? (64u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v16)) > _g4_s7 ? (96u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);

  v2 = 0;
  if ( a1[21] == 0 )
  {
    v11 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 28);
    if ( (uint8_t)sub_683280(a1, a2) != 0 )
    {
      v13 = G4_VCALL<int>(v11, 160, *(uint32_t *)(a2 + 12), 0);
      if ( v13 != 0 )
      {
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v10 = (hkpUnaryAction::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                  *(uint32_t *)(*(uint32_t *)address + 44),
                                  36);
        v12 = (char *)a1 + *(uint32_t *)(*a1 - 12);
        hkpUnaryAction::Construct(v10, (hkpEntity::Self *)v13, 0);
        *(uint32_t *)v10 = ((uint32_t)(uintptr_t)&off_2057828);
        *((uint32_t *)v10 + 7) = ((uint32_t)(uintptr_t)&off_205786C);
        *((uint32_t *)v10 + 8) = (uint32_t)(uintptr_t)(v12);
        hkpEntity::addEntityListener(v13, (char *)v10 + 28);
        a1[21] = (uint32_t)(uintptr_t)(v10);
        hkStringPtr::opAssign((hkStringPtr::Self *)(v13 + 120), *(hkString::Self **)(a2 + 8));
        if ( (uint8_t)sub_6833D0((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12)), a2) != 0
          && *(uint32_t *)(v13 + 8) != 0 )
        {
          G4_VCALL<void>(a1[21], 52);
          v14[3] = 0;
          v5 = *(uint32_t *)(a2 + 116);
          v14[1] = *(uint32_t *)(a2 + 112);
          v6 = *(uint32_t *)(a2 + 108);
          v14[2] = v5;
          v14[0] = v6;
          hkpRigidBody::setCenterOfMassLocal((hkpRigidBody::Self *)v13, (const hkVector4f::Self *)v14);
          v7 = *(const hkcdShape::Self **)(a2 + 96);
          memset(&v15[4], 0, 16);
          memset(v16, 0, sizeof(v16));
          v15[1] = (uint32_t)(uintptr_t)(v7);
          v9 = v7;
          v8 = *(hkpInertiaTensorComputer::Self **)(v13 + 16);
          v15[0] = 0;
          v2 = 1;
          hkpInertiaTensorComputer::computeShapeVolumeMassProperties(v8, v9, COERCE_FLOAT(v15), nullptr);
          hkpRigidBody::setInertiaLocal((hkpRigidBody::Self *)v13, (const hkMatrix3f::Self *)v16);
          *(uint32_t *)(v13 + 12) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
          *(uint16_t *)(v13 + 406) = 16416;
          sub_6B4810(v13);
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_6C13A0  (binary VA: 0x6c13a0)
// Original: sub_6C13A0
// ----------------------------------------------------------------------------
int sub_6C13A0(uint32_t *a1, int a2)
{
  return sub_6C13B0((char *)a1 + *(uint32_t *)(*a1 - 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_6C1580  (binary VA: 0x6c13b0)
// Original: sub_6C1580
// ----------------------------------------------------------------------------
uint32_t * sub_6C1580(uint32_t *a1)
{
  a1[1] = 1069547520;
  *a1 = (uint32_t)(uintptr_t)(&off_20553E8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C15C0  (binary VA: 0x6c15c0)
// Original: sub_6C15C0
// ----------------------------------------------------------------------------
int sub_6C15C0(int a1)
{
  *(uint32_t *)(a1 + 8) = 1065353216;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055428);
  *(uint32_t *)(a1 + 12) = 1092616192;
  *(uint32_t *)(a1 + 16) = 1128792064;
  *(uint8_t *)(a1 + 20) = 1;
  *(uint8_t *)(a1 + 21) = 1;
  *(uint8_t *)(a1 + 22) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C16C0  (binary VA: 0x6c16c0)
// Original: sub_6C16C0
// ----------------------------------------------------------------------------
uint32_t * sub_6C16C0(uint32_t *a1)
{
  a1[1] = 1065353216;
  *a1 = (uint32_t)(uintptr_t)(&off_2055468);
  a1[2] = 1092616192;
  a1[3] = 1112014848;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C1750  (binary VA: 0x6c1750)
// Original: sub_6C1750
// ----------------------------------------------------------------------------
uint32_t * sub_6C1750(uint32_t *a1, int a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055490);
  a1[1] = *(uint32_t *)(a2 + 4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C1780  (binary VA: 0x6c1780)
// Original: sub_6C1780
// ----------------------------------------------------------------------------
uint32_t * sub_6C1780(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20554C8);
  a1[6] = 0;
  a1[5] = 0;
  a1[4] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[1] = 1065353216;
  a1[2] = 1092616192;
  a1[3] = 1112014848;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C1820  (binary VA: 0x6c1820)
// Original: sub_6C1820
// ----------------------------------------------------------------------------
uint32_t * sub_6C1820(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20554F0);
  a1[1] = 0;
  a1[2] = 1065353216;
  a1[3] = 1065353216;
  a1[4] = 1065353216;
  a1[5] = 1065353216;
  a1[6] = 1065353216;
  a1[7] = 1065353216;
  a1[8] = 1065353216;
  a1[9] = 1065353216;
  a1[10] = 1065353216;
  a1[11] = 1065353216;
  a1[12] = 1065353216;
  a1[13] = 1065353216;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C1870  (binary VA: 0x6c1870)
// Original: sub_6C1870
// ----------------------------------------------------------------------------
uint32_t * sub_6C1870(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20554F0);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  a1[7] = a2[7];
  a1[8] = a2[8];
  a1[9] = a2[9];
  a1[10] = a2[10];
  a1[11] = a2[11];
  a1[12] = a2[12];
  a1[13] = a2[13];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C18E0  (binary VA: 0x6c18e0)
// Original: sub_6C18E0
// ----------------------------------------------------------------------------
int sub_6C18E0(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 8) = a3;
  *(uint32_t *)(a1 + 12) = a3;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055510);
  *(uint32_t *)(a1 + 4) = a2;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 24) = 1;
  *(uint8_t *)(a1 + 40) = 1;
  *(uint32_t *)(a1 + 48) = 1112014848;
  *(uint32_t *)(a1 + 44) = 1162039296;
  *(uint32_t *)(a1 + 52) = 1065353216;
  *(uint8_t *)(a1 + 20) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C1940  (binary VA: 0x6c1940)
// Original: sub_6C1940
// ----------------------------------------------------------------------------
int sub_6C1940(int a1, char a2)
{
  *(uint8_t *)(a1 + 40) = a2;
  return a1;
}



// ============================================================================
// Address:   0x6c1990 (size: 520 bytes)
// Symbol:    sub_6C1990
// Demangled: sub_6C1990
// ============================================================================
int (**sub_6C1990(int a1))(int)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 64;
  v2 = (uint16_t *)(a1 + 64);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = 25;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 1065353216;
  if ( ((a1 + 64) & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 65);
    *(uint8_t *)(a1 + 64) = 0;
    LOWORD(v1) = 63;
    if ( ((a1 + 65) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v2) & 2) == 0 )
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
  *(uint32_t *)(a1 + 64) = 1065353216;
  *(uint32_t *)(a1 + 84) = 1065353216;
  *(uint32_t *)(a1 + 104) = 1065353216;
  *(uint32_t *)(a1 + 124) = 1065353216;
  *(uint8_t *)(a1 + 128) = 0;
  *(uint8_t *)(a1 + 129) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 152) = 2;
  *(uint32_t *)(a1 + 164) = 1065353216;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint8_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint32_t *)(a1 + 192) = 0;
  *(uint32_t *)(a1 + 196) = 0;
  *(uint32_t *)(a1 + 200) = 0;
  *(uint32_t *)(a1 + 204) = 0;
  *(uint32_t *)(a1 + 212) = 0;
  *(uint32_t *)(a1 + 216) = 0;
  *(uint32_t *)(a1 + 220) = 0;
  *(uint32_t *)(a1 + 208) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055528);
  return (int (**)(int))(uintptr_t)(&off_2055528);
}
// ----------------------------------------------------------------------------
// Function: sub_6C1BF0  (binary VA: 0x6c1bf0)
// Original: sub_6C1BF0
// ----------------------------------------------------------------------------
uint32_t * sub_6C1BF0(uint32_t *a1)
{
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_2055540);
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C1C30  (binary VA: 0x6c1c30)
// Original: sub_6C1C30
// ----------------------------------------------------------------------------
uint32_t * sub_6C1C30(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  *a1 = (uint32_t)(uintptr_t)(&off_2055540);
  a1[7] = a2[7];
  a1[8] = a2[8];
  a1[9] = a2[9];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C1C90  (binary VA: 0x6c1c90)
// Original: sub_6C1C90
// ----------------------------------------------------------------------------
uint32_t * sub_6C1C90(uint32_t *a1)
{
  a1[1] = 1028443341;
  *a1 = (uint32_t)(uintptr_t)(&off_2055568);
  a1[2] = 1092616192;
  a1[3] = 1112014848;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C1D20  (binary VA: 0x6c1d20)
// Original: sub_6C1D20
// ----------------------------------------------------------------------------
uint32_t * sub_6C1D20(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055590);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  a1[7] = a2[7];
  a1[8] = a2[8];
  a1[9] = a2[9];
  a1[10] = a2[10];
  a1[11] = a2[11];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C1D80  (binary VA: 0x6c1d80)
// Original: sub_6C1D80
// ----------------------------------------------------------------------------
int64_t sub_6C1D80(int64_t a1)
{
  int64_t result; // rax
  float v2; // xmm0_4
  float v3; // xmm7_4
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm6_4
  float v21; // xmm4_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm4_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  float v28; // xmm7_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm7_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm7_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  float v38; // xmm2_4
  float v39; // xmm7_4
  float v40; // xmm6_4
  float v41; // xmm5_4
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;

  result = a1;
  v42 = *(float *)(a1 + 28);
  v2 = *(float *)(a1 + 4);
  v3 = *(float *)(a1 + 12);
  v4 = *(float *)(a1 + 16);
  v43 = *(float *)(a1 + 32);
  v5 = v2 * v3;
  v6 = *(float *)(a1 + 8);
  v7 = v3 * v6;
  v8 = v5 - (float)(*(float *)a1 * v4);
  v9 = *(float *)(a1 + 20);
  v10 = (float)(v6 * v4) - (float)(v2 * v9);
  v11 = *(float *)(a1 + 24);
  v12 = (float)(*(float *)a1 * v9) - v7;
  v13 = (float)((float)(v12 * v12) + (float)(v10 * v10)) + (float)(v8 * v8);
  if ( v13 >= 0.00000001f )
  {
    if ( v13 != 0.0 )
    {
      v14 = 1.0 / fsqrt(v13);
      v15 = (float)((float)((float)(v13 * v14) * v14) + -3.0) * (float)(v14 * -0.5);
      v10 = v10 * v15;
      v12 = v12 * v15;
      v8 = v8 * v15;
    }
    v16 = (float)(v42 * v10) - (float)(v12 * v11);
    v17 = (float)(v8 * v11) - (float)(v10 * v43);
    v18 = (float)(v12 * v43) - (float)(v8 * v42);
    v19 = (float)((float)(v17 * v17) + (float)(v18 * v18)) + (float)(v16 * v16);
    if ( v19 != 0.0 )
    {
      v20 = 1.0 / fsqrt(v19);
      v21 = (float)((float)((float)(v19 * v20) * v20) + -3.0) * (float)(v20 * -0.5);
      v18 = v18 * v21;
      v17 = v17 * v21;
      v16 = v16 * v21;
    }
    v44 = (float)(v42 * v18) - (float)(v17 * v11);
    v45 = (float)(v16 * v11) - (float)(v43 * v18);
    v46 = (float)(v43 * v17) - (float)(v42 * v16);
    v22 = (float)((float)(v45 * v45) + (float)(v46 * v46)) + (float)(v44 * v44);
    if ( v22 != 0.0 )
    {
      v23 = fsqrt(v22);
      v24 = (float)((float)((float)(v22 * (float)(1.0 / v23)) * (float)(1.0 / v23)) + -3.0)
          * (float)((float)(1.0 / v23) * -0.5);
      v46 = v46 * v24;
      v45 = v45 * v24;
      v44 = v24 * v44;
    }
    v25 = *(float *)(a1 + 40) - *(float *)(a1 + 64);
    v26 = *(float *)(a1 + 36) - *(float *)(a1 + 60);
    v27 = *(float *)(a1 + 44) - *(float *)(a1 + 68);
    v47 = (float)((float)(v18 * v26) + (float)(v17 * v25)) + (float)(v16 * v27);
    v28 = (float)((float)(v46 * v26) + (float)(v45 * v25)) + (float)(v44 * v27);
    v29 = (float)((float)(v25 * v42) + (float)(v26 * v11)) + (float)(v27 * v43);
    v48 = v28;
    v49 = *(float *)(a1 + 48) - v47;
    v50 = *(float *)(a1 + 52) - v28;
    v51 = *(float *)(a1 + 56) - v29;
    v53 = *(float *)(a1 + 76);
    v30 = (float)((float)(v49 * v49) + (float)(v51 * v51)) + (float)(v50 * v50);
    v52 = *(float *)(a1 + 72);
    if ( (float)((float)(v52 * v52) * v30) > (float)(v53 * v53) )
    {
      v40 = fsqrt(v30);
      v41 = (float)((float)((float)((float)(v30 * (float)(1.0 / v40)) * (float)(1.0 / v40)) + -3.0)
                  * (float)((float)(1.0 / v40) * -0.5))
          * v53;
      v31 = v49 * v41;
      v32 = v50 * v41;
      v33 = v41 * v51;
    }
    else
    {
      v31 = v49 * v52;
      v32 = v50 * v52;
      v33 = v51 * v52;
    }
    v34 = v31 + v47;
    v35 = v32 + v48;
    v36 = v29 + v33;
    v37 = (float)((float)(v46 * v35) + (float)(v18 * v34)) + (float)(v11 * v36);
    v38 = (float)((float)(v45 * v35) + (float)(v17 * v34)) + (float)(v42 * v36);
    v39 = (float)((float)(v35 * v44) + (float)(v16 * v34)) + (float)(v36 * v43);
    *(float *)HIDWORD(a1) = v37;
    *(float *)(HIDWORD(a1) + 4) = v38;
    *(float *)(HIDWORD(a1) + 8) = v39;
    *(float *)HIDWORD(a1) = v37 + *(float *)(a1 + 60);
    *(float *)(HIDWORD(a1) + 4) = v38 + *(float *)(a1 + 64);
    *(float *)(HIDWORD(a1) + 8) = v39 + *(float *)(a1 + 68);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C21D0  (binary VA: 0x6c21d0)
// Original: sub_6C21D0
// ----------------------------------------------------------------------------
void sub_6C21D0(int a1, int a2, int a3, float *a4)
{
  int v4;
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm7_4
  float v8; // xmm4_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm7_4
  float v26; // xmm2_4
  float v27; // xmm2_4
  int v28;
  float v29; // xmm7_4
  int v30;
  float v31; // xmm3_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm7_4
  float v39; // xmm0_4
  float v40; // xmm4_4
  float v41; // xmm1_4
  float v42; // xmm5_4
  float v43; // xmm3_4
  float v44; // xmm0_4
  float v45; // xmm5_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  float v48; // xmm6_4
  typedef int64_t _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef uint8_t _g4_t_v60[64];
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef float _g4_t_v80;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v49)) > _g4_s0 ? (0u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v50)) > _g4_s1 ? (20u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v51)) > _g4_s2 ? (24u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v52)) > _g4_s3 ? (28u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v53)) > _g4_s4 ? (32u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v54)) > _g4_s5 ? (36u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v55)) > _g4_s6 ? (40u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v56)) > _g4_s7 ? (44u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v57)) > _g4_s8 ? (52u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v58)) > _g4_s9 ? (56u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v59)) > _g4_s10 ? (60u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v60)) > _g4_s11 ? (64u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v61)) > _g4_s12 ? (128u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v62)) > _g4_s13 ? (132u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v63)) > _g4_s14 ? (136u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (140u + sizeof(_g4_t_v64)) > _g4_s15 ? (140u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v65)) > _g4_s16 ? (144u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v66)) > _g4_s17 ? (148u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v67)) > _g4_s18 ? (152u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v68)) > _g4_s19 ? (156u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v69)) > _g4_s20 ? (160u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v70)) > _g4_s21 ? (164u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v71)) > _g4_s22 ? (168u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v72)) > _g4_s23 ? (172u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v73)) > _g4_s24 ? (176u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (180u + sizeof(_g4_t_v74)) > _g4_s25 ? (180u + sizeof(_g4_t_v74)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v75)) > _g4_s26 ? (184u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v76)) > _g4_s27 ? (188u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v77)) > _g4_s28 ? (192u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (196u + sizeof(_g4_t_v78)) > _g4_s29 ? (196u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v79)) > _g4_s30 ? (200u + sizeof(_g4_t_v79)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v80)) > _g4_s31 ? (204u + sizeof(_g4_t_v80)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 128u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 132u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 136u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 140u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 144u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 148u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 152u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 156u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 160u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 164u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 168u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 172u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 176u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 180u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 184u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 188u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 192u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 196u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 200u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 204u);

  v4 = *(uint32_t *)(a3 + 132);
  v56 = v4;
  if ( v4 != 0 && G4_VCALL<uint8_t>(v4, 12) != 0 )
  {
    memset(v60, 0, sizeof(v60));
    v5 = *(float *)(a3 + 88);
    v57 = 0.0;
    v58 = 0.0;
    v6 = -*(float *)(a3 + 84);
    v7 = -*(float *)(a3 + 80);
    *(float *)&v55 = -v5;
    v8 = *(float *)(a3 + 204);
    v59 = 0.0;
    v9 = *(float *)(a3 + 200);
    v10 = *(float *)(a3 + 208);
    v11 = (float)(v7 * v8) - (float)(v6 * v9);
    v54 = v6;
    v53 = v7;
    v12 = (float)((float)-v5 * v9) - (float)(v7 * v10);
    v13 = (float)(v6 * v10) - (float)((float)-v5 * v8);
    v14 = (float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v11 * v11);
    if ( v14 >= 0.00000001f )
    {
      if ( v14 != 0.0 )
      {
        v15 = 1.0 / fsqrt(v14);
        v16 = (float)((float)((float)(v14 * v15) * v15) + -3.0) * (float)(v15 * -0.5);
        v13 = v13 * v16;
        v12 = v12 * v16;
        v11 = v11 * v16;
      }
      v17 = (float)(v13 * v8) - (float)(v12 * v9);
      v18 = (float)(v12 * v10) - (float)(v11 * v8);
      v52 = v17;
      v51 = (float)(v11 * v9) - (float)(v13 * v10);
      v19 = (float)((float)(v51 * v51) + (float)(v18 * v18)) + (float)(v17 * v17);
      if ( v19 != 0.0 )
      {
        v20 = 1.0 / fsqrt(v19);
        v21 = (float)((float)((float)(v19 * v20) * v20) + -3.0) * (float)(v20 * -0.5);
        v18 = v18 * v21;
        v51 = v51 * v21;
        v52 = v21 * v17;
      }
      v22 = (float)(v52 * v9) - (float)(v18 * v10);
      v50 = (float)(v18 * v8) - (float)(v51 * v9);
      v23 = (float)(v51 * v10) - (float)(v52 * v8);
      v24 = (float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v50 * v50);
      if ( v24 != 0.0 )
      {
        v25 = 1.0 / fsqrt(v24);
        v26 = (float)((float)((float)(v24 * v25) * v25) + -3.0) * (float)(v25 * -0.5);
        v23 = v23 * v26;
        v22 = v22 * v26;
        v50 = v26 * v50;
      }
      v64 = v53;
      v76 = 0;
      v77 = 0;
      v66 = v55;
      v78 = 0;
      v27 = *(float *)(a3 + 32) * *(float *)(a1 + 12);
      v79 = *(uint32_t *)(a1 + 4);
      v28 = *(uint32_t *)(a3 + 8);
      v65 = v54;
      v70 = v28;
      v29 = *(float *)(a3 + 144);
      v30 = *(uint32_t *)(a3 + 12);
      v80 = v27;
      v71 = v30;
      v72 = *(uint32_t *)(a3 + 16);
      v31 = v18 * *(float *)(a3 + 140);
      v32 = v23 * *(float *)(a3 + 140);
      v61 = v9;
      v33 = (float)(v51 * v29) + v31;
      v34 = v52 * *(float *)(a3 + 148);
      v35 = (float)(v22 * v29) + v32;
      v36 = v50 * *(float *)(a3 + 148);
      v62 = v8;
      v63 = v10;
      v67 = v9;
      v68 = v8;
      v69 = v10;
      v73 = v33 + v34;
      v74 = v35 + v36;
      HIDWORD(v49) = (uint32_t)(uintptr_t)(&v57);
      LODWORD(v49) = (uint32_t)(uintptr_t)(&v61);
      v75 = (float)((float)(v8 * v29) + (float)(v9 * *(float *)(a3 + 140))) + (float)(v10 * *(float *)(a3 + 148));
      sub_6C1D80(v49);
      v37 = *(float *)(a3 + 32);
      v38 = *(float *)(a3 + 196) * v37;
      v39 = (float)((float)((float)(*(float *)(a3 + 12) - v58) * v62) + (float)((float)(*(float *)(a3 + 8) - v57) * v61))
          + (float)((float)(*(float *)(a3 + 16) - v59) * v63);
      v40 = v62 * v39;
      v41 = (float)((float)(*(float *)(a3 + 188) * v37) + v57) + (float)(v61 * v39);
      v42 = *(float *)(a3 + 192);
      v43 = (float)(v59 + v38) + (float)(v39 * v63);
      v44 = *(float *)(a3 + 220);
      v59 = v43;
      v45 = (float)((float)(v42 * v37) + v58) + v40;
      v58 = v45;
      v46 = (float)(v44 - (float)(0.01f * *(float *)(v56 + 4))) - *(float *)(a3 + 44);
      if ( v46 < 3.000001f )
      {
        if ( (float)(v46 - -0.2f) >= 0.000001f )
        {
          v47 = v46 * 0.33333334f;
          v48 = 2.0;
          if ( v47 < 0.05f )
            v48 = 40.0 * v47;
          v43 = fminf(
                  fabs((float)((float)(20.0 * v37) * v47) - (float)(v38 * v48)),
                  (float)((float)(0.25 * v43) + (float)(15.0 * v37)) * v48);
        }
      }
      else
      {
        v43 = (float)((float)(v46 - 3.0) / v37) + 0.25;
      }
      a4[1] = v41;
      a4[2] = v45;
      a4[3] = v43;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_6C2780  (binary VA: 0x6c2780)
// Original: sub_6C2780
// ----------------------------------------------------------------------------
int * sub_6C2780(int a1, int a2, int a3, float *a4)
{
  int *result;
  float v5; // xmm7_4
  float v6; // xmm7_4
  float v7; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm7_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm3_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm7_4
  float v26; // xmm7_4
  float v27; // xmm7_4
  int v28;
  float v29; // xmm4_4
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  float v33; // xmm6_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm3_4
  float v38; // xmm5_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm7_4
  float v45; // xmm0_4
  float v46; // xmm5_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm3_4
  float v51; // xmm5_4
  float v52; // xmm4_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  float v55; // xmm6_4
  float v56; // xmm0_4
  float v57; // xmm7_4
  float v58; // xmm0_4
  float v59; // xmm0_4
  float v60; // xmm1_4
  float v61; // xmm4_4
  float v62; // xmm0_4
  float v63; // xmm2_4
  float v64; // xmm3_4
  float v65; // xmm6_4
  float v66; // xmm5_4
  float v67; // xmm4_4
  float v68; // xmm7_4
  float v69; // xmm4_4
  int v70;
  float v71; // xmm4_4
  float v72; // xmm7_4
  float v73; // xmm7_4
  float v74; // xmm3_4
  float v75; // xmm3_4
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef uint32_t _g4_t_v107[16];
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef int _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128[55];
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (4u + sizeof(_g4_t_v76)) > _g4_s0 ? (4u + sizeof(_g4_t_v76)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v77)) > _g4_s1 ? (8u + sizeof(_g4_t_v77)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v78)) > _g4_s2 ? (12u + sizeof(_g4_t_v78)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v79)) > _g4_s3 ? (16u + sizeof(_g4_t_v79)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v80)) > _g4_s4 ? (20u + sizeof(_g4_t_v80)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v81)) > _g4_s5 ? (24u + sizeof(_g4_t_v81)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v82)) > _g4_s6 ? (24u + sizeof(_g4_t_v82)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v83)) > _g4_s7 ? (28u + sizeof(_g4_t_v83)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v84)) > _g4_s8 ? (32u + sizeof(_g4_t_v84)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v85)) > _g4_s9 ? (36u + sizeof(_g4_t_v85)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v86)) > _g4_s10 ? (36u + sizeof(_g4_t_v86)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v87)) > _g4_s11 ? (40u + sizeof(_g4_t_v87)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v88)) > _g4_s12 ? (40u + sizeof(_g4_t_v88)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v89)) > _g4_s13 ? (44u + sizeof(_g4_t_v89)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v90)) > _g4_s14 ? (44u + sizeof(_g4_t_v90)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v91)) > _g4_s15 ? (44u + sizeof(_g4_t_v91)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v92)) > _g4_s16 ? (44u + sizeof(_g4_t_v92)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v93)) > _g4_s17 ? (48u + sizeof(_g4_t_v93)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v94)) > _g4_s18 ? (48u + sizeof(_g4_t_v94)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v95)) > _g4_s19 ? (48u + sizeof(_g4_t_v95)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v96)) > _g4_s20 ? (52u + sizeof(_g4_t_v96)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v97)) > _g4_s21 ? (52u + sizeof(_g4_t_v97)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v98)) > _g4_s22 ? (52u + sizeof(_g4_t_v98)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v99)) > _g4_s23 ? (52u + sizeof(_g4_t_v99)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v100)) > _g4_s24 ? (56u + sizeof(_g4_t_v100)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v101)) > _g4_s25 ? (60u + sizeof(_g4_t_v101)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v102)) > _g4_s26 ? (60u + sizeof(_g4_t_v102)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v103)) > _g4_s27 ? (60u + sizeof(_g4_t_v103)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v104)) > _g4_s28 ? (64u + sizeof(_g4_t_v104)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v105)) > _g4_s29 ? (68u + sizeof(_g4_t_v105)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v106)) > _g4_s30 ? (72u + sizeof(_g4_t_v106)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v107)) > _g4_s31 ? (80u + sizeof(_g4_t_v107)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v108)) > _g4_s32 ? (144u + sizeof(_g4_t_v108)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v109)) > _g4_s33 ? (148u + sizeof(_g4_t_v109)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v110)) > _g4_s34 ? (152u + sizeof(_g4_t_v110)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v111)) > _g4_s35 ? (156u + sizeof(_g4_t_v111)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v112)) > _g4_s36 ? (160u + sizeof(_g4_t_v112)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v113)) > _g4_s37 ? (164u + sizeof(_g4_t_v113)) : _g4_s37,
    _g4_s39 = (168u + sizeof(_g4_t_v114)) > _g4_s38 ? (168u + sizeof(_g4_t_v114)) : _g4_s38,
    _g4_s40 = (172u + sizeof(_g4_t_v115)) > _g4_s39 ? (172u + sizeof(_g4_t_v115)) : _g4_s39,
    _g4_s41 = (176u + sizeof(_g4_t_v116)) > _g4_s40 ? (176u + sizeof(_g4_t_v116)) : _g4_s40,
    _g4_s42 = (180u + sizeof(_g4_t_v117)) > _g4_s41 ? (180u + sizeof(_g4_t_v117)) : _g4_s41,
    _g4_s43 = (184u + sizeof(_g4_t_v118)) > _g4_s42 ? (184u + sizeof(_g4_t_v118)) : _g4_s42,
    _g4_s44 = (188u + sizeof(_g4_t_v119)) > _g4_s43 ? (188u + sizeof(_g4_t_v119)) : _g4_s43,
    _g4_s45 = (192u + sizeof(_g4_t_v120)) > _g4_s44 ? (192u + sizeof(_g4_t_v120)) : _g4_s44,
    _g4_s46 = (196u + sizeof(_g4_t_v121)) > _g4_s45 ? (196u + sizeof(_g4_t_v121)) : _g4_s45,
    _g4_s47 = (200u + sizeof(_g4_t_v122)) > _g4_s46 ? (200u + sizeof(_g4_t_v122)) : _g4_s46,
    _g4_s48 = (204u + sizeof(_g4_t_v123)) > _g4_s47 ? (204u + sizeof(_g4_t_v123)) : _g4_s47,
    _g4_s49 = (208u + sizeof(_g4_t_v124)) > _g4_s48 ? (208u + sizeof(_g4_t_v124)) : _g4_s48,
    _g4_s50 = (212u + sizeof(_g4_t_v125)) > _g4_s49 ? (212u + sizeof(_g4_t_v125)) : _g4_s49,
    _g4_s51 = (216u + sizeof(_g4_t_v126)) > _g4_s50 ? (216u + sizeof(_g4_t_v126)) : _g4_s50,
    _g4_s52 = (220u + sizeof(_g4_t_v127)) > _g4_s51 ? (220u + sizeof(_g4_t_v127)) : _g4_s51,
    _g4_s53 = (224u + sizeof(_g4_t_v128)) > _g4_s52 ? (224u + sizeof(_g4_t_v128)) : _g4_s52
  };
  alignas(16) uint8_t _g4_sf[_g4_s53];
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 4u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 8u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 12u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 16u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 20u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 24u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 24u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 36u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 36u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 40u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 44u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 44u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 44u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 44u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 48u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 48u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 48u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 52u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 52u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 52u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 56u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 60u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 60u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 60u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 64u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 68u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 72u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 80u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 144u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 148u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 152u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 156u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 160u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 164u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 168u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 172u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 176u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 180u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 184u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 188u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 192u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 196u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 200u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 204u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 208u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 212u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 216u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 220u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 224u);

  v100 = *(uint32_t *)(a3 + 132);
  sub_6634F0(v128, a3 + 48, a3 + 64, a3 + 8, a3 + 20);
  result = (int *)v100;
  if ( v100 != 0 )
  {
    result = (int *)G4_VCALL<int>(v100, 12);
    if ( (uint8_t)(uintptr_t)(result) != 0 )
    {
      memset(v107, 0, sizeof(v107));
      result = (int *)(&dword_1C7C1B0);
      v104 = 0.0;
      v5 = *(float *)(a3 + 84);
      v105 = 0.0;
      v6 = -v5;
      v7 = -*(float *)(a3 + 80);
      v8 = *(float *)(a3 + 204);
      v9 = *(float *)(a3 + 200);
      v106 = 0.0;
      v123 = 0;
      v124 = 0;
      v10 = *(float *)(a3 + 88);
      v125 = 0;
      v107[15] = 1065353216;
      v11 = (float)(v7 * v8) - (float)(v6 * v9);
      v12 = *(float *)(a3 + 208);
      v111 = v7;
      v112 = v6;
      v113 = -v10;
      v13 = (float)((float)-v10 * v9) - (float)(v7 * v12);
      v14 = (float)(v6 * v12) - (float)((float)-v10 * v8);
      v15 = (float)((float)(v13 * v13) + (float)(v14 * v14)) + (float)(v11 * v11);
      if ( v15 >= 0.00000001f )
      {
        if ( v15 != 0.0 )
        {
          v16 = 1.0 / fsqrt(v15);
          v17 = (float)((float)((float)(v15 * v16) * v16) + -3.0) * (float)(v16 * -0.5);
          v14 = v14 * v17;
          v13 = v13 * v17;
          v11 = v11 * v17;
        }
        v18 = (float)(v14 * v8) - (float)(v13 * v9);
        v19 = (float)(v11 * v9) - (float)(v14 * v12);
        v20 = (float)(v13 * v12) - (float)(v11 * v8);
        v21 = (float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v18 * v18);
        if ( v21 != 0.0 )
        {
          v22 = 1.0 / fsqrt(v21);
          v23 = (float)((float)((float)(v21 * v22) * v22) + -3.0) * (float)(v22 * -0.5);
          v20 = v20 * v23;
          v19 = v19 * v23;
          v18 = v18 * v23;
        }
        v93 = (float)(v20 * v8) - (float)(v19 * v9);
        v96 = (float)(v18 * v9) - (float)(v20 * v12);
        v89 = (float)(v19 * v12) - (float)(v18 * v8);
        v24 = (float)((float)(v89 * v89) + (float)(v96 * v96)) + (float)(v93 * v93);
        if ( v24 != 0.0 )
        {
          v25 = fsqrt(v24);
          v26 = (float)((float)(1.0 / v25) * -0.5)
              * (float)((float)((float)((float)((float)((float)(v89 * v89)
                                                      + (float)((float)((float)(v18 * v9) - (float)(v20 * v12))
                                                              * (float)((float)(v18 * v9) - (float)(v20 * v12))))
                                              + (float)(v93 * v93))
                                      * (float)(1.0 / v25))
                              * (float)(1.0 / v25))
                      + -3.0);
          v89 = v89 * v26;
          v96 = v96 * v26;
          v93 = v93 * v26;
        }
        *(float *)&v107[4] = v89;
        *(float *)&v107[6] = v93;
        v27 = *(float *)(a3 + 12);
        v28 = *(uint32_t *)(a1 + 4);
        *(float *)v107 = v20;
        v126 = v28;
        v29 = v20 * *(float *)(a3 + 8);
        *(float *)&v107[1] = v19;
        *(float *)&v107[5] = v96;
        v117 = *(uint32_t *)(a3 + 8);
        v30 = *(float *)(a3 + 16);
        *(float *)&v107[2] = v18;
        v119 = v30;
        v31 = (float)((float)(v19 * v27) + v29) + (float)(v18 * v30);
        v32 = v89 * *(float *)(a3 + 8);
        v118 = v27;
        *(float *)&v107[8] = v9;
        *(float *)&v107[9] = v8;
        v33 = (float)(v96 * v27) + v32;
        v34 = v93 * *(float *)(a3 + 16);
        v120 = v31;
        *(float *)&v107[10] = v12;
        v108 = v9;
        v109 = v8;
        v110 = v12;
        v114 = v9;
        v115 = v8;
        v116 = v12;
        v121 = v33 + v34;
        v122 = (float)((float)(v8 * v27) + (float)(v9 * *(float *)(a3 + 8))) + (float)(v12 * *(float *)(a3 + 16));
        v127 = *(float *)(a3 + 32) * *(float *)(a1 + 12);
        sub_6C1D80(&v108, &v104);
        v85 = v104;
        v84 = *(float *)(a3 + 12);
        v83 = *(float *)(a3 + 16);
        v87 = *(float *)(a3 + 8);
        v81 = *(float *)(a3 + 188);
        v35 = (float)((float)((float)(v84 - v105) * v109) + (float)((float)(v87 - v104) * v108))
            + (float)((float)(v83 - v106) * v110);
        v90 = v108 * v35;
        v94 = *(float *)(a3 + 32);
        v79 = *(float *)(a3 + 84);
        v36 = (float)((float)(*(float *)(a3 + 196) * v94) + v106) + (float)(v35 * v110);
        v37 = (float)((float)(v94 * *(float *)(a3 + 192)) + v105) + (float)(v109 * v35);
        v38 = *(float *)(a3 + 80);
        v80 = *(float *)(a3 + 88);
        v97 = -v80;
        v106 = v36;
        v105 = v37;
        v78 = v38;
        v101 = -v79;
        v39 = -v38;
        v40 = (float)((float)(v101 * v101) + (float)(v39 * v39)) + (float)((float)-v80 * (float)-v80);
        if ( v40 != 0.0 )
        {
          v41 = 1.0 / fsqrt(v40);
          v42 = (float)((float)((float)(v40 * v41) * v41) + -3.0) * (float)(v41 * -0.5);
          v39 = v39 * v42;
          v101 = v101 * v42;
          v97 = v42 * (float)-v80;
        }
        v43 = cos(*(float *)(a3 + 212)) * *(float *)(a3 + 216);
        v44 = fminf(fmaxf(0.0, v43), 1.0);
        v45 = (float)((float)((float)(*(float *)(v100 + 8) + -1.0) * v44) + 1.0) * *(float *)(v100 + 4);
        v91 = (float)(v90 + v85) + (float)((float)((float)(v39 * v45) + v81) * v94);
        v104 = v91;
        v102 = v37 + (float)((float)(v101 * v94) * v45);
        v105 = v102;
        v98 = v36 + (float)(v45 * (float)(v97 * v94));
        v46 = *(float *)(v100 + 24) + -1.0;
        v47 = fminf(fmaxf(-v43, 0.0), 1.0) * (float)(*(float *)(v100 + 20) + -1.0);
        v48 = *(float *)(v100 + 36);
        v106 = v98;
        v86 = v48;
        v49 = v47 + 1.0;
        v50 = -v128[45];
        v51 = (float)(v46 * v44) + 1.0;
        v52 = -v128[44];
        v82 = *(float *)(v100 + 40);
        v53 = -v128[46];
        v54 = (float)((float)(v50 * v50) + (float)(v52 * v52)) + (float)(v53 * v53);
        if ( v54 == 0.0 )
        {
          v77 = -v128[46];
          v57 = -v128[44];
          v76 = -v128[45];
        }
        else
        {
          v55 = fsqrt(v54);
          v56 = (float)((float)((float)(v54 * (float)(1.0 / v55)) * (float)(1.0 / v55)) + -3.0)
              * (float)((float)(1.0 / v55) * -0.5);
          v57 = v52 * v56;
          v76 = v50 * v56;
          v77 = v56 * v53;
        }
        v58 = (float)((float)(v84 * v84) + (float)(v87 * v87)) + (float)(v83 * v83);
        v88 = *(float *)(v100 + 44);
        v59 = v58 * *(float *)(v100 + 28);
        v108 = (float)(v94 * *(float *)(v100 + 32)) * (float)((float)(v57 * v59) + (float)(v52 * v88));
        v109 = (float)((float)(v82 * v94) * v49) * (float)((float)(v76 * v59) + (float)(v50 * v88));
        v110 = (float)((float)(v86 * v94) * v51) * (float)((float)(v59 * v77) + (float)(v53 * v88));
        if ( fabs(v108) > fabs(v128[44]) )
          v108 = (float)-v128[44] * 0.95f;
        if ( fabs(v109) > fabs(v128[45]) )
          v109 = (float)-v128[45] * 0.95f;
        if ( fabs(v110) > fabs(v128[46]) )
          v110 = (float)-v128[46] * 0.95f;
        v60 = (float)((float)((float)(v79 * v109) + (float)(*(float *)(a3 + 68) * v108))
                    + (float)(*(float *)(a3 + 100) * v110))
            + v102;
        v61 = *(float *)(a3 + 204) * v60;
        v95 = *(float *)(a3 + 204);
        v62 = (float)((float)((float)(v80 * v109) + (float)(*(float *)(a3 + 72) * v108))
                    + (float)(*(float *)(a3 + 104) * v110))
            + v98;
        v99 = *(float *)(a3 + 200);
        v63 = (float)((float)((float)(v109 * v78) + (float)(v108 * *(float *)(a3 + 64)))
                    + (float)(v110 * *(float *)(a3 + 96)))
            + v91;
        v92 = *(float *)(a3 + 208);
        v105 = v60;
        v106 = v62;
        v104 = v63;
        v64 = (float)((float)(v92 * v62) + v61) + (float)(v99 * v63);
        v65 = v63 - (float)(v99 * v64);
        v66 = v60 - (float)(v95 * v64);
        v103 = v62 - (float)(v92 * v64);
        v67 = (float)((float)(v66 * v66) + (float)(v65 * v65)) + (float)(v103 * v103);
        if ( v67 != 0.0 )
        {
          v68 = 1.0 / fsqrt(v67);
          v69 = (float)((float)((float)(v67 * v68) * v68) + -3.0) * (float)(v68 * -0.5);
          v65 = v65 * v69;
          v66 = v66 * v69;
          v103 = v69 * v103;
        }
        v70 = v100;
        result = (int *)(&dword_1C7C1B0);
        v71 = (float)((float)(v66 * v60) + (float)(v65 * v63)) + (float)(v103 * v62);
        v72 = -*(float *)(v100 + 16);
        if ( v72 > v64 )
        {
          v73 = v72 - v64;
          v70 = v100;
          v63 = v63 + (float)(v99 * v73);
          v60 = v60 + (float)(v95 * v73);
          v62 = v62 + (float)(v73 * v92);
        }
        v74 = *(float *)(v70 + 12);
        if ( v71 > v74 )
        {
          v75 = v74 - v71;
          v63 = v63 + (float)(v65 * v75);
          v60 = v60 + (float)(v66 * v75);
          v62 = v62 + (float)(v75 * v103);
        }
        a4[1] = v63;
        a4[2] = v60;
        a4[3] = v62;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C3410  (binary VA: 0x6c3410)
// Original: sub_6C3410
// ----------------------------------------------------------------------------
int * sub_6C3410(int a1, int a2, int a3, float *a4)
{
  int *result;
  int v5;
  float v6; // xmm7_4
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15; // xmm7_4
  float v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm3_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm7_4
  float v27; // xmm7_4
  float v28; // xmm7_4
  int v29;
  float v30; // xmm4_4
  float v31; // xmm6_4
  float v32; // xmm5_4
  float v33; // xmm3_4
  float v34; // xmm6_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm3_4
  float v42; // xmm7_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm5_4
  __m128 v48;
  float v49; // xmm2_4
  float v50; // xmm6_4
  float v51; // xmm3_4
  float v52; // xmm5_4
  __m128 v53;
  __m128 v54;
  float v55; // xmm0_4
  float v56; // xmm4_4
  float v57; // xmm2_4
  float v58; // xmm0_4
  float v59; // xmm6_4
  float v60; // xmm0_4
  float v61; // xmm7_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  float v65; // xmm4_4
  float v66; // xmm0_4
  float v67; // xmm2_4
  float v68; // xmm3_4
  float v69; // xmm6_4
  float v70; // xmm5_4
  float v71; // xmm4_4
  float v72; // xmm7_4
  float v73; // xmm4_4
  float *v74;
  float v75; // xmm4_4
  float v76; // xmm7_4
  float v77; // xmm7_4
  float v78; // xmm3_4
  float v79; // xmm3_4
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float *_g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef uint32_t _g4_t_v114[16];
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef int _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135[55];
  enum : size_t {
    _g4_s0 = 576u,
    _g4_s1 = (4u + sizeof(_g4_t_v80)) > _g4_s0 ? (4u + sizeof(_g4_t_v80)) : _g4_s0,
    _g4_s2 = (68u + sizeof(_g4_t_v81)) > _g4_s1 ? (68u + sizeof(_g4_t_v81)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_v82)) > _g4_s2 ? (72u + sizeof(_g4_t_v82)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v83)) > _g4_s3 ? (76u + sizeof(_g4_t_v83)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v84)) > _g4_s4 ? (80u + sizeof(_g4_t_v84)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v85)) > _g4_s5 ? (80u + sizeof(_g4_t_v85)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v86)) > _g4_s6 ? (84u + sizeof(_g4_t_v86)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v87)) > _g4_s7 ? (84u + sizeof(_g4_t_v87)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v88)) > _g4_s8 ? (88u + sizeof(_g4_t_v88)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v89)) > _g4_s9 ? (92u + sizeof(_g4_t_v89)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v90)) > _g4_s10 ? (96u + sizeof(_g4_t_v90)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v91)) > _g4_s11 ? (96u + sizeof(_g4_t_v91)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v92)) > _g4_s12 ? (100u + sizeof(_g4_t_v92)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v93)) > _g4_s13 ? (100u + sizeof(_g4_t_v93)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v94)) > _g4_s14 ? (104u + sizeof(_g4_t_v94)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v95)) > _g4_s15 ? (104u + sizeof(_g4_t_v95)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v96)) > _g4_s16 ? (108u + sizeof(_g4_t_v96)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v97)) > _g4_s17 ? (108u + sizeof(_g4_t_v97)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v98)) > _g4_s18 ? (108u + sizeof(_g4_t_v98)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v99)) > _g4_s19 ? (108u + sizeof(_g4_t_v99)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v100)) > _g4_s20 ? (112u + sizeof(_g4_t_v100)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v101)) > _g4_s21 ? (112u + sizeof(_g4_t_v101)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v102)) > _g4_s22 ? (112u + sizeof(_g4_t_v102)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v103)) > _g4_s23 ? (112u + sizeof(_g4_t_v103)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v104)) > _g4_s24 ? (116u + sizeof(_g4_t_v104)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v105)) > _g4_s25 ? (116u + sizeof(_g4_t_v105)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v106)) > _g4_s26 ? (116u + sizeof(_g4_t_v106)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v107)) > _g4_s27 ? (120u + sizeof(_g4_t_v107)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v108)) > _g4_s28 ? (120u + sizeof(_g4_t_v108)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v109)) > _g4_s29 ? (120u + sizeof(_g4_t_v109)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v110)) > _g4_s30 ? (124u + sizeof(_g4_t_v110)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v111)) > _g4_s31 ? (128u + sizeof(_g4_t_v111)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v112)) > _g4_s32 ? (132u + sizeof(_g4_t_v112)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v113)) > _g4_s33 ? (136u + sizeof(_g4_t_v113)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v114)) > _g4_s34 ? (144u + sizeof(_g4_t_v114)) : _g4_s34,
    _g4_s36 = (208u + sizeof(_g4_t_v115)) > _g4_s35 ? (208u + sizeof(_g4_t_v115)) : _g4_s35,
    _g4_s37 = (212u + sizeof(_g4_t_v116)) > _g4_s36 ? (212u + sizeof(_g4_t_v116)) : _g4_s36,
    _g4_s38 = (216u + sizeof(_g4_t_v117)) > _g4_s37 ? (216u + sizeof(_g4_t_v117)) : _g4_s37,
    _g4_s39 = (220u + sizeof(_g4_t_v118)) > _g4_s38 ? (220u + sizeof(_g4_t_v118)) : _g4_s38,
    _g4_s40 = (224u + sizeof(_g4_t_v119)) > _g4_s39 ? (224u + sizeof(_g4_t_v119)) : _g4_s39,
    _g4_s41 = (228u + sizeof(_g4_t_v120)) > _g4_s40 ? (228u + sizeof(_g4_t_v120)) : _g4_s40,
    _g4_s42 = (232u + sizeof(_g4_t_v121)) > _g4_s41 ? (232u + sizeof(_g4_t_v121)) : _g4_s41,
    _g4_s43 = (236u + sizeof(_g4_t_v122)) > _g4_s42 ? (236u + sizeof(_g4_t_v122)) : _g4_s42,
    _g4_s44 = (240u + sizeof(_g4_t_v123)) > _g4_s43 ? (240u + sizeof(_g4_t_v123)) : _g4_s43,
    _g4_s45 = (244u + sizeof(_g4_t_v124)) > _g4_s44 ? (244u + sizeof(_g4_t_v124)) : _g4_s44,
    _g4_s46 = (248u + sizeof(_g4_t_v125)) > _g4_s45 ? (248u + sizeof(_g4_t_v125)) : _g4_s45,
    _g4_s47 = (252u + sizeof(_g4_t_v126)) > _g4_s46 ? (252u + sizeof(_g4_t_v126)) : _g4_s46,
    _g4_s48 = (256u + sizeof(_g4_t_v127)) > _g4_s47 ? (256u + sizeof(_g4_t_v127)) : _g4_s47,
    _g4_s49 = (260u + sizeof(_g4_t_v128)) > _g4_s48 ? (260u + sizeof(_g4_t_v128)) : _g4_s48,
    _g4_s50 = (264u + sizeof(_g4_t_v129)) > _g4_s49 ? (264u + sizeof(_g4_t_v129)) : _g4_s49,
    _g4_s51 = (268u + sizeof(_g4_t_v130)) > _g4_s50 ? (268u + sizeof(_g4_t_v130)) : _g4_s50,
    _g4_s52 = (272u + sizeof(_g4_t_v131)) > _g4_s51 ? (272u + sizeof(_g4_t_v131)) : _g4_s51,
    _g4_s53 = (276u + sizeof(_g4_t_v132)) > _g4_s52 ? (276u + sizeof(_g4_t_v132)) : _g4_s52,
    _g4_s54 = (280u + sizeof(_g4_t_v133)) > _g4_s53 ? (280u + sizeof(_g4_t_v133)) : _g4_s53,
    _g4_s55 = (284u + sizeof(_g4_t_v134)) > _g4_s54 ? (284u + sizeof(_g4_t_v134)) : _g4_s54,
    _g4_s56 = (288u + sizeof(_g4_t_v135)) > _g4_s55 ? (288u + sizeof(_g4_t_v135)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 4u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 68u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 72u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 76u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 80u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 80u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 84u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 84u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 88u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 92u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 96u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 96u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 100u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 100u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 104u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 104u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 108u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 108u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 108u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 108u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 112u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 112u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 112u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 112u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 116u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 116u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 116u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 120u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 120u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 120u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 124u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 128u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 132u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 136u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 144u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 208u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 212u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 216u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 220u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 224u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 228u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 232u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 236u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 240u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 244u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 248u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 252u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 256u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 260u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 264u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 268u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 272u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 276u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 280u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 284u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 288u);

  v110 = *(float **)(a3 + 132);
  result = (int *)sub_6634F0(v135, a3 + 48, a3 + 64, a3 + 8, a3 + 20);
  if ( v110 != nullptr )
  {
    result = (int *)G4_VCALL<int>(v110, 12);
    if ( (uint8_t)(uintptr_t)(result) != 0 )
    {
      *(float *)(a3 + 212) = 3.1415927f - *(float *)(a3 + 212);
      sub_662870(a3 + 212, -1068953637);
      if ( *(uint8_t *)(a2 + 20) != 0 )
      {
        v5 = *(uint32_t *)(*(uint32_t *)(a3 + 132) + 4);
        *(uint32_t *)(a1 + 28) = 0;
        *(uint32_t *)(a1 + 24) = v5;
        *(uint32_t *)(a1 + 20) = v5;
        *(uint32_t *)(a1 + 16) = v5;
        *(uint32_t *)(a1 + 32) = 0;
        *(uint8_t *)(a2 + 20) = 0;
      }
      memset(v114, 0, sizeof(v114));
      result = (int *)(&dword_1C7C1B0);
      v111 = 0.0;
      v6 = *(float *)(a3 + 84);
      v112 = 0.0;
      v7 = -v6;
      v8 = -*(float *)(a3 + 80);
      v9 = *(float *)(a3 + 204);
      v10 = *(float *)(a3 + 200);
      v113 = 0.0;
      v130 = 0;
      v131 = 0;
      v11 = *(float *)(a3 + 88);
      v132 = 0;
      v114[15] = 1065353216;
      v12 = (float)(v8 * v9) - (float)(v7 * v10);
      v13 = *(float *)(a3 + 208);
      v118 = v8;
      v119 = v7;
      v120 = -v11;
      v14 = (float)((float)-v11 * v10) - (float)(v8 * v13);
      v15 = (float)(v7 * v13) - (float)((float)-v11 * v9);
      v16 = (float)((float)(v14 * v14) + (float)(v15 * v15)) + (float)(v12 * v12);
      if ( v16 >= 0.00000001f )
      {
        if ( v16 != 0.0 )
        {
          v17 = 1.0 / fsqrt(v16);
          v18 = (float)((float)((float)(v16 * v17) * v17) + -3.0) * (float)(v17 * -0.5);
          v15 = v15 * v18;
          v14 = v14 * v18;
          v12 = v12 * v18;
        }
        v19 = (float)(v15 * v9) - (float)(v14 * v10);
        v20 = (float)(v12 * v10) - (float)(v15 * v13);
        v21 = (float)(v14 * v13) - (float)(v12 * v9);
        v22 = (float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v19 * v19);
        if ( v22 != 0.0 )
        {
          v23 = 1.0 / fsqrt(v22);
          v24 = (float)((float)((float)(v22 * v23) * v23) + -3.0) * (float)(v23 * -0.5);
          v21 = v21 * v24;
          v20 = v20 * v24;
          v19 = v19 * v24;
        }
        v96 = (float)(v21 * v9) - (float)(v20 * v10);
        v104 = (float)(v19 * v10) - (float)(v21 * v13);
        v100 = (float)(v20 * v13) - (float)(v19 * v9);
        v25 = (float)((float)(v100 * v100) + (float)(v104 * v104)) + (float)(v96 * v96);
        if ( v25 != 0.0 )
        {
          v26 = fsqrt(v25);
          v27 = (float)((float)(1.0 / v26) * -0.5)
              * (float)((float)((float)((float)((float)((float)(v100 * v100)
                                                      + (float)((float)((float)(v19 * v10) - (float)(v21 * v13))
                                                              * (float)((float)(v19 * v10) - (float)(v21 * v13))))
                                              + (float)(v96 * v96))
                                      * (float)(1.0 / v26))
                              * (float)(1.0 / v26))
                      + -3.0);
          v100 = v100 * v27;
          v104 = v104 * v27;
          v96 = v96 * v27;
        }
        *(float *)&v114[4] = v100;
        *(float *)&v114[6] = v96;
        v28 = *(float *)(a3 + 12);
        v29 = *(uint32_t *)(a1 + 4);
        *(float *)v114 = v21;
        v133 = v29;
        v30 = v21 * *(float *)(a3 + 8);
        *(float *)&v114[1] = v20;
        *(float *)&v114[5] = v104;
        v124 = *(uint32_t *)(a3 + 8);
        v31 = *(float *)(a3 + 16);
        *(float *)&v114[2] = v19;
        v126 = v31;
        v32 = (float)((float)(v20 * v28) + v30) + (float)(v19 * v31);
        v33 = v100 * *(float *)(a3 + 8);
        v125 = v28;
        *(float *)&v114[8] = v10;
        *(float *)&v114[9] = v9;
        v34 = (float)(v104 * v28) + v33;
        v35 = v96 * *(float *)(a3 + 16);
        v127 = v32;
        *(float *)&v114[10] = v13;
        v115 = v10;
        v116 = v9;
        v117 = v13;
        v121 = v10;
        v122 = v9;
        v123 = v13;
        v128 = v34 + v35;
        v36 = (float)((float)(v9 * v28) + (float)(v10 * *(float *)(a3 + 8))) + (float)(v13 * *(float *)(a3 + 16));
        v37 = *(float *)(a3 + 32) * *(float *)(a1 + 12);
        v129 = v36;
        v134 = v37;
        sub_6C1D80(&v115, &v111);
        v88 = *(float *)(a3 + 16);
        v92 = v111;
        v90 = v112;
        v89 = *(float *)(a3 + 12);
        v94 = *(float *)(a3 + 8);
        v84 = *(float *)(a3 + 192);
        v86 = *(float *)(a3 + 188);
        v38 = (float)((float)((float)(v89 - v112) * v116) + (float)((float)(v94 - v111) * v115))
            + (float)((float)(v88 - v113) * v117);
        v39 = *(float *)(a3 + 84);
        v107 = v115 * v38;
        v82 = v39;
        v97 = v116 * v38;
        v105 = *(float *)(a3 + 32);
        v81 = *(float *)(a3 + 80);
        v40 = (float)((float)(*(float *)(a3 + 196) * v105) + v113) + (float)(v38 * v117);
        v83 = *(float *)(a3 + 88);
        v113 = v40;
        v101 = -v83;
        v41 = -v39;
        v42 = -v81;
        v43 = (float)((float)(v41 * v41) + (float)(v42 * v42)) + (float)((float)-v83 * (float)-v83);
        if ( v43 != 0.0 )
        {
          v44 = 1.0 / fsqrt(v43);
          v45 = (float)((float)((float)(v43 * v44) * v44) + -3.0) * (float)(v44 * -0.5);
          v42 = v42 * v45;
          v41 = v41 * v45;
          v101 = v45 * (float)-v83;
        }
        v46 = cos(*(float *)(a3 + 212)) * *(float *)(a3 + 216);
        v47 = fminf(fmaxf(0.0, v46), 1.0);
g4_m128_lane<float>(v48, 0) = fminf(fmaxf(-v46, 0.0), 1.0);
        v49 = (float)((float)(v110[7] + -1.0) *g4_m128_lane<float>(v48, 0)) + 1.0;
        if ( v47 < 0.000001f )
          v50 = (float)((float)(v110[7] + -1.0) *g4_m128_lane<float>(v48, 0)) + 1.0;
        else
          v50 = (float)((float)(v110[3] + -1.0) * v47) + 1.0;
        v80 = v50 * v110[2];
        v108 = (float)(v107 + v92) + (float)((float)((float)(v42 * v80) + v86) * v105);
        v111 = v108;
        v98 = (float)(v97 + v90) + (float)((float)((float)(v41 * v80) + v84) * v105);
        v112 = v98;
        v51 = (float)((float)(v101 * v105) * v80) + v40;
g4_m128_raw(v53) = 0xBF800000;
g4_m128_lane<float>(v53, 0) = v110[8] + -1.0;
        v113 = v51;
g4_m128_lane<float>(v53, 0) =g4_m128_lane<float>(v53, 0) * v47;
        v52 = -v135[44];
g4_m128_lane<float>(v53, 0) =g4_m128_lane<float>(v53, 0) + 1.0;
        v54 = _mm_cmple_ss(g4_m128_u32(0x358637BDu), v48);
        LODWORD(v55) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v54, v53), 0)) | LODWORD(v49) &g4_m128_lane<int32_t>(v54, 0);
        v56 = -v135[45];
        v102 = v55;
        v93 = v110[11];
        v91 = v110[12];
        v57 = -v135[46];
        v58 = (float)((float)(v56 * v56) + (float)(v52 * v52)) + (float)(v57 * v57);
        if ( v58 == 0.0 )
        {
          v85 = -v135[46];
          v61 = -v135[44];
          v87 = -v135[45];
        }
        else
        {
          v59 = fsqrt(v58);
          v60 = (float)((float)((float)(v58 * (float)(1.0 / v59)) * (float)(1.0 / v59)) + -3.0)
              * (float)((float)(1.0 / v59) * -0.5);
          v61 = v52 * v60;
          v87 = v56 * v60;
          v85 = v60 * v57;
        }
        v62 = (float)((float)(v89 * v89) + (float)(v94 * v94)) + (float)(v88 * v88);
        v95 = v110[13];
        v63 = v62 * v110[9];
        v115 = (float)(v105 * v110[10]) * (float)((float)(v61 * v63) + (float)(v52 * v95));
        v116 = (float)((float)(v91 * v105) *g4_m128_lane<float>(v53, 0)) * (float)((float)(v87 * v63) + (float)(v56 * v95));
        v117 = (float)((float)(v93 * v105) * v102) * (float)((float)(v63 * v85) + (float)(v57 * v95));
        if ( fabs(v115) > fabs(v135[44]) )
          v115 = (float)-v135[44] * 0.95f;
        if ( fabs(v116) > fabs(v135[45]) )
          v116 = (float)-v135[45] * 0.95f;
        if ( fabs(v117) > fabs(v135[46]) )
          v117 = (float)-v135[46] * 0.95f;
        v64 = (float)((float)((float)(v82 * v116) + (float)(*(float *)(a3 + 68) * v115))
                    + (float)(*(float *)(a3 + 100) * v117))
            + v98;
        v65 = *(float *)(a3 + 204);
        v103 = *(float *)(a3 + 208);
        v99 = v65;
        v66 = (float)((float)((float)(v83 * v116) + (float)(*(float *)(a3 + 72) * v115))
                    + (float)(*(float *)(a3 + 104) * v117))
            + v51;
        v67 = (float)((float)((float)(v116 * v81) + (float)(v115 * *(float *)(a3 + 64)))
                    + (float)(v117 * *(float *)(a3 + 96)))
            + v108;
        v109 = *(float *)(a3 + 200);
        v112 = v64;
        v111 = v67;
        v113 = v66;
        v68 = (float)((float)(v109 * v67) + (float)(v65 * v64)) + (float)(v103 * v66);
        v69 = v67 - (float)(v109 * v68);
        v70 = v64 - (float)(v65 * v68);
        v106 = v66 - (float)(v103 * v68);
        v71 = (float)((float)(v70 * v70) + (float)(v69 * v69)) + (float)(v106 * v106);
        if ( v71 != 0.0 )
        {
          v72 = 1.0 / fsqrt(v71);
          v73 = (float)((float)((float)(v71 * v72) * v72) + -3.0) * (float)(v72 * -0.5);
          v69 = v69 * v73;
          v70 = v70 * v73;
          v106 = v73 * v106;
        }
        v74 = v110;
        result = (int *)(&dword_1C7C1B0);
        v75 = (float)((float)(v70 * v64) + (float)(v69 * v67)) + (float)(v106 * v66);
        v76 = -v110[6];
        if ( v76 > v68 )
        {
          v77 = v76 - v68;
          v74 = v110;
          v67 = v67 + (float)(v109 * v77);
          v64 = v64 + (float)(v99 * v77);
          v66 = v66 + (float)(v77 * v103);
        }
        v78 = v74[5];
        if ( v75 > v78 )
        {
          v79 = v78 - v75;
          v67 = v67 + (float)(v69 * v79);
          v64 = v64 + (float)(v70 * v79);
          v66 = v66 + (float)(v79 * v106);
        }
        a4[1] = v67;
        a4[2] = v64;
        a4[3] = v66;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4140  (binary VA: 0x6c4140)
// Original: sub_6C4140
// ----------------------------------------------------------------------------
uint32_t * sub_6C4140(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20555C8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4160  (binary VA: 0x6c4160)
// Original: sub_6C4160
// ----------------------------------------------------------------------------
uint32_t * sub_6C4160(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055608);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4180  (binary VA: 0x6c4180)
// Original: sub_6C4180
// ----------------------------------------------------------------------------
int sub_6C4180(int a1, int a2)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055630);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint8_t *)(a1 + 32) = *(uint8_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  *(uint32_t *)(a1 + 64) = *(uint32_t *)(a2 + 64);
  *(uint32_t *)(a1 + 68) = *(uint32_t *)(a2 + 68);
  *(uint32_t *)(a1 + 72) = *(uint32_t *)(a2 + 72);
  *(uint8_t *)(a1 + 76) = *(uint8_t *)(a2 + 76);
  *(uint32_t *)(a1 + 80) = *(uint32_t *)(a2 + 80);
  *(uint32_t *)(a1 + 84) = *(uint32_t *)(a2 + 84);
  *(uint32_t *)(a1 + 88) = *(uint32_t *)(a2 + 88);
  *(uint32_t *)(a1 + 92) = *(uint32_t *)(a2 + 92);
  *(uint32_t *)(a1 + 96) = *(uint32_t *)(a2 + 96);
  *(uint32_t *)(a1 + 100) = *(uint32_t *)(a2 + 100);
  *(uint32_t *)(a1 + 104) = *(uint32_t *)(a2 + 104);
  *(uint32_t *)(a1 + 108) = *(uint32_t *)(a2 + 108);
  *(uint32_t *)(a1 + 112) = *(uint32_t *)(a2 + 112);
  *(uint32_t *)(a1 + 116) = *(uint32_t *)(a2 + 116);
  *(uint32_t *)(a1 + 120) = *(uint32_t *)(a2 + 120);
  *(uint32_t *)(a1 + 124) = *(uint32_t *)(a2 + 124);
  *(uint32_t *)(a1 + 128) = *(uint32_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 136) = *(uint32_t *)(a2 + 136);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4280  (binary VA: 0x6c4280)
// Original: sub_6C4280
// ----------------------------------------------------------------------------
uint32_t * sub_6C4280(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055668);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C42A0  (binary VA: 0x6c42a0)
// Original: sub_6C42A0
// ----------------------------------------------------------------------------
uint32_t * sub_6C42A0(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055690);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  a1[7] = a2[7];
  a1[8] = a2[8];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C42F0  (binary VA: 0x6c42f0)
// Original: sub_6C42F0
// ----------------------------------------------------------------------------
uint32_t * sub_6C42F0(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;

  result = a2;
  if ( a2 != nullptr )
  {
    a1[1] = a2[5];
    a1[2] = a2[6];
    a1[3] = a2[7];
    a1[4] = a2[13];
    a1[5] = a2[14];
    a1[6] = a2[16];
    a1[7] = a2[15];
    result = (uint32_t *)a2[17];
    a1[8] = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4330  (binary VA: 0x6c4330)
// Original: sub_6C4330
// ----------------------------------------------------------------------------
uint32_t * sub_6C4330(uint32_t *a1, int a2, int a3)
{
  a1[2] = a3;
  a1[3] = a3;
  a1[1] = a2;
  *a1 = (uint32_t)(uintptr_t)(&off_20556B0);
  return a1;
}



// ============================================================================
// Address:   0x6c4360 (size: 392 bytes)
// Symbol:    sub_6C4360
// Demangled: sub_6C4360
// ============================================================================
int (**sub_6C4360(int a1))(int)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 64;
  v2 = (uint16_t *)(a1 + 64);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = 25;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 1065353216;
  if ( ((a1 + 64) & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 65);
    *(uint8_t *)(a1 + 64) = 0;
    LOWORD(v1) = 63;
    if ( ((a1 + 65) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v2) & 2) == 0 )
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
  *(uint32_t *)(a1 + 64) = 1065353216;
  *(uint32_t *)(a1 + 84) = 1065353216;
  *(uint32_t *)(a1 + 104) = 1065353216;
  *(uint32_t *)(a1 + 124) = 1065353216;
  *(uint8_t *)(a1 + 128) = 0;
  *(uint8_t *)(a1 + 129) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint8_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 165) = 0;
  *(uint8_t *)(a1 + 166) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20556C8);
  return (int (**)(int))(uintptr_t)(&off_20556C8);
}
// ----------------------------------------------------------------------------
// Function: sub_6C4530  (binary VA: 0x6c4530)
// Original: sub_6C4530
// ----------------------------------------------------------------------------
uint32_t * sub_6C4530(uint32_t *a1)
{
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_204E060);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4560  (binary VA: 0x6c4560)
// Original: sub_6C4560
// ----------------------------------------------------------------------------
uint32_t * sub_6C4560(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  *a1 = (uint32_t)(uintptr_t)(&off_204E060);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C45B0  (binary VA: 0x6c45b0)
// Original: sub_6C45B0
// ----------------------------------------------------------------------------
uint32_t * sub_6C45B0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20556E8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C45D0  (binary VA: 0x6c45d0)
// Original: sub_6C45D0
// ----------------------------------------------------------------------------
int sub_6C45D0(int a1)
{
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055728);
  *(uint32_t *)(a1 + 8) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4600  (binary VA: 0x6c4600)
// Original: sub_6C4600
// ----------------------------------------------------------------------------
int64_t sub_6C4600(int64_t a1, float a2)
{
  int64_t result; // rax

  result = a1;
  if ( *(uint8_t *)a1 != 0 )
  {
    *(float *)(HIDWORD(a1) + 8) = (float)((float)(1.0 - a2) * *(float *)(HIDWORD(a1) + 8))
                                + (float)((float)(*(float *)(HIDWORD(a1) + 8) - *(float *)(a1 + 4)) * a2);
    *(uint32_t *)(a1 + 4) = 0;
    *(uint8_t *)a1 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4650  (binary VA: 0x6c4650)
// Original: sub_6C4650
// ----------------------------------------------------------------------------
int sub_6C4650(int a1, char a2, float a3, int a4, float a5)
{
  int result;
  float v6; // xmm3_4
  float v7; // xmm1_4

  result = a1;
  if ( a2 != 0 )
  {
    v6 = *(float *)(a4 + 8);
    v7 = a3 - v6;
    if ( (float)(a3 - v6) > 0.0 )
    {
      if ( *(uint8_t *)a1 != 0 )
      {
        *(float *)(a4 + 8) = v6 - *(float *)(a1 + 4);
        *(uint8_t *)a1 = 0;
        *(uint32_t *)(a1 + 4) = 0;
        v7 = a3 - *(float *)(a4 + 8);
      }
      *(float *)(a1 + 4) = v7;
      *(float *)(a4 + 8) = a3;
      *(uint8_t *)a1 = 1;
    }
  }
  else if ( *(uint8_t *)a1 != 0 )
  {
    *(float *)(a4 + 8) = (float)((float)(1.0 - a5) * *(float *)(a4 + 8))
                       + (float)((float)(*(float *)(a4 + 8) - *(float *)(a1 + 4)) * a5);
    *(uint32_t *)(a1 + 4) = 0;
    *(uint8_t *)a1 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C46F0  (binary VA: 0x6c46f0)
// Original: sub_6C46F0
// ----------------------------------------------------------------------------
uint32_t * sub_6C46F0(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055750);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  a1[7] = a2[7];
  a1[8] = a2[8];
  a1[9] = a2[9];
  a1[10] = a2[10];
  a1[11] = a2[11];
  a1[12] = a2[12];
  a1[13] = a2[13];
  a1[14] = a2[14];
  a1[15] = a2[15];
  a1[16] = a2[16];
  a1[17] = a2[17];
  a1[18] = a2[18];
  a1[19] = a2[19];
  a1[20] = a2[20];
  a1[21] = a2[21];
  a1[22] = a2[22];
  a1[23] = a2[23];
  a1[24] = a2[24];
  a1[25] = a2[25];
  a1[26] = a2[26];
  a1[27] = a2[27];
  a1[28] = a2[28];
  a1[29] = a2[29];
  a1[30] = a2[30];
  a1[31] = a2[31];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C47D0  (binary VA: 0x6c47d0)
// Original: sub_6C47D0
// ----------------------------------------------------------------------------
uint32_t * sub_6C47D0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055788);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C47F0  (binary VA: 0x6c47f0)
// Original: sub_6C47F0
// ----------------------------------------------------------------------------
uint32_t * sub_6C47F0(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20557B0);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  a1[7] = a2[7];
  a1[8] = a2[8];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4880  (binary VA: 0x6c4880)
// Original: sub_6C4880
// ----------------------------------------------------------------------------
uint32_t * sub_6C4880(uint32_t *a1, int a2, int a3)
{
  a1[2] = a3;
  a1[3] = a3;
  a1[1] = a2;
  *a1 = (uint32_t)(uintptr_t)(&off_20557D0);
  return a1;
}



// ============================================================================
// Address:   0x6c48b0 (size: 416 bytes)
// Symbol:    sub_6C48B0
// Demangled: sub_6C48B0
// ============================================================================
int (**sub_6C48B0(int a1))(int)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 64;
  v2 = (uint16_t *)(a1 + 64);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = 25;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 1065353216;
  if ( ((a1 + 64) & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 65);
    *(uint8_t *)(a1 + 64) = 0;
    LOWORD(v1) = 63;
    if ( ((a1 + 65) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v2) & 2) == 0 )
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
  *(uint32_t *)(a1 + 64) = 1065353216;
  *(uint32_t *)(a1 + 84) = 1065353216;
  *(uint32_t *)(a1 + 104) = 1065353216;
  *(uint32_t *)(a1 + 124) = 1065353216;
  *(uint8_t *)(a1 + 128) = 0;
  *(uint8_t *)(a1 + 129) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint8_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 165) = 0;
  *(uint8_t *)(a1 + 166) = 0;
  *(uint32_t *)(a1 + 168) = -1078659925;
  *(uint32_t *)(a1 + 172) = 1061752795;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20557E8);
  return (int (**)(int))(uintptr_t)(&off_20557E8);
}
// ----------------------------------------------------------------------------
// Function: sub_6C4AB0  (binary VA: 0x6c4ab0)
// Original: sub_6C4AB0
// ----------------------------------------------------------------------------
uint32_t * sub_6C4AB0(uint32_t *a1)
{
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_2058688);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4AE0  (binary VA: 0x6c4ae0)
// Original: sub_6C4AE0
// ----------------------------------------------------------------------------
uint32_t * sub_6C4AE0(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  *a1 = (uint32_t)(uintptr_t)(&off_2058688);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4B30  (binary VA: 0x6c4b30)
// Original: sub_6C4B30
// ----------------------------------------------------------------------------
uint32_t * sub_6C4B30(uint32_t *a1, int a2, int a3)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055800);
  a1[1] = a2;
  a1[2] = a3;
  a1[3] = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4B60  (binary VA: 0x6c4b60)
// Original: sub_6C4B60
// ----------------------------------------------------------------------------
int sub_6C4B60(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: sub_6C4B80  (binary VA: 0x6c4b80)
// Original: sub_6C4B80
// ----------------------------------------------------------------------------
int sub_6C4B80(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  int result;
  uint16_t *v4;

  v1 = 64;
  v2 = (uint16_t *)(a1 + 64);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = 25;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 1065353216;
  if ( ((a1 + 64) & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 65);
    *(uint8_t *)(a1 + 64) = 0;
    LOWORD(v1) = 63;
    if ( ((a1 + 65) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v2) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v1 -= 2;
  ++v2;
LABEL_3:
  result = 0;
  memset(v2, 0, 4 * (v1 >> 2));
  v4 = &v2[2 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
    *v4++ = 0;
  if ( (v1 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  *(uint32_t *)(a1 + 64) = 1065353216;
  *(uint32_t *)(a1 + 84) = 1065353216;
  *(uint32_t *)(a1 + 104) = 1065353216;
  *(uint32_t *)(a1 + 124) = 1065353216;
  *(uint8_t *)(a1 + 128) = 0;
  *(uint8_t *)(a1 + 129) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4CB0  (binary VA: 0x6c4cb0)
// Original: sub_6C4CB0
// ----------------------------------------------------------------------------
uint32_t * sub_6C4CB0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4CE0  (binary VA: 0x6c4ce0)
// Original: sub_6C4CE0
// ----------------------------------------------------------------------------
uint32_t * sub_6C4CE0(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4D30  (binary VA: 0x6c4d30)
// Original: sub_6C4D30
// ----------------------------------------------------------------------------
unsigned int sub_6C4D30(int a1)
{
  unsigned int v1;
  unsigned int result;
  int v3;
  __m128i *v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;

  v1 = -((uint8_t)(a1 & 0xF) >> 2) & 3;
  if ( v1 != 0 )
  {
    for ( result = 0; result < v1; v3 = 25 - result )
      *(uint32_t *)(a1 + 4 * result++) = 0;
  }
  else
  {
    v3 = 25;
    result = 0;
  }
  v10 = 25 - v1;
  v9 = (25 - v1) >> 2;
  v8 = 4 * v9;
  if ( 4 * v9 == 0 )
    goto LABEL_8;
  v4 = (__m128i *)(a1 + 4 * v1);
  v5 = 0;
  do
  {
    ++v5;
    *v4++ = g4_m128_from<__m128i>(0LL);
  }
  while ( v5 < v9 );
  v3 -= v8;
  result += v8;
  if ( v10 != v8 )
  {
LABEL_8:
    v6 = 4 * v3;
    v7 = 0;
    result = a1 + 4 * result;
    do
    {
      *(uint32_t *)(result + v7) = 0;
      v7 += 4;
    }
    while ( v7 != v6 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4E00  (binary VA: 0x6c4e00)
// Original: sub_6C4E00
// ----------------------------------------------------------------------------
int sub_6C4E00(int a1)
{
  int i;
  int result;

  for ( i = 0; i != 25; ++i )
  {
    result = *(uint32_t *)(a1 + 4 * i);
    if ( result != 0 )
    {
      result = (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*(uint32_t *)(a1 + 4 * i));
      *(uint32_t *)(a1 + 4 * i) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4E40  (binary VA: 0x6c4e40)
// Original: sub_6C4E40
// ----------------------------------------------------------------------------
int sub_6C4E40(int a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = G4_VCALL<int>(a2, 8);
  v3 = *(uint32_t *)(a1 + 4 * result);
  v4 = result;
  if ( v3 != 0 )
    result = G4_VCALL<int>(v3, 4);
  *(uint32_t *)(a1 + 4 * v4) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C4EA0  (binary VA: 0x6c4ea0)
// Original: sub_6C4EA0
// ----------------------------------------------------------------------------
uint32_t * sub_6C4EA0(uint32_t *a1, int a2, int a3)
{
  a1[2] = a3;
  a1[3] = a3;
  a1[1] = a2;
  *a1 = (uint32_t)(uintptr_t)(&off_20558A8);
  return a1;
}



// ============================================================================
// Address:   0x6c4ed0 (size: 768 bytes)
// Symbol:    sub_6C4ED0
// Demangled: sub_6C4ED0
// ============================================================================
int (**sub_6C4ED0(int a1))(int)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;
  uint16_t *v4;
  unsigned int v5;
  uint16_t *v6;

  v1 = 64;
  v2 = (uint16_t *)(a1 + 64);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = 25;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 1065353216;
  if ( ((a1 + 64) & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 65);
    *(uint8_t *)(a1 + 64) = 0;
    LOBYTE(v1) = 63;
    if ( ((a1 + 65) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v2) & 2) == 0 )
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
  *(uint32_t *)(a1 + 64) = 1065353216;
  *(uint32_t *)(a1 + 84) = 1065353216;
  *(uint32_t *)(a1 + 104) = 1065353216;
  *(uint32_t *)(a1 + 124) = 1065353216;
  *(uint8_t *)(a1 + 128) = 0;
  *(uint8_t *)(a1 + 129) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  v4 = (uint16_t *)(a1 + 436);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20558C8);
  sub_6EEA50(a1 + 140);
  *(uint32_t *)(a1 + 372) = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 376) = 25;
  *(uint32_t *)(a1 + 380) = 0;
  *(uint32_t *)(a1 + 384) = 0;
  *(uint32_t *)(a1 + 388) = 0;
  *(uint32_t *)(a1 + 392) = 0;
  *(uint32_t *)(a1 + 396) = 0;
  *(uint32_t *)(a1 + 400) = 0;
  *(uint32_t *)(a1 + 404) = 0;
  *(uint32_t *)(a1 + 408) = 0;
  *(uint32_t *)(a1 + 412) = 0;
  *(uint32_t *)(a1 + 416) = 0;
  *(uint32_t *)(a1 + 420) = 0;
  *(uint32_t *)(a1 + 424) = 0;
  *(uint32_t *)(a1 + 428) = 0;
  *(uint32_t *)(a1 + 432) = 1065353216;
  v5 = 64;
  if ( ((a1 + 436) & 1) != 0 )
  {
    v4 = (uint16_t *)(a1 + 437);
    *(uint8_t *)(a1 + 436) = 0;
    LOBYTE(v5) = 63;
    if ( ((a1 + 437) & 2) == 0 )
      goto LABEL_9;
  }
  else if ( (((uint8_t)a1 - 76) & 2) == 0 )
  {
    goto LABEL_9;
  }
  *v4 = 0;
  v5 -= 2;
  ++v4;
LABEL_9:
  memset(v4, 0, 4 * (v5 >> 2));
  v6 = &v4[2 * (v5 >> 2)];
  if ( (v5 & 2) != 0 )
    *v6++ = 0;
  if ( (v5 & 1) != 0 )
    *(uint8_t *)v6 = 0;
  *(uint32_t *)(a1 + 436) = 1065353216;
  *(uint32_t *)(a1 + 456) = 1065353216;
  *(uint32_t *)(a1 + 476) = 1065353216;
  *(uint32_t *)(a1 + 496) = 1065353216;
  *(uint8_t *)(a1 + 500) = 0;
  *(uint8_t *)(a1 + 501) = 0;
  *(uint32_t *)(a1 + 504) = 0;
  *(uint32_t *)(a1 + 508) = 0;
  *(uint32_t *)(a1 + 512) = 0;
  *(uint32_t *)(a1 + 516) = 0;
  *(uint32_t *)(a1 + 520) = 0;
  *(uint32_t *)(a1 + 524) = 0;
  *(uint32_t *)(a1 + 528) = 0;
  *(uint32_t *)(a1 + 532) = 0;
  *(uint8_t *)(a1 + 536) = 0;
  *(uint8_t *)(a1 + 537) = 0;
  *(uint8_t *)(a1 + 538) = 0;
  *(uint32_t *)(a1 + 372) = (uint32_t)(uintptr_t)(&off_20556C8);
  return (int (**)(int))(uintptr_t)(&off_20556C8);
}
// ----------------------------------------------------------------------------
// Function: sub_6C51D0  (binary VA: 0x6c51d0)
// Original: sub_6C51D0
// ----------------------------------------------------------------------------
uint32_t * sub_6C51D0(uint32_t *a1)
{
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20586A0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C5200  (binary VA: 0x6c5200)
// Original: sub_6C5200
// ----------------------------------------------------------------------------
uint32_t * sub_6C5200(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  *a1 = (uint32_t)(uintptr_t)(&off_20586A0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6C5590  (binary VA: 0x6c5590)
// Original: sub_6C5590
// ----------------------------------------------------------------------------
int sub_6C5590(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  int result;
  int i;
  int v5;
  int v6;
  int v7;

  v2 = *(uint32_t *)(a1 + 32);
  result = *(uint32_t *)(v2 + 80);
  if ( result > 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v2 + 76) + 4 * i);
      if ( v5 != 0 && v5 != *(uint32_t *)(a1 + 36) )
      {
        v6 = *((uint32_t *)a2 + 1);
        if ( v6 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
        {
          v7 = v2;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a2, &loc_4);
          v6 = *((uint32_t *)a2 + 1);
          v2 = v7;
        }
        *(uint32_t *)(*(uint32_t *)a2 + 4 * v6) = v5;
        ++*((uint32_t *)a2 + 1);
        result = *(uint32_t *)(v2 + 80);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C5630  (binary VA: 0x6c5630)
// Original: sub_6C5630
// ----------------------------------------------------------------------------
int * sub_6C5630(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  typedef int _g4_t_v19;
  typedef void *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[32];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v20)) > _g4_s1 ? (40u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v21)) > _g4_s2 ? (44u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v22)) > _g4_s3 ? (48u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v23)) > _g4_s4 ? (52u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v24)) > _g4_s5 ? (52u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v25)) > _g4_s6 ? (56u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v26)) > _g4_s7 ? (60u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  v4 = a2;
  v5 = a2;
  if ( a3 < a2 )
    v4 = a3;
  else
    v5 = a3;
  v22 = v5;
  v6 = a1[1];
  if ( v6 <= 0 )
  {
LABEL_16:
    v14 = v6 + 1;
    v15 = a1[2] & 0x3FFFFFFF;
    if ( v6 + 1 > v15 )
    {
      v18 = 2 * v15;
      v21 = v6;
      if ( v18 < v14 )
        v18 = v6 + 1;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v26, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, a1, v18, 12);
      v6 = v21;
    }
    v16 = 12 * v6;
    hkMemUtil::memMove((hkMemUtil::Self *)(*a1 + 12 * v14), (void *)(*a1 + 12 * v6), 0, v19);
    v17 = (uint32_t *)(*a1 + v16);
    *v17 = v4;
    v17[1] = v22;
    v17[2] = a4;
    a1[1] = v14;
    return (int *)a4;
  }
  else
  {
    v7 = *a1;
    v8 = 0;
    v9 = 0;
    v23 = a1[1];
    while ( v4 > *(uint32_t *)(v7 + v8) || v4 == *(uint32_t *)(v7 + v8) && v22 > *(uint32_t *)(v7 + v8 + 4) )
    {
      ++v9;
      v8 += 12;
      if ( v9 == v23 )
      {
        v6 = a1[1];
        goto LABEL_16;
      }
    }
    v20 = (void *)(v7 + v8);
    v24 = v23 + 1;
    v25 = a1[1] - v9;
    v10 = a1[2] & 0x3FFFFFFF;
    if ( v24 > v10 )
    {
      v11 = 2 * v10;
      if ( 2 * v10 < v24 )
        v11 = v24;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v26, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, a1, v11, 12);
      v7 = *a1;
      v20 = (void *)(*a1 + v8);
    }
    hkMemUtil::memMove((hkMemUtil::Self *)(v7 + 4 * (3 * v9 + 3)), v20, 12 * v25, v19);
    v13 = (uint32_t *)(*a1 + v8);
    v13[1] = v22;
    *v13 = v4;
    v13[2] = a4;
    a1[1] = v24;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_6C5820  (binary VA: 0x6c5820)
// Original: sub_6C5820
// ----------------------------------------------------------------------------
int sub_6C5820(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int i;
  int v9;
  int v10;

  v3 = a2;
  v4 = a2;
  if ( a3 < a2 )
    v3 = a3;
  else
    v4 = a3;
  v10 = v4;
  result = -1;
  if ( a1[1] > 0 )
  {
    v6 = *a1;
    v7 = 0;
    for ( i = 0; ; i += 12 )
    {
      v9 = v6 + i;
      if ( v3 <= *(uint32_t *)(v6 + i) )
      {
        if ( v3 != *(uint32_t *)(v6 + i) )
          return -1;
        if ( v10 <= *(uint32_t *)(v9 + 4) )
          break;
      }
      if ( ++v7 == a1[1] )
        return -1;
    }
    if ( v10 != *(uint32_t *)(v9 + 4) )
      return -1;
    return *(uint32_t *)(v9 + 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6C6960  (binary VA: 0x6c6960)
// Original: sub_6C6960
// ----------------------------------------------------------------------------
int sub_6C6960(uint32_t *a1, hkGeometry::Self *a2)
{
  hkpBvCompressedMeshShape::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  hkGeometry::Self **v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  hkGeometry::Self *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  int i;
  int v29;
  int v30;
  void (***v31)(uint32_t);
  void (**v32)(uint32_t);
  int v34;
  int v35;
  typedef void (***_g4_t_v36)(uint32_t);
  typedef const hkMatrix4f::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef hkGeometry::Self **_g4_t_v49;
  typedef int _g4_t_PrimitiveUserData;
  typedef hkGeometry::Self *_g4_t_v51;
  typedef hkGeometry::Self *_g4_t_v52;
  typedef hkGeometry::Self *_g4_t_v53;
  typedef char _g4_t_v54[4];
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v36)) > _g4_s0 ? (0u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v37)) > _g4_s1 ? (8u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v38)) > _g4_s2 ? (12u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v39)) > _g4_s3 ? (12u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v40)) > _g4_s4 ? (32u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v41)) > _g4_s5 ? (32u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v42)) > _g4_s6 ? (32u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v43)) > _g4_s7 ? (36u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v44)) > _g4_s8 ? (40u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v45)) > _g4_s9 ? (52u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v46)) > _g4_s10 ? (56u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v47)) > _g4_s11 ? (60u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v48)) > _g4_s12 ? (64u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v49)) > _g4_s13 ? (68u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_PrimitiveUserData)) > _g4_s14 ? (68u + sizeof(_g4_t_PrimitiveUserData)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v51)) > _g4_s15 ? (72u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v52)) > _g4_s16 ? (72u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v53)) > _g4_s17 ? (72u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v54)) > _g4_s18 ? (76u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v55)) > _g4_s19 ? (80u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v56)) > _g4_s20 ? (84u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v57)) > _g4_s21 ? (88u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v58)) > _g4_s22 ? (96u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v59)) > _g4_s23 ? (100u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v60)) > _g4_s24 ? (104u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v61)) > _g4_s25 ? (112u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v62)) > _g4_s26 ? (116u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v63)) > _g4_s27 ? (120u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v64)) > _g4_s28 ? (136u + sizeof(_g4_t_v64)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_PrimitiveUserData &PrimitiveUserData = *reinterpret_cast<_g4_t_PrimitiveUserData *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 72u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 80u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 84u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 88u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 100u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 104u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 116u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 120u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 136u);

  v64 = (uint32_t *)(&a1);
  v2 = (hkpBvCompressedMeshShape::Self *)(a2);
  v46 = a1;
  v3 = a1[1];
  v48 = v3;
  if ( v3 <= 0 )
  {
    v43 = 36;
    v45 = 0;
    v44 = 0;
  }
  else
  {
    v4 = v3 - 1;
    v49 = (hkGeometry::Self **)*a1;
    if ( *(uint32_t *)(*a1 + 36 * v4) >= (unsigned int)(uintptr_t)(a2) )
    {
      v52 = *v49;
      v10 = 0;
      v11 = 0;
      v47 = v4;
LABEL_18:
      if ( a2 <= v52 )
      {
LABEL_22:
        v44 = v11;
      }
      else
      {
        while ( 1 )
        {
          v11 = (v10 + v47) / 2;
          v12 = (unsigned int)(uintptr_t)(v49[9 * v11]);
          if ( (unsigned int)(uintptr_t)(a2) <= v12 )
          {
            v47 = (v10 + v47) / 2;
            goto LABEL_18;
          }
          if ( v11 == v10 )
            break;
          v52 = v49[9 * v11];
          v10 = (v10 + v47) / 2;
          if ( (unsigned int)(uintptr_t)(a2) <= v12 )
            goto LABEL_22;
        }
        v44 = v11 + 1;
      }
      if ( v44 >= v48 )
      {
        v45 = 36 * v44;
        v43 = 4 * (9 * v44 + 9);
      }
      else
      {
        v45 = 36 * v44;
        v13 = &v49[9 * v44];
        v14 = (int)(uintptr_t)(v13 + 1);
        if ( *v13 == a2 )
          return v14;
        v43 = 4 * (9 * v44 + 9);
      }
    }
    else
    {
      v44 = a1[1];
      v45 = 36 * v48;
      v43 = 4 * (9 * v48 + 9);
    }
  }
  v5 = *(uint32_t *)a2;
  v55 = nullptr;
  v56 = 0;
  v57 = 0x80000000;
  v58 = 0;
  v59 = 0;
  v60 = 0x80000000;
  v61 = 0;
  v62 = 0;
  v63 = 0x80000000;
  v51 = (hkGeometry::Self *)(*(int (**)(hkGeometry::Self *))(v5 + 92))(a2);
  while ( v51 != (hkGeometry::Self *)-1 )
  {
    PrimitiveUserData = hkpBvCompressedMeshShape::getPrimitiveUserData(v2, (unsigned int)(uintptr_t)(v51));
    v6 = v56;
    if ( v56 == (v57 & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)&v55, &loc_4);
      v6 = v56;
    }
    v7 = (unsigned int)(uintptr_t)(v51);
    v55[v6] = PrimitiveUserData;
    v62 = 0;
    ++v56;
    do
    {
      v8 = hkpBvCompressedMeshShape::getPrimitiveUserData(v2, v7);
      if ( PrimitiveUserData == v8 )
      {
        v15 = v62;
        if ( v62 == (v63 & 0x3FFFFFFF) )
        {
          v42 = v8;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v61,
            &loc_4);
          v15 = v62;
          v8 = v42;
        }
        *(uint32_t *)(v61 + 4 * v15) = v7;
        ++v62;
      }
      if ( v51 == (hkGeometry::Self *)v7 && v56 > 0 )
      {
        if ( v8 == *v55 )
        {
LABEL_30:
          v51 = (hkGeometry::Self *)G4_VCALL<int>(v2, 96, v51);
        }
        else
        {
          v9 = 0;
          while ( ++v9 != v56 )
          {
            if ( v8 == v55[v9] )
            {
              if ( v9 == -1 )
                break;
              goto LABEL_30;
            }
          }
        }
      }
      v7 = G4_VCALL<int>(v2, 96, v7);
    }
    while ( v7 != -1 );
    v16 = v59;
    if ( v59 == (v60 & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)&v58, &dword_20);
      v16 = v59;
    }
    v17 = (uint32_t *)(v58 + 32 * v16);
    *v17 = ((uint32_t)(uintptr_t)&off_20586B8);
    v17[1] = -65535;
    v18 = v59;
    v17[2] = 0;
    v17[3] = 0;
    v19 = (hkGeometry::Self *)(v58 + 32 * v18);
    v17[4] = 0x80000000;
    v17[5] = 0;
    v17[6] = 0;
    v17[7] = 0x80000000;
    v59 = v18 + 1;
    hkpBvCompressedMeshShape::convertToGeometry(
      v2,
      v19,
      (const hkArray<unsigned int, hkContainerHeapAllocator::Self> *)&v61,
      nullptr);
    if ( *((int *)v19 + 6) > 0 )
    {
      v34 = 0;
      do
      {
        v35 = v34++;
        *(uint32_t *)(*((uint32_t *)v19 + 5) + 16 * v35 + 12) = PrimitiveUserData;
      }
      while ( *((uint32_t *)v19 + 6) > v34 );
    }
  }
  v20 = v46;
  v21 = v46[1];
  v22 = v46[2] & 0x3FFFFFFF;
  v23 = v21 + 1;
  v24 = v21 - v44;
  if ( v23 > v22 )
  {
    v25 = 2 * v22;
    v40 = v23;
    if ( v25 < v23 )
      v25 = v23;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v54, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, v46, v25, 36);
    v23 = v40;
    v20 = v46;
  }
  v41 = v23;
  hkMemUtil::memMove((hkMemUtil::Self *)(v43 + *v20), (void *)(*v20 + v45), 36 * v24, v38);
  v26 = (uint32_t *)(*v46 + v45);
  v26[1] = ((uint32_t)(uintptr_t)&off_20586B8);
  v26[2] = -65535;
  v26[3] = 0;
  v26[4] = 0;
  v26[5] = 0x80000000;
  v26[6] = 0;
  v26[7] = 0;
  v26[8] = 0x80000000;
  v46[1] = v41;
  *(uint32_t *)(*v46 + v45) = (uint32_t)(uintptr_t)(v2);
  v27 = v59;
  if ( v59 > 0 )
  {
    for ( i = 0; i < v59; ++i )
    {
      v39 = 0;
      v37 = (const hkMatrix4f::Self *)(v58 + 32 * i);
      hkGeometry::appendGeometry((hkGeometry::Self *)v54, (const hkGeometry::Self *)(*v46 + v45 + 4), v37);
      v27 = v59;
    }
  }
  v62 = 0;
  v14 = *v46 + v45 + 4;
  if ( v63 >= 0 )
  {
    (*(void (**)(uint32_t *, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v61,
      4 * v63,
      v39);
    v27 = v59;
  }
  v29 = v27 - 1;
  v61 = 0;
  v63 = 0x80000000;
  if ( v29 >= 0 )
  {
    v53 = (hkGeometry::Self *)v14;
    v30 = v29;
    v31 = (void (***)(uint32_t))(v58 + 32 * v29);
    do
    {
      v32 = *v31;
      --v30;
      v36 = v31;
      v31 -= 8;
      (*v32)((uint32_t)(uintptr_t)(v36));
    }
    while ( v30 != -1 );
    v14 = (int)(uintptr_t)(v53);
  }
  v59 = 0;
  if ( v60 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v58,
      32 * v60);
  v58 = 0;
  v60 = 0x80000000;
  v56 = 0;
  if ( v57 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v55,
      4 * v57);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: hkpStaticGeometryUtil::createCompressedMeshShape_ea6c6f30  (binary VA: 0x6c6f30)
// Original: hkpStaticGeometryUtil::createCompressedMeshShape
// ----------------------------------------------------------------------------
unsigned int hkpStaticGeometryUtil::createCompressedMeshShape_ea6c6f30(int a1, unsigned int a2, hkQsTransformf::Self *a3, float *a4, float *a5, uint32_t *a6, uint8_t *a7, int a8)
{
  unsigned int v8;
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  char v17;
  int v18;
  hkClass::Self *v19;
  hkString::Self *Name;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int32_t v31;
  int v32;
  int32_t v33;
  int v34;
  const hkGeometry::Self *v35;
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint32_t *v44;
  hkpStaticCompoundShape::Self *v45;
  hkpStaticCompoundShape::Self *v46;
  float *v47;
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm3_4
  float v51; // xmm4_4
  float *v52;
  float v53; // xmm5_4
  float v54; // xmm7_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  float *v57;
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm6_4
  float v61; // xmm4_4
  int v62;
  int v63;
  int v64;
  int v65;
  float *v66;
  float v67; // xmm3_4
  hkpStaticCompoundShape::Self *v68;
  hkpStaticCompoundShape::Self *v69;
  int v70;
  int v71;
  int v72;
  int v73;
  float *v74;
  float v75; // xmm1_4
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  float *v82;
  float v83; // xmm2_4
  uint32_t *v84;
  char *v85;
  int v86;
  unsigned int v87;
  unsigned int v88;
  __m128i *v89;
  unsigned int v90;
  int v91;
  int i;
  hkpStaticCompoundShape::Self *v93;
  uint32_t *v94;
  uint32_t *v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  uint32_t *v104;
  uint32_t *v105;
  int j;
  hkpBvCompressedMeshShape::Self *v107;
  char v108;
  bool v109;
  char v110;
  int address;
  uint32_t *v112;
  int v113;
  uint32_t *v114;
  uint32_t *v115;
  uint32_t *v116;
  typedef int _g4_t_v117;
  typedef hkVector4f::Self *_g4_t_v118;
  typedef char *_g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef float _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef float _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef uint8_t *_g4_t_v133;
  typedef uint32_t *_g4_t_v134;
  typedef float *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef int _g4_t_v140;
  typedef hkQsTransformf::Self *_g4_t_v141;
  typedef unsigned int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef hkpStaticCompoundShape::Self *_g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef int _g4_t_v151;
  typedef hkpStaticCompoundShape::Self *_g4_t_v152;
  typedef int _g4_t_v153;
  typedef float _g4_t_v154;
  typedef int _g4_t_v155;
  typedef hkpStaticCompoundShape::Self *_g4_t_v156;
  typedef int _g4_t_v157;
  typedef hkpStaticCompoundShape::Self *_g4_t_v158;
  typedef float _g4_t_v159;
  typedef bool _g4_t_v160;
  typedef float _g4_t_v161;
  typedef bool _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef float _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef float _g4_t_v169;
  typedef int16_t _g4_t_v170;
  typedef int _g4_t_v171;
  typedef uint32_t *_g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef float _g4_t_v175;
  typedef float *_g4_t_v176;
  typedef int _g4_t_v177;
  typedef char *_g4_t_v178;
  typedef int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef hkpShape::Self *_g4_t_v181;
  typedef hkpShape::Self *_g4_t_v182;
  typedef bool _g4_t_v183;
  typedef float _g4_t_v184;
  typedef int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef hkpStaticCompoundShape::Self *_g4_t_v187;
  typedef unsigned int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef int _g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef int _g4_t_v193;
  typedef float _g4_t_v194;
  typedef hkpStaticCompoundShape::Self *_g4_t_v195;
  typedef hkpStaticCompoundShape::Self *_g4_t_v196;
  typedef int _g4_t_v197;
  typedef hkpStaticCompoundShape::Self *_g4_t_v198;
  typedef hkpStaticCompoundShape::Self *_g4_t_v199;
  typedef hkpStaticCompoundShape::Self *_g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef uint8_t _g4_t_v204[7];
  typedef char _g4_t_v205[12];
  typedef char _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef int _g4_t_v210;
  typedef int _g4_t_v211;
  typedef hkpStaticCompoundShape::Self *_g4_t_v212;
  typedef int _g4_t_v213;
  typedef int _g4_t_v214;
  typedef hkpStaticCompoundShape::Self *_g4_t_v215;
  typedef unsigned int _g4_t_v216;
  typedef float _g4_t_v217[4];
  typedef float _g4_t_v218[4];
  typedef float _g4_t_v219;
  typedef float _g4_t_v220;
  typedef float _g4_t_v221;
  typedef float _g4_t_v222;
  typedef float _g4_t_v223;
  typedef float _g4_t_v224;
  typedef float _g4_t_v225;
  typedef float _g4_t_v226;
  typedef char _g4_t_v227;
  typedef float _g4_t_v228;
  typedef float _g4_t_v229;
  typedef float _g4_t_v230;
  typedef float _g4_t_v231;
  typedef float _g4_t_v232;
  typedef float _g4_t_v233;
  typedef float _g4_t_v234;
  typedef float _g4_t_v235;
  typedef float _g4_t_v236;
  typedef float _g4_t_v237;
  typedef float _g4_t_v238;
  typedef int _g4_t_v239;
  typedef int _g4_t_v240;
  typedef int _g4_t_v241;
  typedef int _g4_t_v242;
  typedef int _g4_t_v243;
  typedef int _g4_t_v244;
  typedef int _g4_t_v245;
  typedef int _g4_t_v246;
  typedef int _g4_t_v247;
  typedef int _g4_t_v248[2];
  typedef int _g4_t_v249;
  typedef int _g4_t_v250;
  typedef int _g4_t_v251;
  typedef int _g4_t_v252;
  typedef int _g4_t_v253;
  typedef int _g4_t_v254;
  typedef uint8_t _g4_t_v255[64];
  typedef uint32_t _g4_t_v256[16];
  typedef float _g4_t_v257;
  typedef float _g4_t_v258;
  typedef float _g4_t_v259;
  typedef int _g4_t_v260;
  typedef int *_g4_t_v261;
  typedef int _g4_t_v262;
  typedef int _g4_t_v263;
  typedef unsigned int _g4_t_v264;
  typedef int *_g4_t_v265;
  enum : size_t {
    _g4_s0 = 1296u,
    _g4_s1 = (12u + sizeof(_g4_t_v117)) > _g4_s0 ? (12u + sizeof(_g4_t_v117)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v118)) > _g4_s1 ? (12u + sizeof(_g4_t_v118)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v119)) > _g4_s2 ? (16u + sizeof(_g4_t_v119)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v120)) > _g4_s3 ? (20u + sizeof(_g4_t_v120)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v121)) > _g4_s4 ? (48u + sizeof(_g4_t_v121)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v122)) > _g4_s5 ? (68u + sizeof(_g4_t_v122)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v123)) > _g4_s6 ? (84u + sizeof(_g4_t_v123)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v124)) > _g4_s7 ? (84u + sizeof(_g4_t_v124)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v125)) > _g4_s8 ? (84u + sizeof(_g4_t_v125)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v126)) > _g4_s9 ? (100u + sizeof(_g4_t_v126)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v127)) > _g4_s10 ? (100u + sizeof(_g4_t_v127)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v128)) > _g4_s11 ? (100u + sizeof(_g4_t_v128)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v129)) > _g4_s12 ? (100u + sizeof(_g4_t_v129)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v130)) > _g4_s13 ? (100u + sizeof(_g4_t_v130)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v131)) > _g4_s14 ? (100u + sizeof(_g4_t_v131)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v132)) > _g4_s15 ? (128u + sizeof(_g4_t_v132)) : _g4_s15,
    _g4_s17 = (132u + sizeof(_g4_t_v133)) > _g4_s16 ? (132u + sizeof(_g4_t_v133)) : _g4_s16,
    _g4_s18 = (136u + sizeof(_g4_t_v134)) > _g4_s17 ? (136u + sizeof(_g4_t_v134)) : _g4_s17,
    _g4_s19 = (140u + sizeof(_g4_t_v135)) > _g4_s18 ? (140u + sizeof(_g4_t_v135)) : _g4_s18,
    _g4_s20 = (148u + sizeof(_g4_t_v136)) > _g4_s19 ? (148u + sizeof(_g4_t_v136)) : _g4_s19,
    _g4_s21 = (156u + sizeof(_g4_t_v137)) > _g4_s20 ? (156u + sizeof(_g4_t_v137)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v138)) > _g4_s21 ? (160u + sizeof(_g4_t_v138)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v139)) > _g4_s22 ? (164u + sizeof(_g4_t_v139)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v140)) > _g4_s23 ? (168u + sizeof(_g4_t_v140)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v141)) > _g4_s24 ? (172u + sizeof(_g4_t_v141)) : _g4_s24,
    _g4_s26 = (176u + sizeof(_g4_t_v142)) > _g4_s25 ? (176u + sizeof(_g4_t_v142)) : _g4_s25,
    _g4_s27 = (180u + sizeof(_g4_t_v143)) > _g4_s26 ? (180u + sizeof(_g4_t_v143)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v144)) > _g4_s27 ? (180u + sizeof(_g4_t_v144)) : _g4_s27,
    _g4_s29 = (184u + sizeof(_g4_t_v145)) > _g4_s28 ? (184u + sizeof(_g4_t_v145)) : _g4_s28,
    _g4_s30 = (188u + sizeof(_g4_t_v146)) > _g4_s29 ? (188u + sizeof(_g4_t_v146)) : _g4_s29,
    _g4_s31 = (192u + sizeof(_g4_t_v147)) > _g4_s30 ? (192u + sizeof(_g4_t_v147)) : _g4_s30,
    _g4_s32 = (196u + sizeof(_g4_t_v148)) > _g4_s31 ? (196u + sizeof(_g4_t_v148)) : _g4_s31,
    _g4_s33 = (200u + sizeof(_g4_t_v149)) > _g4_s32 ? (200u + sizeof(_g4_t_v149)) : _g4_s32,
    _g4_s34 = (204u + sizeof(_g4_t_v150)) > _g4_s33 ? (204u + sizeof(_g4_t_v150)) : _g4_s33,
    _g4_s35 = (208u + sizeof(_g4_t_v151)) > _g4_s34 ? (208u + sizeof(_g4_t_v151)) : _g4_s34,
    _g4_s36 = (208u + sizeof(_g4_t_v152)) > _g4_s35 ? (208u + sizeof(_g4_t_v152)) : _g4_s35,
    _g4_s37 = (212u + sizeof(_g4_t_v153)) > _g4_s36 ? (212u + sizeof(_g4_t_v153)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v154)) > _g4_s37 ? (212u + sizeof(_g4_t_v154)) : _g4_s37,
    _g4_s39 = (212u + sizeof(_g4_t_v155)) > _g4_s38 ? (212u + sizeof(_g4_t_v155)) : _g4_s38,
    _g4_s40 = (216u + sizeof(_g4_t_v156)) > _g4_s39 ? (216u + sizeof(_g4_t_v156)) : _g4_s39,
    _g4_s41 = (220u + sizeof(_g4_t_v157)) > _g4_s40 ? (220u + sizeof(_g4_t_v157)) : _g4_s40,
    _g4_s42 = (220u + sizeof(_g4_t_v158)) > _g4_s41 ? (220u + sizeof(_g4_t_v158)) : _g4_s41,
    _g4_s43 = (224u + sizeof(_g4_t_v159)) > _g4_s42 ? (224u + sizeof(_g4_t_v159)) : _g4_s42,
    _g4_s44 = (224u + sizeof(_g4_t_v160)) > _g4_s43 ? (224u + sizeof(_g4_t_v160)) : _g4_s43,
    _g4_s45 = (228u + sizeof(_g4_t_v161)) > _g4_s44 ? (228u + sizeof(_g4_t_v161)) : _g4_s44,
    _g4_s46 = (228u + sizeof(_g4_t_v162)) > _g4_s45 ? (228u + sizeof(_g4_t_v162)) : _g4_s45,
    _g4_s47 = (232u + sizeof(_g4_t_v163)) > _g4_s46 ? (232u + sizeof(_g4_t_v163)) : _g4_s46,
    _g4_s48 = (232u + sizeof(_g4_t_v164)) > _g4_s47 ? (232u + sizeof(_g4_t_v164)) : _g4_s47,
    _g4_s49 = (232u + sizeof(_g4_t_v165)) > _g4_s48 ? (232u + sizeof(_g4_t_v165)) : _g4_s48,
    _g4_s50 = (236u + sizeof(_g4_t_v166)) > _g4_s49 ? (236u + sizeof(_g4_t_v166)) : _g4_s49,
    _g4_s51 = (236u + sizeof(_g4_t_v167)) > _g4_s50 ? (236u + sizeof(_g4_t_v167)) : _g4_s50,
    _g4_s52 = (236u + sizeof(_g4_t_v168)) > _g4_s51 ? (236u + sizeof(_g4_t_v168)) : _g4_s51,
    _g4_s53 = (240u + sizeof(_g4_t_v169)) > _g4_s52 ? (240u + sizeof(_g4_t_v169)) : _g4_s52,
    _g4_s54 = (240u + sizeof(_g4_t_v170)) > _g4_s53 ? (240u + sizeof(_g4_t_v170)) : _g4_s53,
    _g4_s55 = (240u + sizeof(_g4_t_v171)) > _g4_s54 ? (240u + sizeof(_g4_t_v171)) : _g4_s54,
    _g4_s56 = (240u + sizeof(_g4_t_v172)) > _g4_s55 ? (240u + sizeof(_g4_t_v172)) : _g4_s55,
    _g4_s57 = (240u + sizeof(_g4_t_v173)) > _g4_s56 ? (240u + sizeof(_g4_t_v173)) : _g4_s56,
    _g4_s58 = (240u + sizeof(_g4_t_v174)) > _g4_s57 ? (240u + sizeof(_g4_t_v174)) : _g4_s57,
    _g4_s59 = (244u + sizeof(_g4_t_v175)) > _g4_s58 ? (244u + sizeof(_g4_t_v175)) : _g4_s58,
    _g4_s60 = (248u + sizeof(_g4_t_v176)) > _g4_s59 ? (248u + sizeof(_g4_t_v176)) : _g4_s59,
    _g4_s61 = (248u + sizeof(_g4_t_v177)) > _g4_s60 ? (248u + sizeof(_g4_t_v177)) : _g4_s60,
    _g4_s62 = (248u + sizeof(_g4_t_v178)) > _g4_s61 ? (248u + sizeof(_g4_t_v178)) : _g4_s61,
    _g4_s63 = (248u + sizeof(_g4_t_v179)) > _g4_s62 ? (248u + sizeof(_g4_t_v179)) : _g4_s62,
    _g4_s64 = (248u + sizeof(_g4_t_v180)) > _g4_s63 ? (248u + sizeof(_g4_t_v180)) : _g4_s63,
    _g4_s65 = (252u + sizeof(_g4_t_v181)) > _g4_s64 ? (252u + sizeof(_g4_t_v181)) : _g4_s64,
    _g4_s66 = (252u + sizeof(_g4_t_v182)) > _g4_s65 ? (252u + sizeof(_g4_t_v182)) : _g4_s65,
    _g4_s67 = (252u + sizeof(_g4_t_v183)) > _g4_s66 ? (252u + sizeof(_g4_t_v183)) : _g4_s66,
    _g4_s68 = (256u + sizeof(_g4_t_v184)) > _g4_s67 ? (256u + sizeof(_g4_t_v184)) : _g4_s67,
    _g4_s69 = (256u + sizeof(_g4_t_v185)) > _g4_s68 ? (256u + sizeof(_g4_t_v185)) : _g4_s68,
    _g4_s70 = (256u + sizeof(_g4_t_v186)) > _g4_s69 ? (256u + sizeof(_g4_t_v186)) : _g4_s69,
    _g4_s71 = (256u + sizeof(_g4_t_v187)) > _g4_s70 ? (256u + sizeof(_g4_t_v187)) : _g4_s70,
    _g4_s72 = (256u + sizeof(_g4_t_v188)) > _g4_s71 ? (256u + sizeof(_g4_t_v188)) : _g4_s71,
    _g4_s73 = (260u + sizeof(_g4_t_v189)) > _g4_s72 ? (260u + sizeof(_g4_t_v189)) : _g4_s72,
    _g4_s74 = (260u + sizeof(_g4_t_v190)) > _g4_s73 ? (260u + sizeof(_g4_t_v190)) : _g4_s73,
    _g4_s75 = (260u + sizeof(_g4_t_v191)) > _g4_s74 ? (260u + sizeof(_g4_t_v191)) : _g4_s74,
    _g4_s76 = (260u + sizeof(_g4_t_v192)) > _g4_s75 ? (260u + sizeof(_g4_t_v192)) : _g4_s75,
    _g4_s77 = (260u + sizeof(_g4_t_v193)) > _g4_s76 ? (260u + sizeof(_g4_t_v193)) : _g4_s76,
    _g4_s78 = (264u + sizeof(_g4_t_v194)) > _g4_s77 ? (264u + sizeof(_g4_t_v194)) : _g4_s77,
    _g4_s79 = (264u + sizeof(_g4_t_v195)) > _g4_s78 ? (264u + sizeof(_g4_t_v195)) : _g4_s78,
    _g4_s80 = (264u + sizeof(_g4_t_v196)) > _g4_s79 ? (264u + sizeof(_g4_t_v196)) : _g4_s79,
    _g4_s81 = (264u + sizeof(_g4_t_v197)) > _g4_s80 ? (264u + sizeof(_g4_t_v197)) : _g4_s80,
    _g4_s82 = (264u + sizeof(_g4_t_v198)) > _g4_s81 ? (264u + sizeof(_g4_t_v198)) : _g4_s81,
    _g4_s83 = (264u + sizeof(_g4_t_v199)) > _g4_s82 ? (264u + sizeof(_g4_t_v199)) : _g4_s82,
    _g4_s84 = (264u + sizeof(_g4_t_v200)) > _g4_s83 ? (264u + sizeof(_g4_t_v200)) : _g4_s83,
    _g4_s85 = (264u + sizeof(_g4_t_v201)) > _g4_s84 ? (264u + sizeof(_g4_t_v201)) : _g4_s84,
    _g4_s86 = (264u + sizeof(_g4_t_v202)) > _g4_s85 ? (264u + sizeof(_g4_t_v202)) : _g4_s85,
    _g4_s87 = (264u + sizeof(_g4_t_v203)) > _g4_s86 ? (264u + sizeof(_g4_t_v203)) : _g4_s86,
    _g4_s88 = (268u + sizeof(_g4_t_v204)) > _g4_s87 ? (268u + sizeof(_g4_t_v204)) : _g4_s87,
    _g4_s89 = (275u + sizeof(_g4_t_v205)) > _g4_s88 ? (275u + sizeof(_g4_t_v205)) : _g4_s88,
    _g4_s90 = (287u + sizeof(_g4_t_v206)) > _g4_s89 ? (287u + sizeof(_g4_t_v206)) : _g4_s89,
    _g4_s91 = (288u + sizeof(_g4_t_v207)) > _g4_s90 ? (288u + sizeof(_g4_t_v207)) : _g4_s90,
    _g4_s92 = (292u + sizeof(_g4_t_v208)) > _g4_s91 ? (292u + sizeof(_g4_t_v208)) : _g4_s91,
    _g4_s93 = (296u + sizeof(_g4_t_v209)) > _g4_s92 ? (296u + sizeof(_g4_t_v209)) : _g4_s92,
    _g4_s94 = (300u + sizeof(_g4_t_v210)) > _g4_s93 ? (300u + sizeof(_g4_t_v210)) : _g4_s93,
    _g4_s95 = (308u + sizeof(_g4_t_v211)) > _g4_s94 ? (308u + sizeof(_g4_t_v211)) : _g4_s94,
    _g4_s96 = (312u + sizeof(_g4_t_v212)) > _g4_s95 ? (312u + sizeof(_g4_t_v212)) : _g4_s95,
    _g4_s97 = (316u + sizeof(_g4_t_v213)) > _g4_s96 ? (316u + sizeof(_g4_t_v213)) : _g4_s96,
    _g4_s98 = (324u + sizeof(_g4_t_v214)) > _g4_s97 ? (324u + sizeof(_g4_t_v214)) : _g4_s97,
    _g4_s99 = (328u + sizeof(_g4_t_v215)) > _g4_s98 ? (328u + sizeof(_g4_t_v215)) : _g4_s98,
    _g4_s100 = (332u + sizeof(_g4_t_v216)) > _g4_s99 ? (332u + sizeof(_g4_t_v216)) : _g4_s99,
    _g4_s101 = (340u + sizeof(_g4_t_v217)) > _g4_s100 ? (340u + sizeof(_g4_t_v217)) : _g4_s100,
    _g4_s102 = (356u + sizeof(_g4_t_v218)) > _g4_s101 ? (356u + sizeof(_g4_t_v218)) : _g4_s101,
    _g4_s103 = (372u + sizeof(_g4_t_v219)) > _g4_s102 ? (372u + sizeof(_g4_t_v219)) : _g4_s102,
    _g4_s104 = (376u + sizeof(_g4_t_v220)) > _g4_s103 ? (376u + sizeof(_g4_t_v220)) : _g4_s103,
    _g4_s105 = (380u + sizeof(_g4_t_v221)) > _g4_s104 ? (380u + sizeof(_g4_t_v221)) : _g4_s104,
    _g4_s106 = (384u + sizeof(_g4_t_v222)) > _g4_s105 ? (384u + sizeof(_g4_t_v222)) : _g4_s105,
    _g4_s107 = (388u + sizeof(_g4_t_v223)) > _g4_s106 ? (388u + sizeof(_g4_t_v223)) : _g4_s106,
    _g4_s108 = (392u + sizeof(_g4_t_v224)) > _g4_s107 ? (392u + sizeof(_g4_t_v224)) : _g4_s107,
    _g4_s109 = (396u + sizeof(_g4_t_v225)) > _g4_s108 ? (396u + sizeof(_g4_t_v225)) : _g4_s108,
    _g4_s110 = (400u + sizeof(_g4_t_v226)) > _g4_s109 ? (400u + sizeof(_g4_t_v226)) : _g4_s109,
    _g4_s111 = (404u + sizeof(_g4_t_v227)) > _g4_s110 ? (404u + sizeof(_g4_t_v227)) : _g4_s110,
    _g4_s112 = (436u + sizeof(_g4_t_v228)) > _g4_s111 ? (436u + sizeof(_g4_t_v228)) : _g4_s111,
    _g4_s113 = (440u + sizeof(_g4_t_v229)) > _g4_s112 ? (440u + sizeof(_g4_t_v229)) : _g4_s112,
    _g4_s114 = (444u + sizeof(_g4_t_v230)) > _g4_s113 ? (444u + sizeof(_g4_t_v230)) : _g4_s113,
    _g4_s115 = (448u + sizeof(_g4_t_v231)) > _g4_s114 ? (448u + sizeof(_g4_t_v231)) : _g4_s114,
    _g4_s116 = (452u + sizeof(_g4_t_v232)) > _g4_s115 ? (452u + sizeof(_g4_t_v232)) : _g4_s115,
    _g4_s117 = (456u + sizeof(_g4_t_v233)) > _g4_s116 ? (456u + sizeof(_g4_t_v233)) : _g4_s116,
    _g4_s118 = (460u + sizeof(_g4_t_v234)) > _g4_s117 ? (460u + sizeof(_g4_t_v234)) : _g4_s117,
    _g4_s119 = (464u + sizeof(_g4_t_v235)) > _g4_s118 ? (464u + sizeof(_g4_t_v235)) : _g4_s118,
    _g4_s120 = (468u + sizeof(_g4_t_v236)) > _g4_s119 ? (468u + sizeof(_g4_t_v236)) : _g4_s119,
    _g4_s121 = (472u + sizeof(_g4_t_v237)) > _g4_s120 ? (472u + sizeof(_g4_t_v237)) : _g4_s120,
    _g4_s122 = (476u + sizeof(_g4_t_v238)) > _g4_s121 ? (476u + sizeof(_g4_t_v238)) : _g4_s121,
    _g4_s123 = (480u + sizeof(_g4_t_v239)) > _g4_s122 ? (480u + sizeof(_g4_t_v239)) : _g4_s122,
    _g4_s124 = (484u + sizeof(_g4_t_v240)) > _g4_s123 ? (484u + sizeof(_g4_t_v240)) : _g4_s123,
    _g4_s125 = (488u + sizeof(_g4_t_v241)) > _g4_s124 ? (488u + sizeof(_g4_t_v241)) : _g4_s124,
    _g4_s126 = (492u + sizeof(_g4_t_v242)) > _g4_s125 ? (492u + sizeof(_g4_t_v242)) : _g4_s125,
    _g4_s127 = (496u + sizeof(_g4_t_v243)) > _g4_s126 ? (496u + sizeof(_g4_t_v243)) : _g4_s126,
    _g4_s128 = (500u + sizeof(_g4_t_v244)) > _g4_s127 ? (500u + sizeof(_g4_t_v244)) : _g4_s127,
    _g4_s129 = (504u + sizeof(_g4_t_v245)) > _g4_s128 ? (504u + sizeof(_g4_t_v245)) : _g4_s128,
    _g4_s130 = (508u + sizeof(_g4_t_v246)) > _g4_s129 ? (508u + sizeof(_g4_t_v246)) : _g4_s129,
    _g4_s131 = (512u + sizeof(_g4_t_v247)) > _g4_s130 ? (512u + sizeof(_g4_t_v247)) : _g4_s130,
    _g4_s132 = (516u + sizeof(_g4_t_v248)) > _g4_s131 ? (516u + sizeof(_g4_t_v248)) : _g4_s131,
    _g4_s133 = (524u + sizeof(_g4_t_v249)) > _g4_s132 ? (524u + sizeof(_g4_t_v249)) : _g4_s132,
    _g4_s134 = (528u + sizeof(_g4_t_v250)) > _g4_s133 ? (528u + sizeof(_g4_t_v250)) : _g4_s133,
    _g4_s135 = (532u + sizeof(_g4_t_v251)) > _g4_s134 ? (532u + sizeof(_g4_t_v251)) : _g4_s134,
    _g4_s136 = (536u + sizeof(_g4_t_v252)) > _g4_s135 ? (536u + sizeof(_g4_t_v252)) : _g4_s135,
    _g4_s137 = (540u + sizeof(_g4_t_v253)) > _g4_s136 ? (540u + sizeof(_g4_t_v253)) : _g4_s136,
    _g4_s138 = (544u + sizeof(_g4_t_v254)) > _g4_s137 ? (544u + sizeof(_g4_t_v254)) : _g4_s137,
    _g4_s139 = (564u + sizeof(_g4_t_v255)) > _g4_s138 ? (564u + sizeof(_g4_t_v255)) : _g4_s138,
    _g4_s140 = (628u + sizeof(_g4_t_v256)) > _g4_s139 ? (628u + sizeof(_g4_t_v256)) : _g4_s139,
    _g4_s141 = (692u + sizeof(_g4_t_v257)) > _g4_s140 ? (692u + sizeof(_g4_t_v257)) : _g4_s140,
    _g4_s142 = (696u + sizeof(_g4_t_v258)) > _g4_s141 ? (696u + sizeof(_g4_t_v258)) : _g4_s141,
    _g4_s143 = (700u + sizeof(_g4_t_v259)) > _g4_s142 ? (700u + sizeof(_g4_t_v259)) : _g4_s142,
    _g4_s144 = (716u + sizeof(_g4_t_v260)) > _g4_s143 ? (716u + sizeof(_g4_t_v260)) : _g4_s143,
    _g4_s145 = (732u + sizeof(_g4_t_v261)) > _g4_s144 ? (732u + sizeof(_g4_t_v261)) : _g4_s144,
    _g4_s146 = (736u + sizeof(_g4_t_v262)) > _g4_s145 ? (736u + sizeof(_g4_t_v262)) : _g4_s145,
    _g4_s147 = (740u + sizeof(_g4_t_v263)) > _g4_s146 ? (740u + sizeof(_g4_t_v263)) : _g4_s146,
    _g4_s148 = (744u + sizeof(_g4_t_v264)) > _g4_s147 ? (744u + sizeof(_g4_t_v264)) : _g4_s147,
    _g4_s149 = (1212u + sizeof(_g4_t_v265)) > _g4_s148 ? (1212u + sizeof(_g4_t_v265)) : _g4_s148
  };
  alignas(16) uint8_t _g4_sf[_g4_s149];
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 12u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 12u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 16u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 20u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 48u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 68u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 84u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 84u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 84u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 100u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 100u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 100u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 100u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 100u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 100u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 128u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 132u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 136u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 140u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 148u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 156u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 160u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 164u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 168u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 172u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 176u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 180u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 180u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 184u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 188u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 192u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 196u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 200u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 204u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 208u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 208u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 212u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 212u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 212u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 216u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 220u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 220u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 224u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 224u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 228u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 228u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 232u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 232u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 232u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 236u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 236u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 236u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 240u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 240u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 240u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 240u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 240u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 240u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 244u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 248u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 248u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 248u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 248u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 248u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 252u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 252u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 252u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 256u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 256u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 256u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 256u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 256u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 260u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 260u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 260u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 260u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 260u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 264u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 264u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 264u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 264u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 264u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 264u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 264u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 264u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 264u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 264u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 268u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 275u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 287u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 288u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 292u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 296u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 300u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 308u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 312u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 316u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 324u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 328u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 332u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 340u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 356u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 372u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 376u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 380u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 384u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 388u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 392u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 396u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 400u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 404u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 436u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 440u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 444u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 448u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 452u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 456u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 460u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 464u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 468u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 472u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 476u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 480u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 484u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 488u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 492u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 496u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 500u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 504u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 508u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 512u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 516u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 524u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 528u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 532u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 536u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 540u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 544u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 564u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 628u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 692u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 696u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 700u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 716u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 732u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 736u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 740u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 744u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 1212u);

  v265 = &a1;
  v153 = a1;
  v141 = a3;
  v135 = a5;
  v8 = a2;
  v176 = a4;
  v142 = a2;
  v134 = a6;
  v133 = a7;
  v189 = a8;
  *a7 = 0;
  if ( v8 == 0 )
    return v142;
  hkQsTransformf::copyToTransform(v141, (hkTransformf::Self *)v255);
  G4_VCALL<void>(v142, 24, v255, 0, &v219);
  v256[0] = 1065353216;
  memset(&v256[1], 0, 16);
  v256[5] = 1065353216;
  memset(&v256[6], 0, 16);
  v256[10] = 1065353216;
  memset(&v256[11], 0, 20);
  v119 = &v227;
  G4_VCALL<void>(v142, 24, v256, 0);
  v9 = *v176;
  v10 = v223;
  if ( *v176 > v223 )
    return 0;
  v12 = v176[1];
  v13 = v224;
  if ( v12 > v224 )
    return 0;
  v14 = v176[2];
  v15 = v225;
  if ( v14 > v225 )
    return 0;
  v16 = v219;
  v175 = v176[4];
  if ( v219 > v175 )
    return 0;
  v194 = v176[5];
  v184 = v220;
  if ( v220 > v194 )
    return 0;
  v169 = v176[6];
  *(float *)&v181 = v221;
  if ( v221 > v169 )
    return 0;
  v159 = v222;
  v166 = v226;
  v161 = v176[7];
  if ( (((v161 >= v226 ? 8 : 0) | (v169 >= v225 ? 4 : 0) | (v175 >= v223) | (v194 >= v224 ? 2 : 0))
      & ((v221 >= v14 ? 4 : 0) | (v219 >= v9) | (v220 >= v12 ? 2 : 0))) == 7 )
    return v142;
  v17 = *(uint8_t *)(v142 + 8);
  if ( v17 != 16 )
  {
    if ( v17 != 17 )
      goto LABEL_13;
    v117 = G4_VCALL<int>(v142, 92);
    hkpBvCompressedMeshShape::getPrimitiveUserString((hkpBvCompressedMeshShape::Self *)&v207, v142);
    if ( (v207 & 0xFFFFFFFE) != 0 || *(uint8_t *)(v142 + 29) != 0 )
    {
      hkStringPtr::Destroy((hkStringPtr::Self *)&v207);
      hkErrStream::Construct((hkErrStream::Self *)v248, (hkString::Self *)&v257, 512);
      hkOstream::opShl(
        (int)(uintptr_t)(v248),
        (hkString::Self *)"attempting to crop a bv compressed mesh with an unhandled type of per-primitive data - shape will no"
                    "t be cropped.  Only non-string user data is supported per primitive, and per primitive filter data i"
                    "s not supported.");
      hkError::messageWarning(
        (hkError::Self *)0x79AF13E9,
        (int)(uintptr_t)(&v257),
        "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\Game\\Physics\\Havok\\Derived\\"
        "hkpStaticGeometryUtil.cpp",
        (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_1A4)->st_other,
        v120);
      hkErrStream::Destroy((hkErrStream::Self *)v248);
      v159 = v222;
      v175 = v176[4];
      v194 = v176[5];
      v184 = v220;
      v169 = v176[6];
      *(float *)&v181 = v221;
      v166 = v226;
      v16 = v219;
      v10 = v223;
      v13 = v224;
      v15 = v225;
      v9 = *v176;
      v12 = v176[1];
      v14 = v176[2];
      v161 = v176[7];
LABEL_13:
      if ( (((v161 >= (float)((float)(v166 + v159) * 0.5) ? 8 : 0)
           | (v169 >= (float)((float)(v15 + *(float *)&v181) * 0.5) ? 4 : 0)
           | (v175 >= (float)((float)(v10 + v16) * 0.5))
           | (v194 >= (float)((float)(v13 + v184) * 0.5) ? 2 : 0))
          & (((float)((float)(v15 + *(float *)&v181) * 0.5) >= v14 ? 4 : 0)
           | ((float)((float)(v10 + v16) * 0.5) >= v9)
           | ((float)((float)(v13 + v184) * 0.5) >= v12 ? 2 : 0))) == 7 )
      {
        v18 = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 28))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
        v19 = (hkClass::Self *)G4_VCALL<int>(v18, 28, v142);
        Name = (hkString::Self *)"<not found>";
        hkErrStream::Construct((hkErrStream::Self *)v248, (hkString::Self *)&v257, 512);
        if ( v19 != nullptr )
          Name = (hkString::Self *)hkClass::getName(v19);
        v21 = hkOstream::opShl((int)(uintptr_t)(v248), (hkString::Self *)"Shape ");
        v22 = hkOstream::opShl(v21, Name);
        hkOstream::opShl(
          v22,
          (hkString::Self *)" not supported for geometry cutting - won't be cropped.  Result may not fit into a single grid section.");
        hkError::messageWarning(
          (hkError::Self *)0x79AF13F0,
          (int)(uintptr_t)(&v257),
          "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\Game\\Physics\\Havok\\Derive"
          "d\\hkpStaticGeometryUtil.cpp",
          (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_1B4)->st_size,
          v120);
        hkErrStream::Destroy((hkErrStream::Self *)v248);
        return v142;
      }
      return 0;
    }
    hkStringPtr::Destroy((hkStringPtr::Self *)&v207);
    v35 = (const hkGeometry::Self *)sub_6C6960(v153, v142, v117);
    hkGeometry::Construct((hkGeometry::Self *)v248, v35);
    v132 = 0;
    while ( 1 )
    {
      v36 = v135[3];
      v37 = v135[1];
      v38 = v135[2];
      v217[0] = *v135;
      v217[1] = v37;
      v217[2] = v38;
      v217[3] = v36;
      v218[0] = v217[0] * v36;
      v218[1] = v37 * v36;
      v218[2] = v38 * v36;
      v218[3] = v36 * v36;
      hkVector4f::setTransformedInversePos((hkVector4f::Self *)&v228, v141, (const hkVector4f::Self *)v218);
      v236 = -*((float *)v141 + 4);
      v237 = -*((float *)v141 + 5);
      v39 = *((uint32_t *)v141 + 7);
      v238 = -*((float *)v141 + 6);
      v239 = v39;
      hkVector4f::setRotatedDir((hkVector4f::Self *)&v257, (const hkQuaternionf::Self *)&v236, (const hkVector4f::Self *)v217);
      v208 = 0;
      v209 = 0;
      v210 = 0x80000000;
      v140 = v253;
      if ( v253 > 0 )
        break;
LABEL_113:
      v211 = 0;
      v212 = nullptr;
      v213 = 0x80000000;
      v198 = (hkpStaticCompoundShape::Self *)v250;
      if ( v250 > 0 )
      {
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v204,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          &v211,
          v250,
          4);
        v85 = (char *)(v198 - v212);
        v86 = v211 + 4 * (uint32_t)(uintptr_t)(v212);
        if ( v198 - v212 > 0 )
        {
          v87 = -((uint8_t)(v86 & 0xF) >> 2) & 3;
          if ( v87 > (unsigned int)(uintptr_t)(v85) )
            v87 = v198 - v212;
          v88 = 0;
          if ( v87 == 0 )
            goto LABEL_185;
          do
            *(uint32_t *)(v86 + 4 * v88++) = -1;
          while ( v87 > v88 );
          if ( v85 != (char *)v87 )
          {
LABEL_185:
            v178 = &v85[-v87];
            v188 = (unsigned int)(uintptr_t)(&v85[-v87]) >> 2;
            v174 = 4 * v188;
            if ( 4 * v188 == 0 )
              goto LABEL_186;
            v89 = (__m128i *)(v86 + 4 * v87);
            v90 = 0;
            do
            {
              ++v90;
              *v89++ = g4_m128_from<__m128i>(-1LL);
            }
            while ( v188 > v90 );
            v88 += v174;
            if ( v178 != (char *)v174 )
            {
LABEL_186:
              do
                *(uint32_t *)(v86 + 4 * v88++) = -1;
              while ( (int)(uintptr_t)(v85) > (int)v88 );
            }
          }
        }
      }
      v212 = v198;
      v214 = 0;
      v215 = nullptr;
      v216 = 0x80000000;
      if ( v250 <= 0 )
      {
        v215 = nullptr;
      }
      else
      {
        v199 = (hkpStaticCompoundShape::Self *)v250;
        v91 = 0;
        for ( i = 0; i < (int)(uintptr_t)(v199); ++i )
        {
          if ( (float)((float)((float)((float)(*(float *)(v249 + 16 * i + 4) - v229) * v258)
                             + (float)((float)(*(float *)(v249 + 16 * i) - v228) * v257))
                     + (float)((float)(*(float *)(v249 + 16 * i + 8) - v230) * v259)) >= -0.0001f )
          {
            *(uint32_t *)(v211 + 4 * i) = v91;
            v93 = v215;
            v94 = (uint32_t *)(v249 + 16 * i);
            if ( v215 == (hkpStaticCompoundShape::Self *)(v216 & 0x3FFFFFFF) )
            {
              v124 = v249 + 16 * i;
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v214,
                &word_10,
                v119);
              v93 = v215;
              v94 = (uint32_t *)v124;
            }
            v95 = (uint32_t *)(v214 + 16 * (uint32_t)(uintptr_t)(v93));
            *v95 = *v94;
            v95[1] = v94[1];
            v95[2] = v94[2];
            v91 = (int)(uintptr_t)(v215) + 1;
            v95[3] = v94[3];
            v215 = (hkpStaticCompoundShape::Self *)v91;
            v199 = (hkpStaticCompoundShape::Self *)v250;
          }
        }
        v96 = v216;
        if ( (int)(uintptr_t)(v199) > v91 )
        {
          v97 = v249;
          v249 = v214;
          v250 = v91;
          v214 = v97;
          v98 = v251;
          v251 = v216;
          v215 = v199;
          v216 = v98;
          v96 = v98;
          v200 = (hkpStaticCompoundShape::Self *)(v253 - 1);
          if ( v253 - 1 >= 0 )
          {
            v99 = 16 * (v253 - 1);
            do
            {
              v103 = *(uint32_t *)(v211 + 4 * *(uint32_t *)(v252 + v99));
              *(uint32_t *)(v252 + v99) = v103;
              if ( v103 == -1
                || (v100 = v211,
                    v101 = *(uint32_t *)(v211 + 4 * *(uint32_t *)(v252 + v99 + 4)),
                    *(uint32_t *)(v252 + v99 + 4) = v101,
                    v101 == -1)
                || (v102 = *(uint32_t *)(v100 + 4 * *(uint32_t *)(v252 + v99 + 8)),
                    *(uint32_t *)(v252 + v99 + 8) = v102,
                    v102 == -1) )
              {
                if ( v200 != (hkpStaticCompoundShape::Self *)--v253 )
                {
                  v104 = (uint32_t *)(v252 + 16 * v253);
                  v105 = (uint32_t *)(v252 + v99);
                  *v105 = *v104;
                  v105[1] = v104[1];
                  v105[2] = v104[2];
                  v105[3] = v104[3];
                }
              }
              v200 = (hkpStaticCompoundShape::Self *)((char *)v200 - 1);
              v99 -= 16;
            }
            while ( v200 != (hkpStaticCompoundShape::Self *)-1 );
            v96 = v216;
          }
        }
        v215 = nullptr;
        if ( v96 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v214,
            16 * v96);
      }
      v214 = 0;
      v216 = 0x80000000;
      v212 = nullptr;
      if ( v213 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v211,
          4 * v213);
      v211 = 0;
      v213 = 0x80000000;
      v209 = 0;
      if ( v210 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v208,
          12 * v210);
      ++v132;
      v135 += 4;
      if ( v132 == 6 )
      {
        if ( v250 > 0 )
        {
          for ( j = 0; j < v250; ++j )
          {
            v118 = (hkVector4f::Self *)(v249 + 16 * j);
            hkVector4f::setTransformedPos(v118, v141, v118);
          }
        }
        v107 = nullptr;
        *v134 = hkQsTransformf_identityStorage;
        v134[1] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7104));
        v134[2] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7108));
        v134[3] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C710C));
        v134[4] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7110));
        v134[5] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7114));
        v134[6] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7118));
        v134[7] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C711C));
        v134[8] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7120));
        v134[9] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7124));
        v134[10] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7128));
        v134[11] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C712C));
        if ( v253 > 0 )
        {
          hkpBvCompressedMeshShapeCinfo::Construct((hkpBvCompressedMeshShapeCinfo::Self *)&v257);
          v257 = COERCE_FLOAT(((uint32_t)(uintptr_t)&off_20A1308));
          v108 = 0;
          v261 = v248;
          v262 = 0;
          v109 = *(uint8_t *)(v142 + 29) == 0;
          v263 = 0;
          v264 = 0x80000000;
          if ( !v109 )
            v108 = 2 - (*(uint32_t *)(v142 + 36) == 0);
          LOBYTE(v258) = v108;
          v110 = 0;
          if ( *(uint8_t *)(v142 + 30) != 0 )
          {
            v110 = 2;
            if ( *(int *)(v142 + 48) <= 0 )
              v110 = 2 * (*(uint32_t *)(v142 + 60) > 0) + 1;
          }
          BYTE1(v258) = v110;
          v259 = *(float *)(v142 + 24);
          v260 = *(uint8_t *)(v142 + 28);
          address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v107 = (hkpBvCompressedMeshShape::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                               *(uint32_t *)(*(uint32_t *)address + 44),
                                               224);
          hkpBvCompressedMeshShape::hkpBvCompressedMeshShape(v107, (const hkpBvCompressedMeshShapeCinfo::Self *)&v257);
          *v133 = 1;
          hkpDefaultBvCompressedMeshShapeCinfo::Destroy((hkpDefaultBvCompressedMeshShapeCinfo::Self *)&v257);
        }
        v248[0] = (int)((uint32_t)(uintptr_t)&off_20586B8);
        v253 = 0;
        if ( v254 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v252,
            16 * v254);
        v252 = 0;
        v254 = 0x80000000;
        v250 = 0;
        v142 = (unsigned int)(uintptr_t)(v107);
        if ( v251 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v249,
            16 * v251);
        return v142;
      }
    }
    v173 = 0;
    while ( 1 )
    {
      v168 = 16 * v173;
      v44 = (uint32_t *)(v252 + 16 * v173);
      v45 = (hkpStaticCompoundShape::Self *)*v44;
      v46 = (hkpStaticCompoundShape::Self *)v44[1];
      v196 = (hkpStaticCompoundShape::Self *)*v44;
      v177 = v44[2];
      v191 = v249;
      v47 = (float *)(v249 + 16 * *v44);
      v48 = *v47;
      v187 = v46;
      v49 = v47[1];
      v50 = v47[2];
      v51 = v47[3];
      v52 = (float *)(v249 + 16 * (uint32_t)(uintptr_t)(v46));
      v53 = *v52;
      v54 = v52[1];
      v154 = v48;
      v150 = v49;
      v55 = v52[2];
      v56 = v52[3];
      v57 = (float *)(v249 + 16 * v177);
      v149 = v50;
      v139 = v51;
      v148 = v55;
      v138 = v56;
      v147 = *v57;
      v146 = v57[1];
      v145 = v57[2];
      v137 = v57[3];
      v58 = (float)((float)((float)(v150 - v229) * v258) + (float)((float)(v154 - v228) * v257))
          + (float)((float)(v50 - v230) * v259);
      v59 = (float)((float)((float)(v54 - v229) * v258) + (float)((float)(v53 - v228) * v257))
          + (float)((float)(v148 - v230) * v259);
      v60 = (float)(*v57 - v228) * v257;
      v61 = (float)((float)((float)(v146 - v229) * v258) + v60) + (float)(v259 * (float)(v145 - v230));
      v183 = (float)(v59 * v58) < -0.0001f;
      v160 = (float)(v61 * v58) < -0.0001f;
      v162 = (float)(v61 * v59) < -0.0001f;
      if ( (float)(v59 * v58) >= -0.0001f )
      {
        v143 = 1;
        v151 = -1;
        v190 = 0;
      }
      else
      {
        if ( (int)(uintptr_t)(v45) <= (int)(uintptr_t)(v46) )
        {
          v45 = v46;
          v46 = v196;
        }
        v144 = v45;
        if ( v209 <= 0 )
          goto LABEL_66;
        v62 = 0;
        v63 = 0;
        while ( 1 )
        {
          v64 = v208 + v62;
          if ( *(uint32_t *)(v208 + v62) >= (int)(uintptr_t)(v46) )
          {
            if ( *(hkpStaticCompoundShape::Self **)(v208 + v62) != v46 )
              goto LABEL_66;
            v152 = *(hkpStaticCompoundShape::Self **)(v64 + 4);
            if ( (int)(uintptr_t)(v152) >= (int)(uintptr_t)(v144) )
              break;
          }
          ++v63;
          v62 += 12;
          if ( v63 == v209 )
            goto LABEL_66;
        }
        if ( v144 != v152 || (v151 = *(uint32_t *)(v64 + 8)) == -1 )
        {
LABEL_66:
          v65 = v250;
          v151 = v250;
          if ( v250 == (v251 & 0x3FFFFFFF) )
          {
            v125 = (float)((float)((float)(v150 - v229) * v258) + (float)((float)(v154 - v228) * v257))
                 + (float)((float)(v50 - v230) * v259);
            v122 = (float)((float)((float)(v146 - v229) * v258) + v60) + (float)(v259 * (float)(v145 - v230));
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v249,
              &word_10,
              v119);
            v65 = v250;
            v191 = v249;
            v61 = v122;
            v58 = v125;
          }
          v66 = (float *)(v191 + 16 * v65);
          v250 = v65 + 1;
          v67 = v58 / (float)(v58 - v59);
          *v66 = (float)((float)(v53 - v154) * v67) + v154;
          v66[1] = (float)((float)(v54 - v150) * v67) + v150;
          v66[2] = (float)((float)(v148 - v149) * v67) + v149;
          v66[3] = (float)((float)(v138 - v139) * v67) + v139;
          sub_6C5630(&v208, v196, v187, v151);
          v143 = 2;
          v190 = 1;
        }
        else
        {
          v143 = 2;
          v190 = 1;
        }
      }
      v164 = -1;
      if ( v162 )
      {
        v76 = (int)(uintptr_t)(v187);
        v77 = v177;
        if ( (int)(uintptr_t)(v187) <= v177 )
        {
          v76 = v177;
          v77 = (int)(uintptr_t)(v187);
        }
        v136 = v76;
        if ( v209 <= 0 )
          goto LABEL_97;
        v78 = 0;
        v79 = 0;
        while ( 1 )
        {
          v80 = v208 + v78;
          if ( *(uint32_t *)(v208 + v78) >= v77 )
          {
            if ( *(uint32_t *)(v208 + v78) != v77 )
              goto LABEL_97;
            v165 = *(uint32_t *)(v80 + 4);
            if ( v165 >= v136 )
              break;
          }
          ++v79;
          v78 += 12;
          if ( v79 == v209 )
            goto LABEL_97;
        }
        if ( v136 != v165 || (v164 = *(uint32_t *)(v80 + 8)) == -1 )
        {
LABEL_97:
          v81 = v250;
          v164 = v250;
          if ( v250 == (v251 & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v249,
              &word_10,
              v119);
            v81 = v250;
          }
          v82 = (float *)(v249 + 16 * v81);
          v250 = v81 + 1;
          v83 = v59 / (float)(v59 - v61);
          *v82 = (float)((float)(v147 - v53) * v83) + v53;
          v82[1] = (float)((float)(v146 - v54) * v83) + v54;
          v82[2] = (float)((float)(v145 - v148) * v83) + v148;
          v82[3] = (float)((float)(v137 - v138) * v83) + v138;
          sub_6C5630(&v208, v187, v177, v164);
        }
        v190 = v143;
      }
      if ( v160 )
        break;
      if ( v190 != 0 )
      {
        v186 = -1;
LABEL_56:
        v40 = v252;
        v41 = *(uint32_t *)(v252 + 16 * v173);
        v42 = *(uint32_t *)(v252 + v168 + 4);
        v43 = *(uint32_t *)(v252 + v168 + 8);
        v157 = *(uint32_t *)(v252 + v168 + 12);
        if ( v190 == 1 )
        {
          if ( v183 )
          {
            v202 = v253;
            v179 = v253;
            if ( v253 == (v254 & 0x3FFFFFFF) )
            {
              v129 = *(uint32_t *)(v252 + v168 + 8);
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v252,
                &word_10,
                v119);
              v40 = v252;
              v179 = v253;
              v43 = v129;
            }
            v115 = (uint32_t *)(v40 + 16 * v179);
            v115[1] = v42;
            v115[2] = v43;
            v115[3] = v157;
            *v115 = v41;
            ++v253;
            *(uint32_t *)(v252 + v168 + 4) = v151;
            *(uint32_t *)(v252 + 16 * v202) = v151;
          }
          else if ( v162 )
          {
            v203 = v253;
            v180 = v253;
            if ( v253 == (v254 & 0x3FFFFFFF) )
            {
              v130 = *(uint32_t *)(v252 + v168 + 8);
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v252,
                &word_10,
                v119);
              v40 = v252;
              v180 = v253;
              v43 = v130;
            }
            v116 = (uint32_t *)(v40 + 16 * v180);
            v116[1] = v42;
            v116[2] = v43;
            v116[3] = v157;
            *v116 = v41;
            ++v253;
            *(uint32_t *)(v252 + v168 + 8) = v164;
            *(uint32_t *)(v252 + 16 * v203 + 4) = v164;
          }
          else if ( v160 )
          {
            v197 = v253;
            v192 = v253;
            if ( v253 == (v254 & 0x3FFFFFFF) )
            {
              v131 = *(uint32_t *)(v252 + v168 + 8);
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v252,
                &word_10,
                v119);
              v40 = v252;
              v192 = v253;
              v43 = v131;
            }
            v84 = (uint32_t *)(v40 + 16 * v192);
            v84[1] = v42;
            v84[2] = v43;
            v84[3] = v157;
            *v84 = v41;
            ++v253;
            *(uint32_t *)(v252 + 16 * v173) = v186;
            *(uint32_t *)(v252 + 16 * v197 + 8) = v186;
          }
        }
        else if ( v190 == 2 )
        {
          v201 = v253;
          v193 = v253 + 1;
          v155 = v253;
          if ( v253 == (v254 & 0x3FFFFFFF) )
          {
            v128 = *(uint32_t *)(v252 + v168 + 8);
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v252,
              &word_10,
              v119);
            v40 = v252;
            v155 = v253;
            v43 = v128;
          }
          v112 = (uint32_t *)(v40 + 16 * v155);
          v112[3] = v157;
          *v112 = v41;
          v112[1] = v42;
          v112[2] = v43;
          v113 = v253 + 1;
          v253 = v113;
          if ( v113 == (v254 & 0x3FFFFFFF) )
          {
            v127 = v43;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v252,
              &word_10,
              v119);
            v113 = v253;
            v43 = v127;
          }
          v114 = (uint32_t *)(v252 + 16 * v113);
          v114[2] = v43;
          *v114 = v41;
          v114[1] = v42;
          v114[3] = v157;
          ++v253;
          if ( v183 )
          {
            *(uint32_t *)(v252 + v168 + 4) = v151;
            *(uint32_t *)(v252 + 16 * v201) = v151;
            if ( v160 )
              *(uint32_t *)(v252 + 16 * v193 + 4) = v151;
          }
          if ( v162 )
          {
            *(uint32_t *)(v252 + 16 * v201 + 8) = v164;
            *(uint32_t *)(v252 + 16 * v193 + 4) = v164;
            if ( v183 )
              *(uint32_t *)(v252 + v168 + 8) = v164;
          }
          if ( v160 )
          {
            *(uint32_t *)(v252 + 16 * v193) = v186;
            *(uint32_t *)(v252 + v168 + 8) = v186;
            if ( v162 )
              *(uint32_t *)(v252 + 16 * v201) = v186;
          }
        }
      }
      if ( ++v173 == v140 )
        goto LABEL_113;
    }
    v68 = v196;
    v69 = (hkpStaticCompoundShape::Self *)v177;
    if ( (int)(uintptr_t)(v196) <= v177 )
    {
      v68 = (hkpStaticCompoundShape::Self *)v177;
      v69 = v196;
    }
    v156 = v68;
    if ( v209 <= 0 )
      goto LABEL_81;
    v70 = 0;
    v71 = 0;
    while ( 1 )
    {
      v72 = v208 + v70;
      if ( *(uint32_t *)(v208 + v70) >= (int)(uintptr_t)(v69) )
      {
        if ( *(hkpStaticCompoundShape::Self **)(v208 + v70) != v69 )
          goto LABEL_81;
        v158 = *(hkpStaticCompoundShape::Self **)(v72 + 4);
        if ( (int)(uintptr_t)(v158) >= (int)(uintptr_t)(v156) )
          break;
      }
      ++v71;
      v70 += 12;
      if ( v71 == v209 )
        goto LABEL_81;
    }
    if ( v156 != v158 || (v186 = *(uint32_t *)(v72 + 8)) == -1 )
    {
LABEL_81:
      v73 = v250;
      v186 = v250;
      if ( v250 == (v251 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)&v249,
          &word_10,
          v119);
        v73 = v250;
      }
      v74 = (float *)(v249 + 16 * v73);
      v250 = v73 + 1;
      v75 = v58 / (float)(v58 - v61);
      *v74 = (float)((float)(v147 - v154) * v75) + v154;
      v74[1] = (float)((float)(v146 - v150) * v75) + v150;
      v74[2] = (float)((float)(v145 - v149) * v75) + v149;
      v74[3] = (float)((float)(v137 - v139) * v75) + v139;
      sub_6C5630(&v208, v196, v177, v186);
    }
    ++v190;
    goto LABEL_56;
  }
  if ( *(int *)(v142 + 36) <= 0 )
    return 0;
  v185 = 0;
  v195 = nullptr;
  v23 = (uint32_t *)v142;
  v24 = 0;
  do
  {
    v171 = v24 << 6;
    v30 = v23[8] + (v24 << 6);
    v236 = *(float *)v30;
    v237 = *(float *)(v30 + 4);
    v238 = *(float *)(v30 + 8);
    v239 = *(uint32_t *)(v30 + 12);
    v240 = *(uint32_t *)(v30 + 16);
    v241 = *(uint32_t *)(v30 + 20);
    v242 = *(uint32_t *)(v30 + 24);
    v243 = *(uint32_t *)(v30 + 28);
    v244 = *(uint32_t *)(v30 + 32);
    v245 = *(uint32_t *)(v30 + 36);
    v246 = *(uint32_t *)(v30 + 40);
    v247 = *(uint32_t *)(v30 + 44);
    v126 = v30;
    sub_6D3970(v248, v141, &v236);
    v206 = 0;
    (*(void (**)(char *))(*(uint32_t *)v189 + 8))(v205);
    if ( v205[0] != 0 )
    {
      v182 = (hkpShape::Self *)hkpStaticGeometryUtil::createCompressedMeshShape(v153, *(uint32_t *)(v126 + 48), v248, v176, v135, &v236, &v206, v189);
    }
    else
    {
      hkQsTransformf::copyToTransform((hkQsTransformf::Self *)v248, (hkTransformf::Self *)&v257);
      (*(void (**)(uint32_t, float *, uint32_t, float *))(**(uint32_t **)(v126 + 48) + 24))(
        *(uint32_t *)(v126 + 48),
        &v257,
        0,
        &v228);
      if ( ((uint8_t)((8 * ((float)((float)(v235 + v231) * 0.5) <= v176[7]))
                            | (4 * ((float)((float)(v234 + v230) * 0.5) <= v176[6]))
                            | ((float)((float)(v232 + v228) * 0.5) <= v176[4])
                            | (2 * ((float)((float)(v233 + v229) * 0.5) <= v176[5])))
          & (((float)((float)(v234 + v230) * 0.5) >= v176[2] ? 4 : 0)
           | ((float)((float)(v232 + v228) * 0.5) >= *v176)
           | ((float)((float)(v233 + v229) * 0.5) >= v176[1] ? 2 : 0))) != 7 )
        goto LABEL_36;
      v182 = *(hkpShape::Self **)(v126 + 48);
    }
    if ( v182 != nullptr )
    {
      if ( v195 == nullptr )
      {
        v34 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v195 = (hkpStaticCompoundShape::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v34 + 44) + 8))(
                                           *(uint32_t *)(*(uint32_t *)v34 + 44),
                                           112);
        hkpStaticCompoundShape::Construct(v195, 1);
      }
      v167 = hkpStaticCompoundShape::addInstance(v195, v182, (const hkQsTransformf::Self *)&v236);
      v25 = v167 << 6;
      *(uint32_t *)(*((uint32_t *)v195 + 8) + v25 + 52) = *(uint32_t *)(v23[8] + v171 + 52);
      *(uint32_t *)(*((uint32_t *)v195 + 8) + v25 + 56) = *(uint32_t *)(v23[8] + v171 + 56);
      *(uint32_t *)(*((uint32_t *)v195 + 8) + v25 + 60) = *(uint32_t *)(v23[8] + v171 + 60);
      v163 = *((uint32_t *)v195 + 8) + (v167 << 6);
      v121 = *(uint32_t *)(v163 + 12);
      v26 = v121 & 0x6F;
      if ( (*(uint8_t *)(v23[8] + v171 + 12) & 0x10) != 0 )
        v26 = v121 & 0x6F | 0x10;
      *(uint32_t *)(v163 + 12) = v121 & 0xC0FFFF80 | v26 | 0x3F000000;
      if ( v23[12] > v185 )
      {
        v170 = *(uint16_t *)(v23[11] + 2 * v185);
        v27 = v167 + 1;
        if ( *((uint32_t *)v195 + 12) >= v167 + 1 )
          v27 = *((uint32_t *)v195 + 12);
        v28 = *((uint32_t *)v195 + 13) & 0x3FFFFFFF;
        if ( v28 < v27 )
        {
          v29 = 2 * v28;
          v123 = v27;
          if ( v29 < v27 )
            v29 = v27;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v204,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (char *)v195 + 44,
            v29,
            2);
          v27 = v123;
        }
        *((uint32_t *)v195 + 12) = v27;
        *(uint16_t *)(*((uint32_t *)v195 + 11) + 2 * v167) = v170;
      }
      G4_VCALL<void>(v189, 12, v23, v185, v195, v167);
      if ( v206 != 0 && *((uint16_t *)v182 + 3) != 0 )
      {
        v172 = v23;
        do
        {
          v31 = *((uint32_t *)v182 + 1);
          HIWORD(v32) = HIWORD(v31);
          LOWORD(v32) = 0;
          v33 = v32 | (uint16_t)(v31 - 1);
        }
        while ( v31 != __sync_val_compare_and_swap((volatile int32_t *)v182 + 1, v31, v33) );
        v23 = v172;
        if ( (uint16_t)v33 == 0 )
          G4_VCALL<void>(v182, 16);
      }
    }
LABEL_36:
    v24 = ++v185;
  }
  while ( v23[9] > v185 );
  v142 = 0;
  if ( v195 != nullptr )
  {
    hkpStaticCompoundShape::bake(v195);
    v142 = (unsigned int)(uintptr_t)(v195);
    *v133 = 1;
  }
  return v142;
}

// ----------------------------------------------------------------------------
// Function: sub_6C9EC0  (binary VA: 0x6c9ec0)
// Original: sub_6C9EC0
// ----------------------------------------------------------------------------
int sub_6C9EC0(uint32_t *a1, uint32_t *a2, __m128 a3, __m128 a4, float *a5, int a6)
{
  uint32_t *v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12; // xmm0_4
  int v13; // xmm2_4
  int v14;
  int v15;
  float v16; // xmm5_4
  float v17; // xmm1_4
  __m128 v18;
  __m128 v19;
  __m128 v20;
  __m128 v21;
  int v22;
  int v23;
  float *v24;
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  int v30;
  float v31; // xmm0_4
  int v32;
  float v33; // xmm0_4
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  const hkpShape::Self *v38;
  int32_t v39;
  int v40;
  int32_t v41;
  uint32_t *v42;
  uint32_t *v43;
  int *v44;
  hkpStaticCompoundShape::Self *v45;
  hkQsTransformf::Self *v46;
  char *v47;
  int v48;
  int *v49;
  hkpRigidBody::Self *v50;
  int v51;
  volatile int32_t *v52;
  int *v53;
  int32_t v54;
  int v55;
  int32_t v56;
  typedef float *_g4_t_v57;
  typedef hkQsTransformf::Self *_g4_t_v58;
  typedef const hkpShape::Self *_g4_t_v59;
  typedef hkpRigidBody::Self *_g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef float _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int *_g4_t_address;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef char *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef hkpStaticCompoundShape::Self *_g4_t_v94;
  typedef int *_g4_t_v95;
  typedef hkpStaticCompoundShape::Self *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef uint32_t *_g4_t_v101;
  typedef char _g4_t_v102[16];
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef uint32_t _g4_t_v107[12];
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef float _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef float _g4_t_v131;
  typedef uint32_t _g4_t_v132[45];
  typedef char _g4_t_v133;
  typedef char _g4_t_v134;
  typedef float **_g4_t_v135;
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (12u + sizeof(_g4_t_v57)) > _g4_s0 ? (12u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v58)) > _g4_s1 ? (64u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (80u + sizeof(_g4_t_v59)) > _g4_s2 ? (80u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v60)) > _g4_s3 ? (80u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (96u + sizeof(_g4_t_v61)) > _g4_s4 ? (96u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v62)) > _g4_s5 ? (96u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (100u + sizeof(_g4_t_v63)) > _g4_s6 ? (100u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (104u + sizeof(_g4_t_v64)) > _g4_s7 ? (104u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v65)) > _g4_s8 ? (108u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v66)) > _g4_s9 ? (112u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v67)) > _g4_s10 ? (112u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v68)) > _g4_s11 ? (116u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v69)) > _g4_s12 ? (120u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v70)) > _g4_s13 ? (124u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (124u + sizeof(_g4_t_v71)) > _g4_s14 ? (124u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v72)) > _g4_s15 ? (128u + sizeof(_g4_t_v72)) : _g4_s15,
    _g4_s17 = (132u + sizeof(_g4_t_v73)) > _g4_s16 ? (132u + sizeof(_g4_t_v73)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v74)) > _g4_s17 ? (132u + sizeof(_g4_t_v74)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v75)) > _g4_s18 ? (136u + sizeof(_g4_t_v75)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_address)) > _g4_s19 ? (136u + sizeof(_g4_t_address)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v77)) > _g4_s20 ? (140u + sizeof(_g4_t_v77)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v78)) > _g4_s21 ? (140u + sizeof(_g4_t_v78)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v80)) > _g4_s22 ? (148u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v81)) > _g4_s23 ? (148u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v82)) > _g4_s24 ? (152u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v83)) > _g4_s25 ? (152u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v84)) > _g4_s26 ? (156u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v85)) > _g4_s27 ? (156u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v86)) > _g4_s28 ? (156u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v87)) > _g4_s29 ? (160u + sizeof(_g4_t_v87)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v88)) > _g4_s30 ? (164u + sizeof(_g4_t_v88)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v89)) > _g4_s31 ? (168u + sizeof(_g4_t_v89)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v90)) > _g4_s32 ? (168u + sizeof(_g4_t_v90)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v91)) > _g4_s33 ? (172u + sizeof(_g4_t_v91)) : _g4_s33,
    _g4_s35 = (172u + sizeof(_g4_t_v92)) > _g4_s34 ? (172u + sizeof(_g4_t_v92)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v93)) > _g4_s35 ? (172u + sizeof(_g4_t_v93)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v94)) > _g4_s36 ? (176u + sizeof(_g4_t_v94)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v95)) > _g4_s37 ? (176u + sizeof(_g4_t_v95)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v96)) > _g4_s38 ? (176u + sizeof(_g4_t_v96)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v97)) > _g4_s39 ? (180u + sizeof(_g4_t_v97)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v98)) > _g4_s40 ? (180u + sizeof(_g4_t_v98)) : _g4_s40,
    _g4_s42 = (184u + sizeof(_g4_t_v99)) > _g4_s41 ? (184u + sizeof(_g4_t_v99)) : _g4_s41,
    _g4_s43 = (184u + sizeof(_g4_t_v100)) > _g4_s42 ? (184u + sizeof(_g4_t_v100)) : _g4_s42,
    _g4_s44 = (184u + sizeof(_g4_t_v101)) > _g4_s43 ? (184u + sizeof(_g4_t_v101)) : _g4_s43,
    _g4_s45 = (188u + sizeof(_g4_t_v102)) > _g4_s44 ? (188u + sizeof(_g4_t_v102)) : _g4_s44,
    _g4_s46 = (204u + sizeof(_g4_t_v103)) > _g4_s45 ? (204u + sizeof(_g4_t_v103)) : _g4_s45,
    _g4_s47 = (208u + sizeof(_g4_t_v104)) > _g4_s46 ? (208u + sizeof(_g4_t_v104)) : _g4_s46,
    _g4_s48 = (212u + sizeof(_g4_t_v105)) > _g4_s47 ? (212u + sizeof(_g4_t_v105)) : _g4_s47,
    _g4_s49 = (216u + sizeof(_g4_t_v106)) > _g4_s48 ? (216u + sizeof(_g4_t_v106)) : _g4_s48,
    _g4_s50 = (224u + sizeof(_g4_t_v107)) > _g4_s49 ? (224u + sizeof(_g4_t_v107)) : _g4_s49,
    _g4_s51 = (272u + sizeof(_g4_t_v108)) > _g4_s50 ? (272u + sizeof(_g4_t_v108)) : _g4_s50,
    _g4_s52 = (276u + sizeof(_g4_t_v109)) > _g4_s51 ? (276u + sizeof(_g4_t_v109)) : _g4_s51,
    _g4_s53 = (280u + sizeof(_g4_t_v110)) > _g4_s52 ? (280u + sizeof(_g4_t_v110)) : _g4_s52,
    _g4_s54 = (284u + sizeof(_g4_t_v111)) > _g4_s53 ? (284u + sizeof(_g4_t_v111)) : _g4_s53,
    _g4_s55 = (288u + sizeof(_g4_t_v112)) > _g4_s54 ? (288u + sizeof(_g4_t_v112)) : _g4_s54,
    _g4_s56 = (292u + sizeof(_g4_t_v113)) > _g4_s55 ? (292u + sizeof(_g4_t_v113)) : _g4_s55,
    _g4_s57 = (296u + sizeof(_g4_t_v114)) > _g4_s56 ? (296u + sizeof(_g4_t_v114)) : _g4_s56,
    _g4_s58 = (300u + sizeof(_g4_t_v115)) > _g4_s57 ? (300u + sizeof(_g4_t_v115)) : _g4_s57,
    _g4_s59 = (304u + sizeof(_g4_t_v116)) > _g4_s58 ? (304u + sizeof(_g4_t_v116)) : _g4_s58,
    _g4_s60 = (308u + sizeof(_g4_t_v117)) > _g4_s59 ? (308u + sizeof(_g4_t_v117)) : _g4_s59,
    _g4_s61 = (312u + sizeof(_g4_t_v118)) > _g4_s60 ? (312u + sizeof(_g4_t_v118)) : _g4_s60,
    _g4_s62 = (316u + sizeof(_g4_t_v119)) > _g4_s61 ? (316u + sizeof(_g4_t_v119)) : _g4_s61,
    _g4_s63 = (320u + sizeof(_g4_t_v120)) > _g4_s62 ? (320u + sizeof(_g4_t_v120)) : _g4_s62,
    _g4_s64 = (324u + sizeof(_g4_t_v121)) > _g4_s63 ? (324u + sizeof(_g4_t_v121)) : _g4_s63,
    _g4_s65 = (328u + sizeof(_g4_t_v122)) > _g4_s64 ? (328u + sizeof(_g4_t_v122)) : _g4_s64,
    _g4_s66 = (332u + sizeof(_g4_t_v123)) > _g4_s65 ? (332u + sizeof(_g4_t_v123)) : _g4_s65,
    _g4_s67 = (336u + sizeof(_g4_t_v124)) > _g4_s66 ? (336u + sizeof(_g4_t_v124)) : _g4_s66,
    _g4_s68 = (340u + sizeof(_g4_t_v125)) > _g4_s67 ? (340u + sizeof(_g4_t_v125)) : _g4_s67,
    _g4_s69 = (344u + sizeof(_g4_t_v126)) > _g4_s68 ? (344u + sizeof(_g4_t_v126)) : _g4_s68,
    _g4_s70 = (348u + sizeof(_g4_t_v127)) > _g4_s69 ? (348u + sizeof(_g4_t_v127)) : _g4_s69,
    _g4_s71 = (352u + sizeof(_g4_t_v128)) > _g4_s70 ? (352u + sizeof(_g4_t_v128)) : _g4_s70,
    _g4_s72 = (356u + sizeof(_g4_t_v129)) > _g4_s71 ? (356u + sizeof(_g4_t_v129)) : _g4_s71,
    _g4_s73 = (360u + sizeof(_g4_t_v130)) > _g4_s72 ? (360u + sizeof(_g4_t_v130)) : _g4_s72,
    _g4_s74 = (364u + sizeof(_g4_t_v131)) > _g4_s73 ? (364u + sizeof(_g4_t_v131)) : _g4_s73,
    _g4_s75 = (368u + sizeof(_g4_t_v132)) > _g4_s74 ? (368u + sizeof(_g4_t_v132)) : _g4_s74,
    _g4_s76 = (548u + sizeof(_g4_t_v133)) > _g4_s75 ? (548u + sizeof(_g4_t_v133)) : _g4_s75,
    _g4_s77 = (571u + sizeof(_g4_t_v134)) > _g4_s76 ? (571u + sizeof(_g4_t_v134)) : _g4_s76,
    _g4_s78 = (584u + sizeof(_g4_t_v135)) > _g4_s77 ? (584u + sizeof(_g4_t_v135)) : _g4_s77
  };
  alignas(16) uint8_t _g4_sf[_g4_s78];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 96u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 96u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 100u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 104u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 108u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 112u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 112u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 116u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 120u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 124u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 124u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 128u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 132u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 132u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 136u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 136u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 140u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 140u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 148u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 148u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 152u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 152u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 156u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 156u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 156u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 160u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 164u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 168u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 168u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 172u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 172u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 172u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 176u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 176u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 176u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 180u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 180u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 184u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 184u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 184u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 188u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 204u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 208u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 212u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 216u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 224u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 272u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 276u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 280u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 284u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 288u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 292u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 296u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 300u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 304u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 308u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 312u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 316u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 320u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 324u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 328u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 332u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 336u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 340u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 344u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 348u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 352u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 356u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 360u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 364u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 368u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 548u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 571u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 584u);

  v6 = a1;
  v135 = &a5;
  result = a1[1];
  v88 = a5;
  v89 = a6;
  v66 = result;
  if ( result == 0 )
    return result;
  v104 = 0;
  v105 = 0;
  v106 = 0x80000000;
  if ( result > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = *v6;
      v10 = *(uint32_t **)(*v6 + 4 * v8);
      v99 = v10[62];
      v11 = v10[61];
      v97 = v10[63];
      v94 = (hkpStaticCompoundShape::Self *)v10[64];
      v91 = v10[65];
      v84 = v10[66];
      v82 = v10[67];
      v80 = v10[68];
      v77 = v10[69];
      v75 = v10[70];
      v73 = v10[71];
      v12 = v10[74];
      v72 = v10[72];
      v13 = v10[75];
      v70 = v10[73];
      v132[0] = v10[60];
      v132[1] = v11;
      v132[2] = v99;
      v132[3] = v97;
      v132[4] = (uint32_t)(uintptr_t)(v94);
      v132[5] = v91;
      v132[6] = v84;
      v132[7] = v82;
      v132[8] = v80;
      v132[9] = v77;
      v132[10] = v75;
      v132[11] = v73;
      v132[12] = v72;
      v132[13] = v70;
      v132[14] = v12;
      v132[15] = v13;
      v14 = *(uint32_t *)(v9 + 4 * v8);
      if ( v14 == -16 )
        goto LABEL_5;
      v15 = *(uint32_t *)(v14 + 16);
      if ( v15 == 0 )
        goto LABEL_5;
      v57 = &v108;
      G4_VCALL<void>(v15, 24, v132, 0);
      v65 = fminf(v65, v108);
      v64 = fminf(v64, v109);
g4_m128_raw(a4) =g4_m128_lane<uint32_t>(a4, 0);
g4_m128_raw(a3) =g4_m128_lane<uint32_t>(a3, 0);
      v87 = fminf(v87, v111);
      v63 = fminf(v63, v110);
g4_m128_lane<float>(a4, 0) = fmaxf(g4_m128_lane<float>(a4, 0), v112);
g4_m128_lane<float>(a3, 0) = fmaxf(g4_m128_lane<float>(a3, 0), v113);
      if ( v61 > v114 )
      {
        v66 = v6[1];
LABEL_5:
        if ( ++v8 >= v66 )
          break;
      }
      else
      {
        ++v8;
        v66 = v6[1];
        v61 = v114;
        if ( v8 >= v66 )
          break;
      }
    }
  }
  v16 =g4_m128_lane<float>(a4, 0) - v65;
  v17 =g4_m128_lane<float>(a3, 0) - v64;
g4_m128_raw(v18) = LODWORD(v61);
g4_m128_lane<float>(v18, 0) = v61 - v63;
  if ( (float)((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(g4_m128_lane<float>(v18, 0) *g4_m128_lane<float>(v18, 0))) > 0.0 )
  {
    v68 = *v88;
g4_m128_lane<float>(a4, 0) = v16 / *v88;
    v71 = v88[1];
    v69 = v88[2];
    if ( fabs(g4_m128_lane<float>(a4, 0)) < 8388608.0 )
    {
g4_m128_lane<float>(v19, 0) = (float)(int)g4_m128_lane<float>(a4, 0);
g4_m128_lane<float>(a4, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(a4, v19), 0) & 0x3F800000) +g4_m128_lane<float>(v19, 0);
    }
g4_m128_lane<float>(a3, 0) = v17 / v71;
    v85 = (int)g4_m128_lane<float>(a4, 0);
    if ( fabs(g4_m128_lane<float>(a3, 0)) < 8388608.0 )
    {
g4_m128_lane<float>(v20, 0) = (float)(int)g4_m128_lane<float>(a3, 0);
g4_m128_lane<float>(a3, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(a3, v20), 0) & 0x3F800000) +g4_m128_lane<float>(v20, 0);
    }
g4_m128_lane<float>(v18, 0) =g4_m128_lane<float>(v18, 0) / v69;
    v83 = (int)g4_m128_lane<float>(a3, 0);
    if ( fabs(g4_m128_lane<float>(v18, 0)) < 8388608.0 )
    {
g4_m128_lane<float>(v21, 0) = (float)(int)g4_m128_lane<float>(v18, 0);
g4_m128_lane<float>(v18, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v18, v21), 0) & 0x3F800000) +g4_m128_lane<float>(v21, 0);
    }
    v67 = 0;
    v81 = v83 * v85;
    v78 = v83 * v85 * (int)g4_m128_lane<float>(v18, 0);
    if ( v78 == 0
      || (v103 = 32 * v83 * v85 * (int)g4_m128_lane<float>(v18, 0),
          v67 = (*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                  (uint32_t *)(hkContainerTempAllocator::s_alloc),
                  &v103),
          v62 = v103 / 32,
          v103 / 32 == 0) )
    {
      v62 = 0x80000000;
    }
    v22 = a2[2] & 0x3FFFFFFF;
    if ( v78 <= v22 )
    {
      if ( v78 <= 0 )
      {
LABEL_37:
        if ( v62 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
            (uint32_t *)(hkContainerTempAllocator::s_alloc),
            v67,
            32 * v62);
        goto LABEL_39;
      }
    }
    else
    {
      v23 = 2 * v22;
      if ( v78 >= v23 )
        v23 = v83 * v85 * (int)g4_m128_lane<float>(v18, 0);
      hkArrayUtil::reserve((hkArrayUtil::Self *)v102, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, a2, v23, 4);
    }
    address = (int *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v92 = 0;
    do
    {
      v24 = (float *)(v67 + 32 * v92);
      v25 = v88[1];
      v26 = v88[2];
      v27 = v87 + v88[3];
      v28 = (float)((float)(v92 % v85) * v68) + v65;
      v29 = v28 + *v88;
      *v24 = v28;
      v24[7] = v27;
      v24[4] = v29;
      v24[1] = (float)((float)(v92 / v85 % v83) * v71) + v64;
      v24[5] = (float)((float)((float)(v92 / v85 % v83) * v71) + v64) + v25;
      v24[2] = (float)((float)(v92 / v81) * v69) + v63;
      v24[3] = v87;
      v24[6] = (float)((float)((float)(v92 / v81) * v69) + v63) + v26;
      v108 = 1.0;
      v109 = 0.0;
      v115 = -v29;
      v110 = 0.0;
      v111 = v28;
      v112 = -1.0;
      v113 = 0.0;
      v114 = 0.0;
      v30 = *((uint32_t *)v24 + 1);
      v116 = 0;
      v117 = 1065353216;
      v118 = 0;
      v119 = v30;
      v31 = v24[5];
      v120 = 0;
      v121 = -1082130432;
      v122 = 0;
      v123 = -v31;
      v127 = *((uint32_t *)v24 + 2);
      v32 = *address;
      v124 = 0;
      v125 = 0;
      v126 = 1065353216;
      v33 = v24[6];
      v128 = 0;
      v129 = 0;
      v131 = -v33;
      v130 = -1082130432;
      v95 = (int *)(*(int (**)(uint32_t, int))(**(uint32_t **)(v32 + 44) + 8))(*(uint32_t *)(v32 + 44), 112);
      hkpStaticCompoundShape::Construct(v95, 1);
      v34 = v6[1] - 1;
      v100 = v34;
      if ( v34 >= 0 )
      {
        v35 = 4 * v34;
        do
        {
          hkQsTransformf::setFromTransform((hkQsTransformf::Self *)v107, (const hkTransformf::Self *)(*(uint32_t *)(*v6 + v35) + 240));
          v36 = *(uint32_t *)(*v6 + v35);
          if ( v36 != -16 )
          {
            v37 = *(uint32_t *)(v36 + 16);
            if ( v37 != 0 )
            {
              std::memcpy(v132, v107, 48);
              LOBYTE(v103) = 0;
              v38 = (const hkpShape::Self *)hkpStaticGeometryUtil::createCompressedMeshShape(
                                        (int)(uintptr_t)(&v104),
                                        v37,
                                        (hkQsTransformf::Self *)v107,
                                        (float *)(v67 + 32 * v92),
                                        &v108,
                                        v132,
                                        &v103,
                                        v89);
              if ( v38 != nullptr )
              {
                v59 = v38;
                hkpStaticCompoundShape::addInstance((hkpStaticCompoundShape::Self *)v95, v38, (const hkQsTransformf::Self *)v132);
                if ( (uint8_t)v103 != 0 && *((uint16_t *)v59 + 3) != 0 )
                {
                  v74 = v35;
                  do
                  {
                    v39 = *((uint32_t *)v59 + 1);
                    HIWORD(v40) = HIWORD(v39);
                    LOWORD(v40) = 0;
                    v41 = v40 | (uint16_t)(v39 - 1);
                  }
                  while ( v39 != __sync_val_compare_and_swap((volatile int32_t *)v59 + 1, v39, v41) );
                  v35 = v74;
                  if ( (uint16_t)v41 == 0 )
                    G4_VCALL<void>(v59, 16);
                }
              }
            }
          }
          --v100;
          v35 -= 4;
        }
        while ( v100 != -1 );
      }
      v49 = v95;
      if ( v95[9] > 0 )
      {
        hkpStaticCompoundShape::bake((hkpStaticCompoundShape::Self *)v95);
        hkpRigidBodyCinfo::Construct((hkpRigidBodyCinfo::Self *)v132);
        v132[1] = (uint32_t)(uintptr_t)(v95);
        v133 = 5;
        v134 = -1;
        v60 = (hkpRigidBody::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                                *(uint32_t *)(*address + 44),
                                544);
        hkpRigidBody::Construct(v60, (const hkpRigidBodyCinfo::Self *)v132);
        v50 = v60;
        v51 = a2[1];
        if ( v51 == (a2[2] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc,
            (hkMemoryAllocator::Self *)a2,
            &loc_4,
            v57);
          v51 = a2[1];
          v50 = v60;
        }
        *(uint32_t *)(*a2 + 4 * v51) = (uint32_t)(uintptr_t)(v50);
        v49 = v95;
        ++a2[1];
      }
      if ( *((uint16_t *)v49 + 3) != 0 )
      {
        v101 = v6;
        v52 = v49 + 1;
        v53 = v49;
        do
        {
          v54 = v53[1];
          HIWORD(v55) = HIWORD(v54);
          LOWORD(v55) = 0;
          v56 = v55 | (uint16_t)(v54 - 1);
        }
        while ( v54 != __sync_val_compare_and_swap(v52, v54, v56) );
        v6 = v101;
        if ( (uint16_t)v56 == 0 )
          G4_VCALL<void>(v95, 16);
      }
      ++v92;
    }
    while ( v92 != v78 );
    goto LABEL_37;
  }
LABEL_39:
  v98 = v104;
  if ( v105 - 1 >= 0 )
  {
    v86 = v105 - 1;
    v42 = (uint32_t *)(v104 + 36 * (v105 - 1));
    v43 = v42 + 3;
    v90 = (char *)(v42 + 6);
    v96 = (hkpStaticCompoundShape::Self *)(v42 + 1);
    v44 = (int *)(v42 + 8);
    v93 = 36 * v105 - (uint32_t)(uintptr_t)(v42 + 6);
    v45 = (hkpStaticCompoundShape::Self *)(v42 + 1);
    do
    {
      v46 = (hkQsTransformf::Self *)((char *)v44 - v90);
      *(uint32_t *)((char *)v45  + ((uintptr_t)((char *)v44) - (uintptr_t)(v90 ))- 8) = ((uint32_t)(uintptr_t)&off_20586B8);
      v47 = (char *)v44 + v93;
      *(int *)((char *)v44 + v93 + v98 - 16) = 0;
      if ( *v44 >= 0 )
      {
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(v44 - 2),
          16 * *v44);
        v47 = (char *)v44 + v93;
        v46 = (hkQsTransformf::Self *)((char *)v44 - v90);
      }
      *(v44 - 2) = 0;
      *v44 = 0x80000000;
      *(uint32_t *)&v47[v98 - 28] = 0;
      v48 = v43[2];
      if ( v48 >= 0 )
      {
        v58 = v46;
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *v43,
          16 * v48);
        v46 = v58;
      }
      v45 = v96;
      *v43 = 0;
      v43[2] = 0x80000000;
      --v86;
      v44 -= 9;
      v43 -= 9;
      *(uint32_t *)((char *)v96 + (uint32_t)(uintptr_t)(v46) - 8) = ((uint32_t)(uintptr_t)&off_2054CB8);
    }
    while ( v86 != -1 );
  }
  result = v106;
  v105 = 0;
  if ( v106 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v104,
             36 * v106);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6CABA0  (binary VA: 0x6caba0)
// Original: sub_6CABA0
// ----------------------------------------------------------------------------
int sub_6CABA0(__m128 a1, __m128 a2, hkpWorld::Self *a3, float *a4, int a5)
{
  int v5;
  int v6;
  int i;
  hkpEntity::Self *v8;
  int v9;
  int v10;
  int v11;
  int32_t v12;
  int v13;
  int32_t v14;
  int result;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef hkpEntity::Self *const *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v22)) > _g4_s6 ? (36u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v18 = nullptr;
  v19 = 0;
  v20 = 0x80000000;
  v21 = 0;
  v22 = 0;
  v23 = 0x80000000;
  v5 = *((uint32_t *)a3 + 8);
  v6 = *(uint32_t *)(v5 + 80);
  if ( v6 > 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v8 = *(hkpEntity::Self **)(*(uint32_t *)(v5 + 76) + 4 * i);
      if ( v8 != nullptr && v8 != *((hkpEntity::Self **)a3 + 9) )
      {
        v9 = v19;
        if ( v19 == (v20 & 0x3FFFFFFF) )
        {
          v16 = v5;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)&v18, &loc_4);
          v9 = v19;
          v5 = v16;
        }
        ((char *)v18)[v9] = (char)(uintptr_t)(v8);
        ++v19;
        v6 = *(uint32_t *)(v5 + 80);
      }
    }
  }
  sub_6C9EC0(&v18, &v21, a1, a2, a4, a5);
  hkpWorld::addEntityBatch(a3, v21, v22, 1);
  v10 = v22;
  if ( v22 > 0 )
  {
    v17 = 0;
    do
    {
      v11 = *(uint32_t *)(v21 + 4 * v17);
      if ( *(uint16_t *)(v11 + 6) != 0 )
      {
        do
        {
          v12 = *(uint32_t *)(v11 + 4);
          HIWORD(v13) = HIWORD(v12);
          LOWORD(v13) = 0;
          v14 = v13 | (uint16_t)(v12 - 1);
        }
        while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v12, v14) );
        if ( (uint16_t)v14 == 0 )
          G4_VCALL<void>(v11, 16);
        v10 = v22;
      }
      ++v17;
    }
    while ( v17 < v10 );
  }
  hkpWorld::removeEntityBatch(a3, v18, v19);
  v22 = 0;
  if ( v23 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v21,
      4 * v23);
  result = v20;
  v21 = 0;
  v23 = 0x80000000;
  v19 = 0;
  if ( v20 >= 0 )
    return (*(int (**)(uint32_t *, hkpEntity::Self *const *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v18,
             4 * v20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6CADA0  (binary VA: 0x6cada0)
// Original: sub_6CADA0
// ----------------------------------------------------------------------------
uint32_t * sub_6CADA0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20558E8);
  a1[1] = -65535;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0x80000000;
  a1[6] = 0;
  a1[5] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6CADE0  (binary VA: 0x6cade0)
// Original: sub_6CADE0
// ----------------------------------------------------------------------------
int sub_6CADE0(int *a1, int *a2, int a3)
{
  int v3;
  int result;

  sub_69EBD0((int)(uintptr_t)(a1), a2 + 1, a3);
  sub_690A00(a1 + 31, a2 + 5);
  v3 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v3 - 12)) = a2[7];
  result = a2[8];
  a1[31] = result;
  a1[32] = 0;
  return result;
}



// ============================================================================
// Address:   0x6cae70 (size: 160 bytes)
// Symbol:    sub_6CAE70
// Demangled: sub_6CAE70
// ============================================================================
int (**sub_6CAE70(uint32_t *a1, int *a2))(int)
{
  sub_69FA90((int)(uintptr_t)(a1 + 33), a2);
  sub_69EBD0((int)(uintptr_t)(a1), (int *)((uint32_t)(uintptr_t)&off_2056184), (int)(uintptr_t)(a2));
  sub_690A00(a1 + 31, (int *)off_2056194);
  *a1 = ((uint32_t)(uintptr_t)&off_20561CC);
  a1[33] = ((uint32_t)(uintptr_t)&off_205644C);
  a1[31] = ((uint32_t)(uintptr_t)&off_2056258);
  a1[32] = 0;
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2056258));
}
// ----------------------------------------------------------------------------
// Function: sub_6CAF10  (binary VA: 0x6caf10)
// Original: sub_6CAF10
// ----------------------------------------------------------------------------
int * sub_6CAF10(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int32_t v5;
  int v6;
  int32_t v7;

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v2 - 12)) = a2[7];
  a1[31] = a2[8];
  v3 = a1[32];
  if ( v3 != 0 )
  {
    (*(void (**)(int))(*(uint32_t *)v3 + 56))(a1[32]);
    G4_VCALL<void>(a1[32], 48);
    v4 = a1[32];
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      do
      {
        v5 = *(uint32_t *)(v4 + 4);
        HIWORD(v6) = HIWORD(v5);
        LOWORD(v6) = 0;
        v7 = v6 | (uint16_t)(v5 - 1);
      }
      while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v5, v7) );
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
    }
    a1[32] = 0;
  }
  sub_690AE0(a1 + 31, a2 + 5);
  return sub_69F150(a1, a2 + 1);
}

// ----------------------------------------------------------------------------
// Function: sub_6CAFE0  (binary VA: 0x6cafe0)
// Original: sub_6CAFE0
// ----------------------------------------------------------------------------
int sub_6CAFE0(int *a1, int *a2, int a3)
{
  int v3;
  int result;

  sub_69F320((int)(uintptr_t)(a1), a2 + 1, a3);
  sub_690A00(a1 + 20, a2 + 5);
  v3 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v3 - 12)) = a2[7];
  result = a2[8];
  a1[20] = result;
  a1[21] = 0;
  return result;
}



// ============================================================================
// Address:   0x6cb070 (size: 151 bytes)
// Symbol:    sub_6CB070
// Demangled: sub_6CB070
// ============================================================================
int (**sub_6CB070(uint32_t *a1, int *a2))(int)
{
  sub_69FA90((int)(uintptr_t)(a1 + 22), a2);
  sub_69F320((int)(uintptr_t)(a1), (int *)((uint32_t)(uintptr_t)&off_2056DE4), (int)(uintptr_t)(a2));
  sub_690A00(a1 + 20, (int *)off_2056DF4);
  *a1 = ((uint32_t)(uintptr_t)&off_2056E2C);
  a1[22] = ((uint32_t)(uintptr_t)&off_20570A4);
  a1[20] = ((uint32_t)(uintptr_t)&off_2056EB0);
  a1[21] = 0;
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2056EB0));
}
// ----------------------------------------------------------------------------
// Function: sub_6CB110  (binary VA: 0x6cb110)
// Original: sub_6CB110
// ----------------------------------------------------------------------------
int * sub_6CB110(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int32_t v5;
  int v6;
  int32_t v7;

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v2 - 12)) = a2[7];
  a1[20] = a2[8];
  v3 = a1[21];
  if ( v3 != 0 )
  {
    (*(void (**)(int))(*(uint32_t *)v3 + 56))(a1[21]);
    G4_VCALL<void>(a1[21], 48);
    v4 = a1[21];
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      do
      {
        v5 = *(uint32_t *)(v4 + 4);
        HIWORD(v6) = HIWORD(v5);
        LOWORD(v6) = 0;
        v7 = v6 | (uint16_t)(v5 - 1);
      }
      while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v5, v7) );
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
    }
    a1[21] = 0;
  }
  sub_690AE0(a1 + 20, a2 + 5);
  return sub_69F860(a1, a2 + 1);
}

// ----------------------------------------------------------------------------
// Function: sub_6CB1E0  (binary VA: 0x6cb1e0)
// Original: sub_6CB1E0
// ----------------------------------------------------------------------------
int sub_6CB1E0(int *a1, int *a2)
{
  int v2;
  int result;

  sub_690A00(a1, a2 + 1);
  v2 = *a2;
  *a1 = *a2;
  result = *(uint32_t *)(v2 - 12);
  *(int *)((char *)a1 + result) = a2[3];
  a1[1] = 0;
  return result;
}



// ============================================================================
// Address:   0x6cb240 (size: 112 bytes)
// Symbol:    sub_6CB240
// Demangled: sub_6CB240
// ============================================================================
int (**sub_6CB240(int *a1, int *a2))(int)
{
  sub_69FA90((int)(uintptr_t)(a1 + 2), a2);
  sub_690A00(a1, (int *)((uint32_t)(uintptr_t)&off_20574DC));
  *a1 = (int)((uint32_t)(uintptr_t)&off_205750C);
  a1[1] = 0;
  a1[2] = (int)((uint32_t)(uintptr_t)&off_205770C);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_205770C));
}
// ----------------------------------------------------------------------------
// Function: sub_6CB2B0  (binary VA: 0x6cb2b0)
// Original: sub_6CB2B0
// ----------------------------------------------------------------------------
int * sub_6CB2B0(int *a1, int *a2)
{
  int v2;
  int v3;
  int32_t v4;
  int v5;
  int32_t v6;

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v2 - 12)) = a2[3];
  if ( a1[1] != 0 )
  {
    G4_VCALL<void>(a1, 24, 0);
    *(uint32_t *)(a1[1] + 12) = 0;
    v3 = a1[1];
    if ( *(uint16_t *)(v3 + 6) != 0 )
    {
      do
      {
        v4 = *(uint32_t *)(v3 + 4);
        HIWORD(v5) = HIWORD(v4);
        LOWORD(v5) = 0;
        v6 = v5 | (uint16_t)(v4 - 1);
      }
      while ( v4 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v4, v6) );
      if ( (uint16_t)v6 == 0 )
        G4_VCALL<void>(v3, 16);
    }
    a1[1] = 0;
  }
  return sub_690AE0(a1, a2 + 1);
}

// ----------------------------------------------------------------------------
// Function: sub_6CB360  (binary VA: 0x6cb360)
// Original: sub_6CB360
// ----------------------------------------------------------------------------
int sub_6CB360(hkpUnaryAction::Self *a1, hkpEntity::Self *a2, int a3)
{
  int result;

  hkpUnaryAction::Construct(a1, a2, 0);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2057828);
  *((uint32_t *)a1 + 7) = ((uint32_t)(uintptr_t)&off_205786C);
  result = a3;
  *((uint32_t *)a1 + 8) = a3;
  if ( a2 != nullptr )
    return hkpEntity::addEntityListener(a2, (char *)a1 + 28);
  return result;
}



// ============================================================================
// Address:   0x6cb3d0 (size: 88 bytes)
// Symbol:    sub_6CB3D0
// Demangled: sub_6CB3D0
// ============================================================================
int (**sub_6CB3D0(uint32_t *a1, int a2))(int)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Construct(a1 + 5, a2);
  *a1 = ((uint32_t)(uintptr_t)&off_2057828);
  a1[8] = 0;
  a1[7] = ((uint32_t)(uintptr_t)&off_205786C);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_205786C));
}
// ----------------------------------------------------------------------------
// Function: sub_6CB430  (binary VA: 0x6cb430)
// Original: sub_6CB430
// ----------------------------------------------------------------------------
int sub_6CB430(hkpUnaryAction::Self *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  hkGeometryUtils::Self *v7;
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
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  hkpUnaryAction::Self *v24;
  int v25;
  uint32_t *v26;
  int v27;
  int v28;
  float *v29;
  float v30; // xmm1_4
  float v31; // xmm6_4
  float v32; // xmm4_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  float v35; // xmm5_4
  float v36; // xmm6_4
  float v37; // xmm3_4
  __m128i v38;
  float v39; // xmm1_4
  __m128i v40;
  int v41;
  int result;
  typedef float _g4_t_v43;
  typedef hkGeometryUtils::Self *_g4_t_v44;
  typedef float _g4_t_v45;
  typedef void *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef hkpUnaryAction::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef float *_g4_t_v55;
  typedef uint8_t _g4_t_v56[16];
  typedef char _g4_t_v57[4];
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t _g4_t_v61[10];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v43)) > _g4_s0 ? (12u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v44)) > _g4_s1 ? (48u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v45)) > _g4_s2 ? (52u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v46)) > _g4_s3 ? (68u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v47)) > _g4_s4 ? (76u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v48)) > _g4_s5 ? (80u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v49)) > _g4_s6 ? (88u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v50)) > _g4_s7 ? (96u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v51)) > _g4_s8 ? (100u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v52)) > _g4_s9 ? (100u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v53)) > _g4_s10 ? (104u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v54)) > _g4_s11 ? (108u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v55)) > _g4_s12 ? (108u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v56)) > _g4_s13 ? (112u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v57)) > _g4_s14 ? (128u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (132u + sizeof(_g4_t_v58)) > _g4_s15 ? (132u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v59)) > _g4_s16 ? (136u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (140u + sizeof(_g4_t_v60)) > _g4_s17 ? (140u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (148u + sizeof(_g4_t_v61)) > _g4_s18 ? (148u + sizeof(_g4_t_v61)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 76u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 80u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 88u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 100u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 104u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 108u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 108u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 112u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 132u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 136u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 140u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 148u);

  v61[6] = (uint32_t)(uintptr_t)(&a1);
  v3 = a3;
  v4 = a2;
  v53 = a1;
  hkpUnaryAction::Construct(a1, nullptr, 0);
  *(uint32_t *)v53 = ((uint32_t)(uintptr_t)&off_20578A8);
  *((uint32_t *)v53 + 7) = ((uint32_t)(uintptr_t)&off_20578E0);
  *((uint32_t *)v53 + 8) = v4;
  *((uint32_t *)v53 + 10) = 0;
  *((uint32_t *)v53 + 11) = 0;
  *((uint32_t *)v53 + 12) = 0x80000000;
  *((uint32_t *)v53 + 13) = 0;
  *((uint32_t *)v53 + 14) = 0;
  *((uint32_t *)v53 + 15) = 0x80000000;
  hkpEntity::addEntityListener(v3, (char *)v53 + 28);
  v5 = *((uint32_t *)v53 + 8);
  *((uint32_t *)v53 + 6) = v3;
  *((uint32_t *)v53 + 9) = *(uint32_t *)(v5 + 4);
  hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Construct((hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v57);
  hkpShapeDisplayBuilder::Construct(
    (hkpShapeDisplayBuilder::Self *)v61,
    (const hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v57);
  v6 = *(uint32_t *)(v3 + 16);
  v58 = 0;
  v59 = 0;
  v60 = 0x80000000;
  hkpShapeDisplayBuilder::buildDisplayGeometries(v61, v6, &v58);
  if ( v59 > 0 )
  {
    v47 = 0;
    v46 = (char *)v53 + 52;
    do
    {
      (*(void (**)(uint32_t))(**(uint32_t **)(v58 + 4 * v47) + 20))(*(uint32_t *)(v58 + 4 * v47));
      v48 = *(uint32_t *)(v58 + 4 * v47);
      v7 = *(hkGeometryUtils::Self **)(v48 + 8);
      hkGeometryUtils::weldVertices(v7, (hkGeometry::Self *)0x3A83126F, v43);
      v8 = *((uint32_t *)v7 + 2);
      v51 = *((uint32_t *)v7 + 3);
      v49 = *((uint32_t *)v53 + 11);
      v54 = v51 + v49;
      v9 = *((uint32_t *)v53 + 12) & 0x3FFFFFFF;
      v10 = v49;
      if ( v51 + v49 > v9 )
      {
        v11 = 2 * v9;
        if ( v54 >= v11 )
          v11 = v51 + v49;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v56,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (char *)v53 + 40,
          v11,
          16);
        v10 = *((uint32_t *)v53 + 11);
      }
      v12 = *((uint32_t *)v53 + 10) + 16 * v10;
      if ( v51 > 0 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          ++v14;
          *(uint32_t *)(v12 + v13) = *(uint32_t *)(v8 + v13);
          *(uint32_t *)(v12 + v13 + 4) = *(uint32_t *)(v8 + v13 + 4);
          *(uint32_t *)(v12 + v13 + 8) = *(uint32_t *)(v8 + v13 + 8);
          *(uint32_t *)(v12 + v13 + 12) = *(uint32_t *)(v8 + v13 + 12);
          v13 += 16;
        }
        while ( v14 != v51 );
      }
      *((uint32_t *)v53 + 11) = v54;
      v15 = *((uint32_t *)v7 + 6);
      v16 = *((uint32_t *)v53 + 14) + v15 + 1;
      if ( v16 > (*((uint32_t *)v53 + 15) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserve((hkArrayUtil::Self *)v56, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v46, v16, 32);
        v15 = *((uint32_t *)v7 + 6);
      }
      if ( v15 > 0 )
      {
        v52 = 0;
        v44 = v7;
        do
        {
          v24 = v53;
          v25 = *((uint32_t *)v53 + 14);
          if ( v25 == (*((uint32_t *)v53 + 15) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)v46,
              &dword_20);
            v24 = v53;
            v25 = *((uint32_t *)v53 + 14);
          }
          *((uint32_t *)v24 + 14) = v25 + 1;
          v26 = (uint32_t *)(*((uint32_t *)v44 + 5) + 16 * v52);
          v27 = *((uint32_t *)v44 + 2);
          v28 = *((uint32_t *)v24 + 13) + 32 * v25;
          v29 = (float *)(v27 + 16 * *v26);
          v50 = v27 + 16 * v26[1];
          v55 = (float *)(v27 + 16 * v26[2]);
          *(uint32_t *)(v28 + 16) = *v26 + v49;
          *(uint32_t *)(v28 + 20) = *(uint32_t *)(*((uint32_t *)v44 + 5) + 16 * v52 + 4) + v49;
          *(uint32_t *)(v28 + 24) = *(uint32_t *)(*((uint32_t *)v44 + 5) + 16 * v52 + 8) + v49;
          v30 = *(float *)v50 - *v29;
          v31 = v29[1];
          v32 = *v55 - *v29;
          v33 = *(float *)(v50 + 4) - v31;
          v34 = v29[2];
          v35 = v55[1] - v31;
g4_m128_raw(v38) = *(unsigned int *)(v50 + 8);
          v36 = v55[2] - v34;
          *(float *)g4_m128_ptr<int32_t>(v38) = *(float *)g4_m128_ptr<int32_t>(v38) - v34;
          v37 = (float)(v36 * v33) - (float)(v35 * *(float *)g4_m128_ptr<int32_t>(v38));
          *(float *)g4_m128_ptr<int32_t>(v38) = (float)(*(float *)g4_m128_ptr<int32_t>(v38) * v32) - (float)(v36 * v30);
          v39 = (float)(v30 * v35) - (float)(v33 * v32);
          v40 = v38;
          *(float *)v28 = v37;
          *(uint32_t *)(v28 + 12) = 0;
          *(uint32_t *)(v28 + 4) =g4_m128_lane<int32_t>(v38, 0);
          *(float *)(v28 + 8) = v39;
          *(float *)g4_m128_ptr<int32_t>(v40) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v38) * *(float *)g4_m128_ptr<int32_t>(v38))
                                          + (float)(v37 * v37))
                                  + (float)(v39 * v39);
          if ( *(float *)g4_m128_ptr<int32_t>(v40) > 0.0 )
          {
            v17 = ((_mm_cvtsi128_si32(v40) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v40) >> 1));
            v18 = (float)(1.5
                        - (float)((float)(*(float *)&v17 * *(float *)&v17) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v40))))
                * *(float *)&v17;
            v19 = (float)(1.5 - (float)((float)(v18 * v18) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v40)))) * v18;
            v20 = (float)(1.5 - (float)((float)(v19 * v19) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v40)))) * v19;
            v21 = v37 * v20;
            v22 = *(float *)g4_m128_ptr<int32_t>(v38) * v20;
            v23 = v39 * v20;
            *(float *)v28 = v21;
            *(float *)(v28 + 4) = v22;
            *(float *)(v28 + 8) = v23;
            v45 = -(float)((float)((float)(v22 * v29[1]) + (float)(v21 * *v29)) + (float)(v23 * v29[2]));
            hkVector4f::setRotatedDir((hkVector4f::Self *)v28, (const hkMatrix3f::Self *)(v48 + 16), (const hkVector4f::Self *)v28);
            *(float *)(v28 + 12) = v45;
          }
          else
          {
            --*((uint32_t *)v53 + 14);
          }
          ++v52;
        }
        while ( *((uint32_t *)v44 + 6) > v52 );
      }
      v41 = *(uint32_t *)(v58 + 4 * v47);
      if ( v41 != 0 )
        (*(void (**)(uint32_t))(*(uint32_t *)v41 + 4))(*(uint32_t *)(v58 + 4 * v47));
      ++v47;
    }
    while ( v59 > v47 );
  }
  result = v60;
  v59 = 0;
  if ( v60 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v58,
             4 * v60);
  return result;
}



// ============================================================================
// Address:   0x6cb970 (size: 64 bytes)
// Symbol:    sub_6CB970
// Demangled: sub_6CB970
// ============================================================================
int (**sub_6CB970(uint32_t *a1, int *a2))(int)
{
  sub_6A08F0((int)(uintptr_t)(a1), a2);
  *a1 = (uint32_t)(uintptr_t)(&off_2057908);
  return (int (**)(int))(uintptr_t)(&off_2057908);
}
// ----------------------------------------------------------------------------
// Function: sub_6CB9B0  (binary VA: 0x6cb9b0)
// Original: sub_6CB9B0
// ----------------------------------------------------------------------------
int sub_6CB9B0(int *a1, int *a2)
{
  int v2;
  int result;

  sub_6A09A0(a1, a2 + 1);
  sub_690A00(a1 + 1, a2 + 5);
  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v2 - 12)) = a2[7];
  result = a2[8];
  a1[1] = result;
  a1[2] = 0;
  a1[3] = 1056964608;
  a1[4] = 1065353216;
  return result;
}



// ============================================================================
// Address:   0x6cba50 (size: 165 bytes)
// Symbol:    sub_6CBA50
// Demangled: sub_6CBA50
// ============================================================================
int (**sub_6CBA50(int *a1, int *a2))(int)
{
  sub_69FA90((int)(uintptr_t)(a1 + 5), a2);
  sub_6A09A0(a1, (int *)((uint32_t)(uintptr_t)&off_2058284));
  sub_690A00(a1 + 1, (int *)off_2058294);
  *a1 = (int)((uint32_t)(uintptr_t)&off_20582CC);
  a1[5] = (int)((uint32_t)(uintptr_t)&off_2058548);
  a1[1] = (int)((uint32_t)(uintptr_t)&off_2058354);
  a1[2] = 0;
  a1[3] = 1056964608;
  a1[4] = 1065353216;
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2058354));
}
// ----------------------------------------------------------------------------
// Function: sub_6CBB00  (binary VA: 0x6cbb00)
// Original: sub_6CBB00
// ----------------------------------------------------------------------------
int * sub_6CBB00(int *a1, int *a2)
{
  int v2;
  int v3;

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v2 - 12)) = a2[7];
  a1[1] = a2[8];
  v3 = a1[2];
  if ( v3 != 0 )
    (*(void (**)(int))(*(uint32_t *)v3 + 4))(a1[2]);
  a1[2] = 0;
  sub_690AE0(a1 + 1, a2 + 5);
  return sub_6A0AF0(a1, a2 + 1);
}

// ----------------------------------------------------------------------------
// Function: sub_6CBB80  (binary VA: 0x6cbb80)
// Original: sub_6CBB80
// ----------------------------------------------------------------------------
int sub_6CBB80(int a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  int result;
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm7_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm3_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm7_4
  float v30; // xmm7_4
  int v31;
  float v32; // xmm7_4
  int v33;
  float v34; // xmm4_4
  int v35;
  int v36;
  float v37; // xmm3_4
  float v38; // xmm3_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm7_4
  float v45; // xmm1_4
  float v46; // xmm3_4
  float v47; // xmm6_4
  float v48; // xmm4_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm0_4
  float v56; // xmm5_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm4_4
  float v61; // xmm0_4
  float *v62;
  float v63; // xmm2_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  float v66; // xmm3_4
  float v67; // xmm4_4
  float v68; // xmm1_4
  float v69; // xmm5_4
  float v70; // xmm0_4
  float v71; // xmm5_4
  float v72; // xmm2_4
  float v73; // xmm0_4
  float v74; // xmm7_4
  float v75; // xmm6_4
  float v76; // xmm2_4
  float v77; // xmm0_4
  float v78; // xmm4_4
  float v79; // xmm1_4
  float v80; // xmm6_4
  float v81; // xmm2_4
  float v82; // xmm3_4
  float v83; // xmm6_4
  float v84; // xmm7_4
  float v85; // xmm7_4
  float v86; // xmm6_4
  float v87; // xmm0_4
  float v88; // xmm7_4
  float v89; // xmm5_4
  float v90; // xmm4_4
  float v91; // xmm3_4
  float v92; // xmm6_4
  float v93; // xmm3_4
  float v94; // xmm4_4
  float v95; // xmm5_4
  float v96; // xmm1_4
  float v97; // xmm0_4
  float v98; // xmm4_4
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef uint32_t _g4_t_v109[16];
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef float _g4_t_v129;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v99)) > _g4_s0 ? (4u + sizeof(_g4_t_v99)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v100)) > _g4_s1 ? (8u + sizeof(_g4_t_v100)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v101)) > _g4_s2 ? (12u + sizeof(_g4_t_v101)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v102)) > _g4_s3 ? (16u + sizeof(_g4_t_v102)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v103)) > _g4_s4 ? (20u + sizeof(_g4_t_v103)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v104)) > _g4_s5 ? (20u + sizeof(_g4_t_v104)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v105)) > _g4_s6 ? (24u + sizeof(_g4_t_v105)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v106)) > _g4_s7 ? (24u + sizeof(_g4_t_v106)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v107)) > _g4_s8 ? (28u + sizeof(_g4_t_v107)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v108)) > _g4_s9 ? (28u + sizeof(_g4_t_v108)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v109)) > _g4_s10 ? (32u + sizeof(_g4_t_v109)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v110)) > _g4_s11 ? (96u + sizeof(_g4_t_v110)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v111)) > _g4_s12 ? (100u + sizeof(_g4_t_v111)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v112)) > _g4_s13 ? (104u + sizeof(_g4_t_v112)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v113)) > _g4_s14 ? (108u + sizeof(_g4_t_v113)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v114)) > _g4_s15 ? (112u + sizeof(_g4_t_v114)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v115)) > _g4_s16 ? (116u + sizeof(_g4_t_v115)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v116)) > _g4_s17 ? (120u + sizeof(_g4_t_v116)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v117)) > _g4_s18 ? (124u + sizeof(_g4_t_v117)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v118)) > _g4_s19 ? (128u + sizeof(_g4_t_v118)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v119)) > _g4_s20 ? (132u + sizeof(_g4_t_v119)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v120)) > _g4_s21 ? (136u + sizeof(_g4_t_v120)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v121)) > _g4_s22 ? (140u + sizeof(_g4_t_v121)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v122)) > _g4_s23 ? (144u + sizeof(_g4_t_v122)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v123)) > _g4_s24 ? (148u + sizeof(_g4_t_v123)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v124)) > _g4_s25 ? (152u + sizeof(_g4_t_v124)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v125)) > _g4_s26 ? (156u + sizeof(_g4_t_v125)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v126)) > _g4_s27 ? (160u + sizeof(_g4_t_v126)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v127)) > _g4_s28 ? (164u + sizeof(_g4_t_v127)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v128)) > _g4_s29 ? (168u + sizeof(_g4_t_v128)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v129)) > _g4_s30 ? (172u + sizeof(_g4_t_v129)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 4u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 8u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 12u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 16u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 20u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 20u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 24u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 24u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 28u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 28u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 32u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 96u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 100u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 104u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 108u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 112u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 116u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 120u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 124u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 128u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 132u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 136u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 140u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 144u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 148u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 152u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 156u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 160u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 164u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 168u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 172u);

  v4 = a3[2] - a2[7];
  v5 = a3[3] - a2[8];
  v6 = a3[4] - a2[9];
  result = 0;
  a4[7] = v4;
  a4[8] = v5;
  a4[9] = v6;
  v8 = v4 + a3[42];
  a4[7] = v8;
  v9 = v5 + a3[43];
  v105 = v8;
  a4[8] = v9;
  v10 = v6 + a3[44];
  v101 = v9;
  a4[9] = v10;
  v100 = v10;
  v11 = -a3[22];
  v12 = -a3[21];
  v113 = -a3[20];
  v114 = v12;
  v115 = v11;
  memset(v109, 0, sizeof(v109));
  v13 = a3[51];
  v109[15] = 1065353216;
  v14 = a3[50];
  v15 = (float)(v113 * v13) - (float)(v12 * v14);
  v16 = a3[52];
  v17 = (float)(v11 * v14) - (float)(v113 * v16);
  v18 = (float)(v12 * v16) - (float)(v11 * v13);
  v19 = (float)((float)(v17 * v17) + (float)(v18 * v18)) + (float)(v15 * v15);
  if ( v19 >= 0.00000001f )
  {
    if ( v19 != 0.0 )
    {
      v20 = 1.0 / fsqrt(v19);
      v21 = (float)((float)((float)(v19 * v20) * v20) + -3.0) * (float)(v20 * -0.5);
      v18 = v18 * v21;
      v17 = v17 * v21;
      v15 = v15 * v21;
    }
    v22 = (float)(v18 * v13) - (float)(v17 * v14);
    v23 = (float)(v15 * v14) - (float)(v18 * v16);
    v24 = (float)(v17 * v16) - (float)(v15 * v13);
    v25 = (float)((float)(v23 * v23) + (float)(v24 * v24)) + (float)(v22 * v22);
    if ( v25 != 0.0 )
    {
      v26 = 1.0 / fsqrt(v25);
      v27 = (float)((float)((float)(v25 * v26) * v26) + -3.0) * (float)(v26 * -0.5);
      v24 = v24 * v27;
      v23 = v23 * v27;
      v22 = v22 * v27;
    }
    v103 = (float)(v24 * v13) - (float)(v23 * v14);
    v99 = (float)(v22 * v14) - (float)(v24 * v16);
    v102 = (float)(v23 * v16) - (float)(v22 * v13);
    v28 = (float)((float)(v102 * v102) + (float)(v99 * v99)) + (float)(v103 * v103);
    if ( v28 != 0.0 )
    {
      v29 = fsqrt(v28);
      v30 = (float)((float)(1.0 / v29) * -0.5)
          * (float)((float)((float)((float)((float)((float)(v102 * v102)
                                                  + (float)((float)((float)(v22 * v14) - (float)(v24 * v16))
                                                          * (float)((float)(v22 * v14) - (float)(v24 * v16))))
                                          + (float)(v103 * v103))
                                  * (float)(1.0 / v29))
                          * (float)(1.0 / v29))
                  + -3.0);
      v102 = v102 * v30;
      v99 = v99 * v30;
      v103 = v103 * v30;
    }
    *(float *)&v109[4] = v102;
    *(float *)&v109[6] = v103;
    v31 = *(uint32_t *)(a1 + 8);
    v120 = v101;
    v128 = v31;
    v32 = a3[36];
    v33 = *((uint32_t *)a3 + 39);
    *(float *)v109 = v24;
    v116 = v33;
    v34 = v24 * a3[35];
    v35 = *((uint32_t *)a3 + 40);
    *(float *)&v109[1] = v23;
    v117 = v35;
    v36 = *((uint32_t *)a3 + 41);
    *(float *)&v109[2] = v22;
    v118 = v36;
    v37 = v22 * a3[37];
    *(float *)&v109[5] = v99;
    v119 = v105;
    *(float *)&v109[8] = v14;
    *(float *)&v109[9] = v13;
    *(float *)&v109[10] = v16;
    v110 = v14;
    v111 = v13;
    v112 = v16;
    v121 = v100;
    v122 = (float)((float)(v23 * v32) + v34) + v37;
    v125 = *((uint32_t *)a3 + 42);
    v38 = v102 * a3[35];
    v39 = v14 * a3[35];
    v126 = *((uint32_t *)a3 + 43);
    v40 = v16 * a3[37];
    v127 = *((uint32_t *)a3 + 44);
    v41 = (float)((float)(v13 * v32) + v39) + v40;
    v42 = a3[8] * *(float *)(a1 + 16);
    v123 = (float)((float)(v99 * v32) + v38) + (float)(v103 * a3[37]);
    v124 = v41;
    v129 = v42;
    result = sub_6C1D80(&v110, a4 + 1);
    v43 = a3[50];
    v44 = a3[51];
    v45 = a3[39];
    v46 = a3[40];
    v47 = a3[52];
    v48 = a3[41];
    if ( (float)((float)((float)(v44 * v46) + (float)(v43 * v45)) + (float)(v47 * v48)) < 0.62f )
    {
      v71 = (float)(v44 * v45) - (float)(v46 * v43);
      v72 = (float)(v43 * v48) - (float)(v47 * v45);
      v73 = (float)(v47 * v46) - (float)(v44 * v48);
      v74 = v72 * v45;
      v75 = v73 * v48;
      v76 = v72 * v48;
      v77 = (float)(v73 * v46) - v74;
      v78 = a4[1];
      v79 = (float)(v45 * v71) - v75;
      v80 = a4[2];
      v81 = v76 - (float)(v46 * v71);
      v82 = a4[3];
      if ( (float)((float)((float)(v79 * v80) + (float)(v81 * v78)) + (float)(v77 * v82)) <= 0.0 )
      {
        v88 = (float)((float)(a3[3] * v79) + (float)(a3[2] * v81)) + (float)(a3[4] * v77);
        v89 = (float)(v88 * v81) + v78;
        v90 = (float)(v88 * v79) + v80;
        a4[1] = v89;
        v91 = v82 + (float)(v88 * v77);
        a4[2] = v90;
        a4[3] = v91;
        v108 = v91;
        v92 = a3[8];
        v93 = fsqrt((float)((float)(a3[48] * a3[48]) + (float)(a3[47] * a3[47])) + (float)(a3[49] * a3[49]));
        v94 = v90 - (float)((float)(v79 * v92) * v93);
        v95 = v89 - (float)((float)(v81 * v92) * v93);
        v96 = v108 - (float)((float)(v77 * v92) * v93);
        a4[2] = v94;
        a4[1] = v95;
        a4[3] = v96;
        if ( fsqrt((float)((float)(v94 * v94) + (float)(v95 * v95)) + (float)(v96 * v96)) > 12.0 )
        {
          result = (int)(uintptr_t)(sub_5ED3D0(a4 + 1));
          a4[1] = a4[1] * 12.0;
          v97 = 12.0 * a4[3];
          a4[2] = a4[2] * 12.0;
          a4[3] = v97;
        }
      }
      else
      {
        a4[1] = v78 * 0.25;
        a4[2] = v80 * 0.25;
        a4[3] = v82 * 0.25;
      }
    }
    if ( a3[45] > 1.0 )
    {
      v49 = a3[39];
      v50 = a3[40];
      v51 = a3[41];
      v52 = (float)((float)((float)(a3[48] * v50) + (float)(a3[47] * v49)) + (float)(a3[49] * v51)) * a3[8];
      v53 = (float)(v49 * v52) + a4[1];
      v54 = (float)(v50 * v52) + a4[2];
      v55 = (float)(v52 * v51) + a4[3];
      a4[1] = v53;
      a4[2] = v54;
      a4[3] = v55;
    }
    if ( *(uint8_t *)(a1 + 21) != 0 )
    {
      v56 = a4[2];
      v104 = a4[3];
      v57 = v111;
      v58 = v112;
      v59 = (float)((float)(v56 * v111) + (float)(a4[1] * v110)) + (float)(v104 * v112);
      if ( v59 < 0.0 )
      {
        v60 = (float)((float)((float)(a3[48] * v111) + (float)(a3[47] * v110)) + (float)(a3[49] * v112)) * a3[8];
        v61 = v59 - (float)((float)((float)(a3[4] * v112) + (float)(a3[3] * v111)) + (float)(a3[2] * v110));
        if ( v60 > v61 )
        {
          v98 = v60 - v61;
          a4[1] = (float)(v110 * v98) + a4[1];
          a4[2] = (float)(v57 * v98) + v56;
          a4[3] = (float)(v58 * v98) + v104;
        }
      }
    }
    if ( *(uint8_t *)(a1 + 22) == 0 )
    {
      v62 = a4;
      v63 = a4[1] - a3[42];
      v64 = a4[2];
      v65 = a4[3];
      v66 = v110;
      v67 = v111;
      a4[1] = v63;
      v68 = v64 - a3[43];
      v69 = v112;
      a4[2] = v68;
      v70 = v65 - a3[44];
      a4[3] = v70;
      if ( (float)((float)((float)(v68 * v67) + (float)(v63 * v66)) + (float)(v70 * v69)) > 0.001f )
      {
        v83 = (float)((float)(v68 * v68) + (float)(v63 * v63)) + (float)(v70 * v70);
        if ( v83 != 0.0 )
        {
          v84 = 1.0 / fsqrt(v83);
          v106 = (float)(-0.5 * v84) * (float)((float)((float)(v83 * v84) * v84) + -3.0);
          v83 = (float)((float)((float)(v106 * v63) * (float)(v106 * v63))
                      + (float)((float)(v106 * v70) * (float)(v106 * v70)))
              + (float)((float)(v106 * v68) * (float)(v106 * v68));
        }
        v62 = a4;
        v107 = fsqrt(v83) / (float)((float)((float)(a3[40] * v67) + (float)(a3[39] * v66)) + (float)(a3[41] * v69));
        v85 = (float)(a3[39] * v68) - (float)(a3[40] * v63);
        v86 = (float)(a3[41] * v63) - (float)(a3[39] * v70);
        v87 = (float)(v70 * a3[40]) - (float)(v68 * a3[41]);
        v63 = (float)((float)(v86 * v69) - (float)(v85 * v67)) * v107;
        a4[1] = v63;
        v68 = (float)((float)(v85 * v66) - (float)(v69 * v87)) * v107;
        v70 = (float)((float)(v87 * v67) - (float)(v66 * v86)) * v107;
        a4[2] = v68;
        a4[3] = v70;
      }
      v62[1] = v63 + a3[42];
      v62[2] = v68 + a3[43];
      v62[3] = v70 + a3[44];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6CC680  (binary VA: 0x6cc680)
// Original: sub_6CC680
// ----------------------------------------------------------------------------
uint32_t * sub_6CC680(uint32_t *result, uint32_t *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6CC6E0  (binary VA: 0x6cc6e0)
// Original: sub_6CC6E0
// ----------------------------------------------------------------------------
int sub_6CC6E0(int a1, int a2)
{
  int result;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 64), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 128) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  result = *(uint32_t *)(a2 + 136);
  *(uint32_t *)(a1 + 136) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6CC790  (binary VA: 0x6cc790)
// Original: sub_6CC790
// ----------------------------------------------------------------------------
int sub_6CC790(int a1, int a2)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 64), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 128) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 136) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20557E8);
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint8_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 165) = 0;
  *(uint8_t *)(a1 + 166) = 0;
  *(uint32_t *)(a1 + 168) = -1078659925;
  *(uint32_t *)(a1 + 172) = 1061752795;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6CC8A0  (binary VA: 0x6cc8a0)
// Original: sub_6CC8A0
// ----------------------------------------------------------------------------
int sub_6CC8A0(int a1, int a2)
{
  int result;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 64), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 128) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 136) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20557E8);
  *(uint32_t *)(a1 + 140) = *(uint32_t *)(a2 + 140);
  *(uint32_t *)(a1 + 144) = *(uint32_t *)(a2 + 144);
  *(uint32_t *)(a1 + 148) = *(uint32_t *)(a2 + 148);
  *(uint32_t *)(a1 + 152) = *(uint32_t *)(a2 + 152);
  *(uint32_t *)(a1 + 156) = *(uint32_t *)(a2 + 156);
  *(uint32_t *)(a1 + 160) = *(uint32_t *)(a2 + 160);
  *(uint8_t *)(a1 + 164) = *(uint8_t *)(a2 + 164);
  result = *(uint8_t *)(a2 + 165);
  *(uint8_t *)(a1 + 165) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6CC9C0  (binary VA: 0x6cc9c0)
// Original: sub_6CC9C0
// ----------------------------------------------------------------------------
int sub_6CC9C0(int a1, int a2)
{
  int result;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 64), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 128) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 136) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20556C8);
  *(uint32_t *)(a1 + 140) = *(uint32_t *)(a2 + 140);
  *(uint32_t *)(a1 + 144) = *(uint32_t *)(a2 + 144);
  *(uint32_t *)(a1 + 148) = *(uint32_t *)(a2 + 148);
  *(uint32_t *)(a1 + 152) = *(uint32_t *)(a2 + 152);
  *(uint32_t *)(a1 + 156) = *(uint32_t *)(a2 + 156);
  *(uint32_t *)(a1 + 160) = *(uint32_t *)(a2 + 160);
  *(uint8_t *)(a1 + 164) = *(uint8_t *)(a2 + 164);
  *(uint8_t *)(a1 + 165) = *(uint8_t *)(a2 + 165);
  result = *(uint8_t *)(a2 + 166);
  *(uint8_t *)(a1 + 166) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6CCAF0  (binary VA: 0x6ccaf0)
// Original: sub_6CCAF0
// ----------------------------------------------------------------------------
int sub_6CCAF0(int a1, int a2)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 64), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 128) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 136) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20556C8);
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint8_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 165) = 0;
  *(uint8_t *)(a1 + 166) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6CCBE0  (binary VA: 0x6ccbe0)
// Original: sub_6CCBE0
// ----------------------------------------------------------------------------
int sub_6CCBE0(int a1, int a2)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 64), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 128) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 136) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20558C8);
  sub_6EEBB0(a1 + 140, a2);
  *(uint32_t *)(a1 + 372) = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 376) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 380) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 384) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 388) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 392) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 396) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 400) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 404) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 408) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 412) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 416) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 420) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 424) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 428) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 432) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 436), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 500) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 504) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 508) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)(a1 + 372) = (uint32_t)(uintptr_t)(&off_20556C8);
  *(uint32_t *)(a1 + 512) = 0;
  *(uint32_t *)(a1 + 516) = 0;
  *(uint32_t *)(a1 + 520) = 0;
  *(uint32_t *)(a1 + 524) = 0;
  *(uint32_t *)(a1 + 528) = 0;
  *(uint32_t *)(a1 + 532) = 0;
  *(uint8_t *)(a1 + 536) = 0;
  *(uint8_t *)(a1 + 537) = 0;
  *(uint8_t *)(a1 + 538) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6CCDC0  (binary VA: 0x6ccdc0)
// Original: sub_6CCDC0
// ----------------------------------------------------------------------------
int sub_6CCDC0(int a1, int a2)
{
  int result;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 64), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 128) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 136) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055528);
  *(uint32_t *)(a1 + 140) = *(uint32_t *)(a2 + 140);
  *(uint32_t *)(a1 + 144) = *(uint32_t *)(a2 + 144);
  *(uint32_t *)(a1 + 148) = *(uint32_t *)(a2 + 148);
  *(uint32_t *)(a1 + 152) = *(uint32_t *)(a2 + 152);
  *(uint32_t *)(a1 + 156) = *(uint32_t *)(a2 + 156);
  *(uint32_t *)(a1 + 160) = *(uint32_t *)(a2 + 160);
  *(uint32_t *)(a1 + 164) = *(uint32_t *)(a2 + 164);
  *(uint32_t *)(a1 + 168) = *(uint32_t *)(a2 + 168);
  *(uint32_t *)(a1 + 172) = *(uint32_t *)(a2 + 172);
  *(uint32_t *)(a1 + 176) = *(uint32_t *)(a2 + 176);
  *(uint32_t *)(a1 + 180) = *(uint32_t *)(a2 + 180);
  *(uint8_t *)(a1 + 184) = *(uint8_t *)(a2 + 184);
  *(uint32_t *)(a1 + 188) = *(uint32_t *)(a2 + 188);
  *(uint32_t *)(a1 + 192) = *(uint32_t *)(a2 + 192);
  *(uint32_t *)(a1 + 196) = *(uint32_t *)(a2 + 196);
  *(uint32_t *)(a1 + 200) = *(uint32_t *)(a2 + 200);
  *(uint32_t *)(a1 + 204) = *(uint32_t *)(a2 + 204);
  *(uint32_t *)(a1 + 208) = *(uint32_t *)(a2 + 208);
  *(uint32_t *)(a1 + 212) = *(uint32_t *)(a2 + 212);
  *(uint32_t *)(a1 + 216) = *(uint32_t *)(a2 + 216);
  result = *(uint32_t *)(a2 + 220);
  *(uint32_t *)(a1 + 220) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6CCF80  (binary VA: 0x6ccf80)
// Original: sub_6CCF80
// ----------------------------------------------------------------------------
int sub_6CCF80(int a1, int a2)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 64), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 128) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 136) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055528);
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 152) = 2;
  *(uint32_t *)(a1 + 164) = 1065353216;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint8_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint32_t *)(a1 + 192) = 0;
  *(uint32_t *)(a1 + 196) = 0;
  *(uint32_t *)(a1 + 200) = 0;
  *(uint32_t *)(a1 + 204) = 0;
  *(uint32_t *)(a1 + 208) = 0;
  *(uint32_t *)(a1 + 212) = 0;
  *(uint32_t *)(a1 + 216) = 0;
  *(uint32_t *)(a1 + 220) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6CD0C0  (binary VA: 0x6cd0c0)
// Original: sub_6CD0C0
// ----------------------------------------------------------------------------
int sub_6CD0C0(int a1, int a2)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 56) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 64), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 128) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 136) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20558C8);
  sub_6EEBB0(a1 + 140, a2);
  *(uint32_t *)(a1 + 372) = (uint32_t)(uintptr_t)(&off_2055818);
  *(uint32_t *)(a1 + 376) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 380) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 384) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 388) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 392) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 396) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 400) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 404) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 408) = *(uint32_t *)(a2 + 36);
  *(uint32_t *)(a1 + 412) = *(uint32_t *)(a2 + 40);
  *(uint32_t *)(a1 + 416) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 420) = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 424) = *(uint32_t *)(a2 + 52);
  *(uint32_t *)(a1 + 428) = *(uint32_t *)(a2 + 56);
  *(uint32_t *)(a1 + 432) = *(uint32_t *)(a2 + 60);
  sub_6CC680((uint32_t *)(a1 + 436), (uint32_t *)(a2 + 64));
  *(uint8_t *)(a1 + 500) = *(uint8_t *)(a2 + 128);
  *(uint32_t *)(a1 + 504) = *(uint32_t *)(a2 + 132);
  *(uint32_t *)(a1 + 508) = *(uint32_t *)(a2 + 136);
  *(uint32_t *)(a1 + 372) = (uint32_t)(uintptr_t)(&off_20556C8);
  *(uint32_t *)(a1 + 512) = 0;
  *(uint32_t *)(a1 + 516) = 0;
  *(uint32_t *)(a1 + 520) = 0;
  *(uint32_t *)(a1 + 524) = 0;
  *(uint32_t *)(a1 + 528) = 0;
  *(uint32_t *)(a1 + 532) = 0;
  *(uint8_t *)(a1 + 536) = 0;
  *(uint8_t *)(a1 + 537) = 0;
  *(uint8_t *)(a1 + 538) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6CD2A0  (binary VA: 0x6cd2a0)
// Original: sub_6CD2A0
// ----------------------------------------------------------------------------
int * sub_6CD2A0(int a1, int a2, int a3, float *a4)
{
  int v4;
  int *result;
  int v6;
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm7_4
  long double v21; // fst7
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm5_4
  int v26;
  float v27; // xmm7_4
  float v28; // xmm4_4
  float v29; // xmm4_4
  char v30; // di
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  long double v38; // fst7
  float v39; // xmm3_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  int64_t v42; // xmm1_8
  float v43; // xmm3_4
  int v44;
  __m128 v45;
  __m128 v46;
  __m128 v47;
  float v48; // xmm0_4
  __m128 v49;
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm2_4
  char v53;
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm0_4
  __m128 v57;
  float v58; // xmm1_4
  float *v59;
  float v60; // xmm1_4
  float v61; // xmm0_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm4_4
  float v65; // xmm3_4
  float v66; // xmm2_4
  float v67; // xmm1_4
  float v68; // xmm6_4
  float v69; // xmm0_4
  float v70; // xmm5_4
  float v71; // xmm0_4
  float v72; // xmm0_4
  float v73; // xmm5_4
  float v74; // xmm7_4
  float v75; // xmm0_4
  float v76; // xmm2_4
  float v77; // xmm1_4
  float v78; // xmm4_4
  float v79; // xmm0_4
  float v80; // xmm3_4
  float v81; // xmm2_4
  float v82; // xmm6_4
  float v83; // xmm2_4
  float v84; // xmm6_4
  float v85; // xmm4_4
  float v86; // xmm5_4
  float v87; // xmm6_4
  float v88; // xmm2_4
  float v89; // xmm2_4
  float v90; // xmm7_4
  float v91; // xmm2_4
  float v92; // xmm3_4
  float v93; // xmm1_4
  float v94; // xmm0_4
  float v95; // xmm0_4
  float v96; // xmm2_4
  float v97; // xmm0_4
  __m128 v98;
  float v99; // xmm3_4
  __m128 v100;
  __m128 v101;
  int v102;
  __m128 v103;
  float v104; // xmm2_4
  __m128 v105;
  float v106; // xmm2_4
  float v107; // xmm0_4
  float v108; // xmm1_4
  float v109;
  float v110; // xmm2_4
  float v111; // xmm6_4
  float v112; // xmm3_4
  float v113; // xmm0_4
  float v114; // xmm5_4
  float v115; // xmm4_4
  float v116; // xmm3_4
  float v117; // xmm1_4
  float v118; // xmm5_4
  float v119; // xmm0_4
  float v120; // xmm2_4
  float v121; // xmm0_4
  float v122; // xmm1_4
  float v123; // xmm2_4
  float v124; // xmm5_4
  float v125; // xmm2_4
  float v126; // xmm0_4
  float v127; // xmm1_4
  float v128; // xmm0_4
  float v129; // xmm3_4
  float v130; // xmm5_4
  float v131; // xmm4_4
  float v132; // xmm0_4
  float v133; // xmm6_4
  float v134; // xmm7_4
  float v135; // xmm2_4
  float v136; // xmm1_4
  float v137; // xmm2_4
  float v138; // xmm1_4
  float v139; // xmm2_4
  float v140; // xmm1_4
  float v141; // xmm1_4
  float v142; // xmm1_4
  float v143; // xmm2_4
  float v144; // xmm4_4
  float v145; // xmm4_4
  __m128 v146;
  __m128 v147;
  __m128 v148;
  __m128 v149;
  __m128 v150;
  __m128 v151;
  float v152; // xmm6_4
  float v153; // xmm6_4
  float v154; // xmm4_4
  float v155; // xmm3_4
  float v156; // xmm5_4
  float v157; // xmm0_4
  float v158; // xmm1_4
  float v159; // xmm0_4
  float v160; // xmm2_4
  float v161; // xmm5_4
  float v162; // xmm4_4
  float v163; // xmm0_4
  float v164; // xmm1_4
  float v165; // xmm0_4
  float v166; // xmm1_4
  float v167; // xmm6_4
  float v168; // xmm2_4
  float v169; // xmm1_4
  float v170; // xmm6_4
  float v171; // xmm3_4
  float v172; // xmm6_4
  float v173; // xmm7_4
  float v174; // xmm6_4
  float v175; // xmm6_4
  float v176; // xmm0_4
  float v177; // xmm0_4
  float v178; // xmm0_4
  float v179; // xmm7_4
  float v180; // xmm0_4
  float v181; // xmm3_4
  float v182; // xmm2_4
  float v183; // xmm1_4
  int v184;
  float v185; // xmm2_4
  int v186; // xmm5_4
  int v187;
  int v188;
  float i;
  int v190;
  int v191;
  int v192;
  float v193; // xmm1_4
  float v194; // xmm2_4
  float v195; // xmm1_4
  char v196; // di
  char v197;
  float v198; // xmm1_4
  char v199;
  float v200; // xmm3_4
  float v201; // xmm2_4
  float v202; // xmm2_4
  int v203;
  uint32_t *v204;
  uint32_t *v205;
  int v206;
  int v207;
  int v208;
  int v209;
  uint32_t *v210;
  uint32_t *v211;
  float v212; // xmm1_4
  uint32_t *v213;
  __m128 v214;
  __m128 v215;
  __m128 v216;
  __m128 v217;
  typedef float _g4_t_v218;
  typedef float _g4_t_v219;
  typedef float _g4_t_v220;
  typedef float _g4_t_v221;
  typedef float _g4_t_v222;
  typedef double _g4_t_v223;
  typedef float _g4_t_v224;
  typedef double _g4_t_v225;
  typedef float _g4_t_v226;
  typedef float _g4_t_v227;
  typedef float _g4_t_v228;
  typedef float _g4_t_v229;
  typedef float _g4_t_v230;
  typedef float _g4_t_v231;
  typedef float _g4_t_v232;
  typedef float _g4_t_v233;
  typedef float _g4_t_v234;
  typedef int _g4_t_v235;
  typedef float _g4_t_v236;
  typedef float _g4_t_v237;
  typedef float _g4_t_v238;
  typedef float _g4_t_v239;
  typedef float _g4_t_v240;
  typedef float _g4_t_v241;
  typedef float _g4_t_v242;
  typedef float _g4_t_v243;
  typedef float _g4_t_v244;
  typedef float _g4_t_v245;
  typedef float _g4_t_v246;
  typedef float _g4_t_v247;
  typedef float _g4_t_v248;
  typedef int _g4_t_v249;
  typedef float _g4_t_v250;
  typedef float _g4_t_v251;
  typedef float _g4_t_v252;
  typedef bool _g4_t_v253;
  typedef float _g4_t_v254;
  typedef float _g4_t_v255;
  typedef float _g4_t_v256;
  typedef char _g4_t_v257;
  typedef int _g4_t_v258;
  typedef float _g4_t_v259;
  typedef float _g4_t_v260;
  typedef float _g4_t_v261;
  typedef float _g4_t_v262;
  typedef float _g4_t_v263;
  typedef float _g4_t_v264;
  typedef float _g4_t_v265;
  typedef float _g4_t_v266;
  typedef float _g4_t_v267;
  typedef float _g4_t_v268;
  typedef float _g4_t_v269;
  typedef float _g4_t_v270;
  typedef float _g4_t_v271;
  typedef float _g4_t_v272;
  typedef float _g4_t_v273;
  typedef float _g4_t_v274;
  typedef float _g4_t_v275;
  typedef float _g4_t_v276;
  typedef int _g4_t_v277;
  typedef float _g4_t_v278;
  typedef float _g4_t_v279;
  typedef float _g4_t_v280;
  typedef float _g4_t_v281;
  typedef float _g4_t_v282;
  typedef float _g4_t_v283;
  typedef float _g4_t_v284;
  typedef double _g4_t_v285;
  typedef float _g4_t_v286;
  typedef float _g4_t_v287;
  typedef float _g4_t_v288;
  typedef float _g4_t_v289;
  typedef char _g4_t_v290;
  typedef float _g4_t_v291;
  typedef int _g4_t_v292;
  typedef float _g4_t_v293;
  typedef float _g4_t_v294;
  typedef float _g4_t_v295;
  typedef float _g4_t_v296;
  typedef float _g4_t_v297;
  typedef uint32_t *_g4_t_v298;
  typedef float _g4_t_v299;
  typedef float _g4_t_v300;
  typedef float _g4_t_v301;
  typedef float _g4_t_v302;
  typedef int _g4_t_v303;
  typedef int _g4_t_v304;
  typedef float _g4_t_v305;
  typedef float _g4_t_v306;
  typedef float _g4_t_v307;
  typedef float _g4_t_v308;
  typedef float _g4_t_v309;
  typedef int _g4_t_v310;
  typedef float _g4_t_v311;
  typedef float _g4_t_v312;
  typedef float _g4_t_v313;
  typedef float _g4_t_v314;
  typedef float _g4_t_v315;
  typedef float _g4_t_v316;
  typedef float _g4_t_v317;
  typedef float _g4_t_v318;
  typedef float _g4_t_v319;
  typedef float _g4_t_v320;
  typedef float _g4_t_v321;
  typedef float _g4_t_v322;
  typedef float _g4_t_v323;
  typedef float _g4_t_v324;
  typedef float _g4_t_v325;
  typedef g4_int128_t _g4_t_v326;
  typedef float _g4_t_v327;
  typedef float _g4_t_v328;
  typedef float _g4_t_v329;
  typedef float _g4_t_v330;
  typedef g4_int128_t _g4_t_v331;
  typedef float _g4_t_v332;
  typedef float _g4_t_v333;
  typedef int _g4_t_v334;
  typedef int _g4_t_v335;
  typedef float _g4_t_v336;
  typedef float _g4_t_v337;
  typedef float _g4_t_v338;
  typedef int _g4_t_v339;
  typedef int _g4_t_v340;
  typedef int _g4_t_v341;
  typedef int _g4_t_v342;
  typedef float _g4_t_v343;
  typedef int _g4_t_v344;
  typedef int _g4_t_v345;
  typedef float _g4_t_v346;
  typedef float _g4_t_v347[55];
  enum : size_t {
    _g4_s0 = 768u,
    _g4_s1 = (4u + sizeof(_g4_t_v218)) > _g4_s0 ? (4u + sizeof(_g4_t_v218)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v219)) > _g4_s1 ? (4u + sizeof(_g4_t_v219)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v220)) > _g4_s2 ? (4u + sizeof(_g4_t_v220)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v221)) > _g4_s3 ? (4u + sizeof(_g4_t_v221)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v222)) > _g4_s4 ? (4u + sizeof(_g4_t_v222)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v223)) > _g4_s5 ? (8u + sizeof(_g4_t_v223)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v224)) > _g4_s6 ? (32u + sizeof(_g4_t_v224)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v225)) > _g4_s7 ? (48u + sizeof(_g4_t_v225)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v226)) > _g4_s8 ? (48u + sizeof(_g4_t_v226)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v227)) > _g4_s9 ? (48u + sizeof(_g4_t_v227)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v228)) > _g4_s10 ? (64u + sizeof(_g4_t_v228)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v229)) > _g4_s11 ? (64u + sizeof(_g4_t_v229)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v230)) > _g4_s12 ? (64u + sizeof(_g4_t_v230)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v231)) > _g4_s13 ? (64u + sizeof(_g4_t_v231)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v232)) > _g4_s14 ? (96u + sizeof(_g4_t_v232)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v233)) > _g4_s15 ? (112u + sizeof(_g4_t_v233)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v234)) > _g4_s16 ? (112u + sizeof(_g4_t_v234)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v235)) > _g4_s17 ? (112u + sizeof(_g4_t_v235)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v236)) > _g4_s18 ? (128u + sizeof(_g4_t_v236)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v237)) > _g4_s19 ? (132u + sizeof(_g4_t_v237)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v238)) > _g4_s20 ? (136u + sizeof(_g4_t_v238)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v239)) > _g4_s21 ? (140u + sizeof(_g4_t_v239)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v240)) > _g4_s22 ? (144u + sizeof(_g4_t_v240)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v241)) > _g4_s23 ? (148u + sizeof(_g4_t_v241)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v242)) > _g4_s24 ? (152u + sizeof(_g4_t_v242)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v243)) > _g4_s25 ? (156u + sizeof(_g4_t_v243)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_v244)) > _g4_s26 ? (160u + sizeof(_g4_t_v244)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v245)) > _g4_s27 ? (164u + sizeof(_g4_t_v245)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v246)) > _g4_s28 ? (172u + sizeof(_g4_t_v246)) : _g4_s28,
    _g4_s30 = (172u + sizeof(_g4_t_v247)) > _g4_s29 ? (172u + sizeof(_g4_t_v247)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v248)) > _g4_s30 ? (172u + sizeof(_g4_t_v248)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v249)) > _g4_s31 ? (172u + sizeof(_g4_t_v249)) : _g4_s31,
    _g4_s33 = (176u + sizeof(_g4_t_v250)) > _g4_s32 ? (176u + sizeof(_g4_t_v250)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v251)) > _g4_s33 ? (176u + sizeof(_g4_t_v251)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v252)) > _g4_s34 ? (176u + sizeof(_g4_t_v252)) : _g4_s34,
    _g4_s36 = (180u + sizeof(_g4_t_v253)) > _g4_s35 ? (180u + sizeof(_g4_t_v253)) : _g4_s35,
    _g4_s37 = (180u + sizeof(_g4_t_v254)) > _g4_s36 ? (180u + sizeof(_g4_t_v254)) : _g4_s36,
    _g4_s38 = (184u + sizeof(_g4_t_v255)) > _g4_s37 ? (184u + sizeof(_g4_t_v255)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v256)) > _g4_s38 ? (184u + sizeof(_g4_t_v256)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v257)) > _g4_s39 ? (184u + sizeof(_g4_t_v257)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v258)) > _g4_s40 ? (188u + sizeof(_g4_t_v258)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v259)) > _g4_s41 ? (188u + sizeof(_g4_t_v259)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v260)) > _g4_s42 ? (188u + sizeof(_g4_t_v260)) : _g4_s42,
    _g4_s44 = (188u + sizeof(_g4_t_v261)) > _g4_s43 ? (188u + sizeof(_g4_t_v261)) : _g4_s43,
    _g4_s45 = (192u + sizeof(_g4_t_v262)) > _g4_s44 ? (192u + sizeof(_g4_t_v262)) : _g4_s44,
    _g4_s46 = (192u + sizeof(_g4_t_v263)) > _g4_s45 ? (192u + sizeof(_g4_t_v263)) : _g4_s45,
    _g4_s47 = (196u + sizeof(_g4_t_v264)) > _g4_s46 ? (196u + sizeof(_g4_t_v264)) : _g4_s46,
    _g4_s48 = (196u + sizeof(_g4_t_v265)) > _g4_s47 ? (196u + sizeof(_g4_t_v265)) : _g4_s47,
    _g4_s49 = (200u + sizeof(_g4_t_v266)) > _g4_s48 ? (200u + sizeof(_g4_t_v266)) : _g4_s48,
    _g4_s50 = (204u + sizeof(_g4_t_v267)) > _g4_s49 ? (204u + sizeof(_g4_t_v267)) : _g4_s49,
    _g4_s51 = (204u + sizeof(_g4_t_v268)) > _g4_s50 ? (204u + sizeof(_g4_t_v268)) : _g4_s50,
    _g4_s52 = (224u + sizeof(_g4_t_v269)) > _g4_s51 ? (224u + sizeof(_g4_t_v269)) : _g4_s51,
    _g4_s53 = (224u + sizeof(_g4_t_v270)) > _g4_s52 ? (224u + sizeof(_g4_t_v270)) : _g4_s52,
    _g4_s54 = (228u + sizeof(_g4_t_v271)) > _g4_s53 ? (228u + sizeof(_g4_t_v271)) : _g4_s53,
    _g4_s55 = (228u + sizeof(_g4_t_v272)) > _g4_s54 ? (228u + sizeof(_g4_t_v272)) : _g4_s54,
    _g4_s56 = (232u + sizeof(_g4_t_v273)) > _g4_s55 ? (232u + sizeof(_g4_t_v273)) : _g4_s55,
    _g4_s57 = (232u + sizeof(_g4_t_v274)) > _g4_s56 ? (232u + sizeof(_g4_t_v274)) : _g4_s56,
    _g4_s58 = (232u + sizeof(_g4_t_v275)) > _g4_s57 ? (232u + sizeof(_g4_t_v275)) : _g4_s57,
    _g4_s59 = (240u + sizeof(_g4_t_v276)) > _g4_s58 ? (240u + sizeof(_g4_t_v276)) : _g4_s58,
    _g4_s60 = (244u + sizeof(_g4_t_v277)) > _g4_s59 ? (244u + sizeof(_g4_t_v277)) : _g4_s59,
    _g4_s61 = (244u + sizeof(_g4_t_v278)) > _g4_s60 ? (244u + sizeof(_g4_t_v278)) : _g4_s60,
    _g4_s62 = (248u + sizeof(_g4_t_v279)) > _g4_s61 ? (248u + sizeof(_g4_t_v279)) : _g4_s61,
    _g4_s63 = (248u + sizeof(_g4_t_v280)) > _g4_s62 ? (248u + sizeof(_g4_t_v280)) : _g4_s62,
    _g4_s64 = (252u + sizeof(_g4_t_v281)) > _g4_s63 ? (252u + sizeof(_g4_t_v281)) : _g4_s63,
    _g4_s65 = (252u + sizeof(_g4_t_v282)) > _g4_s64 ? (252u + sizeof(_g4_t_v282)) : _g4_s64,
    _g4_s66 = (252u + sizeof(_g4_t_v283)) > _g4_s65 ? (252u + sizeof(_g4_t_v283)) : _g4_s65,
    _g4_s67 = (252u + sizeof(_g4_t_v284)) > _g4_s66 ? (252u + sizeof(_g4_t_v284)) : _g4_s66,
    _g4_s68 = (256u + sizeof(_g4_t_v285)) > _g4_s67 ? (256u + sizeof(_g4_t_v285)) : _g4_s67,
    _g4_s69 = (256u + sizeof(_g4_t_v286)) > _g4_s68 ? (256u + sizeof(_g4_t_v286)) : _g4_s68,
    _g4_s70 = (256u + sizeof(_g4_t_v287)) > _g4_s69 ? (256u + sizeof(_g4_t_v287)) : _g4_s69,
    _g4_s71 = (264u + sizeof(_g4_t_v288)) > _g4_s70 ? (264u + sizeof(_g4_t_v288)) : _g4_s70,
    _g4_s72 = (264u + sizeof(_g4_t_v289)) > _g4_s71 ? (264u + sizeof(_g4_t_v289)) : _g4_s71,
    _g4_s73 = (264u + sizeof(_g4_t_v290)) > _g4_s72 ? (264u + sizeof(_g4_t_v290)) : _g4_s72,
    _g4_s74 = (264u + sizeof(_g4_t_v291)) > _g4_s73 ? (264u + sizeof(_g4_t_v291)) : _g4_s73,
    _g4_s75 = (264u + sizeof(_g4_t_v292)) > _g4_s74 ? (264u + sizeof(_g4_t_v292)) : _g4_s74,
    _g4_s76 = (268u + sizeof(_g4_t_v293)) > _g4_s75 ? (268u + sizeof(_g4_t_v293)) : _g4_s75,
    _g4_s77 = (268u + sizeof(_g4_t_v294)) > _g4_s76 ? (268u + sizeof(_g4_t_v294)) : _g4_s76,
    _g4_s78 = (268u + sizeof(_g4_t_v295)) > _g4_s77 ? (268u + sizeof(_g4_t_v295)) : _g4_s77,
    _g4_s79 = (268u + sizeof(_g4_t_v296)) > _g4_s78 ? (268u + sizeof(_g4_t_v296)) : _g4_s78,
    _g4_s80 = (268u + sizeof(_g4_t_v297)) > _g4_s79 ? (268u + sizeof(_g4_t_v297)) : _g4_s79,
    _g4_s81 = (268u + sizeof(_g4_t_v298)) > _g4_s80 ? (268u + sizeof(_g4_t_v298)) : _g4_s80,
    _g4_s82 = (272u + sizeof(_g4_t_v299)) > _g4_s81 ? (272u + sizeof(_g4_t_v299)) : _g4_s81,
    _g4_s83 = (272u + sizeof(_g4_t_v300)) > _g4_s82 ? (272u + sizeof(_g4_t_v300)) : _g4_s82,
    _g4_s84 = (272u + sizeof(_g4_t_v301)) > _g4_s83 ? (272u + sizeof(_g4_t_v301)) : _g4_s83,
    _g4_s85 = (272u + sizeof(_g4_t_v302)) > _g4_s84 ? (272u + sizeof(_g4_t_v302)) : _g4_s84,
    _g4_s86 = (272u + sizeof(_g4_t_v303)) > _g4_s85 ? (272u + sizeof(_g4_t_v303)) : _g4_s85,
    _g4_s87 = (280u + sizeof(_g4_t_v304)) > _g4_s86 ? (280u + sizeof(_g4_t_v304)) : _g4_s86,
    _g4_s88 = (284u + sizeof(_g4_t_v305)) > _g4_s87 ? (284u + sizeof(_g4_t_v305)) : _g4_s87,
    _g4_s89 = (284u + sizeof(_g4_t_v306)) > _g4_s88 ? (284u + sizeof(_g4_t_v306)) : _g4_s88,
    _g4_s90 = (284u + sizeof(_g4_t_v307)) > _g4_s89 ? (284u + sizeof(_g4_t_v307)) : _g4_s89,
    _g4_s91 = (284u + sizeof(_g4_t_v308)) > _g4_s90 ? (284u + sizeof(_g4_t_v308)) : _g4_s90,
    _g4_s92 = (284u + sizeof(_g4_t_v309)) > _g4_s91 ? (284u + sizeof(_g4_t_v309)) : _g4_s91,
    _g4_s93 = (284u + sizeof(_g4_t_v310)) > _g4_s92 ? (284u + sizeof(_g4_t_v310)) : _g4_s92,
    _g4_s94 = (284u + sizeof(_g4_t_v311)) > _g4_s93 ? (284u + sizeof(_g4_t_v311)) : _g4_s93,
    _g4_s95 = (284u + sizeof(_g4_t_v312)) > _g4_s94 ? (284u + sizeof(_g4_t_v312)) : _g4_s94,
    _g4_s96 = (288u + sizeof(_g4_t_v313)) > _g4_s95 ? (288u + sizeof(_g4_t_v313)) : _g4_s95,
    _g4_s97 = (304u + sizeof(_g4_t_v314)) > _g4_s96 ? (304u + sizeof(_g4_t_v314)) : _g4_s96,
    _g4_s98 = (312u + sizeof(_g4_t_v315)) > _g4_s97 ? (312u + sizeof(_g4_t_v315)) : _g4_s97,
    _g4_s99 = (316u + sizeof(_g4_t_v316)) > _g4_s98 ? (316u + sizeof(_g4_t_v316)) : _g4_s98,
    _g4_s100 = (320u + sizeof(_g4_t_v317)) > _g4_s99 ? (320u + sizeof(_g4_t_v317)) : _g4_s99,
    _g4_s101 = (324u + sizeof(_g4_t_v318)) > _g4_s100 ? (324u + sizeof(_g4_t_v318)) : _g4_s100,
    _g4_s102 = (328u + sizeof(_g4_t_v319)) > _g4_s101 ? (328u + sizeof(_g4_t_v319)) : _g4_s101,
    _g4_s103 = (336u + sizeof(_g4_t_v320)) > _g4_s102 ? (336u + sizeof(_g4_t_v320)) : _g4_s102,
    _g4_s104 = (340u + sizeof(_g4_t_v321)) > _g4_s103 ? (340u + sizeof(_g4_t_v321)) : _g4_s103,
    _g4_s105 = (344u + sizeof(_g4_t_v322)) > _g4_s104 ? (344u + sizeof(_g4_t_v322)) : _g4_s104,
    _g4_s106 = (352u + sizeof(_g4_t_v323)) > _g4_s105 ? (352u + sizeof(_g4_t_v323)) : _g4_s105,
    _g4_s107 = (356u + sizeof(_g4_t_v324)) > _g4_s106 ? (356u + sizeof(_g4_t_v324)) : _g4_s106,
    _g4_s108 = (360u + sizeof(_g4_t_v325)) > _g4_s107 ? (360u + sizeof(_g4_t_v325)) : _g4_s107,
    _g4_s109 = (368u + sizeof(_g4_t_v326)) > _g4_s108 ? (368u + sizeof(_g4_t_v326)) : _g4_s108,
    _g4_s110 = (384u + sizeof(_g4_t_v327)) > _g4_s109 ? (384u + sizeof(_g4_t_v327)) : _g4_s109,
    _g4_s111 = (388u + sizeof(_g4_t_v328)) > _g4_s110 ? (388u + sizeof(_g4_t_v328)) : _g4_s110,
    _g4_s112 = (392u + sizeof(_g4_t_v329)) > _g4_s111 ? (392u + sizeof(_g4_t_v329)) : _g4_s111,
    _g4_s113 = (396u + sizeof(_g4_t_v330)) > _g4_s112 ? (396u + sizeof(_g4_t_v330)) : _g4_s112,
    _g4_s114 = (400u + sizeof(_g4_t_v331)) > _g4_s113 ? (400u + sizeof(_g4_t_v331)) : _g4_s113,
    _g4_s115 = (416u + sizeof(_g4_t_v332)) > _g4_s114 ? (416u + sizeof(_g4_t_v332)) : _g4_s114,
    _g4_s116 = (420u + sizeof(_g4_t_v333)) > _g4_s115 ? (420u + sizeof(_g4_t_v333)) : _g4_s115,
    _g4_s117 = (424u + sizeof(_g4_t_v334)) > _g4_s116 ? (424u + sizeof(_g4_t_v334)) : _g4_s116,
    _g4_s118 = (428u + sizeof(_g4_t_v335)) > _g4_s117 ? (428u + sizeof(_g4_t_v335)) : _g4_s117,
    _g4_s119 = (432u + sizeof(_g4_t_v336)) > _g4_s118 ? (432u + sizeof(_g4_t_v336)) : _g4_s118,
    _g4_s120 = (436u + sizeof(_g4_t_v337)) > _g4_s119 ? (436u + sizeof(_g4_t_v337)) : _g4_s119,
    _g4_s121 = (440u + sizeof(_g4_t_v338)) > _g4_s120 ? (440u + sizeof(_g4_t_v338)) : _g4_s120,
    _g4_s122 = (444u + sizeof(_g4_t_v339)) > _g4_s121 ? (444u + sizeof(_g4_t_v339)) : _g4_s121,
    _g4_s123 = (448u + sizeof(_g4_t_v340)) > _g4_s122 ? (448u + sizeof(_g4_t_v340)) : _g4_s122,
    _g4_s124 = (452u + sizeof(_g4_t_v341)) > _g4_s123 ? (452u + sizeof(_g4_t_v341)) : _g4_s123,
    _g4_s125 = (456u + sizeof(_g4_t_v342)) > _g4_s124 ? (456u + sizeof(_g4_t_v342)) : _g4_s124,
    _g4_s126 = (460u + sizeof(_g4_t_v343)) > _g4_s125 ? (460u + sizeof(_g4_t_v343)) : _g4_s125,
    _g4_s127 = (464u + sizeof(_g4_t_v344)) > _g4_s126 ? (464u + sizeof(_g4_t_v344)) : _g4_s126,
    _g4_s128 = (468u + sizeof(_g4_t_v345)) > _g4_s127 ? (468u + sizeof(_g4_t_v345)) : _g4_s127,
    _g4_s129 = (472u + sizeof(_g4_t_v346)) > _g4_s128 ? (472u + sizeof(_g4_t_v346)) : _g4_s128,
    _g4_s130 = (480u + sizeof(_g4_t_v347)) > _g4_s129 ? (480u + sizeof(_g4_t_v347)) : _g4_s129
  };
  alignas(16) uint8_t _g4_sf[_g4_s130];
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 4u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 4u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 4u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 4u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 4u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 8u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 32u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 48u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 48u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 48u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 64u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 64u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 64u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 64u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 96u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 112u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 112u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 112u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 128u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 132u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 136u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 140u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 144u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 148u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 152u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 156u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 160u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 164u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 172u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 172u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 172u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 172u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 176u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 176u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 176u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 180u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 180u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 184u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 184u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 184u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 188u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 188u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 188u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 188u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 192u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 192u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 196u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 196u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 200u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 204u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 204u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 224u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 224u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 228u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 228u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 232u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 232u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 232u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 240u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 244u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 244u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 248u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 248u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 252u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 252u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 252u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 252u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 256u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 256u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 256u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 264u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 264u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 264u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 264u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 264u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 268u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 268u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 268u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 268u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 268u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 268u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 272u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 272u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 272u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 272u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 272u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 280u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 284u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 284u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 284u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 284u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 284u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 284u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 284u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 284u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 288u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 304u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 312u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 316u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 320u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 324u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 328u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 336u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 340u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 344u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 352u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 356u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 360u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 368u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 384u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 388u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 392u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 396u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 400u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 416u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 420u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 424u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 428u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 432u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 436u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 440u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 444u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 448u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 452u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 456u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 460u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 464u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 468u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 472u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 480u);

  v4 = a3;
  result = (int *)sub_6634F0(v347, a3 + 48, a3 + 64, a3 + 8, a3 + 20);
  v6 = *(uint32_t *)(a3 + 132);
  v304 = v6;
  if ( v6 == 0 )
    return result;
  result = (int *)G4_VCALL<int>(v6, 12);
  if ( (uint8_t)(uintptr_t)(result) == 0 )
    return result;
  v7 = *(float *)(*(uint32_t *)(a3 + 136) + 12);
  v277 = *(uint32_t *)(a3 + 136);
  v285 = -1.0;
  if ( v7 >= 0.0 )
    v285 = 1.0;
  v253 = true;
  v8 = fabs(v7);
  v9 = pow(v8, 1.6180000305175781) * v285;
  v281 = v9;
  if ( fabs(*(float *)(v277 + 16)) < 0.000001f )
    v253 = v8 >= 0.000001f;
  v317 = v347[16];
  v318 = v347[17];
  v319 = v347[18];
  sub_6645E0();
  v10 = *(float *)(a3 + 152);
  v320 = 0.0;
  v11 = *(float *)(a3 + 156);
  v321 = 0.0;
  v322 = 1.0;
  v12 = (float)(v11 * v11) + (float)(v10 * v10);
  if ( v12 != 0.0 )
  {
    v13 = 1.0 / fsqrt(v12);
    v14 = (float)((float)((float)(v12 * v13) * v13) + -3.0) * (float)(v13 * -0.5);
    v10 = v10 * v14;
    v11 = v11 * v14;
  }
  v15 = *(float *)(a3 + 8);
  v16 = *(float *)(a3 + 12);
  v267 = *(float *)(a3 + 16);
  v17 = (float)(v16 * v16) + (float)(v15 * v15);
  if ( v17 != 0.0 )
  {
    v18 = 1.0 / fsqrt(v17);
    v19 = (float)((float)((float)(v17 * v18) * v18) + -3.0) * (float)(v18 * -0.5);
    v15 = v15 * v19;
    v16 = v16 * v19;
  }
  v305 = v319;
  if ( v319 <= -0.000001f )
  {
    v15 = -v15;
    v16 = -v16;
  }
  v228 = 0.5 * *(float *)(*(uint32_t *)(a3 + 136) + 8);
  v218 = sinf(v228);
  v232 = v218;
  v219 = cosf(v228);
  v20 = -(float)(v232 * v11);
  v286 = (float)((float)-(float)((float)(v232 * v10) * v232) - (float)((float)(v232 * v10) * v232))
       + (float)(v10 + (float)(v20 * (float)(v219 + v219)));
  v229 = (float)((float)((float)(v219 + v219) * (float)(v232 * v10)) + v11) + (float)((float)(v232 + v232) * v20);
  v21 = cos(*(float *)(v304 + 72));
  v23 = (float)(v286 * v15) + (float)(v229 * v16);
  v24 = 1.0;
  if ( v23 <= 1.0 )
  {
    v26 = v304;
    v22 = v21;
    v24 = (float)(fmaxf(v23, v22) - v22) / (float)(1.0 - v22);
    v25 = (float)(1.0 - v24) * *(float *)(v304 + 68);
  }
  else
  {
    v25 = 0.0;
    v26 = v304;
  }
  v266 = *(float *)(v26 + 64);
  v233 = (float)(v266 * v24) + v25;
  v27 = sin((float)(v281 * v233));
  v287 = v286 * v27;
  v279 = v27 * v229;
  v28 = cos((float)(v281 * v233));
  v276 = v28;
  v29 = (float)(v16 * v16) + (float)(v15 * v15);
  if ( v23 >= 0.0 || (v30 = 1, v29 <= 25.0) )
    v30 = 0;
  v288 = v318;
  v293 = v317;
  v262 = v318;
  v264 = v317;
  v31 = (float)(v317 * v317) + (float)(v288 * v288);
  v299 = v31;
  if ( v31 != 0.0 )
  {
    v32 = 1.0 / fsqrt(v31);
    v33 = (float)((float)((float)(v31 * v32) * v32) + -3.0) * (float)(v32 * -0.5);
    v264 = v317 * v33;
    v262 = v33 * v318;
  }
  v34 = v287;
  v271 = (float)(v287 * v287) + (float)(v279 * v279);
  v35 = v27 * v229;
  if ( v271 != 0.0 )
  {
    v36 = fsqrt(v271);
    v37 = (float)((float)((float)(v271 * (float)(1.0 / v36)) * (float)(1.0 / v36)) + -3.0)
        * (float)((float)(1.0 / v36) * -0.5);
    v34 = v287 * v37;
    v35 = v37 * v279;
  }
  v38 = acos(fminf(fmaxf(-1.0, v319), 1.0));
  v40 = v266;
  if ( v30 != 0 )
    v40 = v233;
  v41 = fmaxf((float)(v35 * v262) + (float)(v34 * v264), 0.0);
  *(double *)&v42 = -1.0;
  v39 = v38;
  v43 = (float)((float)(v39 / v40) + (float)(fminf(v41, 1.0) * v281)) * 0.5;
  if ( v43 >= 0.0 )
    *(double *)&v42 = 1.0;
  v225 = *(double *)&v42;
  v223 = pow(fabs(v43), 1.6180000305175781);
  v44 = v304;
g4_m128_lane<int32_t>(v45, 0) = *(uint32_t *)(v304 + 12);
g4_m128_raw(v46) =g4_m128_lane<uint32_t>(v45, 0);
g4_m128_lane<float>(v46, 0) =g4_m128_lane<float>(v45, 0) - fsqrt(v29);
g4_m128_raw(v47) = 0;
  v48 = v223 * v225;
g4_m128_lane<float>(v47, 0) = fmaxf(0.0,g4_m128_lane<float>(v46, 0));
  v49 = _mm_cmpgt_ss(v46, v45);
  v50 = v48 * *(float *)(v304 + 16);
g4_m128_lane<int32_t>(v49, 0) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v49, v47), 0) |g4_m128_lane<int32_t>(v45, 0) &g4_m128_lane<int32_t>(v49, 0);
  v51 = *(float *)(a3 + 32);
  v52 =g4_m128_lane<float>(v49, 0) / v51;
  if ( v52 >= v50 )
  {
    v44 = v304;
    v52 = fmaxf(-v52, v50);
  }
  v53 = *(uint8_t *)(v44 + 140);
  v265 = (float)(v264 * v51) * v52;
  v263 = v52 * (float)(v262 * v51);
  v54 = 0.0;
  if ( v53 == 0 )
    v54 = *(float *)(v44 + 20);
  v55 = *(float *)(v277 + 16);
  if ( v55 < 0.000001f )
    v54 = *(float *)(v304 + 24);
  if ( v53 != 0 )
    v56 = *(float *)(v304 + 24) * 0.5 * (float)-v51;
  else
    v56 = (float)(v55 * v51) * v54;
  if ( fabs(v56) < 0.000001f
    && (v57 = _mm_cmplt_ss(g4_m128_from<__m128>(LODWORD(v267)), g4_m128_from<__m128>(0LL)),
        v58 = (float)(v51 * *(float *)(v304 + 28))
            * COERCE_FLOAT(COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v57, g4_m128_from<__m128>(0xBF800000)), 0)) |g4_m128_lane<int32_t>(v57, 0) & 0x3F800000),
        (v56 = fabs(v267)) >= v58) )
  {
    v56 = fmaxf(-v56, v58);
    v59 = (float *)v304;
    if ( *(uint8_t *)(a3 + 165) == 0 )
      goto LABEL_36;
  }
  else
  {
    v59 = (float *)v304;
    if ( *(uint8_t *)(a3 + 165) == 0 )
    {
LABEL_36:
      v60 = v59[33];
      v237 = 0.0;
      v238 = 0.0;
      goto LABEL_37;
    }
  }
  v296 = v59[34];
  v248 = v59[10];
  v256 = v59[9];
  v252 = v59[8];
  sub_6645E0();
  v184 = *(uint32_t *)(a3 + 36);
  v235 = *(uint32_t *)(a3 + 40);
  v226 = *(float *)(a3 + 44) - v256;
  sub_6645E0();
  v185 = v296 + *(float *)(a3 + 44);
  v186 = *(uint32_t *)(a3 + 40);
  v341 = *(uint32_t *)(a3 + 36);
  v345 = v235;
  v342 = v186;
  v337 = 0.0;
  v343 = v185;
  v338 = 0.0;
  v346 = v226;
  LOBYTE(v339) = 0;
  v336 = COERCE_FLOAT(&off_204B138);
  v340 = 0;
  v344 = v184;
  v332 = 0.0;
  v333 = 0.0;
  v334 = 0;
  v187 = sub_6645E0();
  if ( G4_VCALL<uint8_t>(v187, 52, &v336, &v332) == 0 )
  {
LABEL_151:
    v198 = 0.0;
    v275 = v333;
    v284 = v332;
    v257 = 0;
    v201 = 0.0;
    goto LABEL_152;
  }
  v284 = v332;
  v275 = v333;
  v310 = 1022611261 * ((LODWORD(v333) - LODWORD(v332)) >> 2);
  if ( v310 <= 0 )
  {
    v198 = 0.0;
    v257 = 0;
    v201 = 0.0;
    goto LABEL_152;
  }
  v188 = 0;
  v301 = 1000000.0;
  v290 = 0;
  for ( i = v332; ; i = v332 )
  {
    v190 = 84 * v188;
    v191 = *(uint32_t *)(LODWORD(i) + 84 * v188 + 4);
    if ( v191 != 0 )
    {
      v192 = G4_VCALL<int>(v191, 8);
      v193 = *(float *)(LODWORD(v332) + v190 + 76);
      if ( v301 > v193 && (v192 & 0x100) == 0 )
      {
        if ( v296 <= v193 )
        {
          v258 = LODWORD(v332) + v190;
          v301 = *(float *)(LODWORD(v332) + v190 + 76);
LABEL_136:
          v290 = 1;
          goto LABEL_137;
        }
        if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(LODWORD(v332) + v190 + 4) + 228))(*(uint32_t *)(LODWORD(v332) + v190 + 4)) != 0 )
        {
          v258 = LODWORD(v332) + v190;
          v301 = *(float *)(LODWORD(v332) + v190 + 76);
          goto LABEL_136;
        }
      }
    }
LABEL_137:
    if ( ++v188 == v310 )
      break;
  }
  v4 = a3;
  if ( v290 == 0 )
    goto LABEL_151;
  v194 = (float)(v296 + v256) - *(float *)(v258 + 76);
  v195 = (float)(v296 + v256) - v252;
  v302 = *(float *)(a3 + 44);
  v297 = *(float *)(v304 + 128);
  v311 = *(float *)(v258 + 72);
  v224 = fminf(fmaxf(v194 / v195, 0.0), 1.0) * v248;
  v227 = (float)(*(float *)(a3 + 32) * *(float *)(v304 + 24)) * v224;
  sub_6645E0();
  v291 = *(float *)(v258 + 60);
  v196 = (*(int (**)(uint32_t))(**(uint32_t **)(v258 + 4) + 228))(*(uint32_t *)(v258 + 4));
  v197 = (*(int (**)(uint32_t))(**(uint32_t **)(v258 + 4) + 224))(*(uint32_t *)(v258 + 4));
  v198 = v227;
  v199 = *(uint8_t *)(v304 + 140);
  if ( v199 != 0 && v196 != 0 )
    v198 = (float)(*(float *)(a3 + 32) * *(float *)(v304 + 24)) * v224;
  if ( *(uint8_t *)(*(uint32_t *)(a3 + 136) + 37) != 0 && v291 > 0.5 )
  {
    v200 = *(float *)(a3 + 32);
    v201 = 0.0;
    if ( v200 == 0.0 )
    {
      v275 = v333;
      v284 = v332;
      v257 = 0;
      goto LABEL_152;
    }
    v202 = (float)(v297 - v302) + v311;
    if ( v202 <= 0.0 )
    {
      v275 = v333;
      v284 = v332;
      v257 = 0;
      v201 = 0.0;
      goto LABEL_152;
    }
    if ( v196 != 0 || v197 != 0 )
    {
      v201 = v202 / v200;
      if ( v199 != 0 )
      {
        v198 = v198 + v198;
        v275 = v333;
        v284 = v332;
      }
      else
      {
        v275 = v333;
        v284 = v332;
        v198 = 0.0;
      }
      v257 = 1;
LABEL_152:
      v261 = fmaxf(v198, v56);
      if ( *(float *)(v277 + 16) <= 0.1f )
        v261 = v198 + v56;
      if ( LODWORD(v275) != LODWORD(v284) )
      {
        v312 = v284;
        v249 = v4;
        while ( 2 )
        {
          v292 = LODWORD(v312) - LODWORD(v284);
          v203 = *(uint32_t *)(LODWORD(v312) + 4);
          v303 = v203;
          if ( v203 == 0 )
            goto LABEL_172;
          v204 = *(uint32_t **)(v203 + 8);
          v205 = *(uint32_t **)(v203 + 4);
          v298 = v204;
          v206 = (char *)v204 - (char *)v205;
          v207 = LODWORD(v312) + 4;
          v208 = v206 >> 4;
          v209 = v206 >> 2;
          if ( v208 > 0 )
          {
            if ( v207 != *v205 )
            {
              if ( v207 == v205[1] )
              {
                ++v205;
              }
              else if ( v207 == v205[2] )
              {
                v205 += 2;
              }
              else if ( v207 == v205[3] )
              {
                v205 += 3;
              }
              else
              {
                do
                {
                  --v208;
                  v211 = v205 + 4;
                  v205 += 4;
                  if ( v208 == 0 )
                  {
                    v209 = v298 - v205;
                    goto LABEL_169;
                  }
                  if ( v207 == *v211 )
                    goto LABEL_181;
                  v210 = v205 + 1;
                  if ( v207 == v211[1] )
                    break;
                  v210 = v205 + 2;
                  if ( v207 == v211[2] )
                    break;
                  v210 = v205 + 3;
                }
                while ( v207 != v211[3] );
                v205 = v210;
              }
            }
LABEL_181:
            if ( v298 != v205 )
            {
              v213 = v205 + 1;
              if ( v298 != v205 + 1 && v298 - v213 != 0 )
              {
                memmove(v205, v205 + 1, 4 * (v298 - v213));
                v298 = *(uint32_t **)(v303 + 8);
              }
              *(uint32_t *)(v303 + 8) = (uint32_t)(uintptr_t)(v298 - 1);
            }
            goto LABEL_172;
          }
LABEL_169:
          if ( v209 != 2 )
          {
            if ( v209 != 3 )
            {
              if ( v209 == 1 )
              {
LABEL_192:
                if ( v207 == *v205 )
                  goto LABEL_181;
              }
LABEL_172:
              LODWORD(v312) += 84;
              *(uint32_t *)(v292 + LODWORD(v284) + 4) = 0;
              if ( LODWORD(v312) == LODWORD(v275) )
              {
                v4 = v249;
                v284 = v332;
                goto LABEL_174;
              }
              continue;
            }
            if ( v207 == *v205 )
              goto LABEL_181;
            ++v205;
          }
          break;
        }
        if ( v207 == *v205 )
          goto LABEL_181;
        ++v205;
        goto LABEL_192;
      }
LABEL_174:
      if ( v284 != 0.0 )
        opDelete((void *)LODWORD(v284));
      v288 = v318;
      v238 = v261 * v320;
      v293 = v317;
      v237 = v261 * v321;
      v305 = v319;
      v299 = (float)(v317 * v317) + (float)(v288 * v288);
      v56 = v322 * v261;
      v60 = *(float *)(v304 + 132);
      if ( v257 != 0 )
      {
        v212 = v201 - v56;
        if ( (float)(v201 - v56) <= 0.0 )
        {
          v278 = v322 * v261;
        }
        else
        {
          if ( *(uint8_t *)(a1 + 4) != 0 )
            v212 = v201 - (float)(v56 - *(float *)(a1 + 8));
          *(float *)(a1 + 8) = v212;
          v278 = v201;
          *(uint8_t *)(a1 + 4) = 1;
        }
        goto LABEL_39;
      }
LABEL_37:
      v278 = v56;
      if ( *(uint8_t *)(a1 + 4) != 0 )
      {
        v61 = v56 - *(float *)(a1 + 8);
        *(uint32_t *)(a1 + 8) = 0;
        *(uint8_t *)(a1 + 4) = 0;
        v278 = (float)(v61 * v60) + (float)(v278 * (float)(1.0 - v60));
      }
LABEL_39:
      v62 = *(float *)(v304 + 4);
      v63 = *(float *)(v4 + 44) - v62;
      if ( v63 >= 0.000001f )
      {
        if ( *(uint8_t *)(*(uint32_t *)(v4 + 136) + 37) != 0 )
        {
          v121 = fminf(v63 / (float)(*(float *)(v304 + 8) - v62), 1.0);
          if ( v278 >= 0.000001f )
            v278 = (float)(1.0 - v121) * v278;
          v122 = *(float *)(v4 + 16);
          v273 = v122;
          if ( v122 >= 0.000001f )
          {
g4_m128_raw(v214) = *(unsigned int *)(v4 + 16);
g4_m128_lane<float>(v214, 0) = v122 * v121;
            v64 = *(float *)(v4 + 32);
            v123 = *(float *)(v304 + 24);
g4_m128_lane<float>(v215, 0) = v64 * v123;
g4_m128_raw(v216) = 0;
g4_m128_lane<float>(v216, 0) = fmaxf(0.0,g4_m128_lane<float>(v214, 0));
            v217 = _mm_cmpgt_ss(v214, v215);
            v124 = v278
                 - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v217, v216), 0) | COERCE_UNSIGNED_INT(v64 * v123)
                                                                      &g4_m128_lane<int32_t>(v217, 0));
          }
          else
          {
            v123 = *(float *)(v304 + 24);
            v64 = *(float *)(v4 + 32);
            v124 = v278;
          }
          v278 = v124 - (float)((float)(v121 * 0.1f) * v123);
        }
        else
        {
          v273 = *(float *)(v4 + 16);
          v64 = *(float *)(v4 + 32);
        }
      }
      else
      {
        v273 = *(float *)(v4 + 16);
        v64 = *(float *)(v4 + 32);
      }
      v65 = -v347[44];
      v66 = -v347[45];
      v67 = -v347[46];
      v68 = *(float *)(v304 + 60);
      v69 = (float)((float)(v66 * v66) + (float)(v65 * v65)) + (float)(v67 * v67);
      if ( v69 == 0.0 )
      {
        v246 = -v347[46];
        v282 = -v347[45];
        v250 = -v347[44];
      }
      else
      {
        v70 = fsqrt(v69);
        v71 = (float)((float)((float)(v69 * (float)(1.0 / v70)) * (float)(1.0 / v70)) + -3.0)
            * (float)((float)(1.0 / v70) * -0.5);
        v250 = v65 * v71;
        v282 = v66 * v71;
        v246 = v71 * v67;
      }
      v269 = *(float *)(v304 + 52);
      v259 = *(float *)(v304 + 56);
      v72 = (float)((float)((float)((float)(*(float *)(v4 + 12) * 0.01f) * (float)(*(float *)(v4 + 12) * 0.01f))
                          + (float)((float)(*(float *)(v4 + 8) * 0.01f) * (float)(*(float *)(v4 + 8) * 0.01f)))
                  + (float)((float)(0.01f * v273) * (float)(0.01f * v273)))
          * *(float *)(v304 + 44);
      v73 = v282 * v72;
      v74 = v250 * v72;
      v75 = v72 * v246;
      if ( !v253 )
        v68 = 2.0;
      v336 = (float)(*(float *)(v304 + 48) * v64) * (float)((float)(v65 * v68) + v74);
      v337 = (float)(v259 * v64) * (float)((float)(v66 * v68) + v73);
      v338 = (float)(v269 * v64) * (float)((float)(v67 * v68) + v75);
      if ( fabs(v336) > fabs(v347[44]) )
        v336 = (float)-v347[44] * 0.95f;
      if ( fabs(v337) > fabs(v347[45]) )
        v337 = (float)-v347[45] * 0.95f;
      if ( fabs(v338) > fabs(v347[46]) )
        v338 = (float)-v347[46] * 0.95f;
      v247 = *(float *)(v4 + 80) * v337;
      v251 = *(float *)(v4 + 64) * v336;
      v241 = v336 * *(float *)(v4 + 72);
      v239 = v338 * *(float *)(v4 + 104);
      v243 = *(float *)(v4 + 84) * v337;
      v240 = v337 * *(float *)(v4 + 88);
      v245 = *(float *)(v4 + 96) * v338;
      v244 = *(float *)(v4 + 68) * v336;
      v242 = *(float *)(v4 + 100) * v338;
      v76 = (float)(v305 * v305) + v299;
      v77 = v293;
      v78 = v64
          * fsqrt(
              (float)((float)(*(float *)(v4 + 144) * *(float *)(v4 + 144))
                    + (float)(*(float *)(v4 + 140) * *(float *)(v4 + 140)))
            + (float)(*(float *)(v4 + 148) * *(float *)(v4 + 148)));
      v326 = xmmword_1C7C230;
      v79 = v288;
      v283 = v78;
      if ( v76 != 0.0 )
      {
        v80 = 1.0 / fsqrt(v76);
        v81 = (float)((float)((float)(v76 * v80) * v80) + -3.0) * (float)(v80 * -0.5);
        v77 = v293 * v81;
        v79 = v288 * v81;
        v305 = v81 * v305;
      }
      v82 = (float)((float)(v287 * v287) + (float)(v279 * v279)) + (float)(v276 * v276);
      if ( v82 == 0.0 )
      {
        v87 = v276;
        v86 = v279;
        v85 = v287;
      }
      else
      {
        v83 = 1.0 / fsqrt(v82);
        v84 = (float)((float)((float)(v82 * v83) * v83) + -3.0) * (float)(v83 * -0.5);
        v85 = v287 * v84;
        v86 = v279 * v84;
        v87 = v84 * v276;
      }
      v88 = (float)((float)(v86 * v79) + (float)(v85 * v77)) + (float)(v305 * v87);
      if ( v88 >= 0.999999f )
        goto LABEL_80;
      if ( v88 <= -0.999999f )
      {
        sub_6BD6B0();
        v91 = *(float *)&v326;
        v92 = *((float *)&v326 + 1);
        v93 = *((float *)&v326 + 2);
      }
      else
      {
        v89 = fsqrt((float)(v88 + 1.0) + (float)(v88 + 1.0));
        v90 = 1.0 / v89;
        *((float *)&v326 + 3) = 0.5 * v89;
        v91 = (float)((float)(v87 * v79) - (float)(v305 * v86)) * (float)(1.0 / v89);
        v92 = (float)((float)(v305 * v85) - (float)(v87 * v77)) * v90;
        v93 = (float)((float)(v77 * v86) - (float)(v79 * v85)) * v90;
        *(float *)&v326 = v91;
        *((float *)&v326 + 1) = v92;
        *((float *)&v326 + 2) = v93;
      }
      v94 = fsqrt((float)((float)(v92 * v92) + (float)(v91 * v91)) + (float)(v93 * v93));
      if ( fabs(v94) <= 0.000001f || *((float *)&v326 + 3) > 1.0 || *((float *)&v326 + 3) < -1.0 )
      {
LABEL_80:
        v95 = 0.0;
        v313 = 0.0;
        v274 = 1.0;
        v270 = 0.0;
        v254 = 0.0;
      }
      else
      {
        v230 = 1.0 / v94;
        v220 = acosf(*((float *)&v326 + 3));
        v313 = v220 + v220;
        v95 = fabs(v220 + v220);
        v270 = v93 * v230;
        v274 = v92 * v230;
        v254 = v230 * v91;
      }
      v125 = *(float *)(v304 + 80);
      v126 = fminf(fmaxf(v95 / *(float *)(v304 + 72), 0.0), 1.0);
      v127 = (float)((float)(1.0 - v126) * *(float *)(v304 + 76)) + (float)(v126 * v125);
      if ( fabs(v127) < 0.000001f )
        v127 = 0.5 * v125;
      v128 = v274 * *(float *)(v4 + 24);
      v333 = v127;
      v315 = 0.0;
      v332 = (float)((float)(v254 * *(float *)(v4 + 20)) + v128) + (float)(v270 * *(float *)(v4 + 28));
      v334 = *(uint32_t *)(v304 + 88);
      v335 = *(uint32_t *)(v304 + 92);
      v300 = v332;
      sub_6629D0(v4 + 32, &v313, &v332, &v315, 0);
      v327 = 0.0;
      v328 = 0.0;
      v329 = 0.0;
      v129 = v320;
      v330 = 1.0;
      v130 = v322;
      v131 = v317;
      v268 = v254 * (float)(v315 - v300);
      v260 = v274 * (float)(v315 - v300);
      v255 = (float)(v315 - v300) * v270;
      v132 = v321;
      v133 = v318;
      v134 = v319;
      v135 = (float)((float)(v132 * v132) + (float)(v129 * v129)) + (float)(v130 * v130);
      if ( v135 == 0.0 )
      {
        v289 = v322;
        v294 = v321;
        v306 = v320;
      }
      else
      {
        v136 = fsqrt(v135);
        v137 = (float)((float)((float)(v135 * (float)(1.0 / v136)) * (float)(1.0 / v136)) + -3.0)
             * (float)((float)(1.0 / v136) * -0.5);
        v306 = v320 * v137;
        v294 = v321 * v137;
        v289 = v137 * v322;
      }
      v138 = (float)((float)(v318 * v318) + (float)(v317 * v317)) + (float)(v319 * v319);
      if ( v138 != 0.0 )
      {
        v139 = 1.0 / fsqrt(v138);
        v140 = (float)((float)((float)(v138 * v139) * v139) + -3.0) * (float)(v139 * -0.5);
        v131 = v317 * v140;
        v133 = v318 * v140;
        v134 = v319 * v140;
      }
      v141 = (float)((float)(v294 * v133) + (float)(v306 * v131)) + (float)(v289 * v134);
      if ( v141 >= 0.999999f )
        goto LABEL_94;
      if ( v141 <= -0.999999f )
      {
        sub_6BD6B0();
        v142 = v327;
        v143 = v328;
        v307 = v329;
        v132 = v321;
        v129 = v320;
        v130 = v322;
      }
      else
      {
        v236 = fsqrt((float)(v141 + 1.0) + (float)(v141 + 1.0));
        v142 = (float)((float)(v294 * v134) - (float)(v289 * v133)) * (float)(1.0 / v236);
        v143 = (float)((float)(v289 * v131) - (float)(v134 * v306)) * (float)(1.0 / v236);
        v327 = v142;
        v328 = v143;
        v307 = (float)(1.0 / v236) * (float)((float)(v133 * v306) - (float)(v131 * v294));
        v329 = v307;
        v330 = 0.5 * v236;
      }
      v144 = fsqrt((float)((float)(v143 * v143) + (float)(v142 * v142)) + (float)(v307 * v307));
      if ( fabs(v144) <= 0.000001f || v330 > 1.0 || v330 < -1.0 )
      {
LABEL_94:
        v295 = 1.0;
        v308 = 0.0;
        v272 = 0.0;
        v145 = 0.0;
      }
      else
      {
        v234 = 1.0 / v144;
        v221 = acosf(v330);
        v145 = v221 + v221;
        v308 = v307 * v234;
        v295 = v143 * v234;
        v272 = v142 * v234;
      }
      if ( (float)(v145 - v266) >= 0.000001f )
      {
g4_m128_raw(v146) = LODWORD(v266);
g4_m128_lane<float>(v146, 0) = v266 - v145;
g4_m128_raw(v148) = LODWORD(v295);
        v147 = v146;
g4_m128_lane<float>(v147, 0) =g4_m128_lane<float>(v146, 0) / *(float *)(v4 + 32);
g4_m128_lane<float>(v148, 0) = (float)((float)(v295 * v260) + (float)(v268 * v272)) + (float)(v308 * v255);
g4_m128_lane<int32_t>(v149, 0) = 0;
        v150 = _mm_cmplt_ss(v148, v149);
g4_m128_lane<int32_t>(v146, 0) = 0;
        v151 = _mm_cmplt_ss(v147, v146);
        if ( COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v150, g4_m128_u32(0x3F800000u)), 0) |g4_m128_lane<int32_t>(v150, 0) & 0xBF800000) == COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v151, g4_m128_u32(0x3F800000u)), 0) |g4_m128_lane<int32_t>(v151, 0) & 0xBF800000) )
          v152 = *(float *)(v304 + 76);
        else
          v152 = *(float *)(v304 + 80);
        if ( v152 >=g4_m128_lane<float>(v147, 0) )
          v152 = fmaxf(-v152,g4_m128_lane<float>(v147, 0));
        v153 = v152 -g4_m128_lane<float>(v148, 0);
        v268 = (float)(v272 * v153) + v268;
        v260 = (float)(v295 * v153) + v260;
        v255 = (float)(v153 * v308) + v255;
      }
      v154 = (float)(v287 * v132) - (float)(v279 * v129);
      v155 = (float)(v129 * v276) - (float)(v287 * v130);
      v156 = (float)(v130 * v279) - (float)(v132 * v276);
      v157 = (float)((float)(v155 * v155) + (float)(v156 * v156)) + (float)(v154 * v154);
      if ( v157 != 0.0 )
      {
        v158 = 1.0 / fsqrt(v157);
        v159 = (float)((float)((float)(v157 * v158) * v158) + -3.0) * (float)(v158 * -0.5);
        v156 = v156 * v159;
        v155 = v155 * v159;
        v154 = v154 * v159;
      }
      v160 = (float)(v287 * v155) - (float)(v279 * v156);
      v161 = (float)(v156 * v276) - (float)(v287 * v154);
      v309 = v160;
      v162 = (float)(v154 * v279) - (float)(v155 * v276);
      v163 = (float)((float)(v161 * v161) + (float)(v162 * v162)) + (float)(v160 * v160);
      if ( v163 != 0.0 )
      {
        v164 = fsqrt(v163);
        v165 = (float)((float)((float)(v163 * (float)(1.0 / v164)) * (float)(1.0 / v164)) + -3.0)
             * (float)((float)(1.0 / v164) * -0.5);
        v162 = v162 * v165;
        v161 = v161 * v165;
        v309 = v165 * v160;
        v163 = (float)((float)(v161 * v161) + (float)(v162 * v162)) + (float)(v309 * v309);
      }
      v331 = xmmword_1C7C230;
      v280 = (float)(*((float *)&v326 + 1) * v347[22]) - (float)(v347[21] * *((float *)&v326 + 2));
      v166 = (float)((float)((float)(*(float *)&v326 * v347[21]) - (float)(*((float *)&v326 + 1) * v347[20]))
                   * *((float *)&v326 + 1))
           - (float)((float)((float)(*((float *)&v326 + 2) * v347[20]) - (float)(*(float *)&v326 * v347[22]))
                   * *((float *)&v326 + 2));
      v167 = (float)(v280 * *((float *)&v326 + 2))
           - (float)((float)((float)(*(float *)&v326 * v347[21]) - (float)(*((float *)&v326 + 1) * v347[20]))
                   * *(float *)&v326);
      v168 = (float)(v166 + v166)
           + (float)((float)(v280 * (float)(*((float *)&v326 + 3) + *((float *)&v326 + 3))) + v347[20]);
      v323 = v168;
      v169 = (float)((float)((float)((float)(*((float *)&v326 + 2) * v347[20]) - (float)(*(float *)&v326 * v347[22]))
                           * (float)(*((float *)&v326 + 3) + *((float *)&v326 + 3)))
                   + v347[21])
           + (float)(v167 + v167);
      v170 = (float)((float)((float)(*((float *)&v326 + 2) * v347[20]) - (float)(*(float *)&v326 * v347[22]))
                   * *(float *)&v326)
           - (float)(v280 * *((float *)&v326 + 1));
      v324 = v169;
      v171 = (float)(v170 + v170)
           + (float)((float)((float)(*((float *)&v326 + 3) + *((float *)&v326 + 3))
                           * (float)((float)(*(float *)&v326 * v347[21]) - (float)(*((float *)&v326 + 1) * v347[20])))
                   + v347[22]);
      v325 = v171;
      v172 = (float)((float)(v169 * v169) + (float)(v168 * v168)) + (float)(v171 * v171);
      if ( v172 != 0.0 )
      {
        v173 = 1.0 / fsqrt(v172);
        v174 = (float)((float)((float)(v172 * v173) * v173) + -3.0) * (float)(v173 * -0.5);
        v168 = v168 * v174;
        v169 = v169 * v174;
        v171 = v171 * v174;
      }
      if ( v163 != 0.0 )
      {
        v175 = 1.0 / fsqrt(v163);
        v176 = (float)((float)((float)(v163 * v175) * v175) + -3.0) * (float)(v175 * -0.5);
        v162 = v162 * v176;
        v161 = v161 * v176;
        v309 = v176 * v309;
      }
      v177 = (float)((float)(v161 * v169) + (float)(v162 * v168)) + (float)(v309 * v171);
      if ( v177 >= 0.999999f )
        goto LABEL_62;
      if ( v177 <= -0.999999f )
      {
        sub_6BD6B0();
        LODWORD(v180) = (uint32_t)(uintptr_t)(v331);
        v181 = *((float *)&v331 + 1);
        v182 = *((float *)&v331 + 2);
      }
      else
      {
        v178 = fsqrt((float)(v177 + 1.0) + (float)(v177 + 1.0));
        v179 = 1.0 / v178;
        *((float *)&v331 + 3) = 0.5 * v178;
        v180 = (float)((float)(v309 * v169) - (float)(v161 * v171)) * (float)(1.0 / v178);
        v181 = (float)((float)(v171 * v162) - (float)(v309 * v168)) * v179;
        v182 = (float)((float)(v168 * v161) - (float)(v169 * v162)) * v179;
        *(uint64_t *)&v331 = __PAIR64__(LODWORD(v181), LODWORD(v180));
        *((float *)&v331 + 2) = v182;
      }
      v183 = fsqrt((float)((float)(v181 * v181) + (float)(v180 * v180)) + (float)(v182 * v182));
      if ( fabs(v183) <= 0.000001f || *((float *)&v331 + 3) > 1.0 || *((float *)&v331 + 3) < -1.0 )
      {
LABEL_62:
        v96 = 0.0;
        v314 = 0.0;
        v97 = 0.0;
g4_m128_raw(v98) = 0;
        v99 = 1.0;
      }
      else
      {
        v231 = 1.0 / v183;
        v222 = acosf(*((float *)&v331 + 3));
g4_m128_raw(v98) = LODWORD(v222);
g4_m128_lane<float>(v98, 0) =g4_m128_lane<float>(v98, 0) +g4_m128_lane<float>(v98, 0);
        v314 =g4_m128_lane<float>(v98, 0);
        v99 = v181 * v231;
        v97 = (float)(v180 * v317) * v231;
        v96 = (float)(v182 * v319) * v231;
      }
      if ( (float)((float)(v97 + v96) + (float)(v99 * v318)) <= -0.000001f )
      {
        v98 = _mm_xor_ps(v98, g4_m128_from<__m128>(0x80000000));
        v314 =g4_m128_lane<float>(v98, 0);
      }
      if ( *(uint8_t *)(v4 + 166) != 0 )
      {
g4_m128_raw(v100) = *(unsigned int *)(v4 + 168);
g4_m128_lane<float>(v100, 0) = fmaxf(g4_m128_lane<float>(v100, 0),g4_m128_lane<float>(v98, 0));
g4_m128_lane<int32_t>(v101, 0) = *(uint32_t *)(v4 + 172);
        v98 = _mm_cmpgt_ss(v98, v101);
g4_m128_lane<int32_t>(v98, 0) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v98, v100), 0) |g4_m128_lane<int32_t>(v101, 0) &g4_m128_lane<int32_t>(v98, 0);
      }
      v102 = *(uint32_t *)(v4 + 136);
g4_m128_raw(v103) = *(unsigned int *)(v102 + 8);
      v104 = fabs(*(float *)(v102 + 8));
      if ( v104 >= 1.5707973f )
      {
g4_m128_lane<int32_t>(v105, 0) = 0;
        v103 = _mm_cmplt_ss(v103, v105);
g4_m128_lane<float>(v103, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v103, g4_m128_u32(0x3F800000u)), 0) |g4_m128_lane<int32_t>(v103, 0)
                                                                                             & 0xBF800000)
                         * (float)(3.1415927f - v104);
      }
      v106 = *(float *)(v304 + 100);
      v314 = (float)((float)(0.7853982f * *(float *)(v102 + 12))
                   * fminf(fmaxf((float)-g4_m128_lane<float>(v103, 0) * 1.2732395f, -1.0), 1.0))
           +g4_m128_lane<float>(v98, 0);
      v107 = fminf(fmaxf(fabs(v314) / *(float *)(v304 + 104), 0.0), 1.0);
      v108 = (float)((float)(1.0 - v107) * *(float *)(v304 + 96)) + (float)(v107 * v106);
      if ( fabs(v108) < 0.000001f )
        v108 = 0.5 * v106;
      v109 = *(float *)LODWORD(v347[43]);
      v316 = 0.0;
      v337 = v108;
      v336 = v109;
      v338 = *(float *)(v304 + 108);
      v339 = *(uint32_t *)(v304 + 112);
      sub_6629D0(v4 + 32, &v314, &v336, &v316, 0);
      result = (int *)(&dword_1C7B598);
      v110 = v316 - *(float *)LODWORD(v347[43]);
      v111 = v317 * v110;
      v112 = fminf(fmaxf(fabs(v313) / *(float *)(v304 + 124), 0.0), 1.0);
      v113 = (float)((float)(1.0 - v112) * *(float *)(v304 + 116)) + (float)(v112 * *(float *)(v304 + 120));
      v114 = v318 * v110;
      v115 = (float)((float)(v300 * v254) - (float)(*(float *)(v4 + 20) - (float)(*(float *)LODWORD(v347[43]) * v317)))
           * v113;
      v116 = (float)((float)(v300 * v274) - (float)(*(float *)(v4 + 24) - (float)(*(float *)LODWORD(v347[43]) * v318)))
           * v113;
      v117 = (float)((float)(v300 * v270) - (float)(*(float *)(v4 + 28) - (float)(*(float *)LODWORD(v347[43]) * v319)))
           * v113;
      a4[1] = (float)((float)((float)((float)(v251 + v247) + a4[1]) + v245) + v265) + v238;
      a4[2] = (float)((float)((float)((float)(v244 + v243) + a4[2]) + v242) + v263) + v237;
      v118 = (float)((float)(v114 + a4[5]) + v116) + v260;
      v119 = (float)((float)((float)(v241 + v240) + a4[3]) + v239) + v278;
      v120 = (float)((float)((float)(v110 * v319) + a4[6]) + v117) + v255;
      a4[4] = (float)((float)(v111 + a4[4]) + v115) + v268;
      a4[5] = v118;
      a4[6] = v120;
      a4[3] = v119 + v283;
      return result;
    }
  }
  v275 = v333;
  v284 = v332;
  v257 = 0;
  v201 = 0.0;
  goto LABEL_152;
}

// ----------------------------------------------------------------------------
// Function: sub_6CFEA0  (binary VA: 0x6cfea0)
// Original: sub_6CFEA0
// ----------------------------------------------------------------------------
int * sub_6CFEA0(int a1, int a2, int a3, float *a4)
{
  int *result;
  int v5;
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm5_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm7_4
  char v27;
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  long double v35; // fst7
  float v36; // xmm2_4
  float v37; // xmm2_4
  int64_t v38; // xmm0_8
  float v39; // xmm2_4
  __m128 v40;
  __m128 v41;
  __m128 v42;
  float v43; // xmm2_4
  __m128 v44;
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51; // xmm0_4
  __m128 v52;
  float v53; // xmm2_4
  float v54; // xmm2_4
  float v55; // xmm2_4
  float v56; // xmm0_4
  float v57; // xmm4_4
  float v58; // xmm3_4
  float v59; // xmm2_4
  float v60; // xmm0_4
  float v61; // xmm5_4
  float v62; // xmm0_4
  float v63; // xmm7_4
  float v64; // xmm6_4
  float v65; // xmm0_4
  float v66; // xmm7_4
  float v67; // xmm5_4
  float v68; // xmm0_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm0_4
  float v72; // xmm1_4
  float v73; // xmm3_4
  float v74; // xmm2_4
  float v75; // xmm6_4
  float v76; // xmm2_4
  float v77; // xmm6_4
  float v78; // xmm4_4
  float v79; // xmm5_4
  float v80; // xmm6_4
  float v81; // xmm2_4
  float v82; // xmm2_4
  float v83; // xmm7_4
  float v84; // xmm2_4
  float v85; // xmm3_4
  float v86; // xmm1_4
  float v87; // xmm0_4
  float v88; // xmm0_4
  float v89; // xmm2_4
  float v90; // xmm0_4
  float v91; // xmm1_4
  float v92; // xmm3_4
  float v93; // xmm2_4
  float v94; // xmm1_4
  float v95; // xmm0_4
  float v96;
  float v97; // xmm2_4
  float v98; // xmm6_4
  float v99; // xmm3_4
  float v100; // xmm0_4
  float v101; // xmm5_4
  float v102; // xmm4_4
  float v103; // xmm3_4
  float v104; // xmm1_4
  float v105; // xmm5_4
  float v106; // xmm0_4
  float v107; // xmm2_4
  float v108; // xmm4_4
  float v109; // xmm3_4
  float v110; // xmm4_4
  float v111; // xmm2_4
  float v112; // xmm0_4
  float v113; // xmm1_4
  float v114; // xmm0_4
  float v115; // xmm5_4
  float v116; // xmm4_4
  float v117; // xmm6_4
  float v118; // xmm2_4
  float v119; // xmm0_4
  float v120; // xmm7_4
  float v121; // xmm3_4
  float v122; // xmm1_4
  float v123; // xmm3_4
  float v124; // xmm1_4
  float v125; // xmm3_4
  float v126; // xmm1_4
  float v127; // xmm1_4
  float v128; // xmm1_4
  float v129; // xmm3_4
  float v130; // xmm4_4
  float v131; // xmm4_4
  float v132; // xmm3_4
  float v133; // xmm1_4
  float v134; // xmm7_4
  float v135; // xmm6_4
  float v136; // xmm6_4
  float v137; // xmm4_4
  float v138; // xmm2_4
  float v139; // xmm5_4
  float v140; // xmm0_4
  float v141; // xmm1_4
  float v142; // xmm0_4
  float v143; // xmm3_4
  float v144; // xmm5_4
  float v145; // xmm4_4
  float v146; // xmm0_4
  float v147; // xmm1_4
  float v148; // xmm0_4
  float v149; // xmm1_4
  float v150; // xmm6_4
  float v151; // xmm2_4
  float v152; // xmm1_4
  float v153; // xmm6_4
  float v154; // xmm3_4
  float v155; // xmm6_4
  float v156; // xmm7_4
  float v157; // xmm6_4
  float v158; // xmm6_4
  float v159; // xmm0_4
  float v160; // xmm0_4
  float v161; // xmm0_4
  float v162; // xmm7_4
  float v163; // xmm0_4
  float v164; // xmm3_4
  float v165; // xmm2_4
  float v166; // xmm1_4
  float v167; // xmm0_4
  float v168; // xmm3_4
  float v169; // xmm5_4
  __m128 v170;
  __m128 v171;
  __m128 v172;
  __m128 v173;
  int v174;
  int v175;
  int v176;
  float v177; // xmm1_4
  typedef float _g4_t_v178;
  typedef float _g4_t_v179;
  typedef float _g4_t_v180;
  typedef float _g4_t_v181;
  typedef float _g4_t_v182;
  typedef double _g4_t_v183;
  typedef float _g4_t_v184;
  typedef float _g4_t_v185;
  typedef double _g4_t_v186;
  typedef float _g4_t_v187;
  typedef float _g4_t_v188;
  typedef char _g4_t_v189;
  typedef float _g4_t_v190;
  typedef float _g4_t_v191;
  typedef float _g4_t_v192;
  typedef float _g4_t_v193;
  typedef float _g4_t_v194;
  typedef float _g4_t_v195;
  typedef float _g4_t_v196;
  typedef float _g4_t_v197;
  typedef float _g4_t_v198;
  typedef float _g4_t_v199;
  typedef float _g4_t_v200;
  typedef float _g4_t_v201;
  typedef float _g4_t_v202;
  typedef float _g4_t_v203;
  typedef float _g4_t_v204;
  typedef float _g4_t_v205;
  typedef float _g4_t_v206;
  typedef float _g4_t_v207;
  typedef float _g4_t_v208;
  typedef bool _g4_t_v209;
  typedef float _g4_t_v210;
  typedef float _g4_t_v211;
  typedef float _g4_t_v212;
  typedef float _g4_t_v213;
  typedef int _g4_t_v214;
  typedef float _g4_t_v215;
  typedef float _g4_t_v216;
  typedef float _g4_t_v217;
  typedef float _g4_t_v218;
  typedef float _g4_t_v219;
  typedef float _g4_t_v220;
  typedef float _g4_t_v221;
  typedef float _g4_t_v222;
  typedef float _g4_t_v223;
  typedef float _g4_t_v224;
  typedef float _g4_t_v225;
  typedef float _g4_t_v226;
  typedef float _g4_t_v227;
  typedef float _g4_t_v228;
  typedef float _g4_t_v229;
  typedef float _g4_t_v230;
  typedef float _g4_t_v231;
  typedef float _g4_t_v232;
  typedef float _g4_t_v233;
  typedef float _g4_t_v234;
  typedef float _g4_t_v235;
  typedef float _g4_t_v236;
  typedef double _g4_t_v237;
  typedef float _g4_t_v238;
  typedef float _g4_t_v239;
  typedef float _g4_t_v240;
  typedef float _g4_t_v241;
  typedef float _g4_t_v242;
  typedef float _g4_t_v243;
  typedef float _g4_t_v244;
  typedef float _g4_t_v245;
  typedef float _g4_t_v246;
  typedef float _g4_t_v247;
  typedef float _g4_t_v248;
  typedef float _g4_t_v249;
  typedef float _g4_t_v250;
  typedef float _g4_t_v251;
  typedef float _g4_t_v252;
  typedef float _g4_t_v253;
  typedef float _g4_t_v254;
  typedef float _g4_t_v255;
  typedef float _g4_t_v256;
  typedef float _g4_t_v257;
  typedef float _g4_t_v258;
  typedef float _g4_t_v259;
  typedef float _g4_t_v260;
  typedef g4_int128_t _g4_t_v261;
  typedef float _g4_t_v262;
  typedef float _g4_t_v263;
  typedef float _g4_t_v264;
  typedef float _g4_t_v265;
  typedef g4_int128_t _g4_t_v266;
  typedef float _g4_t_v267;
  typedef float _g4_t_v268;
  typedef int _g4_t_v269;
  typedef int _g4_t_v270;
  typedef int _g4_t_v271;
  typedef int _g4_t_v272;
  typedef int _g4_t_v273;
  typedef float _g4_t_v274;
  typedef int _g4_t_v275;
  typedef int _g4_t_v276;
  typedef float _g4_t_v277;
  typedef float _g4_t_v278;
  typedef float _g4_t_v279;
  typedef float _g4_t_v280;
  typedef int _g4_t_v281;
  typedef int _g4_t_v282;
  typedef int _g4_t_v283;
  typedef int _g4_t_v284;
  typedef int _g4_t_v285;
  typedef int _g4_t_v286;
  typedef int _g4_t_v287;
  typedef int _g4_t_v288;
  typedef int _g4_t_v289;
  typedef int _g4_t_v290;
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef int _g4_t_v293;
  typedef int _g4_t_v294;
  typedef int _g4_t_v295;
  typedef int _g4_t_v296;
  typedef float _g4_t_v297;
  typedef int _g4_t_v298;
  typedef float _g4_t_v299[55];
  enum : size_t {
    _g4_s0 = 880u,
    _g4_s1 = (4u + sizeof(_g4_t_v178)) > _g4_s0 ? (4u + sizeof(_g4_t_v178)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v179)) > _g4_s1 ? (4u + sizeof(_g4_t_v179)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v180)) > _g4_s2 ? (4u + sizeof(_g4_t_v180)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v181)) > _g4_s3 ? (4u + sizeof(_g4_t_v181)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v182)) > _g4_s4 ? (4u + sizeof(_g4_t_v182)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v183)) > _g4_s5 ? (8u + sizeof(_g4_t_v183)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v184)) > _g4_s6 ? (16u + sizeof(_g4_t_v184)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v185)) > _g4_s7 ? (32u + sizeof(_g4_t_v185)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v186)) > _g4_s8 ? (32u + sizeof(_g4_t_v186)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v187)) > _g4_s9 ? (64u + sizeof(_g4_t_v187)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v188)) > _g4_s10 ? (80u + sizeof(_g4_t_v188)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v189)) > _g4_s11 ? (128u + sizeof(_g4_t_v189)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v190)) > _g4_s12 ? (128u + sizeof(_g4_t_v190)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v191)) > _g4_s13 ? (128u + sizeof(_g4_t_v191)) : _g4_s13,
    _g4_s15 = (152u + sizeof(_g4_t_v192)) > _g4_s14 ? (152u + sizeof(_g4_t_v192)) : _g4_s14,
    _g4_s16 = (156u + sizeof(_g4_t_v193)) > _g4_s15 ? (156u + sizeof(_g4_t_v193)) : _g4_s15,
    _g4_s17 = (160u + sizeof(_g4_t_v194)) > _g4_s16 ? (160u + sizeof(_g4_t_v194)) : _g4_s16,
    _g4_s18 = (164u + sizeof(_g4_t_v195)) > _g4_s17 ? (164u + sizeof(_g4_t_v195)) : _g4_s17,
    _g4_s19 = (168u + sizeof(_g4_t_v196)) > _g4_s18 ? (168u + sizeof(_g4_t_v196)) : _g4_s18,
    _g4_s20 = (172u + sizeof(_g4_t_v197)) > _g4_s19 ? (172u + sizeof(_g4_t_v197)) : _g4_s19,
    _g4_s21 = (176u + sizeof(_g4_t_v198)) > _g4_s20 ? (176u + sizeof(_g4_t_v198)) : _g4_s20,
    _g4_s22 = (180u + sizeof(_g4_t_v199)) > _g4_s21 ? (180u + sizeof(_g4_t_v199)) : _g4_s21,
    _g4_s23 = (184u + sizeof(_g4_t_v200)) > _g4_s22 ? (184u + sizeof(_g4_t_v200)) : _g4_s22,
    _g4_s24 = (188u + sizeof(_g4_t_v201)) > _g4_s23 ? (188u + sizeof(_g4_t_v201)) : _g4_s23,
    _g4_s25 = (192u + sizeof(_g4_t_v202)) > _g4_s24 ? (192u + sizeof(_g4_t_v202)) : _g4_s24,
    _g4_s26 = (200u + sizeof(_g4_t_v203)) > _g4_s25 ? (200u + sizeof(_g4_t_v203)) : _g4_s25,
    _g4_s27 = (204u + sizeof(_g4_t_v204)) > _g4_s26 ? (204u + sizeof(_g4_t_v204)) : _g4_s26,
    _g4_s28 = (208u + sizeof(_g4_t_v205)) > _g4_s27 ? (208u + sizeof(_g4_t_v205)) : _g4_s27,
    _g4_s29 = (208u + sizeof(_g4_t_v206)) > _g4_s28 ? (208u + sizeof(_g4_t_v206)) : _g4_s28,
    _g4_s30 = (212u + sizeof(_g4_t_v207)) > _g4_s29 ? (212u + sizeof(_g4_t_v207)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v208)) > _g4_s30 ? (212u + sizeof(_g4_t_v208)) : _g4_s30,
    _g4_s32 = (216u + sizeof(_g4_t_v209)) > _g4_s31 ? (216u + sizeof(_g4_t_v209)) : _g4_s31,
    _g4_s33 = (216u + sizeof(_g4_t_v210)) > _g4_s32 ? (216u + sizeof(_g4_t_v210)) : _g4_s32,
    _g4_s34 = (220u + sizeof(_g4_t_v211)) > _g4_s33 ? (220u + sizeof(_g4_t_v211)) : _g4_s33,
    _g4_s35 = (220u + sizeof(_g4_t_v212)) > _g4_s34 ? (220u + sizeof(_g4_t_v212)) : _g4_s34,
    _g4_s36 = (224u + sizeof(_g4_t_v213)) > _g4_s35 ? (224u + sizeof(_g4_t_v213)) : _g4_s35,
    _g4_s37 = (232u + sizeof(_g4_t_v214)) > _g4_s36 ? (232u + sizeof(_g4_t_v214)) : _g4_s36,
    _g4_s38 = (232u + sizeof(_g4_t_v215)) > _g4_s37 ? (232u + sizeof(_g4_t_v215)) : _g4_s37,
    _g4_s39 = (236u + sizeof(_g4_t_v216)) > _g4_s38 ? (236u + sizeof(_g4_t_v216)) : _g4_s38,
    _g4_s40 = (236u + sizeof(_g4_t_v217)) > _g4_s39 ? (236u + sizeof(_g4_t_v217)) : _g4_s39,
    _g4_s41 = (256u + sizeof(_g4_t_v218)) > _g4_s40 ? (256u + sizeof(_g4_t_v218)) : _g4_s40,
    _g4_s42 = (256u + sizeof(_g4_t_v219)) > _g4_s41 ? (256u + sizeof(_g4_t_v219)) : _g4_s41,
    _g4_s43 = (260u + sizeof(_g4_t_v220)) > _g4_s42 ? (260u + sizeof(_g4_t_v220)) : _g4_s42,
    _g4_s44 = (260u + sizeof(_g4_t_v221)) > _g4_s43 ? (260u + sizeof(_g4_t_v221)) : _g4_s43,
    _g4_s45 = (260u + sizeof(_g4_t_v222)) > _g4_s44 ? (260u + sizeof(_g4_t_v222)) : _g4_s44,
    _g4_s46 = (264u + sizeof(_g4_t_v223)) > _g4_s45 ? (264u + sizeof(_g4_t_v223)) : _g4_s45,
    _g4_s47 = (264u + sizeof(_g4_t_v224)) > _g4_s46 ? (264u + sizeof(_g4_t_v224)) : _g4_s46,
    _g4_s48 = (268u + sizeof(_g4_t_v225)) > _g4_s47 ? (268u + sizeof(_g4_t_v225)) : _g4_s47,
    _g4_s49 = (268u + sizeof(_g4_t_v226)) > _g4_s48 ? (268u + sizeof(_g4_t_v226)) : _g4_s48,
    _g4_s50 = (272u + sizeof(_g4_t_v227)) > _g4_s49 ? (272u + sizeof(_g4_t_v227)) : _g4_s49,
    _g4_s51 = (276u + sizeof(_g4_t_v228)) > _g4_s50 ? (276u + sizeof(_g4_t_v228)) : _g4_s50,
    _g4_s52 = (276u + sizeof(_g4_t_v229)) > _g4_s51 ? (276u + sizeof(_g4_t_v229)) : _g4_s51,
    _g4_s53 = (280u + sizeof(_g4_t_v230)) > _g4_s52 ? (280u + sizeof(_g4_t_v230)) : _g4_s52,
    _g4_s54 = (280u + sizeof(_g4_t_v231)) > _g4_s53 ? (280u + sizeof(_g4_t_v231)) : _g4_s53,
    _g4_s55 = (280u + sizeof(_g4_t_v232)) > _g4_s54 ? (280u + sizeof(_g4_t_v232)) : _g4_s54,
    _g4_s56 = (284u + sizeof(_g4_t_v233)) > _g4_s55 ? (284u + sizeof(_g4_t_v233)) : _g4_s55,
    _g4_s57 = (288u + sizeof(_g4_t_v234)) > _g4_s56 ? (288u + sizeof(_g4_t_v234)) : _g4_s56,
    _g4_s58 = (288u + sizeof(_g4_t_v235)) > _g4_s57 ? (288u + sizeof(_g4_t_v235)) : _g4_s57,
    _g4_s59 = (296u + sizeof(_g4_t_v236)) > _g4_s58 ? (296u + sizeof(_g4_t_v236)) : _g4_s58,
    _g4_s60 = (304u + sizeof(_g4_t_v237)) > _g4_s59 ? (304u + sizeof(_g4_t_v237)) : _g4_s59,
    _g4_s61 = (312u + sizeof(_g4_t_v238)) > _g4_s60 ? (312u + sizeof(_g4_t_v238)) : _g4_s60,
    _g4_s62 = (312u + sizeof(_g4_t_v239)) > _g4_s61 ? (312u + sizeof(_g4_t_v239)) : _g4_s61,
    _g4_s63 = (312u + sizeof(_g4_t_v240)) > _g4_s62 ? (312u + sizeof(_g4_t_v240)) : _g4_s62,
    _g4_s64 = (312u + sizeof(_g4_t_v241)) > _g4_s63 ? (312u + sizeof(_g4_t_v241)) : _g4_s63,
    _g4_s65 = (316u + sizeof(_g4_t_v242)) > _g4_s64 ? (316u + sizeof(_g4_t_v242)) : _g4_s64,
    _g4_s66 = (316u + sizeof(_g4_t_v243)) > _g4_s65 ? (316u + sizeof(_g4_t_v243)) : _g4_s65,
    _g4_s67 = (316u + sizeof(_g4_t_v244)) > _g4_s66 ? (316u + sizeof(_g4_t_v244)) : _g4_s66,
    _g4_s68 = (316u + sizeof(_g4_t_v245)) > _g4_s67 ? (316u + sizeof(_g4_t_v245)) : _g4_s67,
    _g4_s69 = (316u + sizeof(_g4_t_v246)) > _g4_s68 ? (316u + sizeof(_g4_t_v246)) : _g4_s68,
    _g4_s70 = (316u + sizeof(_g4_t_v247)) > _g4_s69 ? (316u + sizeof(_g4_t_v247)) : _g4_s69,
    _g4_s71 = (320u + sizeof(_g4_t_v248)) > _g4_s70 ? (320u + sizeof(_g4_t_v248)) : _g4_s70,
    _g4_s72 = (336u + sizeof(_g4_t_v249)) > _g4_s71 ? (336u + sizeof(_g4_t_v249)) : _g4_s71,
    _g4_s73 = (344u + sizeof(_g4_t_v250)) > _g4_s72 ? (344u + sizeof(_g4_t_v250)) : _g4_s72,
    _g4_s74 = (348u + sizeof(_g4_t_v251)) > _g4_s73 ? (348u + sizeof(_g4_t_v251)) : _g4_s73,
    _g4_s75 = (352u + sizeof(_g4_t_v252)) > _g4_s74 ? (352u + sizeof(_g4_t_v252)) : _g4_s74,
    _g4_s76 = (356u + sizeof(_g4_t_v253)) > _g4_s75 ? (356u + sizeof(_g4_t_v253)) : _g4_s75,
    _g4_s77 = (360u + sizeof(_g4_t_v254)) > _g4_s76 ? (360u + sizeof(_g4_t_v254)) : _g4_s76,
    _g4_s78 = (368u + sizeof(_g4_t_v255)) > _g4_s77 ? (368u + sizeof(_g4_t_v255)) : _g4_s77,
    _g4_s79 = (372u + sizeof(_g4_t_v256)) > _g4_s78 ? (372u + sizeof(_g4_t_v256)) : _g4_s78,
    _g4_s80 = (376u + sizeof(_g4_t_v257)) > _g4_s79 ? (376u + sizeof(_g4_t_v257)) : _g4_s79,
    _g4_s81 = (384u + sizeof(_g4_t_v258)) > _g4_s80 ? (384u + sizeof(_g4_t_v258)) : _g4_s80,
    _g4_s82 = (388u + sizeof(_g4_t_v259)) > _g4_s81 ? (388u + sizeof(_g4_t_v259)) : _g4_s81,
    _g4_s83 = (392u + sizeof(_g4_t_v260)) > _g4_s82 ? (392u + sizeof(_g4_t_v260)) : _g4_s82,
    _g4_s84 = (400u + sizeof(_g4_t_v261)) > _g4_s83 ? (400u + sizeof(_g4_t_v261)) : _g4_s83,
    _g4_s85 = (416u + sizeof(_g4_t_v262)) > _g4_s84 ? (416u + sizeof(_g4_t_v262)) : _g4_s84,
    _g4_s86 = (420u + sizeof(_g4_t_v263)) > _g4_s85 ? (420u + sizeof(_g4_t_v263)) : _g4_s85,
    _g4_s87 = (424u + sizeof(_g4_t_v264)) > _g4_s86 ? (424u + sizeof(_g4_t_v264)) : _g4_s86,
    _g4_s88 = (428u + sizeof(_g4_t_v265)) > _g4_s87 ? (428u + sizeof(_g4_t_v265)) : _g4_s87,
    _g4_s89 = (432u + sizeof(_g4_t_v266)) > _g4_s88 ? (432u + sizeof(_g4_t_v266)) : _g4_s88,
    _g4_s90 = (452u + sizeof(_g4_t_v267)) > _g4_s89 ? (452u + sizeof(_g4_t_v267)) : _g4_s89,
    _g4_s91 = (456u + sizeof(_g4_t_v268)) > _g4_s90 ? (456u + sizeof(_g4_t_v268)) : _g4_s90,
    _g4_s92 = (460u + sizeof(_g4_t_v269)) > _g4_s91 ? (460u + sizeof(_g4_t_v269)) : _g4_s91,
    _g4_s93 = (464u + sizeof(_g4_t_v270)) > _g4_s92 ? (464u + sizeof(_g4_t_v270)) : _g4_s92,
    _g4_s94 = (468u + sizeof(_g4_t_v271)) > _g4_s93 ? (468u + sizeof(_g4_t_v271)) : _g4_s93,
    _g4_s95 = (472u + sizeof(_g4_t_v272)) > _g4_s94 ? (472u + sizeof(_g4_t_v272)) : _g4_s94,
    _g4_s96 = (476u + sizeof(_g4_t_v273)) > _g4_s95 ? (476u + sizeof(_g4_t_v273)) : _g4_s95,
    _g4_s97 = (480u + sizeof(_g4_t_v274)) > _g4_s96 ? (480u + sizeof(_g4_t_v274)) : _g4_s96,
    _g4_s98 = (484u + sizeof(_g4_t_v275)) > _g4_s97 ? (484u + sizeof(_g4_t_v275)) : _g4_s97,
    _g4_s99 = (488u + sizeof(_g4_t_v276)) > _g4_s98 ? (488u + sizeof(_g4_t_v276)) : _g4_s98,
    _g4_s100 = (492u + sizeof(_g4_t_v277)) > _g4_s99 ? (492u + sizeof(_g4_t_v277)) : _g4_s99,
    _g4_s101 = (496u + sizeof(_g4_t_v278)) > _g4_s100 ? (496u + sizeof(_g4_t_v278)) : _g4_s100,
    _g4_s102 = (500u + sizeof(_g4_t_v279)) > _g4_s101 ? (500u + sizeof(_g4_t_v279)) : _g4_s101,
    _g4_s103 = (504u + sizeof(_g4_t_v280)) > _g4_s102 ? (504u + sizeof(_g4_t_v280)) : _g4_s102,
    _g4_s104 = (508u + sizeof(_g4_t_v281)) > _g4_s103 ? (508u + sizeof(_g4_t_v281)) : _g4_s103,
    _g4_s105 = (512u + sizeof(_g4_t_v282)) > _g4_s104 ? (512u + sizeof(_g4_t_v282)) : _g4_s104,
    _g4_s106 = (516u + sizeof(_g4_t_v283)) > _g4_s105 ? (516u + sizeof(_g4_t_v283)) : _g4_s105,
    _g4_s107 = (520u + sizeof(_g4_t_v284)) > _g4_s106 ? (520u + sizeof(_g4_t_v284)) : _g4_s106,
    _g4_s108 = (524u + sizeof(_g4_t_v285)) > _g4_s107 ? (524u + sizeof(_g4_t_v285)) : _g4_s107,
    _g4_s109 = (528u + sizeof(_g4_t_v286)) > _g4_s108 ? (528u + sizeof(_g4_t_v286)) : _g4_s108,
    _g4_s110 = (532u + sizeof(_g4_t_v287)) > _g4_s109 ? (532u + sizeof(_g4_t_v287)) : _g4_s109,
    _g4_s111 = (536u + sizeof(_g4_t_v288)) > _g4_s110 ? (536u + sizeof(_g4_t_v288)) : _g4_s110,
    _g4_s112 = (540u + sizeof(_g4_t_v289)) > _g4_s111 ? (540u + sizeof(_g4_t_v289)) : _g4_s111,
    _g4_s113 = (544u + sizeof(_g4_t_v290)) > _g4_s112 ? (544u + sizeof(_g4_t_v290)) : _g4_s112,
    _g4_s114 = (548u + sizeof(_g4_t_v291)) > _g4_s113 ? (548u + sizeof(_g4_t_v291)) : _g4_s113,
    _g4_s115 = (552u + sizeof(_g4_t_v292)) > _g4_s114 ? (552u + sizeof(_g4_t_v292)) : _g4_s114,
    _g4_s116 = (556u + sizeof(_g4_t_v293)) > _g4_s115 ? (556u + sizeof(_g4_t_v293)) : _g4_s115,
    _g4_s117 = (560u + sizeof(_g4_t_v294)) > _g4_s116 ? (560u + sizeof(_g4_t_v294)) : _g4_s116,
    _g4_s118 = (564u + sizeof(_g4_t_v295)) > _g4_s117 ? (564u + sizeof(_g4_t_v295)) : _g4_s117,
    _g4_s119 = (568u + sizeof(_g4_t_v296)) > _g4_s118 ? (568u + sizeof(_g4_t_v296)) : _g4_s118,
    _g4_s120 = (572u + sizeof(_g4_t_v297)) > _g4_s119 ? (572u + sizeof(_g4_t_v297)) : _g4_s119,
    _g4_s121 = (576u + sizeof(_g4_t_v298)) > _g4_s120 ? (576u + sizeof(_g4_t_v298)) : _g4_s120,
    _g4_s122 = (592u + sizeof(_g4_t_v299)) > _g4_s121 ? (592u + sizeof(_g4_t_v299)) : _g4_s121
  };
  alignas(16) uint8_t _g4_sf[_g4_s122];
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 4u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 4u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 4u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 4u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 4u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 8u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 16u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 32u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 32u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 64u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 80u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 128u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 128u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 128u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 152u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 156u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 160u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 164u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 168u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 172u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 176u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 180u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 184u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 188u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 192u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 200u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 204u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 208u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 208u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 212u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 212u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 216u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 216u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 220u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 220u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 224u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 232u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 232u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 236u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 236u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 256u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 256u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 260u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 260u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 260u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 264u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 264u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 268u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 268u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 272u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 276u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 276u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 280u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 280u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 280u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 284u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 288u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 288u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 296u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 304u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 312u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 312u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 312u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 312u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 316u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 316u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 316u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 316u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 316u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 316u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 320u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 336u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 344u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 348u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 352u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 356u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 360u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 368u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 372u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 376u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 384u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 388u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 392u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 400u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 416u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 420u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 424u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 428u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 432u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 452u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 456u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 460u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 464u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 468u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 472u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 476u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 480u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 484u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 488u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 492u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 496u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 500u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 504u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 508u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 512u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 516u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 520u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 524u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 528u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 532u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 536u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 540u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 544u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 548u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 552u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 556u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 560u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 564u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 568u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 572u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 576u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 592u);

  result = (int *)sub_6634F0(v299, a3 + 48, a3 + 64, a3 + 8, a3 + 20);
  v5 = *(uint32_t *)(a3 + 132);
  if ( v5 != 0 )
  {
    result = (int *)(*(int (**)(uint32_t))(*(uint32_t *)v5 + 12))(*(uint32_t *)(a3 + 132));
    if ( (uint8_t)(uintptr_t)(result) != 0 )
    {
      v6 = *(float *)(*(uint32_t *)(a3 + 136) + 12);
      v214 = *(uint32_t *)(a3 + 136);
      v237 = -1.0;
      if ( v6 >= 0.0 )
        v237 = 1.0;
      v188 = fabs(v6);
      v209 = true;
      v7 = pow(v188, 1.6180000305175781) * v237;
      v220 = v7;
      if ( fabs(*(float *)(v214 + 16)) < 0.000001f )
        v209 = v188 >= 0.000001f;
      v252 = v299[16];
      v253 = v299[17];
      v254 = v299[18];
      sub_6645E0();
      v8 = *(float *)(a3 + 152);
      v255 = 0.0;
      v9 = *(float *)(a3 + 156);
      v256 = 0.0;
      v257 = 1.0;
      v10 = (float)(v9 * v9) + (float)(v8 * v8);
      if ( v10 != 0.0 )
      {
        v11 = fsqrt(v10);
        v12 = (float)((float)((float)(v10 * (float)(1.0 / v11)) * (float)(1.0 / v11)) + -3.0)
            * (float)((float)(1.0 / v11) * -0.5);
        v8 = v8 * v12;
        v9 = v9 * v12;
      }
      v13 = *(float *)(a3 + 12);
      v14 = v13;
      v225 = *(float *)(a3 + 8);
      v223 = v13;
      v15 = (float)(v13 * v13) + (float)(v225 * v225);
      v211 = *(float *)(a3 + 16);
      v238 = v225;
      if ( v15 != 0.0 )
      {
        v16 = 1.0 / fsqrt(v15);
        v17 = (float)((float)((float)(v16 * v15) * v16) + -3.0) * (float)(v16 * -0.5);
        v18 = v225 * v17;
        v14 = v17 * v13;
        v238 = v18;
      }
      v242 = v254;
      if ( v254 <= -0.000001f )
      {
        v14 = -v14;
        v238 = -v238;
      }
      v185 = 0.5 * *(float *)(*(uint32_t *)(a3 + 136) + 8);
      v178 = sinf(v185);
      v187 = v178;
      v179 = cosf(v185);
      v19 = -(float)(v187 * v9);
      v20 = (float)((float)((float)(v179 + v179) * (float)(v187 * v8)) + v9) + (float)((float)(v187 + v187) * v19);
      v21 = (float)((float)-(float)((float)(v187 * v8) * v187) - (float)((float)(v187 * v8) * v187))
          + (float)((float)(v19 * (float)(v179 + v179)) + v8);
      v203 = *(float *)(v5 + 72);
      if ( *(uint8_t *)(v5 + 76) != 0 )
      {
        v108 = cos(*(float *)(v5 + 84));
        v23 = (float)(v238 * v21) + (float)(v20 * v14);
        if ( v23 <= 1.0 )
        {
          v109 = (float)(fmaxf(v108, v23) - v108) / (float)(1.0 - v108);
          v110 = (float)(1.0 - v109) * *(float *)(v5 + 80);
        }
        else
        {
          v109 = 1.0;
          v110 = 0.0;
        }
        v22 = (float)(v203 * v109) + v110;
      }
      else
      {
        v22 = *(float *)(v5 + 72);
        v23 = (float)(v238 * v21) + (float)(v20 * v14);
      }
      v24 = sin((float)(v220 * v22));
      v236 = v21 * v24;
      v233 = v24 * v20;
      v25 = cos((float)(v220 * v22));
      v234 = v25;
      v26 = (float)(v14 * v14) + (float)(v238 * v238);
      if ( v23 >= 0.0 || (v27 = 1, v26 <= 25.0) )
        v27 = 0;
      v227 = v253;
      v230 = v252;
      v28 = (float)(v252 * v252) + (float)(v227 * v227);
      v216 = v253;
      v218 = v252;
      v239 = v28;
      if ( v28 != 0.0 )
      {
        v29 = fsqrt(v28);
        v30 = (float)((float)((float)(v28 * (float)(1.0 / v29)) * (float)(1.0 / v29)) + -3.0)
            * (float)((float)(1.0 / v29) * -0.5);
        v218 = v252 * v30;
        v216 = v30 * v253;
      }
      v31 = v236;
      v228 = (float)(v236 * v236) + (float)(v233 * v233);
      v32 = v233;
      if ( v228 != 0.0 )
      {
        v33 = fsqrt(v228);
        v34 = (float)((float)((float)(v228 * (float)(1.0 / v33)) * (float)(1.0 / v33)) + -3.0)
            * (float)((float)(1.0 / v33) * -0.5);
        v31 = v236 * v34;
        v32 = v34 * v233;
      }
      v189 = v27;
      v35 = acos(fminf(fmaxf(-1.0, v254), 1.0));
      if ( v189 == 0 )
        v22 = v203;
      v36 = v35;
      v37 = (float)(v36 / v22) + (float)(fminf(fmaxf((float)(v32 * v216) + (float)(v31 * v218), 0.0), 1.0) * v220);
      *(double *)&v38 = -1.0;
      v39 = v37 * 0.5;
      if ( v39 >= 0.0 )
        *(double *)&v38 = 1.0;
      v186 = *(double *)&v38;
      v183 = pow(fabs(v39), 1.6180000305175781);
g4_m128_lane<int32_t>(v40, 0) = *(uint32_t *)(v5 + 12);
g4_m128_raw(v41) =g4_m128_lane<uint32_t>(v40, 0);
g4_m128_lane<float>(v41, 0) =g4_m128_lane<float>(v40, 0) - fsqrt(v26);
g4_m128_raw(v42) = 0;
      v43 = v183 * v186;
g4_m128_lane<float>(v42, 0) = fmaxf(0.0,g4_m128_lane<float>(v41, 0));
      v44 = _mm_cmpgt_ss(v41, v40);
      v45 = v43 * *(float *)(v5 + 16);
g4_m128_lane<int32_t>(v44, 0) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v44, v42), 0) |g4_m128_lane<int32_t>(v40, 0) &g4_m128_lane<int32_t>(v44, 0);
      v46 = *(float *)(a3 + 32);
      v47 =g4_m128_lane<float>(v44, 0) / v46;
      if ( v47 >= v45 )
        v47 = fmaxf(-v47, v45);
      v219 = (float)(v218 * v46) * v47;
      v48 = *(float *)(v214 + 16);
      v217 = v47 * (float)(v216 * v46);
      v49 = v46 * v48;
      if ( v48 < 0.000001f )
        v50 = *(float *)(v5 + 24);
      else
        v50 = *(float *)(v5 + 20);
      v51 = v49 * v50;
      if ( fabs(v51) < 0.000001f )
      {
        v52 = _mm_cmplt_ss(g4_m128_from<__m128>(LODWORD(v211)), g4_m128_from<__m128>(0LL));
        v53 = (float)(*(float *)(v5 + 28) * v46)
            * COERCE_FLOAT(COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v52, g4_m128_from<__m128>(0xBF800000)), 0)) |g4_m128_lane<int32_t>(v52, 0) & 0x3F800000);
        v51 = fabs(v211);
        if ( v51 >= v53 )
          v51 = fmaxf(-v51, v53);
      }
      if ( *(uint8_t *)(v5 + 32) != 0 && *(uint8_t *)(a3 + 165) != 0 )
      {
        v247 = *(float *)(v5 + 44);
        v232 = *(float *)(v5 + 48);
        v241 = *(float *)(v5 + 40);
        sub_6645E0();
        v174 = *(uint32_t *)(a3 + 36);
        v274 = *(float *)(a3 + 44);
        v175 = *(uint32_t *)(a3 + 40);
        v272 = v174;
        v273 = v175;
        v275 = v174;
        v276 = v175;
        v268 = 0.0;
        v267 = COERCE_FLOAT(&off_204B138);
        v269 = 0;
        v277 = v274 - v247;
        LOBYTE(v270) = 0;
        v271 = 0;
        v280 = 0.0;
        v281 = 0;
        v282 = 0;
        v283 = 0;
        v284 = 0;
        v285 = 0;
        v286 = 0;
        v287 = 0;
        v288 = 0;
        v291 = 0;
        v292 = 0;
        v293 = 0;
        v294 = 0;
        v295 = 0;
        v296 = 0;
        v279 = 0.0;
        v289 = -1;
        v290 = -1;
        v278 = NAN;
        v297 = 0.0;
        v298 = 0;
        v176 = sub_6645E0();
        v177 = 0.0;
        if ( G4_VCALL<uint8_t>(v176, 48, &v267, &v278) != 0 )
          v177 = (float)((float)((float)(v232 * *(float *)(v5 + 24)) * *(float *)(a3 + 32))
                       * fminf(fmaxf((float)(v247 - v297) / (float)(v247 - v241), 0.0), 1.0))
               * (float)((float)((float)(v220 + -1.0) * *(float *)(v5 + 36)) + 1.0);
        if ( *(float *)(v214 + 16) > 0.1f )
          v51 = fmaxf(v51, v177);
        else
          v51 = v51 + v177;
        if ( v279 != 0.0 )
          sub_5459F0(&v279, LODWORD(v279) + 4);
        v279 = 0.0;
        v225 = *(float *)(a3 + 8);
        v202 = v255 * v51;
        v201 = v256 * v51;
        v230 = v252;
        v227 = v253;
        v46 = *(float *)(a3 + 32);
        v54 = v257;
        v223 = *(float *)(a3 + 12);
        v211 = *(float *)(a3 + 16);
        v242 = v254;
        v239 = (float)(v230 * v230) + (float)(v227 * v227);
      }
      else
      {
        v201 = 0.0;
        v202 = 0.0;
        v54 = 1.0;
      }
      v215 = v54 * v51;
      v55 = *(float *)(v5 + 4);
      v56 = *(float *)(a3 + 44) - v55;
      if ( v56 >= 0.000001f && *(uint8_t *)(*(uint32_t *)(a3 + 136) + 37) != 0 )
      {
        v167 = fminf(v56 / (float)(*(float *)(v5 + 8) - v55), 1.0);
        if ( v215 >= 0.000001f )
          v215 = (float)(1.0 - v167) * v215;
        if ( v211 >= 0.000001f )
        {
g4_m128_raw(v170) = LODWORD(v211);
g4_m128_lane<float>(v170, 0) = v211 * v167;
          v168 = *(float *)(v5 + 24);
g4_m128_lane<float>(v171, 0) = v46 * v168;
g4_m128_raw(v172) = 0;
g4_m128_lane<float>(v172, 0) = fmaxf(0.0, v211 * v167);
          v173 = _mm_cmpgt_ss(v170, v171);
          v169 = v215
               - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v173, v172), 0) | COERCE_UNSIGNED_INT(v46 * v168) &g4_m128_lane<int32_t>(v173, 0));
        }
        else
        {
          v168 = *(float *)(v5 + 24);
          v169 = v215;
        }
        v215 = v169 - (float)((float)(v167 * 0.1f) * v168);
      }
      v57 = -v299[44];
      v58 = -v299[45];
      v59 = -v299[46];
      v60 = (float)((float)(v58 * v58) + (float)(v57 * v57)) + (float)(v59 * v59);
      if ( v60 == 0.0 )
      {
        v204 = -v299[46];
        v63 = -v299[44];
        v205 = -v299[45];
      }
      else
      {
        v61 = fsqrt(v60);
        v62 = (float)((float)((float)(v60 * (float)(1.0 / v61)) * (float)(1.0 / v61)) + -3.0)
            * (float)((float)(1.0 / v61) * -0.5);
        v63 = v57 * v62;
        v205 = v58 * v62;
        v204 = v62 * v59;
      }
      v221 = *(float *)(v5 + 60);
      v207 = *(float *)(v5 + 56);
      v64 = *(float *)(v5 + 68);
      v65 = (float)((float)((float)((float)(v223 * 0.01f) * (float)(v223 * 0.01f))
                          + (float)((float)(v225 * 0.01f) * (float)(v225 * 0.01f)))
                  + (float)((float)(0.01f * v211) * (float)(0.01f * v211)))
          * *(float *)(v5 + 52);
      v66 = v63 * v65;
      v67 = v205 * v65;
      v68 = v65 * v204;
      if ( !v209 )
      {
        v66 = v66 + (float)(v57 * v64);
        v67 = v67 + (float)(v58 * v64);
        v68 = v68 + (float)(v59 * v64);
      }
      v279 = (float)(*(float *)(v5 + 64) * v46) * v67;
      v278 = (float)(v207 * v46) * v66;
      v280 = (float)(v221 * v46) * v68;
      if ( fabs(v278) > fabs(v299[44]) )
        v278 = (float)-v299[44] * 0.95f;
      if ( fabs(v279) > fabs(v299[45]) )
        v279 = (float)-v299[45] * 0.95f;
      if ( fabs(v280) > fabs(v299[46]) )
        v280 = (float)-v299[46] * 0.95f;
      v199 = *(float *)(a3 + 80) * v279;
      v200 = *(float *)(a3 + 64) * v278;
      v194 = v278 * *(float *)(a3 + 72);
      v192 = v280 * *(float *)(a3 + 104);
      v198 = *(float *)(a3 + 96) * v280;
      v197 = *(float *)(a3 + 68) * v278;
      v193 = v279 * *(float *)(a3 + 88);
      v196 = *(float *)(a3 + 84) * v279;
      v195 = *(float *)(a3 + 100) * v280;
      v69 = (float)(v242 * v242) + v239;
      v70 = v46
          * fsqrt(
              (float)((float)(*(float *)(a3 + 144) * *(float *)(a3 + 144))
                    + (float)(*(float *)(a3 + 140) * *(float *)(a3 + 140)))
            + (float)(*(float *)(a3 + 148) * *(float *)(a3 + 148)));
      v261 = xmmword_1C7C230;
      v71 = v227;
      v224 = v70;
      v72 = v230;
      if ( v69 != 0.0 )
      {
        v73 = 1.0 / fsqrt(v69);
        v74 = (float)((float)((float)(v69 * v73) * v73) + -3.0) * (float)(v73 * -0.5);
        v72 = v230 * v74;
        v71 = v227 * v74;
        v242 = v74 * v242;
      }
      v75 = (float)((float)(v236 * v236) + (float)(v233 * v233)) + (float)(v234 * v234);
      if ( v75 == 0.0 )
      {
        v80 = v234;
        v79 = v233;
        v78 = v236;
      }
      else
      {
        v76 = 1.0 / fsqrt(v75);
        v77 = (float)((float)((float)(v75 * v76) * v76) + -3.0) * (float)(v76 * -0.5);
        v78 = v236 * v77;
        v79 = v233 * v77;
        v80 = v77 * v234;
      }
      v81 = (float)((float)(v79 * v71) + (float)(v78 * v72)) + (float)(v242 * v80);
      if ( v81 >= 0.999999f )
        goto LABEL_69;
      if ( v81 <= -0.999999f )
      {
        sub_6BD6B0();
        v84 = *(float *)&v261;
        v85 = *((float *)&v261 + 1);
        v86 = *((float *)&v261 + 2);
      }
      else
      {
        v82 = fsqrt((float)(v81 + 1.0) + (float)(v81 + 1.0));
        v83 = 1.0 / v82;
        *((float *)&v261 + 3) = 0.5 * v82;
        v84 = (float)((float)(v80 * v71) - (float)(v242 * v79)) * (float)(1.0 / v82);
        v85 = (float)((float)(v242 * v78) - (float)(v80 * v72)) * v83;
        v86 = (float)((float)(v72 * v79) - (float)(v71 * v78)) * v83;
        *(float *)&v261 = v84;
        *((float *)&v261 + 1) = v85;
        *((float *)&v261 + 2) = v86;
      }
      v87 = fsqrt((float)((float)(v85 * v85) + (float)(v84 * v84)) + (float)(v86 * v86));
      if ( fabs(v87) <= 0.000001f || *((float *)&v261 + 3) > 1.0 || *((float *)&v261 + 3) < -1.0 )
      {
LABEL_69:
        v88 = 0.0;
        v248 = 0.0;
        v222 = 1.0;
        v212 = 0.0;
        v210 = 0.0;
      }
      else
      {
        v190 = 1.0 / v87;
        v180 = acosf(*((float *)&v261 + 3));
        v248 = v180 + v180;
        v88 = fabs(v180 + v180);
        v212 = v86 * v190;
        v222 = v85 * v190;
        v210 = v190 * v84;
      }
      v111 = *(float *)(v5 + 92);
      v112 = fminf(fmaxf(v88 / *(float *)(v5 + 96), 0.0), 1.0);
      v113 = (float)((float)(1.0 - v112) * *(float *)(v5 + 88)) + (float)(v112 * v111);
      if ( fabs(v113) < 0.000001f )
        v113 = 0.5 * v111;
      v114 = v222 * *(float *)(a3 + 24);
      v268 = v113;
      v250 = 0.0;
      v267 = (float)((float)(v210 * *(float *)(a3 + 20)) + v114) + (float)(v212 * *(float *)(a3 + 28));
      v269 = *(uint32_t *)(v5 + 100);
      v240 = v267;
      v270 = *(uint32_t *)(v5 + 104);
      sub_6629D0(a3 + 32, &v248, &v267, &v250, 0);
      v262 = 0.0;
      v263 = 0.0;
      v264 = 0.0;
      v115 = v257;
      v265 = 1.0;
      v116 = v252;
      v117 = v253;
      v213 = v210 * (float)(v250 - v240);
      v208 = v222 * (float)(v250 - v240);
      v206 = (float)(v250 - v240) * v212;
      v118 = v255;
      v119 = v256;
      v120 = v254;
      v121 = (float)((float)(v119 * v119) + (float)(v118 * v118)) + (float)(v115 * v115);
      if ( v121 == 0.0 )
      {
        v231 = v257;
        v229 = v256;
        v243 = v255;
      }
      else
      {
        v122 = fsqrt(v121);
        v123 = (float)((float)((float)(v121 * (float)(1.0 / v122)) * (float)(1.0 / v122)) + -3.0)
             * (float)((float)(1.0 / v122) * -0.5);
        v243 = v255 * v123;
        v229 = v256 * v123;
        v231 = v123 * v257;
      }
      v124 = (float)((float)(v253 * v253) + (float)(v252 * v252)) + (float)(v254 * v254);
      if ( v124 != 0.0 )
      {
        v125 = 1.0 / fsqrt(v124);
        v126 = (float)((float)((float)(v124 * v125) * v125) + -3.0) * (float)(v125 * -0.5);
        v116 = v252 * v126;
        v117 = v253 * v126;
        v120 = v254 * v126;
      }
      v127 = (float)((float)(v229 * v117) + (float)(v243 * v116)) + (float)(v231 * v120);
      if ( v127 >= 0.999999f )
        goto LABEL_83;
      if ( v127 <= -0.999999f )
      {
        sub_6BD6B0();
        v128 = v262;
        v129 = v263;
        v244 = v264;
        v119 = v256;
        v118 = v255;
        v115 = v257;
      }
      else
      {
        v226 = fsqrt((float)(v127 + 1.0) + (float)(v127 + 1.0));
        v128 = (float)((float)(v229 * v120) - (float)(v231 * v117)) * (float)(1.0 / v226);
        v129 = (float)((float)(v231 * v116) - (float)(v120 * v243)) * (float)(1.0 / v226);
        v262 = v128;
        v263 = v129;
        v244 = (float)(1.0 / v226) * (float)((float)(v117 * v243) - (float)(v116 * v229));
        v264 = v244;
        v265 = 0.5 * v226;
      }
      v130 = fsqrt((float)((float)(v129 * v129) + (float)(v128 * v128)) + (float)(v244 * v244));
      if ( fabs(v130) <= 0.000001f || v265 > 1.0 || v265 < -1.0 )
      {
LABEL_83:
        v133 = 0.0;
        v245 = 0.0;
        v132 = 1.0;
        v131 = 0.0;
      }
      else
      {
        v184 = 1.0 / v130;
        v181 = acosf(v265);
        v131 = v181 + v181;
        v245 = v244 * v184;
        v132 = v129 * v184;
        v133 = v128 * v184;
      }
      if ( (float)(v131 - v203) >= 0.000001f )
      {
        v134 = (float)(v203 - v131) / *(float *)(a3 + 32);
        v135 = *(float *)(v5 + 92);
        if ( v135 >= v134 )
          v135 = fmaxf(-v135, v134);
        v136 = v135 - (float)((float)((float)(v208 * v132) + (float)(v213 * v133)) + (float)(v245 * v206));
        v213 = (float)(v133 * v136) + v213;
        v208 = (float)(v132 * v136) + v208;
        v206 = (float)(v136 * v245) + v206;
      }
      v137 = (float)(v236 * v119) - (float)(v233 * v118);
      v138 = (float)(v118 * v234) - (float)(v236 * v115);
      v139 = (float)(v115 * v233) - (float)(v119 * v234);
      v140 = (float)((float)(v138 * v138) + (float)(v139 * v139)) + (float)(v137 * v137);
      if ( v140 != 0.0 )
      {
        v141 = 1.0 / fsqrt(v140);
        v142 = (float)((float)((float)(v140 * v141) * v141) + -3.0) * (float)(v141 * -0.5);
        v139 = v139 * v142;
        v138 = v138 * v142;
        v137 = v137 * v142;
      }
      v143 = (float)(v236 * v138) - (float)(v233 * v139);
      v144 = (float)(v139 * v234) - (float)(v236 * v137);
      v246 = v143;
      v145 = (float)(v137 * v233) - (float)(v138 * v234);
      v146 = (float)((float)(v144 * v144) + (float)(v145 * v145)) + (float)(v143 * v143);
      if ( v146 != 0.0 )
      {
        v147 = fsqrt(v146);
        v148 = (float)((float)((float)(v146 * (float)(1.0 / v147)) * (float)(1.0 / v147)) + -3.0)
             * (float)((float)(1.0 / v147) * -0.5);
        v145 = v145 * v148;
        v144 = v144 * v148;
        v246 = v148 * v143;
        v146 = (float)((float)(v144 * v144) + (float)(v145 * v145)) + (float)(v246 * v246);
      }
      v266 = xmmword_1C7C230;
      v235 = (float)(*((float *)&v261 + 1) * v299[22]) - (float)(v299[21] * *((float *)&v261 + 2));
      v149 = (float)((float)((float)(*(float *)&v261 * v299[21]) - (float)(*((float *)&v261 + 1) * v299[20]))
                   * *((float *)&v261 + 1))
           - (float)((float)((float)(*((float *)&v261 + 2) * v299[20]) - (float)(*(float *)&v261 * v299[22]))
                   * *((float *)&v261 + 2));
      v150 = (float)(v235 * *((float *)&v261 + 2))
           - (float)((float)((float)(*(float *)&v261 * v299[21]) - (float)(*((float *)&v261 + 1) * v299[20]))
                   * *(float *)&v261);
      v151 = (float)(v149 + v149)
           + (float)((float)(v235 * (float)(*((float *)&v261 + 3) + *((float *)&v261 + 3))) + v299[20]);
      v258 = v151;
      v152 = (float)((float)((float)((float)(*((float *)&v261 + 2) * v299[20]) - (float)(*(float *)&v261 * v299[22]))
                           * (float)(*((float *)&v261 + 3) + *((float *)&v261 + 3)))
                   + v299[21])
           + (float)(v150 + v150);
      v153 = (float)((float)((float)(*((float *)&v261 + 2) * v299[20]) - (float)(*(float *)&v261 * v299[22]))
                   * *(float *)&v261)
           - (float)(v235 * *((float *)&v261 + 1));
      v259 = v152;
      v154 = (float)(v153 + v153)
           + (float)((float)((float)(*((float *)&v261 + 3) + *((float *)&v261 + 3))
                           * (float)((float)(*(float *)&v261 * v299[21]) - (float)(*((float *)&v261 + 1) * v299[20])))
                   + v299[22]);
      v260 = v154;
      v155 = (float)((float)(v152 * v152) + (float)(v151 * v151)) + (float)(v154 * v154);
      if ( v155 != 0.0 )
      {
        v156 = 1.0 / fsqrt(v155);
        v157 = (float)((float)((float)(v155 * v156) * v156) + -3.0) * (float)(v156 * -0.5);
        v151 = v151 * v157;
        v152 = v152 * v157;
        v154 = v154 * v157;
      }
      if ( v146 != 0.0 )
      {
        v158 = 1.0 / fsqrt(v146);
        v159 = (float)((float)((float)(v146 * v158) * v158) + -3.0) * (float)(v158 * -0.5);
        v145 = v145 * v159;
        v144 = v144 * v159;
        v246 = v159 * v246;
      }
      v160 = (float)((float)(v144 * v152) + (float)(v145 * v151)) + (float)(v246 * v154);
      if ( v160 >= 0.999999f )
        goto LABEL_58;
      if ( v160 <= -0.999999f )
      {
        sub_6BD6B0();
        LODWORD(v163) = (uint32_t)(uintptr_t)(v266);
        v164 = *((float *)&v266 + 1);
        v165 = *((float *)&v266 + 2);
      }
      else
      {
        v161 = fsqrt((float)(v160 + 1.0) + (float)(v160 + 1.0));
        v162 = 1.0 / v161;
        *((float *)&v266 + 3) = 0.5 * v161;
        v163 = (float)((float)(v246 * v152) - (float)(v144 * v154)) * (float)(1.0 / v161);
        v164 = (float)((float)(v154 * v145) - (float)(v246 * v151)) * v162;
        v165 = (float)((float)(v151 * v144) - (float)(v152 * v145)) * v162;
        *(uint64_t *)&v266 = __PAIR64__(LODWORD(v164), LODWORD(v163));
        *((float *)&v266 + 2) = v165;
      }
      v166 = fsqrt((float)((float)(v164 * v164) + (float)(v163 * v163)) + (float)(v165 * v165));
      if ( fabs(v166) <= 0.000001f || *((float *)&v266 + 3) > 1.0 || *((float *)&v266 + 3) < -1.0 )
      {
LABEL_58:
        v89 = 0.0;
        v249 = 0.0;
        v90 = 0.0;
        v91 = 0.0;
        v92 = 1.0;
      }
      else
      {
        v191 = 1.0 / v166;
        v182 = acosf(*((float *)&v266 + 3));
        v91 = v182 + v182;
        v249 = v182 + v182;
        v92 = v164 * v191;
        v90 = (float)(v163 * v252) * v191;
        v89 = (float)(v165 * v254) * v191;
      }
      if ( (float)((float)(v89 + v90) + (float)(v92 * v253)) <= -0.000001f )
      {
        v91 = -v91;
        v249 = v91;
      }
      v93 = *(float *)(v5 + 112);
      v94 = fminf(fmaxf(fabs(v91) / *(float *)(v5 + 116), 0.0), 1.0);
      v95 = (float)((float)(1.0 - v94) * *(float *)(v5 + 108)) + (float)(v94 * v93);
      if ( fabs(v95) < 0.000001f )
        v95 = 0.5 * v93;
      v96 = *(float *)LODWORD(v299[43]);
      v251 = 0.0;
      v279 = v95;
      v278 = v96;
      v280 = *(float *)(v5 + 120);
      v281 = *(uint32_t *)(v5 + 124);
      sub_6629D0(a3 + 32, &v249, &v278, &v251, 0);
      result = (int *)(&dword_1C7C1C0);
      v97 = v251 - *(float *)LODWORD(v299[43]);
      v98 = v252 * v97;
      v99 = fminf(fmaxf(fabs(v248) / *(float *)(v5 + 136), 0.0), 1.0);
      v100 = (float)((float)(1.0 - v99) * *(float *)(v5 + 128)) + (float)(v99 * *(float *)(v5 + 132));
      v101 = v253 * v97;
      v102 = (float)((float)(v240 * v210) - (float)(*(float *)(a3 + 20) - (float)(*(float *)LODWORD(v299[43]) * v252)))
           * v100;
      v103 = (float)((float)(v240 * v222) - (float)(*(float *)(a3 + 24) - (float)(*(float *)LODWORD(v299[43]) * v253)))
           * v100;
      v104 = (float)((float)(v240 * v212) - (float)(*(float *)(a3 + 28) - (float)(*(float *)LODWORD(v299[43]) * v254)))
           * v100;
      a4[1] = (float)((float)((float)((float)(v200 + v199) + a4[1]) + v198) + v219) + v202;
      a4[2] = (float)((float)((float)((float)(v197 + v196) + a4[2]) + v195) + v217) + v201;
      v105 = (float)((float)(v101 + a4[5]) + v103) + v208;
      v106 = (float)((float)((float)(v194 + v193) + a4[3]) + v192) + v215;
      v107 = (float)((float)((float)(v97 * v254) + a4[6]) + v104) + v206;
      a4[4] = (float)((float)(v98 + a4[4]) + v102) + v213;
      a4[5] = v105;
      a4[6] = v107;
      a4[3] = v106 + v224;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2290  (binary VA: 0x6d2290)
// Original: sub_6D2290
// ----------------------------------------------------------------------------
uint32_t * sub_6D2290(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D22B0  (binary VA: 0x6d22b0)
// Original: sub_6D22B0
// ----------------------------------------------------------------------------
uint32_t * sub_6D22B0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D22D0  (binary VA: 0x6d22d0)
// Original: sub_6D22D0
// ----------------------------------------------------------------------------
uint32_t * sub_6D22D0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D22F0  (binary VA: 0x6d22f0)
// Original: sub_6D22F0
// ----------------------------------------------------------------------------
int sub_6D22F0()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: nullsub_158  (binary VA: 0x6d2308)
// Original: nullsub_158
// ----------------------------------------------------------------------------
void nullsub_158()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2310  (binary VA: 0x6d2310)
// Original: sub_6D2310
// ----------------------------------------------------------------------------
int sub_6D2310()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2320  (binary VA: 0x6d2320)
// Original: sub_6D2320
// ----------------------------------------------------------------------------
int sub_6D2320()
{
  return 5;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2330  (binary VA: 0x6d2330)
// Original: sub_6D2330
// ----------------------------------------------------------------------------
int sub_6D2330()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2340  (binary VA: 0x6d2340)
// Original: sub_6D2340
// ----------------------------------------------------------------------------
uint32_t * sub_6D2340(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2360  (binary VA: 0x6d2360)
// Original: sub_6D2360
// ----------------------------------------------------------------------------
uint32_t * sub_6D2360(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2380  (binary VA: 0x6d2380)
// Original: sub_6D2380
// ----------------------------------------------------------------------------
uint32_t * sub_6D2380(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D23A0  (binary VA: 0x6d23a0)
// Original: sub_6D23A0
// ----------------------------------------------------------------------------
int sub_6D23A0()
{
  return 11;
}

// ----------------------------------------------------------------------------
// Function: sub_6D23B0  (binary VA: 0x6d23b0)
// Original: sub_6D23B0
// ----------------------------------------------------------------------------
int sub_6D23B0()
{
  return 12;
}

// ----------------------------------------------------------------------------
// Function: sub_6D23C0  (binary VA: 0x6d23c0)
// Original: sub_6D23C0
// ----------------------------------------------------------------------------
uint32_t * sub_6D23C0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D23E0  (binary VA: 0x6d23e0)
// Original: sub_6D23E0
// ----------------------------------------------------------------------------
uint32_t * sub_6D23E0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2400  (binary VA: 0x6d2400)
// Original: sub_6D2400
// ----------------------------------------------------------------------------
int sub_6D2400()
{
  return 14;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2410  (binary VA: 0x6d2410)
// Original: sub_6D2410
// ----------------------------------------------------------------------------
int sub_6D2410()
{
  return 15;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2420  (binary VA: 0x6d2420)
// Original: sub_6D2420
// ----------------------------------------------------------------------------
uint32_t * sub_6D2420(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2440  (binary VA: 0x6d2440)
// Original: sub_6D2440
// ----------------------------------------------------------------------------
uint32_t * sub_6D2440(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2460  (binary VA: 0x6d2460)
// Original: sub_6D2460
// ----------------------------------------------------------------------------
uint32_t * sub_6D2460(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2480  (binary VA: 0x6d2480)
// Original: sub_6D2480
// ----------------------------------------------------------------------------
uint32_t * sub_6D2480(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D24A0  (binary VA: 0x6d24a0)
// Original: sub_6D24A0
// ----------------------------------------------------------------------------
int sub_6D24A0(uint32_t *a1)
{
  return sub_6D24C0((char *)a1 + *(uint32_t *)(*a1 - 272));
}

// ----------------------------------------------------------------------------
// Function: sub_6D24C0  (binary VA: 0x6d24c0)
// Original: sub_6D24C0
// ----------------------------------------------------------------------------
int sub_6D24C0(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D24D0  (binary VA: 0x6d24d0)
// Original: sub_6D24D0
// ----------------------------------------------------------------------------
int sub_6D24D0(uint32_t *a1)
{
  return sub_6D2500((char *)a1 + *(uint32_t *)(*a1 - 240));
}

// ----------------------------------------------------------------------------
// Function: sub_6D24F0  (binary VA: 0x6d24f0)
// Original: sub_6D24F0
// ----------------------------------------------------------------------------
int sub_6D24F0(int a1)
{
  return sub_6D2500(a1 - 124);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2500  (binary VA: 0x6d2500)
// Original: sub_6D2500
// ----------------------------------------------------------------------------
int sub_6D2500()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2510  (binary VA: 0x6d2510)
// Original: sub_6D2510
// ----------------------------------------------------------------------------
int sub_6D2510(int a1)
{
  return sub_6D2520(a1 - 124);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2520  (binary VA: 0x6d2520)
// Original: sub_6D2520
// ----------------------------------------------------------------------------
int sub_6D2520(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 128) + 24);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2530  (binary VA: 0x6d2530)
// Original: sub_6D2530
// ----------------------------------------------------------------------------
int sub_6D2530(uint32_t *a1)
{
  return sub_6D2550((char *)a1 + *(uint32_t *)(*a1 - 272));
}

// ----------------------------------------------------------------------------
// Function: sub_6D2550  (binary VA: 0x6d2550)
// Original: sub_6D2550
// ----------------------------------------------------------------------------
int sub_6D2550(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2560  (binary VA: 0x6d2560)
// Original: sub_6D2560
// ----------------------------------------------------------------------------
int sub_6D2560(uint32_t *a1)
{
  return sub_6D2590((char *)a1 + *(uint32_t *)(*a1 - 240));
}

// ----------------------------------------------------------------------------
// Function: sub_6D2580  (binary VA: 0x6d2580)
// Original: sub_6D2580
// ----------------------------------------------------------------------------
int sub_6D2580(int a1)
{
  return sub_6D2590(a1 - 80);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2590  (binary VA: 0x6d2590)
// Original: sub_6D2590
// ----------------------------------------------------------------------------
int sub_6D2590()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6D25A0  (binary VA: 0x6d25a0)
// Original: sub_6D25A0
// ----------------------------------------------------------------------------
int sub_6D25A0(int a1)
{
  return sub_6D25B0(a1 - 80);
}

// ----------------------------------------------------------------------------
// Function: sub_6D25B0  (binary VA: 0x6d25b0)
// Original: sub_6D25B0
// ----------------------------------------------------------------------------
int sub_6D25B0(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 84) + 24);
}

// ----------------------------------------------------------------------------
// Function: sub_6D25C0  (binary VA: 0x6d25c0)
// Original: sub_6D25C0
// ----------------------------------------------------------------------------
int sub_6D25C0(uint32_t *a1)
{
  return sub_6D25E0((char *)a1 + *(uint32_t *)(*a1 - 272));
}

// ----------------------------------------------------------------------------
// Function: sub_6D25E0  (binary VA: 0x6d25e0)
// Original: sub_6D25E0
// ----------------------------------------------------------------------------
int sub_6D25E0(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D25F0  (binary VA: 0x6d25f0)
// Original: sub_6D25F0
// ----------------------------------------------------------------------------
int sub_6D25F0(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2600  (binary VA: 0x6d2600)
// Original: sub_6D2600
// ----------------------------------------------------------------------------
int sub_6D2600(uint32_t *a1)
{
  return sub_6D2620((char *)a1 + *(uint32_t *)(*a1 - 272));
}

// ----------------------------------------------------------------------------
// Function: sub_6D2620  (binary VA: 0x6d2620)
// Original: sub_6D2620
// ----------------------------------------------------------------------------
int sub_6D2620(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2630  (binary VA: 0x6d2630)
// Original: sub_6D2630
// ----------------------------------------------------------------------------
int sub_6D2630(uint32_t *a1)
{
  return sub_6D2660((char *)a1 + *(uint32_t *)(*a1 - 240));
}

// ----------------------------------------------------------------------------
// Function: sub_6D2650  (binary VA: 0x6d2650)
// Original: sub_6D2650
// ----------------------------------------------------------------------------
int sub_6D2650(int a1)
{
  return sub_6D2660(a1 - 4);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2660  (binary VA: 0x6d2660)
// Original: sub_6D2660
// ----------------------------------------------------------------------------
int sub_6D2660()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2670  (binary VA: 0x6d2670)
// Original: sub_6D2670
// ----------------------------------------------------------------------------
int sub_6D2670(int a1)
{
  return sub_6D2680(a1 - 4);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2680  (binary VA: 0x6d2680)
// Original: sub_6D2680
// ----------------------------------------------------------------------------
int sub_6D2680(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = *(uint32_t *)(a1 + 8);
  if ( v1 == 0 )
    return 0;
  v2 = *(uint32_t *)(v1 + 24);
  result = 0;
  if ( v2 != 0 )
    return *(uint32_t *)(v2 + 24);
  return result;
}



// ============================================================================
// Address:   0x6d26b0 (size: 115 bytes)
// Symbol:    sub_6D26B0
// Demangled: sub_6D26B0
// ============================================================================
int (**sub_6D26B0(uint32_t *a1))(int)
{
  int v1;

  *a1 = ((uint32_t)(uintptr_t)&off_20558E8);
  v1 = a1[4];
  a1[3] = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[2],
      12 * v1);
  a1[2] = 0;
  a1[4] = 0x80000000;
  *a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2054CB8));
}
// ----------------------------------------------------------------------------
// Function: sub_6D2730  (binary VA: 0x6d2730)
// Original: sub_6D2730
// ----------------------------------------------------------------------------
uint32_t * sub_6D2730(uint32_t *a1)
{
  a1[93] = (uint32_t)(uintptr_t)(&off_2055818);
  a1[35] = (uint32_t)(uintptr_t)(&off_2055818);
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2760  (binary VA: 0x6d2760)
// Original: sub_6D2760
// ----------------------------------------------------------------------------
uint32_t * sub_6D2760(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2780  (binary VA: 0x6d2780)
// Original: sub_6D2780
// ----------------------------------------------------------------------------
uint32_t * sub_6D2780(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D27A0  (binary VA: 0x6d27a0)
// Original: sub_6D27A0
// ----------------------------------------------------------------------------
uint32_t * sub_6D27A0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D27C0  (binary VA: 0x6d27c0)
// Original: sub_6D27C0
// ----------------------------------------------------------------------------
uint32_t * sub_6D27C0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D27E0  (binary VA: 0x6d27e0)
// Original: sub_6D27E0
// ----------------------------------------------------------------------------
uint32_t * sub_6D27E0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2800  (binary VA: 0x6d2800)
// Original: sub_6D2800
// ----------------------------------------------------------------------------
uint32_t * sub_6D2800(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2820  (binary VA: 0x6d2820)
// Original: sub_6D2820
// ----------------------------------------------------------------------------
uint32_t * sub_6D2820(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2840  (binary VA: 0x6d2840)
// Original: sub_6D2840
// ----------------------------------------------------------------------------
uint32_t * sub_6D2840(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2860  (binary VA: 0x6d2860)
// Original: sub_6D2860
// ----------------------------------------------------------------------------
uint32_t * sub_6D2860(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2880  (binary VA: 0x6d2880)
// Original: sub_6D2880
// ----------------------------------------------------------------------------
uint32_t * sub_6D2880(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D28A0  (binary VA: 0x6d28a0)
// Original: sub_6D28A0
// ----------------------------------------------------------------------------
uint32_t * sub_6D28A0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D28C0  (binary VA: 0x6d28c0)
// Original: sub_6D28C0
// ----------------------------------------------------------------------------
uint32_t * sub_6D28C0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D28E0  (binary VA: 0x6d28e0)
// Original: sub_6D28E0
// ----------------------------------------------------------------------------
uint32_t * sub_6D28E0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2900  (binary VA: 0x6d2900)
// Original: sub_6D2900
// ----------------------------------------------------------------------------
uint32_t * sub_6D2900(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2920  (binary VA: 0x6d2920)
// Original: sub_6D2920
// ----------------------------------------------------------------------------
uint32_t * sub_6D2920(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2940  (binary VA: 0x6d2940)
// Original: sub_6D2940
// ----------------------------------------------------------------------------
uint32_t * sub_6D2940(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2960  (binary VA: 0x6d2960)
// Original: sub_6D2960
// ----------------------------------------------------------------------------
void sub_6D2960(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2990  (binary VA: 0x6d2990)
// Original: sub_6D2990
// ----------------------------------------------------------------------------
void sub_6D2990(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D29C0  (binary VA: 0x6d29c0)
// Original: sub_6D29C0
// ----------------------------------------------------------------------------
void sub_6D29C0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D29F0  (binary VA: 0x6d29f0)
// Original: sub_6D29F0
// ----------------------------------------------------------------------------
void sub_6D29F0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2A20  (binary VA: 0x6d2a20)
// Original: sub_6D2A20
// ----------------------------------------------------------------------------
void sub_6D2A20(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2A50  (binary VA: 0x6d2a50)
// Original: sub_6D2A50
// ----------------------------------------------------------------------------
void sub_6D2A50(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2A80  (binary VA: 0x6d2a80)
// Original: sub_6D2A80
// ----------------------------------------------------------------------------
void sub_6D2A80(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2AB0  (binary VA: 0x6d2ab0)
// Original: sub_6D2AB0
// ----------------------------------------------------------------------------
void sub_6D2AB0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2AE0  (binary VA: 0x6d2ae0)
// Original: sub_6D2AE0
// ----------------------------------------------------------------------------
void sub_6D2AE0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2B10  (binary VA: 0x6d2b10)
// Original: sub_6D2B10
// ----------------------------------------------------------------------------
void sub_6D2B10(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2B40  (binary VA: 0x6d2b40)
// Original: sub_6D2B40
// ----------------------------------------------------------------------------
void sub_6D2B40(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2B70  (binary VA: 0x6d2b70)
// Original: sub_6D2B70
// ----------------------------------------------------------------------------
void sub_6D2B70(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2BA0  (binary VA: 0x6d2ba0)
// Original: sub_6D2BA0
// ----------------------------------------------------------------------------
void sub_6D2BA0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2BD0  (binary VA: 0x6d2bd0)
// Original: sub_6D2BD0
// ----------------------------------------------------------------------------
void sub_6D2BD0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2C00  (binary VA: 0x6d2c00)
// Original: sub_6D2C00
// ----------------------------------------------------------------------------
void sub_6D2C00(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2C30  (binary VA: 0x6d2c30)
// Original: sub_6D2C30
// ----------------------------------------------------------------------------
void sub_6D2C30(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2C60  (binary VA: 0x6d2c60)
// Original: sub_6D2C60
// ----------------------------------------------------------------------------
void sub_6D2C60(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055848);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2C90  (binary VA: 0x6d2c90)
// Original: sub_6D2C90
// ----------------------------------------------------------------------------
void sub_6D2C90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2CC0  (binary VA: 0x6d2cc0)
// Original: sub_6D2CC0
// ----------------------------------------------------------------------------
void sub_6D2CC0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2CF0  (binary VA: 0x6d2cf0)
// Original: sub_6D2CF0
// ----------------------------------------------------------------------------
void sub_6D2CF0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2D20  (binary VA: 0x6d2d20)
// Original: sub_6D2D20
// ----------------------------------------------------------------------------
void sub_6D2D20(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2D50  (binary VA: 0x6d2d50)
// Original: sub_6D2D50
// ----------------------------------------------------------------------------
void sub_6D2D50(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2D80  (binary VA: 0x6d2d80)
// Original: sub_6D2D80
// ----------------------------------------------------------------------------
void sub_6D2D80(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2DB0  (binary VA: 0x6d2db0)
// Original: sub_6D2DB0
// ----------------------------------------------------------------------------
void sub_6D2DB0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2DE0  (binary VA: 0x6d2de0)
// Original: sub_6D2DE0
// ----------------------------------------------------------------------------
void sub_6D2DE0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055870);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2E10  (binary VA: 0x6d2e10)
// Original: sub_6D2E10
// ----------------------------------------------------------------------------
void sub_6D2E10(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055830);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2E40  (binary VA: 0x6d2e40)
// Original: sub_6D2E40
// ----------------------------------------------------------------------------
void sub_6D2E40(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2E70  (binary VA: 0x6d2e70)
// Original: sub_6D2E70
// ----------------------------------------------------------------------------
void sub_6D2E70(uint32_t *a1)
{
  a1[93] = (uint32_t)(uintptr_t)(&off_2055818);
  a1[35] = (uint32_t)(uintptr_t)(&off_2055818);
  *a1 = (uint32_t)(uintptr_t)(&off_2055818);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2EB0  (binary VA: 0x6d2eb0)
// Original: sub_6D2EB0
// ----------------------------------------------------------------------------
char * sub_6D2EB0(long double a1, int a2, int a3)
{
  char *result;

  result = nullptr;
  if ( *(uint32_t *)(a2 + 8) != 0 )
    return sub_694010(a1, *(uint32_t **)(a2 + 8), a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2EF0  (binary VA: 0x6d2ef0)
// Original: sub_6D2EF0
// ----------------------------------------------------------------------------
int sub_6D2EF0(int a1, unsigned int a2)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return sub_693CE0(*(uint32_t *)(a1 + 8), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2F30  (binary VA: 0x6d2f30)
// Original: sub_6D2F30
// ----------------------------------------------------------------------------
int sub_6D2F30(uint32_t *a1, char a2)
{
  return sub_6D2F50((char *)a1 + *(uint32_t *)(*a1 - 60), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2F40  (binary VA: 0x6d2f40)
// Original: sub_6D2F40
// ----------------------------------------------------------------------------
int sub_6D2F40(int a1, char a2)
{
  return sub_6D2F50(a1 - 4, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_6D2F50  (binary VA: 0x6d2f50)
// Original: sub_6D2F50
// ----------------------------------------------------------------------------
int sub_6D2F50(int a1, char a2)
{
  int result;

  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
    return sub_692B70(*(uint32_t *)(a1 + 8), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2F90  (binary VA: 0x6d2f90)
// Original: sub_6D2F90
// ----------------------------------------------------------------------------
int sub_6D2F90(long double a1, int a2, char a3, int a4)
{
  int result;

  result = *(uint32_t *)(a2 + 8);
  if ( result != 0 )
    return sub_693B50(a1, *(uint32_t *)(a2 + 8), a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D2FD0  (binary VA: 0x6d2fd0)
// Original: sub_6D2FD0
// ----------------------------------------------------------------------------
int sub_6D2FD0(int a1, int a2)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return sub_691080(*(uint32_t *)(a1 + 8), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D3010  (binary VA: 0x6d3010)
// Original: sub_6D3010
// ----------------------------------------------------------------------------
int sub_6D3010(int a1)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return sub_6910E0(*(uint32_t *)(a1 + 8));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D3040  (binary VA: 0x6d3040)
// Original: sub_6D3040
// ----------------------------------------------------------------------------
int sub_6D3040(uint32_t *a1)
{
  return sub_6D3060((char *)a1 + *(uint32_t *)(*a1 - 228));
}

// ----------------------------------------------------------------------------
// Function: sub_6D3060  (binary VA: 0x6d3060)
// Original: sub_6D3060
// ----------------------------------------------------------------------------
int sub_6D3060(int a1)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return sub_692A90(*(uint32_t *)(a1 + 8));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D3090  (binary VA: 0x6d3090)
// Original: sub_6D3090
// ----------------------------------------------------------------------------
int sub_6D3090(uint32_t *a1, int a2, char a3)
{
  return sub_6D30C0((char *)a1 + *(uint32_t *)(*a1 - 152), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_6D30B0  (binary VA: 0x6d30b0)
// Original: sub_6D30B0
// ----------------------------------------------------------------------------
int sub_6D30B0(int a1, int a2, char a3)
{
  return sub_6D30C0(a1 - 4, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_6D30C0  (binary VA: 0x6d30c0)
// Original: sub_6D30C0
// ----------------------------------------------------------------------------
int sub_6D30C0(int a1, float *a2)
{
  int result;

  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
    return sub_693A80(*(uint32_t *)(a1 + 8), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D3100  (binary VA: 0x6d3100)
// Original: sub_6D3100
// ----------------------------------------------------------------------------
int sub_6D3100(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return sub_6AB890(*(uint32_t *)(a1 + 8), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D3140  (binary VA: 0x6d3140)
// Original: sub_6D3140
// ----------------------------------------------------------------------------
int sub_6D3140(int a1, int a2, int a3)
{
  int result;
  int v4;

  result = a1;
  v4 = *(uint32_t *)(a2 + 8);
  if ( v4 != 0 )
  {
    sub_6926B0((float *)a1, v4, a3);
    return a1;
  }
  else
  {
    *(uint32_t *)a1 = 0;
    *(uint32_t *)(a1 + 4) = 0;
    *(uint32_t *)(a1 + 8) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D31B0  (binary VA: 0x6d31b0)
// Original: sub_6D31B0
// ----------------------------------------------------------------------------
int sub_6D31B0(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
    return sub_691400(*(uint32_t *)(a1 + 8), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D31F0  (binary VA: 0x6d31f0)
// Original: sub_6D31F0
// ----------------------------------------------------------------------------
int sub_6D31F0(int a1, int a2, float a3)
{
  int result;

  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
    return sub_690D40(*(uint32_t *)(a1 + 8), a2, a3);
  return result;
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: sub_6D32E0  (binary VA: 0x6d32e0)
// Original: sub_6D32E0
// ----------------------------------------------------------------------------
double * sub_6D32E0(double *a1, int a2, int a3)
{
  double *result;
  int v4;

  result = a1;
  v4 = *(uint32_t *)(a2 + 8);
  if ( v4 != 0 )
  {
    sub_692770(a1, v4, a3);
    return a1;
  }
  else
  {
    _mm_storel_ps(a1, g4_m128_from<__m128>(0LL));
    _mm_storeh_ps(a1 + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_6D3360  (binary VA: 0x6d3360)
// Original: sub_6D3360
// ----------------------------------------------------------------------------
int sub_6D3360(int a1)
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
// Function: sub_6D33D0  (binary VA: 0x6d33d0)
// Original: sub_6D33D0
// ----------------------------------------------------------------------------
int sub_6D33D0(int a1)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20558E8);
  v1 = *(uint32_t *)(a1 + 16);
  *(uint32_t *)(a1 + 12) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)(a1 + 8),
      12 * v1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 16) = 0x80000000;
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 28;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v3 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v2, 12, a1, v3);
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: sub_6D34A0  (binary VA: 0x6d34a0)
// Original: sub_6D34A0
// ----------------------------------------------------------------------------
void sub_6D34A0(hkpUnaryAction::Self *a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20578A8);
  *((uint32_t *)a1 + 7) = ((uint32_t)(uintptr_t)&off_20578E0);
  v1 = *((uint32_t *)a1 + 15);
  *((uint32_t *)a1 + 14) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)a1 + 13),
      32 * v1);
  v2 = *((uint32_t *)a1 + 12);
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 15) = 0x80000000;
  *((uint32_t *)a1 + 11) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)a1 + 10),
      16 * v2);
  *((uint32_t *)a1 + 10) = 0;
  *((uint32_t *)a1 + 12) = 0x80000000;
  *((uint32_t *)a1 + 7) = (uint32_t)(uintptr_t)(&off_2054DE8);
  hkpUnaryAction::Destroy(a1);
}



// ============================================================================
// Address:   0x6d3550 (size: 156 bytes)
// Symbol:    sub_6D3550
// Demangled: sub_6D3550
// ============================================================================
int (**sub_6D3550(uint32_t *a1))(int)
{
  int v1;
  int v2;

  *a1 = ((uint32_t)(uintptr_t)&off_20586B8);
  v1 = a1[7];
  a1[6] = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[5],
      16 * v1);
  v2 = a1[4];
  a1[5] = 0;
  a1[7] = 0x80000000;
  a1[3] = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[2],
      16 * v2);
  a1[2] = 0;
  a1[4] = 0x80000000;
  *a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2054CB8));
}
// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: sub_6D36F0  (binary VA: 0x6d36f0)
// Original: sub_6D36F0
// ----------------------------------------------------------------------------
int sub_6D36F0(int a1)
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
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 16) = 0x80000000;
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v4 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v3, 12, a1, v4);
}

// ----------------------------------------------------------------------------
// Function: sub_6D37D0  (binary VA: 0x6d37d0)
// Original: sub_6D37D0
// ----------------------------------------------------------------------------
int sub_6D37D0(int a1, int a2, int a3)
{
  int v3;
  uint16_t *v5;
  unsigned int v6;
  uint16_t *v7;

  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 != 0 )
  {
    sub_691DC0((float *)a1, v3, a3);
  }
  else
  {
    v5 = (uint16_t *)a1;
    v6 = 64;
    if ( (a1 & 1) != 0 )
    {
      *(uint8_t *)a1 = 0;
      v5 = (uint16_t *)(a1 + 1);
      LOBYTE(v6) = 63;
    }
    if ( ((uint8_t)(uintptr_t)(v5) & 2) != 0 )
    {
      *v5 = 0;
      v6 -= 2;
      ++v5;
    }
    memset(v5, 0, 4 * (v6 >> 2));
    v7 = &v5[2 * (v6 >> 2)];
    if ( (v6 & 2) != 0 )
      *v7++ = 0;
    if ( (v6 & 1) != 0 )
      *(uint8_t *)v7 = 0;
    *(uint32_t *)a1 = 1065353216;
    *(uint32_t *)(a1 + 20) = 1065353216;
    *(uint32_t *)(a1 + 40) = 1065353216;
    *(uint32_t *)(a1 + 60) = 1065353216;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D38A0  (binary VA: 0x6d38a0)
// Original: sub_6D38A0
// ----------------------------------------------------------------------------
int sub_6D38A0(int a1, int a2, int a3)
{
  int v3;
  uint16_t *v5;
  unsigned int v6;
  uint16_t *v7;

  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 != 0 )
  {
    sub_6922C0((float *)a1, v3, a3);
  }
  else
  {
    v5 = (uint16_t *)a1;
    v6 = 64;
    if ( (a1 & 1) != 0 )
    {
      *(uint8_t *)a1 = 0;
      v5 = (uint16_t *)(a1 + 1);
      LOBYTE(v6) = 63;
    }
    if ( ((uint8_t)(uintptr_t)(v5) & 2) != 0 )
    {
      *v5 = 0;
      v6 -= 2;
      ++v5;
    }
    memset(v5, 0, 4 * (v6 >> 2));
    v7 = &v5[2 * (v6 >> 2)];
    if ( (v6 & 2) != 0 )
      *v7++ = 0;
    if ( (v6 & 1) != 0 )
      *(uint8_t *)v7 = 0;
    *(uint32_t *)a1 = 1065353216;
    *(uint32_t *)(a1 + 20) = 1065353216;
    *(uint32_t *)(a1 + 40) = 1065353216;
    *(uint32_t *)(a1 + 60) = 1065353216;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_6D3970  (binary VA: 0x6d3970)
// Original: sub_6D3970
// ----------------------------------------------------------------------------
float * sub_6D3970(float *a1, float *a2, float *a3)
{
  float v4; // xmm6_4
  float v5; // xmm5_4
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm5_4
  float v13; // xmm5_4
  float v14; // xmm6_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;

  v21 = a3[2];
  v4 = a2[4];
  v5 = a3[1];
  v19 = *a3;
  v6 = a2[7];
  v24 = a2[6];
  v7 = (float)(v6 * v6) - 0.5;
  v23 = a2[5];
  v8 = (float)((float)(v23 * v5) + (float)(*a3 * v4)) + (float)(v24 * v21);
  v9 = (float)(a3[3] * v7) + (float)(v6 * v8);
  v10 = (float)((float)((float)((float)(v23 * v21) - (float)(v24 * v5)) * v6) + (float)(v8 * v4)) + (float)(*a3 * v7);
  *a1 = (float)(v10 + v10) + *a2;
  v11 = (float)((float)((float)(v24 * v19) - (float)(v21 * v4)) * v6) + (float)(v23 * v8);
  a1[1] = (float)((float)(v11 + (float)(v7 * v5)) + (float)(v11 + (float)(v7 * v5))) + a2[1];
  v12 = (float)((float)((float)((float)(v5 * v4) - (float)(v23 * v19)) * v6) + (float)(v8 * v24)) + (float)(v7 * v21);
  a1[2] = (float)(v12 + v12) + a2[2];
  a1[3] = (float)(v9 + v9) + a2[3];
  v13 = a3[6];
  v14 = a2[6];
  v22 = a3[5];
  v15 = a3[4];
  v16 = a2[4];
  v17 = a3[7];
  v20 = a2[5];
  v18 = a2[7];
  a1[4] = (float)((float)((float)(v17 * v16) + (float)(v15 * v18)) + (float)(v20 * v13)) - (float)(v22 * v14);
  a1[5] = (float)((float)((float)(v20 * v17) + (float)(v22 * v18)) + (float)(v15 * v14)) - (float)(v13 * v16);
  a1[6] = (float)((float)((float)(v14 * v17) + (float)(v13 * v18)) + (float)(v16 * v22)) - (float)(v15 * v20);
  a1[7] = (float)((float)(v18 * v17) - (float)((float)(v15 * v16) + (float)(v13 * v14))) - (float)(v22 * v20);
  a1[8] = a3[8] * a2[8];
  a1[9] = a3[9] * a2[9];
  a1[10] = a3[10] * a2[10];
  a1[11] = a3[11] * a2[11];
  return a2;
}


