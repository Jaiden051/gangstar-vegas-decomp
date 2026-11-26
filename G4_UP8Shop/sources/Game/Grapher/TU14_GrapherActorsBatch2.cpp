#include "Core/Utils/DecompTypes.h"
#include "TU14_GrapherActorsBatch2.h"

// ----------------------------------------------------------------------------
// Function: sub_84C490  (binary VA: 0x84c490)
// Original: sub_84C490
// ----------------------------------------------------------------------------
int sub_84C490()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20D67CC);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20D67CC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D67D0), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D67D0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D67D4), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D67D4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D67D8), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D67D8, &unk_20D1280);
  dword_20D67DC = 1056964608;
  dword_20D67E0 = 1056964608;
  dword_20D67E4 = 1056964608;
  dword_20D67BC = (int)(uintptr_t)(&dword_20D67B4);
  dword_20D67C0 = (int)(uintptr_t)(&dword_20D67B4);
  dword_20D67B4 = 0;
  dword_20D67B8 = 0;
  dword_20D67C4 = 0;
  __cxa_atexit(
    (void (*)(void *))g4_std::map_int_list_Gangstar_Handle_887a63::Destroy,
    &dword_20D67B4 - 1,
    &unk_20D1280);
  dword_20D67A0 = (int)(uintptr_t)(&dword_20D67A0);
  dword_20D67A4 = (int)(uintptr_t)(&dword_20D67A0);
  __cxa_atexit(
    (void (*)(void *))g4_std::list_ActorGameCharacterState_fcbfea::Destroy,
    &dword_20D67A0,
    &unk_20D1280);
  dword_20D6790 = 0;
  __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t **))sub_5EDFE0), &dword_20D6790, &unk_20D1280);
  dword_20D6780 = 0;
  return __cxa_atexit((void (*)(void *))sub_84B710, &dword_20D6780, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_84C640  (binary VA: 0x84c640)
// Original: sub_84C640
// ----------------------------------------------------------------------------
int sub_84C640(int a1)
{
  *(uint8_t *)(a1 + 4) = 1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2048CA0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_84C660  (binary VA: 0x84c660)
// Original: sub_84C660
// ----------------------------------------------------------------------------
int sub_84C660(int a1, int a2)
{
  return sub_84C670(a1 - 4, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_84C670  (binary VA: 0x84c670)
// Original: sub_84C670
// ----------------------------------------------------------------------------
int sub_84C670(int a1, int a2)
{
  (*(void (**)(uint32_t, int, int, int, int, int, uint32_t, int))(**(uint32_t **)(*(uint32_t *)(a1 + 236) + 44) + 8))(
    *(uint32_t *)(*(uint32_t *)(a1 + 236) + 44),
    a1 + 4,
    a2,
    a1 + 484,
    1,
    10,
    0,
    0x7FFFFFFF);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: nullsub_296  (binary VA: 0x84c6d8)
// Original: nullsub_296
// ----------------------------------------------------------------------------
void nullsub_296()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_297  (binary VA: 0x84c6e8)
// Original: nullsub_297
// ----------------------------------------------------------------------------
void nullsub_297()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_84C6F0  (binary VA: 0x84c6f0)
// Original: sub_84C6F0
// ----------------------------------------------------------------------------
void sub_84C6F0(uint8_t *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2048CA0);
  a1[4] = 1;
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84C720_ea84c720  (binary VA: 0x84c720)
// Original: sub_84C720
// ----------------------------------------------------------------------------
int sub_84C720_ea84c720(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (6u + sizeof(_g4_t_v2)) > _g4_s0 ? (6u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v4)) > _g4_s2 ? (12u + sizeof(_g4_t_v4)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 6u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "{Base}", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3);
  g4_std::string::Destroy(&v3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), (char *)&unk_1B15112, (int)(uintptr_t)(&v2) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v4);
  { g4_std::string::Destroy(&v4); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_84C7D0  (binary VA: 0x84c7d0)
// Original: sub_84C7D0
// ----------------------------------------------------------------------------
int sub_84C7D0(grapher::ActorBase::Self *a1)
{
  typedef void *_g4_t_v2;
  typedef void *_g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (25u + sizeof(_g4_t_v4)) > _g4_s2 ? (25u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v5)) > _g4_s3 ? (28u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v6)) > _g4_s4 ? (32u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v7)) > _g4_s5 ? (36u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v8)) > _g4_s6 ? (40u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v9)) > _g4_s7 ? (44u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v10)) > _g4_s8 ? (48u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v11)) > _g4_s9 ? (52u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v12)) > _g4_s10 ? (56u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v13)) > _g4_s11 ? (60u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v14)) > _g4_s12 ? (64u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v15)) > _g4_s13 ? (68u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v16)) > _g4_s14 ? (72u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v17)) > _g4_s15 ? (76u + sizeof(_g4_t_v17)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 25u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);

  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Timer", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "AI", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Start", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v9, 1, -1);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Check", (int)(uintptr_t)(&v5));
  grapher::ActorBase::AddPin(a1, 1, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Expired", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::AddPin(a1, 2, &v11, 0, -1);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Time (ms)", (int)(uintptr_t)(&v5) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v12, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Time", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v2, 1, 1, (int)(uintptr_t)(&v14), 1);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Expire on start.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Expire on start", (int)(uintptr_t)(&v6) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Expire on start", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 0, (int)(uintptr_t)(v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  { g4_std::string::Destroy(v17); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_84CB30_ea84cb30  (binary VA: 0x84cb30)
// Original: sub_84CB30
// ----------------------------------------------------------------------------
int sub_84CB30_ea84cb30(grapher::ActorBase::Self *a1)
{
  typedef void *_g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v3)) > _g4_s1 ? (29u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v4)) > _g4_s2 ? (32u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v5)) > _g4_s3 ? (36u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v6)) > _g4_s4 ? (40u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v7)) > _g4_s5 ? (44u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v8)) > _g4_s6 ? (48u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v9)) > _g4_s7 ? (52u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v10)) > _g4_s8 ? (56u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v11)) > _g4_s9 ? (60u + sizeof(_g4_t_v11)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 29u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 32u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 36u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 40u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);

  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Animation", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "AI", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Check", (int)(uintptr_t)(&v3) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v7, 1, -1);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Ended", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddPin(a1, 1, &v8, 0, -1);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Sub anim.", (int)(uintptr_t)(&v4) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Sub anim", (int)(uintptr_t)(&v4) + 1);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Sub anim", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 0, (int)(uintptr_t)(v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  { g4_std::string::Destroy(v11); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameBase::Destroy_ea84cd50  (binary VA: 0x84cd50)
// Original: ActorGameBase::~ActorGameBase
// ----------------------------------------------------------------------------
void ActorGameBase::Destroy_ea84cd50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84CD80  (binary VA: 0x84cd80)
// Original: sub_84CD80
// ----------------------------------------------------------------------------
int * sub_84CD80(int *a1, int a2, int a3, int a4, int *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  char v12;
  int v13;

  v7 = a2 + 4;
  v12 = 1;
  v11 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = (unsigned int)*a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v9 = *a5;
    *(uint32_t *)(v8 + 20) = a5[1];
    *(uint32_t *)(v8 + 16) = v9;
  }
  v13 = v8;
  sub_1904970(v12, v8, a4, v11);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterEnterVehicle::Destroy_ea84ce40  (binary VA: 0x84ce40)
// Original: ActorGameCharacterEnterVehicle::~ActorGameCharacterEnterVehicle
// ----------------------------------------------------------------------------
void ActorGameCharacterEnterVehicle::Destroy_ea84ce40(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84CE70_ea84ce70  (binary VA: 0x84ce70)
// Original: sub_84CE70
// ----------------------------------------------------------------------------
void sub_84CE70_ea84ce70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterExitVehicle::Destroy_ea84ceb0  (binary VA: 0x84ceb0)
// Original: ActorGameCharacterExitVehicle::~ActorGameCharacterExitVehicle
// ----------------------------------------------------------------------------
void ActorGameCharacterExitVehicle::Destroy_ea84ceb0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterEquipWeapon::Destroy_ea84cee0  (binary VA: 0x84cee0)
// Original: ActorGameCharacterEquipWeapon::~ActorGameCharacterEquipWeapon
// ----------------------------------------------------------------------------
void ActorGameCharacterEquipWeapon::Destroy_ea84cee0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterEjectVehicle::Destroy_ea84cf10  (binary VA: 0x84cf10)
// Original: ActorGameCharacterEjectVehicle::~ActorGameCharacterEjectVehicle
// ----------------------------------------------------------------------------
void ActorGameCharacterEjectVehicle::Destroy_ea84cf10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterDrivingManeuver::Destroy_ea84cf40  (binary VA: 0x84cf40)
// Original: ActorGameCharacterDrivingManeuver::~ActorGameCharacterDrivingManeuver
// ----------------------------------------------------------------------------
void ActorGameCharacterDrivingManeuver::Destroy_ea84cf40(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterDrive::Destroy_ea84cf70  (binary VA: 0x84cf70)
// Original: ActorGameCharacterDrive::~ActorGameCharacterDrive
// ----------------------------------------------------------------------------
void ActorGameCharacterDrive::Destroy_ea84cf70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterCover::Destroy_ea84cfa0  (binary VA: 0x84cfa0)
// Original: ActorGameCharacterCover::~ActorGameCharacterCover
// ----------------------------------------------------------------------------
void ActorGameCharacterCover::Destroy_ea84cfa0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterCorrectCrash::Destroy_ea84cfd0  (binary VA: 0x84cfd0)
// Original: ActorGameCharacterCorrectCrash::~ActorGameCharacterCorrectCrash
// ----------------------------------------------------------------------------
void ActorGameCharacterCorrectCrash::Destroy_ea84cfd0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterClimb::Destroy_ea84d000  (binary VA: 0x84d000)
// Original: ActorGameCharacterClimb::~ActorGameCharacterClimb
// ----------------------------------------------------------------------------
void ActorGameCharacterClimb::Destroy_ea84d000(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterCheckCollision::Destroy_ea84d030  (binary VA: 0x84d030)
// Original: ActorGameCharacterCheckCollision::~ActorGameCharacterCheckCollision
// ----------------------------------------------------------------------------
void ActorGameCharacterCheckCollision::Destroy_ea84d030(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterBurst::Destroy_ea84d060  (binary VA: 0x84d060)
// Original: ActorGameCharacterBurst::~ActorGameCharacterBurst
// ----------------------------------------------------------------------------
void ActorGameCharacterBurst::Destroy_ea84d060(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterAttack::Destroy_ea84d090  (binary VA: 0x84d090)
// Original: ActorGameCharacterAttack::~ActorGameCharacterAttack
// ----------------------------------------------------------------------------
void ActorGameCharacterAttack::Destroy_ea84d090(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterAssignObject::Destroy_ea84d0c0  (binary VA: 0x84d0c0)
// Original: ActorGameCharacterAssignObject::~ActorGameCharacterAssignObject
// ----------------------------------------------------------------------------
void ActorGameCharacterAssignObject::Destroy_ea84d0c0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterAim::Destroy_ea84d0f0  (binary VA: 0x84d0f0)
// Original: ActorGameCharacterAim::~ActorGameCharacterAim
// ----------------------------------------------------------------------------
void ActorGameCharacterAim::Destroy_ea84d0f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorSoundAction::Destroy_ea84d120  (binary VA: 0x84d120)
// Original: ActorSoundAction::~ActorSoundAction
// ----------------------------------------------------------------------------
void ActorSoundAction::Destroy_ea84d120(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSwitchJetpackMode::Destroy_ea84d150  (binary VA: 0x84d150)
// Original: ActorGameCharacterSwitchJetpackMode::~ActorGameCharacterSwitchJetpackMode
// ----------------------------------------------------------------------------
void ActorGameCharacterSwitchJetpackMode::Destroy_ea84d150(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterPickUpVehicle::Destroy_ea84d180  (binary VA: 0x84d180)
// Original: ActorGameCharacterPickUpVehicle::~ActorGameCharacterPickUpVehicle
// ----------------------------------------------------------------------------
void ActorGameCharacterPickUpVehicle::Destroy_ea84d180(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterParachute::Destroy_ea84d1b0  (binary VA: 0x84d1b0)
// Original: ActorGameCharacterParachute::~ActorGameCharacterParachute
// ----------------------------------------------------------------------------
void ActorGameCharacterParachute::Destroy_ea84d1b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterLaunchCharacter::Destroy_ea84d1e0  (binary VA: 0x84d1e0)
// Original: ActorGameCharacterLaunchCharacter::~ActorGameCharacterLaunchCharacter
// ----------------------------------------------------------------------------
void ActorGameCharacterLaunchCharacter::Destroy_ea84d1e0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCameraPreset::Destroy_ea84d210  (binary VA: 0x84d210)
// Original: ActorGameCameraPreset::~ActorGameCameraPreset
// ----------------------------------------------------------------------------
void ActorGameCameraPreset::Destroy_ea84d210(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorTimer::Destroy  (binary VA: 0x84d240)
// Original: ActorTimer::~ActorTimer
// ----------------------------------------------------------------------------
void ActorTimer::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorBehaviorChild::Destroy_ea84d270  (binary VA: 0x84d270)
// Original: ActorBehaviorChild::~ActorBehaviorChild
// ----------------------------------------------------------------------------
void ActorBehaviorChild::Destroy_ea84d270(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorAnimation::Destroy_ea84d2a0  (binary VA: 0x84d2a0)
// Original: ActorAnimation::~ActorAnimation
// ----------------------------------------------------------------------------
void ActorAnimation::Destroy_ea84d2a0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D2D0_ea84d2d0  (binary VA: 0x84d2d0)
// Original: sub_84D2D0
// ----------------------------------------------------------------------------
void sub_84D2D0_ea84d2d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D310_ea84d310  (binary VA: 0x84d310)
// Original: sub_84D310
// ----------------------------------------------------------------------------
void sub_84D310_ea84d310(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D350_ea84d350  (binary VA: 0x84d350)
// Original: sub_84D350
// ----------------------------------------------------------------------------
void sub_84D350_ea84d350(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D390_ea84d390  (binary VA: 0x84d390)
// Original: sub_84D390
// ----------------------------------------------------------------------------
void sub_84D390_ea84d390(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D3D0_ea84d3d0  (binary VA: 0x84d3d0)
// Original: sub_84D3D0
// ----------------------------------------------------------------------------
void sub_84D3D0_ea84d3d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D410  (binary VA: 0x84d410)
// Original: sub_84D410
// ----------------------------------------------------------------------------
void sub_84D410(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D450_ea84d450  (binary VA: 0x84d450)
// Original: sub_84D450
// ----------------------------------------------------------------------------
void sub_84D450_ea84d450(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D490_ea84d490  (binary VA: 0x84d490)
// Original: sub_84D490
// ----------------------------------------------------------------------------
void sub_84D490_ea84d490(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D4D0_ea84d4d0  (binary VA: 0x84d4d0)
// Original: sub_84D4D0
// ----------------------------------------------------------------------------
void sub_84D4D0_ea84d4d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D510_ea84d510  (binary VA: 0x84d510)
// Original: sub_84D510
// ----------------------------------------------------------------------------
void sub_84D510_ea84d510(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D550_ea84d550  (binary VA: 0x84d550)
// Original: sub_84D550
// ----------------------------------------------------------------------------
void sub_84D550_ea84d550(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D590_ea84d590  (binary VA: 0x84d590)
// Original: sub_84D590
// ----------------------------------------------------------------------------
void sub_84D590_ea84d590(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D5D0_ea84d5d0  (binary VA: 0x84d5d0)
// Original: sub_84D5D0
// ----------------------------------------------------------------------------
void sub_84D5D0_ea84d5d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D610_ea84d610  (binary VA: 0x84d610)
// Original: sub_84D610
// ----------------------------------------------------------------------------
void sub_84D610_ea84d610(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D650_ea84d650  (binary VA: 0x84d650)
// Original: sub_84D650
// ----------------------------------------------------------------------------
void sub_84D650_ea84d650(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D690_ea84d690  (binary VA: 0x84d690)
// Original: sub_84D690
// ----------------------------------------------------------------------------
void sub_84D690_ea84d690(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D6D0_ea84d6d0  (binary VA: 0x84d6d0)
// Original: sub_84D6D0
// ----------------------------------------------------------------------------
void sub_84D6D0_ea84d6d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D710_ea84d710  (binary VA: 0x84d710)
// Original: sub_84D710
// ----------------------------------------------------------------------------
void sub_84D710_ea84d710(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D750_ea84d750  (binary VA: 0x84d750)
// Original: sub_84D750
// ----------------------------------------------------------------------------
void sub_84D750_ea84d750(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D790_ea84d790  (binary VA: 0x84d790)
// Original: sub_84D790
// ----------------------------------------------------------------------------
void sub_84D790_ea84d790(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D7D0_ea84d7d0  (binary VA: 0x84d7d0)
// Original: sub_84D7D0
// ----------------------------------------------------------------------------
void sub_84D7D0_ea84d7d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D810_ea84d810  (binary VA: 0x84d810)
// Original: sub_84D810
// ----------------------------------------------------------------------------
void sub_84D810_ea84d810(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D850_ea84d850  (binary VA: 0x84d850)
// Original: sub_84D850
// ----------------------------------------------------------------------------
void sub_84D850_ea84d850(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D890_ea84d890  (binary VA: 0x84d890)
// Original: sub_84D890
// ----------------------------------------------------------------------------
void sub_84D890_ea84d890(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorBehavior::Destroy_ea84d8d0  (binary VA: 0x84d8d0)
// Original: ActorBehavior::~ActorBehavior
// ----------------------------------------------------------------------------
void ActorBehavior::Destroy_ea84d8d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D900_ea84d900  (binary VA: 0x84d900)
// Original: sub_84D900
// ----------------------------------------------------------------------------
int sub_84D900_ea84d900(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  { grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_84D9A0_ea84d9a0  (binary VA: 0x84d9a0)
// Original: sub_84D9A0
// ----------------------------------------------------------------------------
int sub_84D9A0_ea84d9a0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  { grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_84DA40  (binary VA: 0x84da40)
// Original: sub_84DA40
// ----------------------------------------------------------------------------
int sub_84DA40(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  char v8; // bp
  unsigned int v9;
  char v11; // bp
  int v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v17 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v16 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v17 != v16 )
      v11 = v16[4] > v6;
    v12 = opNew(0x18u);
    if ( v12 != -16 )
    {
      v13 = *a3;
      *(uint32_t *)(v12 + 20) = a3[1];
      *(uint32_t *)(v12 + 16) = v13;
    }
    sub_1904970(v11, v12, v16, v17);
    *(uint32_t *)a1 = v12;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_84CD80(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < (unsigned int)*a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_84DB80_ea84db80  (binary VA: 0x84db80)
// Original: sub_84DB80
// ----------------------------------------------------------------------------
int sub_84DB80_ea84db80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v6)) > _g4_s1 ? (27u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, "Subject", (int)(uintptr_t)(v6));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4A64 == 0 )
    v3 = (int *)(&dword_20D4A60);
  v5 = (void *)sub_5B44E0((int)(uintptr_t)(v3), (int)(uintptr_t)(v6) + 1, (unsigned int)(uintptr_t)(a3));
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v5 != nullptr )
  {
    if ( a2 == 1 )
    {
      G4_VCALL<void>(v5, 720, 1);
    }
    else if ( a2 <= 1 )
    {
      if ( a2 == 0 )
        G4_VCALL<void>(v5, 716, 1);
    }
    else if ( a2 == 2 )
    {
      G4_VCALL<void>(v5, 716, 0);
    }
    else if ( a2 == 3 )
    {
      G4_VCALL<void>(v5, 720, 0);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_84DD20  (binary VA: 0x84dd20)
// Original: sub_84DD20
// ----------------------------------------------------------------------------
int sub_84DD20(char *a1)
{
  return ((sub_84DD50(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84DD30  (binary VA: 0x84dd30)
// Original: sub_84DD30
// ----------------------------------------------------------------------------
int sub_84DD30(char *a1)
{
  return ((sub_84DD50(&a1[*(uint32_t *)(*(uint32_t *)a1 - 24)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84DD40  (binary VA: 0x84dd40)
// Original: sub_84DD40
// ----------------------------------------------------------------------------
int sub_84DD40(int a1)
{
  return ((sub_84DD50((void *)(a1 - 4))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84DD50  (binary VA: 0x84dd50)
// Original: sub_84DD50
// ----------------------------------------------------------------------------
void sub_84DD50(uint32_t *a1)
{
  glitch::video::CMaterial::Self *v1;
  bool v2;
  volatile int32_t *v3;
  glitch::video::CVertexStreams::Self *v4;
  glitch::video::CMaterial::Self *v5;

  v1 = (glitch::video::CMaterial::Self *)a1[121];
  *a1 = (uint32_t)(uintptr_t)(&off_205D4D0);
  a1[1] = ((uint32_t)(uintptr_t)&off_205D52C);
  a1[122] = ((uint32_t)(uintptr_t)&off_205D660);
  a1[123] = (uint32_t)(uintptr_t)(&off_205D680);
  if ( v1 != nullptr )
  {
    v2 = *(uint32_t *)v1 == 2;
    _mm_mfence();
    if ( v2 )
      glitch::video::CMaterial::removeFromRootSceneNode(v1);
    if ( __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v1);
      gll_operator_delete_arr((int)(uintptr_t)(v1));
    }
  }
  v3 = (volatile int32_t *)a1[115];
  *a1 = (uint32_t)(uintptr_t)(&off_205D290);
  a1[1] = ((uint32_t)(uintptr_t)&off_205D2EC);
  a1[122] = ((uint32_t)(uintptr_t)&off_205D420);
  a1[123] = (uint32_t)(uintptr_t)(&off_205D440);
  if ( v3 != nullptr && __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
  }
  v4 = (glitch::video::CVertexStreams::Self *)a1[112];
  *a1 = (uint32_t)(uintptr_t)(&off_205D0B0);
  a1[1] = ((uint32_t)(uintptr_t)&off_205D10C);
  a1[122] = ((uint32_t)(uintptr_t)&off_205D240);
  a1[123] = (uint32_t)(uintptr_t)(&off_205D260);
  if ( v4 != nullptr && __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v4);
    gll_operator_delete_arr((int)(uintptr_t)(v4));
  }
  v5 = (glitch::video::CMaterial::Self *)a1[74];
  if ( v5 != nullptr )
  {
    v2 = *(uint32_t *)v5 == 2;
    _mm_mfence();
    if ( v2 )
      glitch::video::CMaterial::removeFromRootSceneNode(v5);
    if ( __sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v5);
      gll_operator_delete_arr((int)(uintptr_t)(v5));
    }
  }
  *a1 = (uint32_t)(uintptr_t)(&off_205CF10);
  a1[1] = ((uint32_t)(uintptr_t)&off_205CF40);
  a1[122] = (uint32_t)(uintptr_t)(&off_205D074);
  a1[123] = (uint32_t)(uintptr_t)(&off_205D094);
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)(a1 + 1));
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  a1[122] = ((uint32_t)(uintptr_t)&off_205CD4C);
  a1[123] = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84DF50  (binary VA: 0x84df50)
// Original: sub_84DF50
// ----------------------------------------------------------------------------
int sub_84DF50(uint32_t *a1)
{
  return sub_84DF80((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_84DF60  (binary VA: 0x84df60)
// Original: sub_84DF60
// ----------------------------------------------------------------------------
int sub_84DF60(uint32_t *a1)
{
  return sub_84DF80((char *)a1 + *(uint32_t *)(*a1 - 24));
}

// ----------------------------------------------------------------------------
// Function: sub_84DF70  (binary VA: 0x84df70)
// Original: sub_84DF70
// ----------------------------------------------------------------------------
int sub_84DF70(int a1)
{
  return sub_84DF80(a1 - 4);
}



// ============================================================================
// Address:   0x84df80 (size: 493 bytes)
// Symbol:    sub_84DF80
// Demangled: sub_84DF80
// ============================================================================
int (**sub_84DF80(uint32_t *a1))(int)
{
  glitch::video::CMaterial::Self *v1;
  bool v2;
  volatile int32_t *v3;
  glitch::video::CVertexStreams::Self *v4;
  glitch::video::CMaterial::Self *v5;

  v1 = (glitch::video::CMaterial::Self *)a1[121];
  *a1 = (uint32_t)(uintptr_t)(&off_205D4D0);
  a1[1] = ((uint32_t)(uintptr_t)&off_205D52C);
  a1[122] = ((uint32_t)(uintptr_t)&off_205D660);
  a1[123] = (uint32_t)(uintptr_t)(&off_205D680);
  if ( v1 != nullptr )
  {
    v2 = *(uint32_t *)v1 == 2;
    _mm_mfence();
    if ( v2 )
      glitch::video::CMaterial::removeFromRootSceneNode(v1);
    if ( __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v1);
      gll_operator_delete_arr((int)(uintptr_t)(v1));
    }
  }
  v3 = (volatile int32_t *)a1[115];
  *a1 = (uint32_t)(uintptr_t)(&off_205D290);
  a1[1] = ((uint32_t)(uintptr_t)&off_205D2EC);
  a1[122] = ((uint32_t)(uintptr_t)&off_205D420);
  a1[123] = (uint32_t)(uintptr_t)(&off_205D440);
  if ( v3 != nullptr && __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
  }
  v4 = (glitch::video::CVertexStreams::Self *)a1[112];
  *a1 = (uint32_t)(uintptr_t)(&off_205D0B0);
  a1[1] = ((uint32_t)(uintptr_t)&off_205D10C);
  a1[122] = ((uint32_t)(uintptr_t)&off_205D240);
  a1[123] = (uint32_t)(uintptr_t)(&off_205D260);
  if ( v4 != nullptr && __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v4);
    gll_operator_delete_arr((int)(uintptr_t)(v4));
  }
  v5 = (glitch::video::CMaterial::Self *)a1[74];
  if ( v5 != nullptr )
  {
    v2 = *(uint32_t *)v5 == 2;
    _mm_mfence();
    if ( v2 )
      glitch::video::CMaterial::removeFromRootSceneNode(v5);
    if ( __sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v5);
      gll_operator_delete_arr((int)(uintptr_t)(v5));
    }
  }
  *a1 = (uint32_t)(uintptr_t)(&off_205CF10);
  a1[1] = ((uint32_t)(uintptr_t)&off_205CF40);
  a1[123] = (uint32_t)(uintptr_t)(&off_205D094);
  a1[122] = (uint32_t)(uintptr_t)(&off_205D074);
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)(a1 + 1));
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  a1[122] = ((uint32_t)(uintptr_t)&off_205CD4C);
  a1[123] = (uint32_t)(uintptr_t)(&off_20483C0);
  return (int (**)(int))(uintptr_t)(&off_20483C0);
}
// ----------------------------------------------------------------------------
// Function: sub_84E170_ea84e170  (binary VA: 0x84e170)
// Original: sub_84E170
// ----------------------------------------------------------------------------
int sub_84E170_ea84e170(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef g4_int128_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v5)) > _g4_s2 ? (27u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v8)) > _g4_s5 ? (48u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v9)) > _g4_s6 ? (52u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v10)) > _g4_s7 ? (56u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v11)) > _g4_s8 ? (60u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v12)) > _g4_s9 ? (64u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v13)) > _g4_s10 ? (68u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v14)) > _g4_s11 ? (72u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v15)) > _g4_s12 ? (76u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v16)) > _g4_s13 ? (80u + sizeof(_g4_t_v16)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Camera Preset", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Cameras", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 1, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Name of the preset from camera_presets.xml", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Preset", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 4, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Preset", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84E480_ea84e480  (binary VA: 0x84e480)
// Original: sub_84E480
// ----------------------------------------------------------------------------
int sub_84E480_ea84e480(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[20];
  typedef uint32_t *_g4_t_v17;
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
  typedef int _g4_t_v38[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v6)) > _g4_s2 ? (4u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v7)) > _g4_s3 ? (4u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v8)) > _g4_s4 ? (16u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v9)) > _g4_s5 ? (16u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v10)) > _g4_s6 ? (16u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (31u + sizeof(_g4_t_v11)) > _g4_s7 ? (31u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v12)) > _g4_s8 ? (32u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v13)) > _g4_s9 ? (36u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v14)) > _g4_s10 ? (40u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v15)) > _g4_s11 ? (44u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v16)) > _g4_s12 ? (48u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v17)) > _g4_s13 ? (68u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v18)) > _g4_s14 ? (80u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v19)) > _g4_s15 ? (84u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v20)) > _g4_s16 ? (88u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v21)) > _g4_s17 ? (92u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v22)) > _g4_s18 ? (96u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v23)) > _g4_s19 ? (100u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v24)) > _g4_s20 ? (104u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v25)) > _g4_s21 ? (108u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v26)) > _g4_s22 ? (112u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v27)) > _g4_s23 ? (116u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v28)) > _g4_s24 ? (120u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v29)) > _g4_s25 ? (124u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v30)) > _g4_s26 ? (128u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v31)) > _g4_s27 ? (132u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v32)) > _g4_s28 ? (136u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v33)) > _g4_s29 ? (140u + sizeof(_g4_t_v33)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v34)) > _g4_s30 ? (144u + sizeof(_g4_t_v34)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v35)) > _g4_s31 ? (148u + sizeof(_g4_t_v35)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v36)) > _g4_s32 ? (152u + sizeof(_g4_t_v36)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v37)) > _g4_s33 ? (156u + sizeof(_g4_t_v37)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v38)) > _g4_s34 ? (160u + sizeof(_g4_t_v38)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 31u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 96u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 100u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 104u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 108u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 112u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 116u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 120u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 124u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 132u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 136u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 140u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 144u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 148u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 152u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 156u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "{Base}", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::SetDisplayName(a1, &v37);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v38), (char *)&unk_1B15112, (int)(uintptr_t)(&v16[3]));
  grapher::ActorBase::SetCategoryName(a1, v38);
  g4_std::string::Destroy(v38);
  grapher::ActorBase::SetArraySize(a1, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Attack", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Characters", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Out", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v21, 0, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "List of NPCs who will attack", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Attacker", (int)(uintptr_t)(&v12) + 3);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v22, 9, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Attacker", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v5, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "List of targets to attack", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Target", (int)(uintptr_t)(&v13) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v25, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Target", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v26), v7, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "NPC won't attack until at least at this range", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Min Range", (int)(uintptr_t)(&v14) + 1);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v28, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Min Range", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v29), v8, 1, 1, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v33),
    "If False, this actor will never stop trying to attack it's target until it's dead",
    (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Can Lose Target", (int)(uintptr_t)(&v15));
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v31, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Can Lose Target", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v32), v9, 1, 1, (int)(uintptr_t)(&v33), 3);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Can the character use free running.", (int)(uintptr_t)(&v16[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Free running", (int)(uintptr_t)(&v15) + 3);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v34, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Free running", (int)(uintptr_t)(v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v35), v10, 1, 0, (int)(uintptr_t)(&v36), 1);
  g4_std::string::Destroy(&v35);
  g4_std::string::Destroy(&v34);
  return ((g4_std::string::Destroy(&v36)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84EC10_ea84ec10  (binary VA: 0x84ec10)
// Original: sub_84EC10
// ----------------------------------------------------------------------------
int sub_84EC10_ea84ec10(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[20];
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
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
  typedef int _g4_t_v31[4];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v9)) > _g4_s4 ? (12u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v10)) > _g4_s5 ? (12u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v11)) > _g4_s6 ? (33u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v15)) > _g4_s10 ? (64u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v16)) > _g4_s11 ? (80u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v17)) > _g4_s12 ? (84u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v18)) > _g4_s13 ? (88u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v19)) > _g4_s14 ? (92u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v20)) > _g4_s15 ? (96u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v21)) > _g4_s16 ? (100u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v22)) > _g4_s17 ? (104u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v23)) > _g4_s18 ? (108u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v24)) > _g4_s19 ? (112u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v25)) > _g4_s20 ? (116u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v26)) > _g4_s21 ? (120u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v27)) > _g4_s22 ? (124u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v28)) > _g4_s23 ? (128u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v29)) > _g4_s24 ? (132u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v30)) > _g4_s25 ? (136u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v31)) > _g4_s26 ? (140u + sizeof(_g4_t_v31)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 33u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 112u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 116u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 124u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 132u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 136u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 140u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "{Base}", (int)(uintptr_t)(&v14[1]));
  grapher::ActorBase::SetDisplayName(a1, &v29);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::SetCategoryName(a1, &v30);
  g4_std::string::Destroy(&v30);
  grapher::ActorBase::SetArraySize(a1, 1, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "BehaviorChild %BehaviorName", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Behavior", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "In", (int)(uintptr_t)(&v14[3]));
  grapher::ActorBase::AddPin(a1, 0, v31, 1, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Name of behavior", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "BehaviorName", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v19, 4, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "BehaviorName", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v20), v6, 1, 0, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Execution order type ('Prioritized' or 'NonBlocking')", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Type", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Prioritized", (int)(uintptr_t)(&v12) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &v22);
  v15 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v23, 4, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Type", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v8, 1, 0, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Condition that must be verified to resolve this child behavior", (int)(uintptr_t)(v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Predicate", (int)(uintptr_t)(&v13) + 2);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v16 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v26, 4, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Predicate", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v27), v10, 1, 0, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v26);
  return ((g4_std::string::Destroy(&v28)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84F1E0_ea84f1e0  (binary VA: 0x84f1e0)
// Original: sub_84F1E0
// ----------------------------------------------------------------------------
int sub_84F1E0_ea84f1e0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[20];
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
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
  typedef int _g4_t_v31[4];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v9)) > _g4_s4 ? (12u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v10)) > _g4_s5 ? (12u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v11)) > _g4_s6 ? (33u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v15)) > _g4_s10 ? (64u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v16)) > _g4_s11 ? (80u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v17)) > _g4_s12 ? (84u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v18)) > _g4_s13 ? (88u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v19)) > _g4_s14 ? (92u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v20)) > _g4_s15 ? (96u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v21)) > _g4_s16 ? (100u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v22)) > _g4_s17 ? (104u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v23)) > _g4_s18 ? (108u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v24)) > _g4_s19 ? (112u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v25)) > _g4_s20 ? (116u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v26)) > _g4_s21 ? (120u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v27)) > _g4_s22 ? (124u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v28)) > _g4_s23 ? (128u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v29)) > _g4_s24 ? (132u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v30)) > _g4_s25 ? (136u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v31)) > _g4_s26 ? (140u + sizeof(_g4_t_v31)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 33u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 112u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 116u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 124u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 132u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 136u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 140u);

  sub_84EC10(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Behavior %BehaviorName", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Behavior", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Out", (int)(uintptr_t)(v14));
  grapher::ActorBase::AddPin(a1, 1, &v28, 0, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "On Enter", (int)(uintptr_t)(&v14[1]));
  grapher::ActorBase::AddPin(a1, 2, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "On Exit", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddPin(a1, 3, &v30, 0, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "On Update", (int)(uintptr_t)(&v14[3]));
  grapher::ActorBase::AddPin(a1, 4, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Other behavior this behavior derives from", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Extends", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v19, 4, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Extends", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v20), v6, 1, 0, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Condition that must be verified to enter behavior", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "PredicateEnter", (int)(uintptr_t)(&v12) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 4, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "PredicateEnter", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v23), v8, 1, 0, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Condition that must be verified to exit behavior", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "PredicateExit", (int)(uintptr_t)(&v13) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v16 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v25, 4, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "PredicateExit", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v26), v10, 1, 0, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v25);
  return ((g4_std::string::Destroy(&v27)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84F7E0_ea84f7e0  (binary VA: 0x84f7e0)
// Original: sub_84F7E0
// ----------------------------------------------------------------------------
int sub_84F7E0_ea84f7e0(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef uint8_t _g4_t_v4[7];
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (3u + sizeof(_g4_t_v2)) > _g4_s0 ? (3u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v3)) > _g4_s1 ? (4u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v4)) > _g4_s2 ? (8u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v5)) > _g4_s3 ? (16u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v6)) > _g4_s4 ? (20u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v7)) > _g4_s5 ? (24u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v8)) > _g4_s6 ? (28u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v9)) > _g4_s7 ? (32u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v10)) > _g4_s8 ? (36u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v11)) > _g4_s9 ? (40u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v12)) > _g4_s10 ? (44u + sizeof(_g4_t_v12)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 3u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "{Base}", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetDisplayName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), (char *)&unk_1B15112, (int)(uintptr_t)(&v3) + 2);
  grapher::ActorBase::SetCategoryName(a1, &v7);
  g4_std::string::Destroy(&v7);
  grapher::ActorBase::SetArraySize(a1, 5, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[4]), "Cover", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v4[4]);
  g4_std::string::Destroy(&v4[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "AI", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetCategoryName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Enter", (int)(uintptr_t)(&v3) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v8, 1, -1);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Exit", (int)(uintptr_t)(v4));
  grapher::ActorBase::AddPin(a1, 1, &v9, 1, -1);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Take", (int)(uintptr_t)(&v4[1]));
  grapher::ActorBase::AddPin(a1, 2, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Leave", (int)(uintptr_t)(&v4[2]));
  grapher::ActorBase::AddPin(a1, 3, &v11, 1, -1);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "Out", (int)(uintptr_t)(&v4[3]));
  grapher::ActorBase::AddPin(a1, 4, v12, 0, -1);
  return ((g4_std::string::Destroy(v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84FA70_ea84fa70  (binary VA: 0x84fa70)
// Original: sub_84FA70
// ----------------------------------------------------------------------------
int sub_84FA70_ea84fa70(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[20];
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v8)) > _g4_s4 ? (31u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v10)) > _g4_s6 ? (36u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v11)) > _g4_s7 ? (40u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v12)) > _g4_s8 ? (60u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v13)) > _g4_s9 ? (72u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v14)) > _g4_s10 ? (76u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v15)) > _g4_s11 ? (80u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v16)) > _g4_s12 ? (84u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v17)) > _g4_s13 ? (88u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v18)) > _g4_s14 ? (92u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v19)) > _g4_s15 ? (96u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v20)) > _g4_s16 ? (100u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v21)) > _g4_s17 ? (104u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v22)) > _g4_s18 ? (108u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v23)) > _g4_s19 ? (112u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v24)) > _g4_s20 ? (116u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v25)) > _g4_s21 ? (120u + sizeof(_g4_t_v25)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 120u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "{Base}", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(v11));
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Exit Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "AI", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Begin", (int)(uintptr_t)(&v11[1]));
  grapher::ActorBase::AddPin(a1, 0, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "End", (int)(uintptr_t)(&v11[2]));
  grapher::ActorBase::AddPin(a1, 1, &v24, 1, -1);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "Out", (int)(uintptr_t)(&v11[3]));
  grapher::ActorBase::AddPin(a1, 2, v25, 0, -1);
  g4_std::string::Destroy(v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character exiting vehicle.", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v11[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( *(uint32_t *)&v11[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v11[4] + 44))(*(uint32_t *)&v11[4]);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Deprecated.", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Vehicle", (int)(uintptr_t)(&v10));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Vehicle", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84FF40_ea84ff40  (binary VA: 0x84ff40)
// Original: sub_84FF40
// ----------------------------------------------------------------------------
int sub_84FF40_ea84ff40(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int64_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v5)) > _g4_s2 ? (17u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v13)) > _g4_s10 ? (52u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v14)) > _g4_s11 ? (56u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v15)) > _g4_s12 ? (60u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v16)) > _g4_s13 ? (64u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v17)) > _g4_s14 ? (68u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v18)) > _g4_s15 ? (72u + sizeof(_g4_t_v18)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 17u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Equip Weapon", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Characters", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Equip", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Equip (Melee)", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Unequip", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Character to give the weapon", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( HIDWORD(v7) != 0 )
    G4_VCALL<void>(HIDWORD(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8502E0_ea8502e0  (binary VA: 0x8502e0)
// Original: sub_8502E0
// ----------------------------------------------------------------------------
int sub_8502E0_ea8502e0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[20];
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v8)) > _g4_s4 ? (31u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v10)) > _g4_s6 ? (36u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v11)) > _g4_s7 ? (40u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v12)) > _g4_s8 ? (60u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v13)) > _g4_s9 ? (72u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v14)) > _g4_s10 ? (76u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v15)) > _g4_s11 ? (80u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v16)) > _g4_s12 ? (84u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v17)) > _g4_s13 ? (88u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v18)) > _g4_s14 ? (92u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v19)) > _g4_s15 ? (96u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v20)) > _g4_s16 ? (100u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v21)) > _g4_s17 ? (104u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v22)) > _g4_s18 ? (108u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v23)) > _g4_s19 ? (112u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v24)) > _g4_s20 ? (116u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v25)) > _g4_s21 ? (120u + sizeof(_g4_t_v25)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 120u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "{Base}", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(v11));
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enter Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "AI", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Begin", (int)(uintptr_t)(&v11[1]));
  grapher::ActorBase::AddPin(a1, 0, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "End", (int)(uintptr_t)(&v11[2]));
  grapher::ActorBase::AddPin(a1, 1, &v24, 1, -1);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "Out", (int)(uintptr_t)(&v11[3]));
  grapher::ActorBase::AddPin(a1, 2, v25, 0, -1);
  g4_std::string::Destroy(v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character being ejected.", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v11[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( *(uint32_t *)&v11[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v11[4] + 44))(*(uint32_t *)&v11[4]);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The vehicle to eject from. Deprecated.", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Vehicle", (int)(uintptr_t)(&v10));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Vehicle", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8507B0_ea8507b0  (binary VA: 0x8507b0)
// Original: sub_8507B0
// ----------------------------------------------------------------------------
int sub_8507B0_ea8507b0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[20];
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v8)) > _g4_s4 ? (31u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v10)) > _g4_s6 ? (36u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v11)) > _g4_s7 ? (40u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v12)) > _g4_s8 ? (60u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v13)) > _g4_s9 ? (72u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v14)) > _g4_s10 ? (76u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v15)) > _g4_s11 ? (80u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v16)) > _g4_s12 ? (84u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v17)) > _g4_s13 ? (88u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v18)) > _g4_s14 ? (92u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v19)) > _g4_s15 ? (96u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v20)) > _g4_s16 ? (100u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v21)) > _g4_s17 ? (104u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v22)) > _g4_s18 ? (108u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v23)) > _g4_s19 ? (112u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v24)) > _g4_s20 ? (116u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v25)) > _g4_s21 ? (120u + sizeof(_g4_t_v25)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 120u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "{Base}", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(v11));
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Eject Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "AI", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Begin", (int)(uintptr_t)(&v11[1]));
  grapher::ActorBase::AddPin(a1, 0, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "End", (int)(uintptr_t)(&v11[2]));
  grapher::ActorBase::AddPin(a1, 1, &v24, 1, -1);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "Out", (int)(uintptr_t)(&v11[3]));
  grapher::ActorBase::AddPin(a1, 2, v25, 0, -1);
  g4_std::string::Destroy(v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character being ejected.", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v11[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( *(uint32_t *)&v11[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v11[4] + 44))(*(uint32_t *)&v11[4]);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Deprecated.", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Vehicle", (int)(uintptr_t)(&v10));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Vehicle", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_850C80_ea850c80  (binary VA: 0x850c80)
// Original: sub_850C80
// ----------------------------------------------------------------------------
int sub_850C80_ea850c80(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef g4_int128_t _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_v5)) > _g4_s2 ? (23u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v6)) > _g4_s3 ? (24u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v7)) > _g4_s4 ? (28u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v9)) > _g4_s6 ? (48u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v10)) > _g4_s7 ? (52u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v11)) > _g4_s8 ? (56u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v12)) > _g4_s9 ? (60u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v13)) > _g4_s10 ? (64u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v14)) > _g4_s11 ? (68u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v15)) > _g4_s12 ? (72u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v16)) > _g4_s13 ? (76u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v17)) > _g4_s14 ? (80u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v18)) > _g4_s15 ? (84u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v19)) > _g4_s16 ? (88u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v20)) > _g4_s17 ? (92u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v21)) > _g4_s18 ? (96u + sizeof(_g4_t_v21)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 23u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 68u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "{Base}", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  grapher::ActorBase::SetArraySize(a1, 6, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Driving Maneuver", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "AI", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Overtake", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Pit", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 1, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Bump", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 2, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Cutoff", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 3, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Cop Stop", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 4, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 5, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "The driving character.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Subject", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Subject", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  return ((g4_std::string::Destroy(&v13)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8510B0_ea8510b0  (binary VA: 0x8510b0)
// Original: sub_8510B0
// ----------------------------------------------------------------------------
int sub_8510B0_ea8510b0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int64_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v5)) > _g4_s2 ? (17u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v13)) > _g4_s10 ? (52u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v14)) > _g4_s11 ? (56u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v15)) > _g4_s12 ? (60u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v16)) > _g4_s13 ? (64u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v17)) > _g4_s14 ? (68u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v18)) > _g4_s15 ? (72u + sizeof(_g4_t_v18)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 17u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Drive", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Start", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Drive", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Stop", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The driving character.", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Subject", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Subject", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( HIDWORD(v7) != 0 )
    G4_VCALL<void>(HIDWORD(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_851450_ea851450  (binary VA: 0x851450)
// Original: sub_851450
// ----------------------------------------------------------------------------
int sub_851450_ea851450(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef g4_int128_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v5)) > _g4_s2 ? (27u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v8)) > _g4_s5 ? (48u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v9)) > _g4_s6 ? (52u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v10)) > _g4_s7 ? (56u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v11)) > _g4_s8 ? (60u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v12)) > _g4_s9 ? (64u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v13)) > _g4_s10 ? (68u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v14)) > _g4_s11 ? (72u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v15)) > _g4_s12 ? (76u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v16)) > _g4_s13 ? (80u + sizeof(_g4_t_v16)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Correct Crash", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 1, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The driving character.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Subject", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Subject", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_851760_ea851760  (binary VA: 0x851760)
// Original: sub_851760
// ----------------------------------------------------------------------------
int sub_851760_ea851760(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef long double _g4_t_v7 __attribute__((aligned(1)));
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v5)) > _g4_s2 ? (14u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v7)) > _g4_s4 ? (20u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v13)) > _g4_s10 ? (52u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v14)) > _g4_s11 ? (56u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v15)) > _g4_s12 ? (60u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v16)) > _g4_s13 ? (64u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v17)) > _g4_s14 ? (68u + sizeof(_g4_t_v17)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 14u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Climb", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Start", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Stop", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 2, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The climbing character.", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Subject", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Subject", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_851AB0_ea851ab0  (binary VA: 0x851ab0)
// Original: sub_851AB0
// ----------------------------------------------------------------------------
int sub_851AB0_ea851ab0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef long double _g4_t_v7 __attribute__((aligned(1)));
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v5)) > _g4_s2 ? (14u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v7)) > _g4_s4 ? (20u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v13)) > _g4_s10 ? (52u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v14)) > _g4_s11 ? (56u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v15)) > _g4_s12 ? (60u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v16)) > _g4_s13 ? (64u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v17)) > _g4_s14 ? (68u + sizeof(_g4_t_v17)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 14u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Check Collision", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Out", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v16, 0, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Collision", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 1, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The moving character.", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_851E00_ea851e00  (binary VA: 0x851e00)
// Original: sub_851E00
// ----------------------------------------------------------------------------
int sub_851E00_ea851e00(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef g4_int128_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v5)) > _g4_s2 ? (27u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v8)) > _g4_s5 ? (48u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v9)) > _g4_s6 ? (52u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v10)) > _g4_s7 ? (56u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v11)) > _g4_s8 ? (60u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v12)) > _g4_s9 ? (64u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v13)) > _g4_s10 ? (68u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v14)) > _g4_s11 ? (72u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v15)) > _g4_s12 ? (76u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v16)) > _g4_s13 ? (80u + sizeof(_g4_t_v16)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Burst", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 1, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The character aiming at his target.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_852110_ea852110  (binary VA: 0x852110)
// Original: sub_852110
// ----------------------------------------------------------------------------
int sub_852110_ea852110(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[20];
  typedef uint32_t *_g4_t_v15;
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
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v7)) > _g4_s3 ? (16u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v8)) > _g4_s4 ? (16u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v9)) > _g4_s5 ? (16u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (46u + sizeof(_g4_t_v10)) > _g4_s6 ? (46u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v11)) > _g4_s7 ? (48u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v12)) > _g4_s8 ? (52u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v13)) > _g4_s9 ? (56u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v14)) > _g4_s10 ? (60u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v15)) > _g4_s11 ? (80u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v16)) > _g4_s12 ? (88u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v17)) > _g4_s13 ? (92u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v18)) > _g4_s14 ? (96u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v19)) > _g4_s15 ? (100u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v20)) > _g4_s16 ? (104u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v21)) > _g4_s17 ? (108u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v22)) > _g4_s18 ? (112u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v23)) > _g4_s19 ? (116u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v24)) > _g4_s20 ? (120u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v25)) > _g4_s21 ? (124u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v26)) > _g4_s22 ? (128u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v27)) > _g4_s23 ? (132u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v28)) > _g4_s24 ? (136u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v29)) > _g4_s25 ? (140u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v30)) > _g4_s26 ? (144u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v31)) > _g4_s27 ? (148u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v32)) > _g4_s28 ? (152u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v33)) > _g4_s29 ? (156u + sizeof(_g4_t_v33)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 46u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 100u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 132u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 136u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 140u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 144u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 148u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 152u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 156u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "{Base}", (int)(uintptr_t)(v14));
  grapher::ActorBase::SetDisplayName(a1, &v30);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), (char *)&unk_1B15112, (int)(uintptr_t)(&v14[1]));
  grapher::ActorBase::SetCategoryName(a1, &v31);
  g4_std::string::Destroy(&v31);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Assign Object", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "AI", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "In", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddPin(a1, 0, &v32, 1, -1);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v33), "Out", (int)(uintptr_t)(&v14[3]));
  grapher::ActorBase::AddPin(a1, 1, v33, 0, -1);
  g4_std::string::Destroy(v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The character to assign object to.", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Target", (int)(uintptr_t)(&v11));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The target variable to be assigned to.", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Variable", (int)(uintptr_t)(&v11) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Variable", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v4, 1, 1, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v26),
    "The object (as a eSubject constant) to assign (has precedence over Object Name property).",
    (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Object", (int)(uintptr_t)(&v12) + 2);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Object", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "The object name (as a GameObject) to assign.", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Object Name", (int)(uintptr_t)(&v13) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v27, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Object Name", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v28), v9, 1, 0, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v27);
  return ((g4_std::string::Destroy(&v29)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8527A0_ea8527a0  (binary VA: 0x8527a0)
// Original: sub_8527A0
// ----------------------------------------------------------------------------
int sub_8527A0_ea8527a0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef g4_int128_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v5)) > _g4_s2 ? (27u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v8)) > _g4_s5 ? (48u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v9)) > _g4_s6 ? (52u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v10)) > _g4_s7 ? (56u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v11)) > _g4_s8 ? (60u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v12)) > _g4_s9 ? (64u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v13)) > _g4_s10 ? (68u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v14)) > _g4_s11 ? (72u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v15)) > _g4_s12 ? (76u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v16)) > _g4_s13 ? (80u + sizeof(_g4_t_v16)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Aim", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 1, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The character aiming at his target.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_852AB0_ea852ab0  (binary VA: 0x852ab0)
// Original: sub_852AB0
// ----------------------------------------------------------------------------
int sub_852AB0_ea852ab0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v4)) > _g4_s1 ? (24u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v6)) > _g4_s3 ? (32u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v7)) > _g4_s4 ? (36u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v8)) > _g4_s5 ? (40u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v9)) > _g4_s6 ? (44u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v10)) > _g4_s7 ? (60u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v11)) > _g4_s8 ? (64u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v12)) > _g4_s9 ? (68u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v13)) > _g4_s10 ? (72u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v14)) > _g4_s11 ? (76u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v15)) > _g4_s12 ? (80u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v16)) > _g4_s13 ? (84u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v17)) > _g4_s14 ? (88u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v18)) > _g4_s15 ? (92u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v19)) > _g4_s16 ? (96u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v20)) > _g4_s17 ? (100u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v21)) > _g4_s18 ? (104u + sizeof(_g4_t_v21)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 60u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "{Base}", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Sound Action", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "AI", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Play", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Sound Action", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Action", (int)(uintptr_t)(&v6) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Action", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v3, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character on which to trigger the sound action if not the current subject", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v5, 1, 0, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v15);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_852EB0_ea852eb0  (binary VA: 0x852eb0)
// Original: sub_852EB0
// ----------------------------------------------------------------------------
int sub_852EB0_ea852eb0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef g4_int128_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v5)) > _g4_s2 ? (0u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (7u + sizeof(_g4_t_v6)) > _g4_s3 ? (7u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v7)) > _g4_s4 ? (8u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v8)) > _g4_s5 ? (12u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v9)) > _g4_s6 ? (16u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v10)) > _g4_s7 ? (32u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v11)) > _g4_s8 ? (36u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v12)) > _g4_s9 ? (40u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v13)) > _g4_s10 ? (44u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v14)) > _g4_s11 ? (48u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v15)) > _g4_s12 ? (52u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v16)) > _g4_s13 ? (56u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v17)) > _g4_s14 ? (60u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v18)) > _g4_s15 ? (64u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v19)) > _g4_s16 ? (68u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v20)) > _g4_s17 ? (72u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v21)) > _g4_s18 ? (76u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v22)) > _g4_s19 ? (80u + sizeof(_g4_t_v22)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 7u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "{Base}", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Switch Jetpack Mode", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Characters", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Switch completed", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v21, 0, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 2, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "The jetpack's driver.", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Subject", (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v9) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v12, 9, (char *)&v9 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Subject", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v4, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( DWORD1(v9) != 0 )
    G4_VCALL<void>(DWORD1(v9), 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "True to start driving the vehicle, False to start walking with the vehicle.", (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Start Driving", (int)(uintptr_t)(&v8));
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Flying", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_853300_ea853300  (binary VA: 0x853300)
// Original: sub_853300
// ----------------------------------------------------------------------------
int sub_853300_ea853300(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[20];
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v8)) > _g4_s4 ? (31u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v10)) > _g4_s6 ? (36u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v11)) > _g4_s7 ? (40u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v12)) > _g4_s8 ? (60u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v13)) > _g4_s9 ? (72u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v14)) > _g4_s10 ? (76u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v15)) > _g4_s11 ? (80u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v16)) > _g4_s12 ? (84u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v17)) > _g4_s13 ? (88u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v18)) > _g4_s14 ? (92u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v19)) > _g4_s15 ? (96u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v20)) > _g4_s16 ? (100u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v21)) > _g4_s17 ? (104u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v22)) > _g4_s18 ? (108u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v23)) > _g4_s19 ? (112u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v24)) > _g4_s20 ? (116u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v25)) > _g4_s21 ? (120u + sizeof(_g4_t_v25)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 120u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "{Base}", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(v11));
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Pickup Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "AI", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Begin", (int)(uintptr_t)(&v11[1]));
  grapher::ActorBase::AddPin(a1, 0, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "End", (int)(uintptr_t)(&v11[2]));
  grapher::ActorBase::AddPin(a1, 1, &v24, 1, -1);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "Out", (int)(uintptr_t)(&v11[3]));
  grapher::ActorBase::AddPin(a1, 2, v25, 0, -1);
  g4_std::string::Destroy(v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character who is trying to enter the vehicle.", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v11[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( *(uint32_t *)&v11[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v11[4] + 44))(*(uint32_t *)&v11[4]);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The vehicle that needs to be picked up (only bikes so far). Deprecated.", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Vehicle", (int)(uintptr_t)(&v10));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Vehicle", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8537D0_ea8537d0  (binary VA: 0x8537d0)
// Original: sub_8537D0
// ----------------------------------------------------------------------------
int sub_8537D0_ea8537d0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef long double _g4_t_v7 __attribute__((aligned(1)));
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v5)) > _g4_s2 ? (14u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v7)) > _g4_s4 ? (20u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v13)) > _g4_s10 ? (52u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v14)) > _g4_s11 ? (56u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v15)) > _g4_s12 ? (60u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v16)) > _g4_s13 ? (64u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v17)) > _g4_s14 ? (68u + sizeof(_g4_t_v17)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 14u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Parachute", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Characters", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Open", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Close", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 2, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object which open parachute", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_853B20_ea853b20  (binary VA: 0x853b20)
// Original: sub_853B20
// ----------------------------------------------------------------------------
int sub_853B20_ea853b20(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v8)) > _g4_s4 ? (32u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v10)) > _g4_s6 ? (40u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v11)) > _g4_s7 ? (44u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v12)) > _g4_s8 ? (60u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v13)) > _g4_s9 ? (76u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v14)) > _g4_s10 ? (80u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v15)) > _g4_s11 ? (84u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v16)) > _g4_s12 ? (88u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v17)) > _g4_s13 ? (92u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v18)) > _g4_s14 ? (96u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v19)) > _g4_s15 ? (100u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v20)) > _g4_s16 ? (104u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v21)) > _g4_s17 ? (108u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v22)) > _g4_s18 ? (112u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v23)) > _g4_s19 ? (116u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v24)) > _g4_s20 ? (120u + sizeof(_g4_t_v24)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 84u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 100u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "{Base}", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Shot character as cannonball", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Character to launch", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Character", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Character", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Cannon", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Cannon", (int)(uintptr_t)(&v9) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Cannon", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_853FA0  (binary VA: 0x853fa0)
// Original: sub_853FA0
// ----------------------------------------------------------------------------
bool sub_853FA0(int a1, int a2)
{
  const char *s2;
  char *s1;
  int v4;
  int v5;
  uint32_t **v6;
  unsigned int v7;
  uint32_t *i;
  const char *v10;
  char *v11;
  int *v12;
  const char *v13;
  int *v14;
  const char *v15;
  size_t n;

  if ( *(uint8_t *)(a1 + 12) != 0 )
    goto LABEL_4;
  if ( *(uint8_t *)(a1 + 13) != 0 )
  {
    n = *(uint32_t *)(a1 + 16);
    s2 = (const char *)G4_VCALL<int>(a2, 44);
    s1 = **(char ***)(a1 + 4);
    if ( strncmp(s1, s2, n) != 0 )
    {
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v14 = nullptr;
      if ( byte_20D4A64 == 0 )
        v14 = (int *)(&dword_20D4A60);
      v15 = sub_5B4B30((int)(uintptr_t)(v14), a2, s1);
      if ( v15 == nullptr || strncmp(**(const char ***)(a1 + 4), v15, *(uint32_t *)(a1 + 16)) != 0 )
        goto LABEL_7;
    }
LABEL_4:
    v4 = *(uint32_t *)(a1 + 8);
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = a2;
    sub_1901920(v5, v4);
    goto LABEL_7;
  }
  v10 = (const char *)G4_VCALL<int>(a2, 44);
  v11 = **(char ***)(a1 + 4);
  if ( strcmp(v11, v10) == 0 )
    goto LABEL_4;
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v12 = nullptr;
  if ( byte_20D4A64 == 0 )
    v12 = (int *)(&dword_20D4A60);
  v13 = sub_5B4B30((int)(uintptr_t)(v12), a2, v11);
  if ( v13 != nullptr && strcmp(**(const char ***)(a1 + 4), v13) == 0 )
    goto LABEL_4;
LABEL_7:
  v6 = *(uint32_t ***)(a1 + 8);
  v7 = 0;
  for ( i = *v6; v6 != (uint32_t **)(uintptr_t)(i); ++v7 )
    i = (uint32_t *)*i;
  return *(uint32_t *)(a1 + 20) > v7;
}

// ----------------------------------------------------------------------------
// Function: sub_8541D0  (binary VA: 0x8541d0)
// Original: sub_8541D0
// ----------------------------------------------------------------------------
int * sub_8541D0(int *result, uint32_t *a2, int a3, int *a4)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v20)) > _g4_s5 ? (12u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v21)) > _g4_s6 ? (12u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v22)) > _g4_s7 ? (16u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v23)) > _g4_s8 ? (20u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v24)) > _g4_s9 ? (20u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v25)) > _g4_s10 ? (20u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v26)) > _g4_s11 ? (20u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v27)) > _g4_s12 ? (24u + sizeof(_g4_t_v27)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);

  v22 = result;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_19;
    v10 = a2[4];
    v26 = v10;
    if ( *(uint32_t *)(v10 + 16) >= (unsigned int)*a4 )
      goto LABEL_19;
    v15 = v10 == a3;
    v11 = opNew(0x18u);
    if ( v11 != -16 )
    {
      v12 = *a4;
      *(uint32_t *)(v11 + 20) = a4[1];
      *(uint32_t *)(v11 + 16) = v12;
    }
    v21 = v11;
    sub_1904970(v15, v11, v26, a3);
    ++a2[5];
    *v22 = v21;
    return v22;
  }
  else
  {
    if ( (unsigned int)*a4 < *(uint32_t *)(a3 + 16) )
    {
      if ( a3 == a2[3] )
      {
        sub_84CD80(result, (int)(uintptr_t)(a2), a3, a3, a4);
        return v22;
      }
      v19 = *a4;
      v17 = a2 + 1;
      v5 = (uint32_t *)sub_1904940(a3);
      v23 = v5;
      if ( v19 > v5[4] )
      {
        if ( v5[3] != 0 )
        {
          v6 = opNew(0x18u);
          v24 = v6;
          if ( v6 != -16 )
          {
            v7 = a4[1];
            *(uint32_t *)(v6 + 16) = *a4;
            *(uint32_t *)(v6 + 20) = v7;
          }
          sub_1904970(1, v6, a3, v17);
          ++a2[5];
          *v22 = v24;
          return v22;
        }
        else
        {
          v16 = v17 == v5;
          v13 = opNew(0x18u);
          if ( v13 != -16 )
          {
            v14 = *a4;
            *(uint32_t *)(v13 + 20) = a4[1];
            *(uint32_t *)(v13 + 16) = v14;
          }
          sub_1904970(v16, v13, v23, v17);
          ++a2[5];
          *v22 = v13;
          return v22;
        }
      }
LABEL_19:
      sub_84DA40((int)(uintptr_t)(v27), a2, a4);
      *v22 = v27[0];
      return v22;
    }
    if ( (unsigned int)*a4 <= *(uint32_t *)(a3 + 16) )
    {
      *result = a3;
      return result;
    }
    if ( a3 == a2[4] )
      goto LABEL_27;
    v20 = *a4;
    v18 = a2 + 1;
    v25 = sub_19048E0(a3);
    if ( v20 >= *(uint32_t *)(v25 + 16) )
      goto LABEL_19;
    if ( *(uint32_t *)(a3 + 12) == 0 )
    {
LABEL_27:
      sub_84CD80(v22, (int)(uintptr_t)(a2), 0, a3, a4);
      return v22;
    }
    v8 = opNew(0x18u);
    if ( v8 != -16 )
    {
      v9 = *a4;
      *(uint32_t *)(v8 + 20) = a4[1];
      *(uint32_t *)(v8 + 16) = v9;
    }
    sub_1904970(1, v8, v25, v18);
    ++a2[5];
    *v22 = v8;
    return v22;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_8544C0  (binary VA: 0x8544c0)
// Original: sub_8544C0
// ----------------------------------------------------------------------------
int sub_8544C0(int a1)
{
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CD20);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: nullsub_298  (binary VA: 0x8544e8)
// Original: nullsub_298
// ----------------------------------------------------------------------------
void nullsub_298()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_299  (binary VA: 0x8544f8)
// Original: nullsub_299
// ----------------------------------------------------------------------------
void nullsub_299()
{
  ;
}



// ============================================================================
// Address:   0x854500 (size: 453 bytes)
// Symbol:    sub_854500
// Demangled: sub_854500
// ============================================================================
int (**sub_854500(int *a1, int *a2))(int)
{
  int v2;
  glitch::video::CMaterial::Self *v3;
  bool v4;
  int v5;
  volatile int32_t *v6;
  int v7;
  glitch::video::CVertexStreams::Self *v8;
  glitch::video::CMaterial::Self *v9;
  int v10;

  v2 = *a2;
  *a1 = *a2;
  a1[1] = a2[16];
  *(int *)((char *)a1 + *(uint32_t *)(v2 - 12)) = a2[17];
  *(int *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = a2[18];
  v3 = (glitch::video::CMaterial::Self *)a1[121];
  if ( v3 != nullptr )
  {
    v4 = *(uint32_t *)v3 == 2;
    _mm_mfence();
    if ( v4 )
      glitch::video::CMaterial::removeFromRootSceneNode(v3);
    if ( __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v3);
      gll_operator_delete_arr((int)(uintptr_t)(v3));
    }
  }
  v5 = a2[1];
  *a1 = v5;
  a1[1] = a2[13];
  *(int *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[14];
  *(int *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = a2[15];
  v6 = (volatile int32_t *)a1[115];
  if ( v6 != nullptr && __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v6, 8);
    G4_VCALL<void>(v6, 4);
  }
  v7 = a2[2];
  *a1 = v7;
  a1[1] = a2[10];
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[11];
  *(int *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = a2[12];
  v8 = (glitch::video::CVertexStreams::Self *)a1[112];
  if ( v8 != nullptr && __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v8);
    gll_operator_delete_arr((int)(uintptr_t)(v8));
  }
  v9 = (glitch::video::CMaterial::Self *)a1[74];
  if ( v9 != nullptr )
  {
    v4 = *(uint32_t *)v9 == 2;
    _mm_mfence();
    if ( v4 )
      glitch::video::CMaterial::removeFromRootSceneNode(v9);
    if ( __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v9);
      gll_operator_delete_arr((int)(uintptr_t)(v9));
    }
  }
  v10 = a2[3];
  *a1 = v10;
  a1[1] = a2[7];
  *(int *)((char *)a1 + *(uint32_t *)(v10 - 12)) = a2[8];
  *(int *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = a2[9];
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)(a1 + 1));
  *a1 = (int)(uintptr_t)(&off_205DD08);
  return (int (**)(int))(uintptr_t)(&off_205DD08);
}
// ----------------------------------------------------------------------------
// Function: sub_8546D0  (binary VA: 0x8546d0)
// Original: sub_8546D0
// ----------------------------------------------------------------------------
int sub_8546D0(glitch::video::ITexture::Self *a1, int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  bool v9; // bp
  bool v10;
  bool v11;
  uint32_t *v12;
  uint32_t *v13;
  bool v14;
  unsigned int v15;
  bool v16;
  bool v17;
  int v18;

  result = a2;
  if ( a1 != nullptr )
  {
    switch ( a2 )
    {
      case 0:
        v3 = (uint32_t *)(dword_20D90F0 + 540 * dword_20BAD70);
        v4 = v3[125];
        v18 = v3[126];
        v5 = v3[123];
        v6 = v3[124];
        break;
      case 1:
        v13 = (uint32_t *)(dword_20D90F0 + 540 * dword_20BAD70);
        v4 = v13[129];
        v18 = v13[130];
        v5 = v13[127];
        v6 = v13[128];
        break;
      case 2:
        v12 = (uint32_t *)(dword_20D90F0 + 540 * dword_20BAD70);
        v4 = v12[133];
        v18 = v12[134];
        v5 = v12[131];
        v6 = v12[132];
        break;
      default:
        return result;
    }
    v7 = 0;
    v15 = *(uint32_t *)(*((uint32_t *)a1 + 4) + 36);
    v8 = (v15 >> 14) & 7;
    if ( v6 != 1 )
    {
      LOWORD(v7) = 1;
      if ( v6 != 2 )
        v7 = (v15 >> 17) & 7;
    }
    if ( v5 == 1 )
    {
      if ( v8 == 3 )
      {
        v16 = true;
        v8 = 2;
        goto LABEL_25;
      }
      if ( v8 == 5 )
      {
        v14 = true;
        v8 = 4;
        goto LABEL_14;
      }
    }
    v16 = v8 == 2;
LABEL_25:
    if ( v16 && v5 == 2 )
    {
      v8 = 3;
      v11 = v4 == 2;
      goto LABEL_28;
    }
    v14 = v8 == 4;
    if ( v8 == 4 && v5 == 2 )
    {
      v17 = true;
      v9 = v4 == 1;
      v8 = 5;
      goto LABEL_36;
    }
LABEL_14:
    v9 = v4 == 1;
    if ( v14 && v4 == 1 )
    {
      v8 = 2;
      goto LABEL_17;
    }
    v17 = v8 == 5;
LABEL_36:
    if ( v9 && v17 )
    {
      v8 = 3;
      if ( v4 == 2 )
        v8 = 5;
      goto LABEL_20;
    }
LABEL_17:
    v10 = v4 == 2;
    v11 = v10;
    if ( v8 == 2 && v10 )
    {
      v8 = 4;
LABEL_20:
      glitch::video::ITexture::setMinFilter(a1, v8);
      result = glitch::video::ITexture::setMagFilter(a1, v7);
      if ( v18 == 1 )
        return (int)(uintptr_t)(glitch::video::ITexture::setAnisotropy(a1, 1.0));
      return result;
    }
LABEL_28:
    if ( v8 == 3 && v11 )
      v8 = 5;
    goto LABEL_20;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_854940  (binary VA: 0x854940)
// Original: sub_854940
// ----------------------------------------------------------------------------
int sub_854940(int *a1)
{
  int v1;
  unsigned int v2;
  char *s1;
  int v5;
  unsigned int v6;
  unsigned int v7;
  char *v8;
  unsigned int v9;
  int i;
  unsigned int v11;
  char *v12;
  unsigned int v13;

  v1 = *a1;
  v2 = *(uint32_t *)(*a1 - 12);
  if ( v2 <= 7 )
  {
    if ( v2 <= 6 )
      return 0;
    v8 = (char *)(v1 + 1);
    goto LABEL_12;
  }
  v12 = (char *)(v1 + 1);
  s1 = (char *)(v1 + 1);
  v13 = *(uint32_t *)(*a1 - 12);
  v5 = 1;
  v6 = v2 - 8;
  while ( 1 )
  {
    v7 = v5;
    if ( *(s1 - 1) == 108 )
      break;
LABEL_5:
    ++v5;
    ++s1;
    if ( v7 > v6 )
    {
      v2 = v13;
      v8 = v12;
LABEL_12:
      v9 = v2 - 7;
      for ( i = 1; ; ++i )
      {
        v11 = i;
        if ( *(v8 - 1) == 95 )
        {
          if ( memcmp(v8, "atlas_", 6u) == 0 )
            return 2;
          v11 = i;
        }
        ++v8;
        if ( v11 > v9 )
          return 0;
      }
    }
  }
  if ( memcmp(s1, "ightmap", 7u) != 0 )
  {
    v7 = v5;
    goto LABEL_5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_854A70  (binary VA: 0x854a70)
// Original: sub_854A70
// ----------------------------------------------------------------------------
int sub_854A70()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_854A80  (binary VA: 0x854a80)
// Original: sub_854A80
// ----------------------------------------------------------------------------
const char * sub_854A80()
{
  return "grapherbin/leveldesign/";
}

// ----------------------------------------------------------------------------
// Function: sub_854AA0  (binary VA: 0x854aa0)
// Original: sub_854AA0
// ----------------------------------------------------------------------------
const char * sub_854AA0()
{
  return "grapherbin/leveldesign/init/glml/";
}

// ----------------------------------------------------------------------------
// Function: sub_854AC0  (binary VA: 0x854ac0)
// Original: sub_854AC0
// ----------------------------------------------------------------------------
const char * sub_854AC0()
{
  return "grapherbin/AI/grapher/";
}



// [Deduplicated: canonical definition in Actors module] (ActorBehavior::ActorBehavior(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorBehaviorChild::ActorBehaviorChild(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCameraPreset::ActorGameCameraPreset(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterLaunchCharacter::ActorGameCharacterLaunchCharacter(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterParachute::ActorGameCharacterParachute(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterPickUpVehicle::ActorGameCharacterPickUpVehicle(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSwitchJetpackMode::ActorGameCharacterSwitchJetpackMode(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorSoundAction::ActorSoundAction(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterAim::ActorGameCharacterAim(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterAssignObject::ActorGameCharacterAssignObject(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterAttack::ActorGameCharacterAttack(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterBurst::ActorGameCharacterBurst(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterCheckCollision::ActorGameCharacterCheckCollision(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterClimb::ActorGameCharacterClimb(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterCorrectCrash::ActorGameCharacterCorrectCrash(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterCover::ActorGameCharacterCover(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterDrive::ActorGameCharacterDrive(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterDrivingManeuver::ActorGameCharacterDrivingManeuver(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterEjectVehicle::ActorGameCharacterEjectVehicle(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterEnterVehicle::ActorGameCharacterEnterVehicle(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterEquipWeapon::ActorGameCharacterEquipWeapon(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterExitVehicle::ActorGameCharacterExitVehicle(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_8550D0  (binary VA: 0x8550d0)
// Original: sub_8550D0
// ----------------------------------------------------------------------------
void sub_8550D0(uint32_t *a1, int a2, int a3, int a4, int a5, char *a6, int a7, int a8)
{
  uint32_t *v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  volatile int32_t *v13;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v14;
  volatile int32_t *v15;
  glitch::video::CMaterial::Self *v16;
  bool v17;
  glitch::video::CMaterial::Self *v18;
  int16_t ParameterID;
  uint32_t *v20;
  glitch::scene::ISceneNode::Self *v21;
  glitch::video::CMaterialRenderer::Self *v22;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t **_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef volatile int32_t *_g4_t_v36;
  typedef glitch::video::CMaterial::Self *_g4_t_v37;
  typedef glitch::video::CMaterial::Self *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef volatile int32_t *_g4_t_v44[3];
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v48;
  typedef uint32_t _g4_t_v49[7];
  typedef uint32_t *_g4_t_v50;
  typedef int _g4_t_v51;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v27)) > _g4_s4 ? (28u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v28)) > _g4_s5 ? (32u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v30)) > _g4_s7 ? (40u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v31)) > _g4_s8 ? (44u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v32)) > _g4_s9 ? (48u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v33)) > _g4_s10 ? (48u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v34)) > _g4_s11 ? (48u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v35)) > _g4_s12 ? (48u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v36)) > _g4_s13 ? (48u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v37)) > _g4_s14 ? (48u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v38)) > _g4_s15 ? (48u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v39)) > _g4_s16 ? (52u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v40)) > _g4_s17 ? (52u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v41)) > _g4_s18 ? (56u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v42)) > _g4_s19 ? (60u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v43)) > _g4_s20 ? (64u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v44)) > _g4_s21 ? (68u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v45)) > _g4_s22 ? (80u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v46)) > _g4_s23 ? (84u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v47)) > _g4_s24 ? (88u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v48)) > _g4_s25 ? (92u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v49)) > _g4_s26 ? (96u + sizeof(_g4_t_v49)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v50)) > _g4_s27 ? (124u + sizeof(_g4_t_v50)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v51)) > _g4_s28 ? (136u + sizeof(_g4_t_v51)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 96u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 136u);

  v50 = (uint32_t *)(&a1);
  v8 = a1;
  v43 = a3;
  v42 = a4;
  v41 = a5;
  v9 = a6;
  a1[122] = ((uint32_t)(uintptr_t)&off_205CD4C);
  v8[123] = (uint32_t)(uintptr_t)(&off_205CD6C);
  v39 = v9;
  v10 = a7;
  v11 = a2;
  v8[124] = 0;
  sub_872620(v8, ((uint32_t)(uintptr_t)&off_205D464), v11, v43, v42, v41, v10, a8);
  *v8 = (uint32_t)(uintptr_t)(&off_205D4D0);
  v8[1] = ((uint32_t)(uintptr_t)&off_205D52C);
  v8[122] = ((uint32_t)(uintptr_t)&off_205D660);
  v8[123] = (uint32_t)(uintptr_t)(&off_205D680);
  v8[121] = 0;
  glitch::collada::CColladaDatabase::Construct(
    (glitch::collada::CColladaDatabase::Self *)v49,
    "LensEffects.bdae",
    nullptr);
  v47 = nullptr;
  v24 = sub_B97E20(v12);
  v25 = &v47;
  glitch::collada::CColladaDatabase::constructEffect(&v45);
  if ( v47 != nullptr )
  {
    v13 = (volatile int32_t *)((uint32_t *)((char *)v47 + *(uint32_t *)(*v47 - 16)));
    if ( __sync_fetch_and_add(v13 + 1, 0xFFFFFFFF) == 1 )
    {
      v36 = v13;
      G4_VCALL<void>(v13, 8, v49, v24, "LensEffects-fx", &v47);
      G4_VCALL<void>(v36, 4);
    }
  }
  v32 = v45;
  v48 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                 (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"SunGlow",
                                                                 nullptr,
                                                                 v24);
  LOBYTE(v43) = glitch::video::CMaterialRenderer::getTechniqueID(v32, (const glitch::core::SSharedString::Self *)&v48);
  v14 = v48;
  if ( v48 != nullptr && __sync_fetch_and_add((volatile int32_t *)v48, 0xFFFFFFFF) == 1 )
    glitch::core::detail::SSharedStringHeapEntry::SData::release(v14, v23);
  glitch::video::CMaterial::allocate(v44);
  v15 = v44[0];
  if ( v44[0] != nullptr )
    __sync_add_and_fetch(v44[0], 1u);
  v16 = (glitch::video::CMaterial::Self *)v8[121];
  v8[121] = (uint32_t)(uintptr_t)(v15);
  if ( v16 != nullptr )
  {
    v17 = *(uint32_t *)v16 == 2;
    _mm_mfence();
    if ( v17 )
    {
      v38 = v16;
      glitch::video::CMaterial::removeFromRootSceneNode(v16);
      v16 = v38;
    }
    if ( __sync_fetch_and_add((volatile int32_t *)v16, 0xFFFFFFFF) == 1 )
    {
      v35 = (int)(uintptr_t)(v16);
      glitch::video::CMaterial::Destroy(v16);
      gll_operator_delete_arr(v35);
    }
  }
  v18 = (glitch::video::CMaterial::Self *)v44[0];
  if ( v44[0] != nullptr )
  {
    v17 = *v44[0] == 2;
    _mm_mfence();
    if ( v17 )
    {
      v37 = v18;
      glitch::video::CMaterial::removeFromRootSceneNode(v18);
      v18 = v37;
    }
    if ( __sync_fetch_and_add((volatile int32_t *)v18, 0xFFFFFFFF) == 1 )
    {
      v34 = (int)(uintptr_t)(v18);
      glitch::video::CMaterial::Destroy(v18);
      gll_operator_delete_arr(v34);
    }
  }
  if ( (uint8_t)v43 != 0xFF )
    *(uint8_t *)(v8[121] + 8) = v43;
  G4_VCALL<void>(v11, 156, 1, 0, 0, v25, v26, v27, v28, v29, v30, v31, *(uint32_t *)(v11 + 240) & 1, v39, v41, v42, v43, v44[0], v44[1], v44[2], v45, v46, v47, v48, v49[0], v49[1], v49[2], v49[3], v49[4], v49[5], v49[6]);
  v51 = 0;
  glitch::video::CTextureManager::getTexture((glitch::video::CTextureManager::Self *)&v46, *(const char **)(v11 + 456), v40);
  G4_VCALL<void>(v11, 156, 1, v33);
  ParameterID = glitch::video::CMaterialRenderer::getParameterID(
                  *(glitch::video::CMaterialRenderer::Self **)(v8[121] + 4),
                  "Diffuse",
                  0);
  if ( ParameterID != -1 )
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
      v8[121],
      ParameterID,
      0,
      &v46);
  v20 = v8 + 121;
  v50 = v8;
  v21 = (glitch::scene::ISceneNode::Self *)(v8 + 1);
  glitch::scene::CBillboardSceneNode::setMaterial(v50, v20);
  glitch::scene::ISceneNode::setRenderingLayer(v21, -1);
  glitch::scene::ISceneNode::setVisible(v21, true);
  sub_5ED480(&v46);
  v22 = v45;
  if ( v45 != nullptr && __sync_fetch_and_add((volatile int32_t *)v45, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v22);
    gll_operator_delete_arr((int)(uintptr_t)(v22));
  }
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v49);
}

// ----------------------------------------------------------------------------
// Function: ActorAnimation::Construct_ea8558b0  (binary VA: 0x8558b0)
// Original: ActorAnimation::ActorAnimation
// ----------------------------------------------------------------------------
int ActorAnimation::Construct_ea8558b0(grapher::ActorBase::Self *a1, unsigned int a2)
{
  grapher::ActorBase::Construct(a1, a2);
  *((uint32_t *)a1 + 13) = -1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6E8);
  return sub_84BB20((char *)a1 + 52, -1);
}

// ----------------------------------------------------------------------------
// Function: ActorTimer::Construct_ea855910  (binary VA: 0x855910)
// Original: ActorTimer::ActorTimer
// ----------------------------------------------------------------------------
int ActorTimer::Construct_ea855910(grapher::ActorBase::Self *a1, unsigned int a2)
{
  bool v2;
  uint32_t *v3;
  char *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t _g4_t_v14[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);

  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D7A8);
  v2 = byte_20D6700 == 0;
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 14) = 0;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v3 = (uint32_t *)dword_20D672C;
  v4 = (char *)a1 + 52;
  v5 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_20;
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= v3[4] )
    {
      v5 = v3;
      v3 = (uint32_t *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_7;
    }
    v3 = (uint32_t *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_7:
  if ( v5 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v4) < v5[4] )
  {
LABEL_20:
    v6 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    v6[1] = 0;
    *v6 = (uint32_t)(uintptr_t)(&off_205DD50);
  }
  else
  {
    v6 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    v6[1] = 0;
    *v6 = (uint32_t)(uintptr_t)(&off_205DD50);
    v7 = v5[5];
    if ( v7 != 0 )
    {
      v11 = v6;
      G4_VCALL<void>(v7, 4);
      v6 = v11;
    }
  }
  v8 = (uint32_t *)dword_20D672C;
  v9 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_18;
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= v8[4] )
    {
      v9 = v8;
      v8 = (uint32_t *)v8[2];
      if ( v8 == nullptr )
        goto LABEL_16;
    }
    v8 = (uint32_t *)v8[3];
  }
  while ( v8 != nullptr );
LABEL_16:
  if ( v9 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v4) < v9[4] )
  {
LABEL_18:
    v12 = v6;
    v14[0] = (uint32_t)(uintptr_t)((char *)a1 + 52);
    v14[1] = 0;
    sub_8541D0(v9, v14);
    v9 = v13;
    v6 = v12;
  }
  v9[5] = (uint32_t)(uintptr_t)(v6);
  *((uint32_t *)a1 + 13) = 0;
  return sub_84BB20((char *)a1 + 56, *((uint32_t *)a1 + 14));
}

// ----------------------------------------------------------------------------
// Function: sub_855B10_ea855b10  (binary VA: 0x855b10)
// Original: sub_855B10
// ----------------------------------------------------------------------------
int sub_855B10_ea855b10(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  char v4;
  char v5;
  uint32_t *v6;
  uint32_t **v7;
  char v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  char v12;
  uint32_t *v13;
  void *v14;
  void *v15;
  int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef void *_g4_t_v22;
  typedef void *_g4_t_v23;
  typedef g4_cxa_guard_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v23)) > _g4_s5 ? (16u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v24)) > _g4_s6 ? (20u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v25)) > _g4_s7 ? (24u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v26)) > _g4_s8 ? (24u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v27)) > _g4_s9 ? (44u + sizeof(_g4_t_v27)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v27, (int)(uintptr_t)(a1), Variable, a3, v18, v19, v20, v21, (int)(uintptr_t)(v22), (int)(uintptr_t)(v24), v25);
  v4 = byte_20D4E40;
  if ( byte_20D4E40 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v4 = byte_20D4E40;
  }
  v5 = byte_20D4E64;
  v6 = nullptr;
  if ( byte_20D4E64 == 0 )
    v6 = (uint32_t *)(&unk_20D4E60);
  if ( v6[5] != 0 )
  {
    if ( v4 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v5 = byte_20D4E64;
    }
    v7 = nullptr;
    if ( v5 == 0 )
      v7 = (uint32_t **)&unk_20D4E60;
    (*(void (**)(uint32_t *, uint32_t *))(*v7[5] + 76))(v7[5], v27);
    v4 = byte_20D4E40;
  }
  v26 = *(uint32_t *)(dword_20DA1B0 + 64);
  if ( v4 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v4 = byte_20D4E40;
  }
  v8 = byte_20D4E64;
  v9 = nullptr;
  if ( byte_20D4E64 == 0 )
    v9 = (uint32_t *)(&unk_20D4E60);
  v10 = 0;
  if ( v9[5] != 0 )
  {
    if ( v4 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v8 = byte_20D4E64;
    }
    v11 = nullptr;
    if ( v8 == 0 )
      v11 = (uint32_t *)(&unk_20D4E60);
    v10 = sub_973DD0(v11[5]);
    v4 = byte_20D4E40;
  }
  if ( v4 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v4 = byte_20D4E40;
  }
  v12 = byte_20D4E64;
  v13 = nullptr;
  if ( byte_20D4E64 == 0 )
    v13 = (uint32_t *)(&unk_20D4E60);
  v14 = (void *)v13[4];
  if ( v4 == 0 )
  {
    v23 = v14;
    v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40);
    v14 = v23;
    v12 = byte_20D4E64;
    if ( v17 != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      v12 = byte_20D4E64;
      v14 = v23;
    }
  }
  v15 = nullptr;
  if ( v12 == 0 )
    v15 = &unk_20D4E60;
  sub_9CB030(v15, v14, v10, v26, 0, 1, 0, 1065353216);
  grapher::ActorBase::FireEvent(a1, 1, a3);
  return ((g4_std::string::Destroy(v27)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_855F30_ea855f30  (binary VA: 0x855f30)
// Original: sub_855F30
// ----------------------------------------------------------------------------
int sub_855F30_ea855f30(grapher::ActorBase::Self *a1)
{
  grapher::ActorVariable::Self *Variable;
  bool v2;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef grapher::ActorManager::Self *_g4_t_v6;
  typedef g4_cxa_guard_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v8)) > _g4_s4 ? (16u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v9)) > _g4_s5 ? (20u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v10)) > _g4_s6 ? (24u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v11)) > _g4_s7 ? (28u + sizeof(_g4_t_v11)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(v11, (int)(uintptr_t)(a1), Variable, nullptr, v4, v5, (int)(uintptr_t)(v6), (int)(uintptr_t)(v7), v8, v9, v10);
  v2 = byte_20D6700 == 0;
  *((uint32_t *)a1 + 13) = 0;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    if ( byte_20D5B50 != 0 )
      goto LABEL_3;
  }
  else if ( byte_20D5B50 != 0 )
  {
    goto LABEL_3;
  }
  if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
LABEL_3:
  grapher::ActorManager::AddIntoUpdateList(
    (grapher::ActorManager::Self *)&unk_20D5B60,
    a1,
    (grapher::ActorContext::Self *)&unk_20D6720);
  return ((g4_std::string::Destroy(v11)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8560A0  (binary VA: 0x8560a0)
// Original: sub_8560A0
// ----------------------------------------------------------------------------
void sub_8560A0(grapher::ActorBase::Self *a1, int a2, int a3, int a4, int a5)
{
  void *v5;
  int i;
  uint8_t *v7;
  char *v8;
  char *v9;
  int v10;
  const void **v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
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
  int *v33;
  int v34;
  int v35;
  int v36;
  bool v37;
  bool v38;
  int v39;
  int v40;
  int v41;
  int v42;
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint8_t _g4_t_v49[5];
  typedef int _g4_t_v50;
  typedef char _g4_t_v51[4];
  typedef char _g4_t_v52[4];
  typedef void *_g4_t_v53;
  typedef uint8_t *_g4_t_v54;
  typedef uint8_t *_g4_t_v55;
  typedef void *_g4_t_v56;
  typedef int (*_g4_t_v57)(int);
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef grapher::ActorBase::Self **_g4_t_v62;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v44)) > _g4_s1 ? (36u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v45)) > _g4_s2 ? (40u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v46)) > _g4_s3 ? (44u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v47)) > _g4_s4 ? (48u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v48)) > _g4_s5 ? (52u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (71u + sizeof(_g4_t_v49)) > _g4_s6 ? (71u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v50)) > _g4_s7 ? (76u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v51)) > _g4_s8 ? (80u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v52)) > _g4_s9 ? (84u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v53)) > _g4_s10 ? (88u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v54)) > _g4_s11 ? (92u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v55)) > _g4_s12 ? (96u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v56)) > _g4_s13 ? (104u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v57)) > _g4_s14 ? (108u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v58)) > _g4_s15 ? (112u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v59)) > _g4_s16 ? (116u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v60)) > _g4_s17 ? (120u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v61)) > _g4_s18 ? (124u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v62)) > _g4_s19 ? (144u + sizeof(_g4_t_v62)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 71u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 104u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 108u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 112u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 116u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 120u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 124u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 144u);

  v62 = &a1;
  v45 = a3;
  v47 = a4;
  v44 = a5;
  v56 = nullptr;
  v57 = nullptr;
  v58 = 0;
  v53 = nullptr;
  v54 = nullptr;
  v55 = nullptr;
  grapher::ActorBase::GetVariables(a1, a2, (int)(uintptr_t)(&v56));
  v5 = v56;
  v46 = ((char *)v57 - (char *)v56) >> 2;
  if ( v46 != 0 )
  {
    for ( i = 0; i != v46; ++i )
    {
      sub_837C70(v52);
      if ( v54 == v55 )
      {
        g4_std::vector_string_86c307::M_insert_aux(&v53, v54, v52);
      }
      else
      {
        v7 = nullptr;
        if ( v54 != nullptr )
        {
          g4_std::string::construct_copy(v54, v52);
          v7 = v54;
        }
        v54 = v7 + 4;
      }
      g4_std::string::Destroy(v52);
      v5 = v56;
    }
  }
  if ( v5 != nullptr )
    opDelete(v5);
  v8 = (char *)(v54);
  v9 = (char *)v53;
  v48 = (v54 - (uint8_t *)v53) >> 2;
  if ( v48 != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = (const void **)&v9[4 * v10];
        if ( *((uint32_t *)*v11 - 3) != 0 )
          break;
LABEL_12:
        if ( ++v10 == v48 )
          goto LABEL_22;
      }
      if ( g4_std::string::compare((int)(uintptr_t)(v11), "MainCharacter") == 0 )
        goto LABEL_30;
      if ( g4_std::string::compare((int)(uintptr_t)(v11), "MainCharacterAndVehicle") != 0 )
        break;
      v14 = sub_8F0680(v13);
      if ( G4_VCALL<int>(v14, 456) == 0 )
      {
LABEL_30:
        v20 = sub_8F0680(v12);
LABEL_31:
        v21 = v20;
        v22 = opNew(0xCu);
        if ( v22 != -8 )
          *(uint32_t *)(v22 + 8) = v21;
        sub_1901920(v22, v45);
        v9 = (char *)v53;
        goto LABEL_12;
      }
      v15 = sub_8F0680(v12);
      v16 = G4_VCALL<int>(v15, 456);
LABEL_18:
      v17 = v16;
LABEL_19:
      v18 = opNew(0xCu);
      if ( v18 != -8 )
        *(uint32_t *)(v18 + 8) = v17;
      ++v10;
      sub_1901920(v18, v45);
      v9 = (char *)v53;
      if ( v10 == v48 )
      {
LABEL_22:
        v8 = (char *)(v54);
        goto LABEL_23;
      }
    }
    if ( g4_std::string::compare((int)(uintptr_t)(v11), "MainVehicleLast") != 0 )
    {
      if ( g4_std::string::compare((int)(uintptr_t)(v11), "MainVehicle") != 0 )
      {
        if ( g4_std::string::compare((int)(uintptr_t)(v11), "MenuSelectedItem") != 0 )
        {
          if ( g4_std::string::compare((int)(uintptr_t)(v11), "AllAllies") == 0 )
          {
            v58 = 0;
            v56 = &off_205DD30;
            v59 = v45;
            v57 = (int (*)(int))sub_85A630;
            if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
            {
              sub_5B3AF0(&dword_20D4A60);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
              __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
            }
            v33 = nullptr;
            if ( byte_20D4A64 == 0 )
              v33 = (int *)(&dword_20D4A60);
            goto LABEL_53;
          }
          if ( g4_std::string::compare((int)(uintptr_t)(v11), "AllEnemies") == 0 )
          {
            v58 = 0;
            v56 = &off_205DD30;
            v59 = v45;
            v57 = (int (*)(int))sub_85A520;
            if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
            {
              sub_5B3AF0(&dword_20D4A60);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
              __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
            }
            v33 = nullptr;
            if ( byte_20D4A64 == 0 )
              v33 = (int *)(&dword_20D4A60);
            goto LABEL_53;
          }
          if ( g4_std::string::compare((int)(uintptr_t)(v11), "AllNeutrals") == 0 )
          {
            v58 = 0;
            v56 = &off_205DD30;
            v59 = v45;
            v57 = (int (*)(int))sub_85A4E0;
            goto LABEL_56;
          }
          if ( g4_std::string::compare((int)(uintptr_t)(v11), "AllVehicles") == 0 )
          {
            v58 = v45;
            v56 = &off_205DD40;
            v57 = sub_85A670;
LABEL_56:
            v33 = (int *)sub_655CB0();
LABEL_53:
            sub_5B4060(v33, &v56);
            v9 = (char *)v53;
            goto LABEL_12;
          }
          if ( g4_std::string::compare((int)(uintptr_t)(v11), "AllNPCs") != 0 )
          {
            if ( v47 != 0 && *((uint32_t *)*v11 - 3) != 0 )
            {
              sub_1939830(v11);
              if ( *(uint8_t *)*v11 == 35 )
              {
                if ( g4_std::string::compare((int)(uintptr_t)(v11), "#MeleeSpot") != 0 )
                {
                  sub_193A770(v51);
                  v42 = (int)(uintptr_t)(sub_655CB0());
                  *(uint32_t *)&v49[1] = sub_5B44E0(v42, v51, v47);
                  g4_std::string::Destroy(v51);
                }
                else
                {
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Target", (int)(uintptr_t)(v49));
                  v41 = (int)(uintptr_t)(sub_655CB0());
                  *(uint32_t *)&v49[1] = sub_5B44E0(v41, &v50, v47);
                  g4_std::string::Destroy(&v50);
                }
                if ( *(uint32_t *)&v49[1] != 0 )
                {
                  g4_std::list_LevelObject_22413e::push_back(v45, &v49[1]);
                  v9 = (char *)v53;
                  goto LABEL_12;
                }
                goto LABEL_36;
              }
            }
            v57 = (int (*)(int))v11;
            v58 = v45;
            v61 = v44;
            v56 = &off_20309D8;
            v37 = *((uint32_t *)*v11 - 3) == *(uint32_t *)(dword_20D67E8 - 12)
               && memcmp(*v11, (const void *)dword_20D67E8, *((uint32_t *)*v11 - 3)) == 0;
            LOBYTE(v59) = v37;
            v38 = false;
            v39 = *((uint32_t *)*v11 - 3);
            if ( v39 != 0 )
              v38 = *(uint8_t *)sub_19399F0(v11, v39 - 1) == 95;
            BYTE1(v59) = v38;
            v60 = *(uint32_t *)(*(uint32_t *)v57 - 12);
          }
          else
          {
            v58 = v45;
            v56 = &off_205DD40;
            v57 = sub_85A790;
          }
          v40 = (int)(uintptr_t)(sub_655CB0());
          sub_5B4060(v40, &v56);
        }
        else
        {
          v27 = sub_8F0680(v26);
          if ( sub_8F1EA0(v27) != 0 )
          {
            v29 = sub_8F0680(v28);
            v16 = sub_8F1EA0(v29);
            goto LABEL_18;
          }
          v34 = sub_8F0680(v28);
          if ( sub_8F5BA0(v34) != 0 )
          {
            v36 = sub_8F0680(v35);
            v20 = sub_8F5BA0(v36);
            goto LABEL_31;
          }
        }
      }
      else
      {
        v30 = sub_8F0680(v25);
        if ( G4_VCALL<int>(v30, 456) != 0 )
        {
          v32 = sub_8F0680(v31);
          v20 = G4_VCALL<int>(v32, 456);
          goto LABEL_31;
        }
      }
    }
    else
    {
      v24 = sub_8F0680(v23);
      v17 = sub_8F2280(v24);
      if ( v17 != 0 )
        goto LABEL_19;
    }
LABEL_36:
    v9 = (char *)v53;
    goto LABEL_12;
  }
LABEL_23:
  if ( v8 != v9 )
  {
    v19 = v9;
    do
    {
      v43 = v19;
      v19 += 4;
      g4_std::string::Destroy(v43);
    }
    while ( v8 != v19 );
    v9 = (char *)v53;
  }
  if ( v9 != nullptr )
    opDelete(v9);
}

// ----------------------------------------------------------------------------
// Function: sub_856780  (binary VA: 0x856780)
// Original: sub_856780
// ----------------------------------------------------------------------------
void sub_856780(grapher::ActorBase::Self *a1, int a2, int a3, int a4, int a5)
{
  void *v5;
  int i;
  uint8_t *v7;
  char *v8;
  char *v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;
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
  const void **v33;
  bool v34;
  bool v35;
  int v36;
  int v37;
  int *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  typedef char *_g4_t_v46;
  typedef const void **_g4_t_obj;
  typedef void *_g4_t_obja;
  typedef void *_g4_t_objb;
  typedef const void **_g4_t_objc;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef int _g4_t_v58;
  typedef uint8_t _g4_t_v59[5];
  typedef char _g4_t_v60[4];
  typedef char _g4_t_v61[4];
  typedef int _g4_t_v62;
  typedef void *_g4_t_v63;
  typedef uint8_t *_g4_t_v64;
  typedef uint8_t *_g4_t_v65;
  typedef void *_g4_t_v66;
  typedef int (*_g4_t_v67)(int);
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int *_g4_t_v72;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v46)) > _g4_s0 ? (12u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_obj)) > _g4_s1 ? (36u + sizeof(_g4_t_obj)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_obja)) > _g4_s2 ? (36u + sizeof(_g4_t_obja)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_objb)) > _g4_s3 ? (36u + sizeof(_g4_t_objb)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_objc)) > _g4_s4 ? (36u + sizeof(_g4_t_objc)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v51)) > _g4_s5 ? (40u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v52)) > _g4_s6 ? (44u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v53)) > _g4_s7 ? (48u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_n)) > _g4_s8 ? (52u + sizeof(_g4_t_n)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_na)) > _g4_s9 ? (52u + sizeof(_g4_t_na)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_nb)) > _g4_s10 ? (52u + sizeof(_g4_t_nb)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_nc)) > _g4_s11 ? (52u + sizeof(_g4_t_nc)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v58)) > _g4_s12 ? (56u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (75u + sizeof(_g4_t_v59)) > _g4_s13 ? (75u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v60)) > _g4_s14 ? (80u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v61)) > _g4_s15 ? (84u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v62)) > _g4_s16 ? (88u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v63)) > _g4_s17 ? (92u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v64)) > _g4_s18 ? (96u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v65)) > _g4_s19 ? (100u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v66)) > _g4_s20 ? (108u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v67)) > _g4_s21 ? (112u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v68)) > _g4_s22 ? (116u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v69)) > _g4_s23 ? (120u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v70)) > _g4_s24 ? (124u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v71)) > _g4_s25 ? (128u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v72)) > _g4_s26 ? (148u + sizeof(_g4_t_v72)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 36u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 36u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 36u);
  _g4_t_objc &objc = *reinterpret_cast<_g4_t_objc *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 52u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 52u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 52u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 75u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 88u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 92u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 100u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 108u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 112u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 116u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 120u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 124u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 128u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 148u);

  v72 = &a3;
  v66 = nullptr;
  v52 = a3;
  v53 = a4;
  v51 = a5;
  v67 = nullptr;
  v68 = 0;
  v63 = nullptr;
  v64 = nullptr;
  v65 = nullptr;
  grapher::ActorBase::GetVariables(a1, a2, (int)(uintptr_t)(&v66));
  v5 = v66;
  n = ((char *)v67 - (char *)v66) >> 2;
  if ( n != 0 )
  {
    for ( i = 0; i != n; ++i )
    {
      sub_837C70(v60);
      if ( v64 == v65 )
      {
        g4_std::vector_string_86c307::M_insert_aux(&v63, v64, v60);
      }
      else
      {
        v7 = nullptr;
        if ( v64 != nullptr )
        {
          g4_std::string::construct_copy(v64, v60);
          v7 = v64;
        }
        v64 = v7 + 4;
      }
      g4_std::string::Destroy(v60);
    }
    v5 = v66;
  }
  if ( v5 != nullptr )
    opDelete(v5);
  v8 = (char *)(v64);
  v9 = (char *)v63;
  v58 = (v64 - (uint8_t *)v63) >> 2;
  if ( v58 != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = &v9[4 * v10];
      if ( *(uint32_t *)(*(uint32_t *)v11 - 12) == 0 )
        goto LABEL_13;
      obj = (const void **)&v9[4 * v10];
      if ( g4_std::string::compare((int)(uintptr_t)(v11), "MainCharacter") == 0 )
        goto LABEL_30;
      if ( g4_std::string::compare((int)(uintptr_t)(obj), "MainCharacterAndVehicle") != 0 )
      {
        if ( g4_std::string::compare((int)(uintptr_t)(obj), "MainVehicleLast") != 0 )
        {
          if ( g4_std::string::compare((int)(uintptr_t)(obj), "MainVehicle") != 0 )
          {
            if ( g4_std::string::compare((int)(uintptr_t)(obj), "MenuSelectedItem") != 0 )
            {
              if ( g4_std::string::compare((int)(uintptr_t)(obj), "AllAllies") == 0 )
              {
                v68 = 0;
                v66 = &off_205DD30;
                v69 = v52;
                v67 = (int (*)(int))sub_85A630;
                if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
                  goto LABEL_57;
                goto LABEL_60;
              }
              if ( g4_std::string::compare((int)(uintptr_t)(obj), "AllEnemies") == 0 )
              {
                v68 = 0;
                v66 = &off_205DD30;
                v69 = v52;
                v67 = (int (*)(int))sub_85A520;
                if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
                {
LABEL_57:
                  sub_5B3AF0(&dword_20D4A60);
                  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
                  __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
                }
LABEL_60:
                v38 = nullptr;
                if ( byte_20D4A64 == 0 )
                  v38 = (int *)(&dword_20D4A60);
                sub_5B4060(v38, &v66);
                v9 = (char *)v63;
                goto LABEL_13;
              }
              if ( g4_std::string::compare((int)(uintptr_t)(obj), "AllNeutrals") == 0 )
              {
                v68 = 0;
                v66 = &off_205DD30;
                v69 = v52;
                v67 = (int (*)(int))sub_85A4E0;
LABEL_65:
                v39 = (int)(uintptr_t)(sub_655CB0());
                sub_5B4060(v39, &v66);
                v9 = (char *)v63;
                goto LABEL_13;
              }
              if ( g4_std::string::compare((int)(uintptr_t)(obj), "AllVehicles") == 0 )
              {
                v68 = v52;
                v66 = &off_205DD40;
                v67 = sub_85A670;
                goto LABEL_65;
              }
              v32 = g4_std::string::compare((int)(uintptr_t)(obj), "AllNPCs");
              v33 = obj;
              if ( v32 == 0 )
              {
                v68 = v52;
                v66 = &off_205DD40;
                v67 = sub_85A790;
                goto LABEL_65;
              }
              if ( v53 != 0 && *((uint32_t *)*obj - 3) != 0 && (sub_1939830(obj), v33 = obj, *(uint8_t *)*obj == 35) )
              {
                if ( g4_std::string::compare((int)(uintptr_t)(obj), "#MeleeSpot") != 0 )
                {
                  sub_193A770(v61);
                  v45 = (int)(uintptr_t)(sub_655CB0());
                  *(uint32_t *)&v59[1] = sub_5B44E0(v45, v61, v53);
                  g4_std::string::Destroy(v61);
                }
                else
                {
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "Target", (int)(uintptr_t)(v59));
                  v44 = (int)(uintptr_t)(sub_655CB0());
                  *(uint32_t *)&v59[1] = sub_5B44E0(v44, &v62, v53);
                  g4_std::string::Destroy(&v62);
                }
                if ( *(uint32_t *)&v59[1] != 0 )
                {
                  g4_std::list_LevelObject_22413e::push_back(v52, &v59[1]);
                  v9 = (char *)v63;
                  goto LABEL_13;
                }
              }
              else
              {
                v67 = (int (*)(int))v33;
                v68 = v52;
                v71 = v51;
                v66 = &off_20309D8;
                nc = *((uint32_t *)*v33 - 3);
                if ( nc == *(uint32_t *)(dword_20D67E8 - 12) )
                {
                  objc = v33;
                  v43 = memcmp(*v33, (const void *)dword_20D67E8, nc);
                  v33 = objc;
                  v34 = v43 == 0;
                }
                else
                {
                  v34 = false;
                }
                LOBYTE(v69) = v34;
                v35 = false;
                v36 = *((uint32_t *)*v33 - 3);
                if ( v36 != 0 )
                  v35 = *(uint8_t *)sub_19399F0(v33, v36 - 1) == 95;
                BYTE1(v69) = v35;
                v70 = *(uint32_t *)(*(uint32_t *)v67 - 12);
                v37 = (int)(uintptr_t)(sub_655CB0());
                sub_5B4060(v37, &v66);
              }
              goto LABEL_53;
            }
            v25 = sub_8F0680(v24);
            if ( sub_8F1EA0(v25) == 0 )
            {
              v40 = sub_8F0680(v26);
              if ( sub_8F5BA0(v40) != 0 )
              {
                v42 = sub_8F0680(v41);
                objb = (void *)sub_8F5BA0(v42);
                v17 = opNew(0xCu);
                if ( v17 != -8 )
                  *(uint32_t *)(v17 + 8) = (uint32_t)(uintptr_t)(objb);
                goto LABEL_21;
              }
LABEL_53:
              v9 = (char *)v63;
              goto LABEL_13;
            }
            v27 = sub_8F0680(v26);
            v28 = sub_8F1EA0(v27);
          }
          else
          {
            v29 = sub_8F0680(v23);
            if ( G4_VCALL<int>(v29, 456) == 0 )
              goto LABEL_53;
            v31 = sub_8F0680(v30);
            v28 = G4_VCALL<int>(v31, 456);
          }
          nb = v28;
          v22 = opNew(0xCu);
          if ( v22 != -8 )
            *(uint32_t *)(v22 + 8) = nb;
        }
        else
        {
          v20 = sub_8F0680(v19);
          v21 = sub_8F2280(v20);
          if ( v21 == 0 )
            goto LABEL_53;
          obja = (void *)v21;
          v22 = opNew(0xCu);
          if ( v22 != -8 )
            *(uint32_t *)(v22 + 8) = (uint32_t)(uintptr_t)(obja);
        }
        sub_1901920(v22, v52);
        v9 = (char *)v63;
LABEL_13:
        if ( v58 == ++v10 )
          goto LABEL_22;
      }
      else
      {
        v14 = sub_8F0680(v13);
        if ( G4_VCALL<int>(v14, 456) != 0 )
        {
          v15 = sub_8F0680(v12);
          v16 = G4_VCALL<int>(v15, 456);
          goto LABEL_19;
        }
LABEL_30:
        v16 = sub_8F0680(v12);
LABEL_19:
        na = v16;
        v17 = opNew(0xCu);
        if ( v17 != -8 )
          *(uint32_t *)(v17 + 8) = na;
LABEL_21:
        ++v10;
        sub_1901920(v17, v52);
        v9 = (char *)v63;
        if ( v58 == v10 )
        {
LABEL_22:
          v8 = (char *)(v64);
          break;
        }
      }
    }
  }
  if ( v8 != v9 )
  {
    v18 = v9;
    do
    {
      v46 = v18;
      v18 += 4;
      g4_std::string::Destroy(v46);
    }
    while ( v8 != v18 );
    v9 = (char *)v63;
  }
  if ( v9 != nullptr )
    opDelete(v9);
}

// ----------------------------------------------------------------------------
// Function: sub_856EF0  (binary VA: 0x856ef0)
// Original: sub_856EF0
// ----------------------------------------------------------------------------
void sub_856EF0(grapher::ActorBase::Self *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v11[0] = (uint32_t)(uintptr_t)(v11);
  v11[1] = (uint32_t)(uintptr_t)(v11);
  sub_856780(a1, 0, (int)(uintptr_t)(v11), a3, 0x7FFFFFFF);
  v3 = (uint32_t *)v11[0];
  if ( (uint32_t *)v11[0] != v11 )
  {
    do
    {
      v4 = v3[2];
      if ( v4 != 0 )
      {
        v9 = v3[2];
        v5 = (int *)(*(int (**)(int))(*(uint32_t *)v4 + 16))(v9);
        if ( v5 != nullptr )
        {
          while ( v5 != (int *)(uintptr_t)(&dword_20D75F0) )
          {
            v5 = (int *)v5[1];
            if ( v5 == nullptr )
              goto LABEL_10;
          }
          v6 = opNew(0xCu);
          if ( v6 != -8 )
            *(uint32_t *)(v6 + 8) = v9;
          sub_1901920(v6, a2);
        }
      }
LABEL_10:
      v3 = (uint32_t *)*v3;
    }
    while ( v3 != v11 );
    v7 = (uint32_t *)v11[0];
    if ( (uint32_t *)v11[0] != v11 )
    {
      while ( 1 )
      {
        v8 = (uint32_t *)*v7;
        opDelete(v7);
        if ( v8 == v11 )
          break;
        v7 = v8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_856FE0_ea856fe0  (binary VA: 0x856fe0)
// Original: sub_856FE0
// ----------------------------------------------------------------------------
void sub_856FE0_ea856fe0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  char v8;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef grapher::ActorContext::Self *_g4_t_v11;
  typedef uint32_t _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  v3 = a3;
  v12[0] = (uint32_t)(uintptr_t)(v12);
  v12[1] = (uint32_t)(uintptr_t)(v12);
  sub_856EF0(a1, (int)(uintptr_t)(v12), (int)(uintptr_t)(a3));
  if ( a2 == 1 )
  {
    if ( (uint32_t *)v12[0] == v12 )
      goto LABEL_10;
    v11 = a3;
    v9 = (uint32_t *)v12[0];
    do
    {
      if ( (uint8_t)sub_97FD30(v9[2]) != 0 )
      {
        sub_8F3950(v9[2]);
      }
      else
      {
        if ( (uint8_t)sub_8ED2A0(*(uint32_t *)(v9[2] + 1132), 1) != 0 )
          (*(void (**)(uint32_t, int))(**(uint32_t **)(v9[2] + 1132) + 36))(*(uint32_t *)(v9[2] + 1132), 1);
        else
          sub_8ED2D0(*(uint32_t *)(v9[2] + 1132));
        sub_9EE090(v9[2], 1);
      }
      v9 = (uint32_t *)*v9;
    }
    while ( v9 != v12 );
LABEL_9:
    v3 = v11;
    goto LABEL_10;
  }
  if ( a2 == 2 )
  {
    if ( (uint32_t *)v12[0] == v12 )
      goto LABEL_10;
    v11 = a3;
    v7 = (uint32_t *)v12[0];
    do
    {
      v8 = sub_97FD30(v7[2]);
      v10 = v7[2];
      if ( v8 != 0 )
      {
        sub_906BC0(v10);
      }
      else if ( (uint8_t)sub_987F30(v10) == 0 )
      {
        sub_8ED2D0(*(uint32_t *)(v7[2] + 1132));
        sub_9EE090(v7[2], 1);
      }
      v7 = (uint32_t *)*v7;
    }
    while ( v7 != v12 );
    goto LABEL_9;
  }
  if ( a2 == 0 && (uint32_t *)v12[0] != v12 )
  {
    v11 = a3;
    v4 = (uint32_t *)v12[0];
    do
    {
      while ( (uint8_t)sub_97FD30(v4[2]) != 0 )
      {
        sub_8F39F0(v4[2]);
        v4 = (uint32_t *)*v4;
        if ( v4 == v12 )
          goto LABEL_9;
      }
      G4_VCALL<void>(v4[2], 424, *(uint32_t *)(v4[2] + 2508));
      sub_9EE090(v4[2], 1);
      v4 = (uint32_t *)*v4;
    }
    while ( v4 != v12 );
    goto LABEL_9;
  }
LABEL_10:
  grapher::ActorBase::FireEvent(a1, 3, v3);
  v5 = (uint32_t *)v12[0];
  if ( (uint32_t *)v12[0] != v12 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == v12 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_8571D0  (binary VA: 0x8571d0)
// Original: sub_8571D0
// ----------------------------------------------------------------------------
void ** sub_8571D0(grapher::ActorBase::Self *a1, int a2, void *a3, int a4)
{
  void **v4;
  void **v5;
  void **v6;
  void **v7;
  void *v9[9];

  v4 = nullptr;
  v9[0] = v9;
  v9[1] = v9;
  sub_856780(a1, a2, (int)(uintptr_t)(v9), a4, 0x7FFFFFFF);
  v5 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    v6 = (void **)v9[0];
    if ( *((void **)v9[0] + 2) != a3 )
    {
      do
        v6 = (void **)*v6;
      while ( v6 != v9 && v6[2] != a3 );
    }
    LOBYTE(v6) = v6 != v9;
    v4 = v6;
    while ( 1 )
    {
      v7 = (void **)*v5;
      opDelete(v5);
      if ( v7 == v9 )
        break;
      v5 = v7;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_857260  (binary VA: 0x857260)
// Original: sub_857260
// ----------------------------------------------------------------------------
int sub_857260(grapher::ActorBase::Self *a1, int a2, int a3)
{
  void **v3;
  int v4;
  void **v5;
  void *v7[9];

  v7[0] = v7;
  v7[1] = v7;
  sub_856780(a1, a2, (int)(uintptr_t)(v7), a3, 1);
  v3 = (void **)v7[0];
  if ( v7[0] == v7 )
    return 0;
  v4 = *((uint32_t *)v7[0] + 2);
  while ( 1 )
  {
    v5 = (void **)*v3;
    opDelete(v3);
    if ( v5 == v7 )
      break;
    v3 = v5;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_8572D0_ea8572d0  (binary VA: 0x8572d0)
// Original: sub_8572D0
// ----------------------------------------------------------------------------
int sub_8572D0_ea8572d0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int *v4;
  typedef void **_g4_t_v6;
  typedef int _g4_t_v7;
  typedef void *_g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  v8[0] = v8;
  v8[1] = v8;
  sub_856780(a1, 0, (int)(uintptr_t)(v8), (int)(uintptr_t)(a3), 1);
  v3 = (void **)v8[0];
  if ( v8[0] != v8 )
  {
    v7 = *((uint32_t *)v8[0] + 2);
    while ( 1 )
    {
      v6 = (void **)*v3;
      opDelete(v3);
      if ( v6 == v8 )
        break;
      v3 = v6;
    }
    if ( v7 != 0 )
    {
      v4 = (int *)G4_VCALL<int>(v7, 16);
      if ( v4 != nullptr )
      {
        if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          sub_9C55E0(v7);
        }
        else
        {
          while ( 1 )
          {
            v4 = (int *)v4[1];
            if ( v4 == nullptr )
              break;
            if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_8573A0_ea8573a0  (binary VA: 0x8573a0)
// Original: sub_8573A0
// ----------------------------------------------------------------------------
int sub_8573A0_ea8573a0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  void **v4;
  void **v5;
  int *v6;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  v3 = a3;
  v9[0] = v9;
  v9[1] = v9;
  sub_856780(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 1);
  v4 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    v8 = *((uint32_t *)v9[0] + 2);
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v9 )
        break;
      v4 = v5;
    }
    v3 = a3;
    if ( v8 != 0 )
    {
      v6 = (int *)G4_VCALL<int>(v8, 16);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
            {
              G4_VCALL<void>(v8, 680);
              G4_VCALL<void>(v8, 700, 0);
            }
          }
          else
          {
            G4_VCALL<void>(v8, 672, 0);
            G4_VCALL<void>(v8, 676);
          }
        }
        else
        {
          while ( 1 )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              break;
            if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_8574C0_ea8574c0  (binary VA: 0x8574c0)
// Original: sub_8574C0
// ----------------------------------------------------------------------------
int sub_8574C0_ea8574c0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  void **v4;
  void **v5;
  int *v6;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  v3 = a3;
  v9[0] = v9;
  v9[1] = v9;
  sub_856780(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 1);
  v4 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    v8 = *((uint32_t *)v9[0] + 2);
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v9 )
        break;
      v4 = v5;
    }
    v3 = a3;
    if ( v8 != 0 )
    {
      v6 = (int *)G4_VCALL<int>(v8, 16);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
            {
              G4_VCALL<void>(v8, 688);
              G4_VCALL<void>(v8, 700, 0);
            }
          }
          else
          {
            G4_VCALL<void>(v8, 672, 0);
            G4_VCALL<void>(v8, 684);
          }
        }
        else
        {
          while ( 1 )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              break;
            if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_8575E0_ea8575e0  (binary VA: 0x8575e0)
// Original: sub_8575E0
// ----------------------------------------------------------------------------
int sub_8575E0_ea8575e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  void **v4;
  void **v5;
  int *v6;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  v3 = a3;
  v9[0] = v9;
  v9[1] = v9;
  sub_856780(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 1);
  v4 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    v8 = *((uint32_t *)v9[0] + 2);
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v9 )
        break;
      v4 = v5;
    }
    v3 = a3;
    if ( v8 != 0 )
    {
      v6 = (int *)(*(int (**)(void))(*(uint32_t *)v8 + 16))();
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          switch ( a2 )
          {
            case 0:
              sub_9B4EB0(v8);
              break;
            case 1:
              sub_9B49D0(v8);
              break;
            case 2:
              sub_9B47F0(v8);
              break;
            case 3:
              sub_9BA270(v8);
              break;
            case 4:
              sub_9B4550(v8);
              break;
            default:
              return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 5, v3));
          }
        }
        else
        {
          while ( 1 )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              break;
            if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 5, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_8576F0_ea8576f0  (binary VA: 0x8576f0)
// Original: sub_8576F0
// ----------------------------------------------------------------------------
int sub_8576F0_ea8576f0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  void **v4;
  void **v5;
  int *v6;
  int v8;
  int v9;
  typedef int _g4_t_v10;
  typedef void *_g4_t_v11[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v11)) > _g4_s1 ? (24u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  v3 = a3;
  v11[0] = v11;
  v11[1] = v11;
  sub_856780(a1, 0, (int)(uintptr_t)(v11), (int)(uintptr_t)(a3), 1);
  v4 = (void **)v11[0];
  if ( v11[0] != v11 )
  {
    v10 = *((uint32_t *)v11[0] + 2);
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v11 )
        break;
      v4 = v5;
    }
    v3 = a3;
    if ( v10 != 0 )
    {
      v6 = (int *)G4_VCALL<int>(v10, 16);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          v8 = G4_VCALL<int>(v10, 456);
          if ( v8 != 0 )
          {
            switch ( a2 )
            {
              case 1:
                sub_9C5DF0(v10);
                sub_9B7830(v10, 0);
                sub_9C5C00(v10);
                break;
              case 2:
                sub_9B71D0(v10, 0, 1);
                if ( *(int *)(v8 + 1096) <= 0 || (v9 = **(uint32_t **)(v8 + 1104)) == 0 || v9 == v10 )
                  G4_VCALL<void>(v8, 420);
                break;
              case 0:
                G4_VCALL<void>(v8, 416);
                break;
              default:
                break;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              break;
            if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_857870_ea857870  (binary VA: 0x857870)
// Original: sub_857870
// ----------------------------------------------------------------------------
int sub_857870_ea857870(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  void **v4;
  void **v5;
  int *v6;
  typedef uint32_t **_g4_t_v8;
  typedef void *_g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  v3 = a3;
  v9[0] = v9;
  v9[1] = v9;
  sub_856780(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 1);
  v4 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    v8 = *((uint32_t ***)v9[0] + 2);
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v9 )
        break;
      v4 = v5;
    }
    v3 = a3;
    if ( v8 != nullptr )
    {
      v6 = (int *)((int (*)(uint32_t **))(*v8)[4])(v8);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
            {
              sub_9DCB80(v8);
              sub_987430(v8);
              (*(void (**)(uint32_t *, uint32_t))(*v8[459] + 28))(v8[459], 0);
            }
          }
          else
          {
            sub_9D6090(v8);
          }
        }
        else
        {
          while ( 1 )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              break;
            if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_857980_ea857980  (binary VA: 0x857980)
// Original: sub_857980
// ----------------------------------------------------------------------------
int sub_857980_ea857980(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int *v4;
  int v6;
  typedef void **_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9[2];
  typedef int _g4_t_v10[3];
  typedef int _g4_t_v11[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v9[0] = v9;
  v9[1] = v9;
  sub_856780(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 1);
  v3 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    v8 = *((uint32_t **)v9[0] + 2);
    while ( 1 )
    {
      v7 = (void **)*v3;
      opDelete(v3);
      if ( v7 == v9 )
        break;
      v3 = v7;
    }
    if ( v8 != nullptr )
    {
      v4 = (int *)G4_VCALL<int>(v8, 16);
      if ( v4 != nullptr )
      {
        if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          v6 = sub_9A27E0(v8);
          if ( v6 != 0 )
          {
            if ( (uint8_t)sub_9815E0(v8) != 0 )
            {
              (*(void (**)(int *))(*(uint32_t *)v6 + 52))(v11);
              (*(void (**)(int *))(*v8 + 52))(v10);
              sub_62AB50(v10, v11, -12829496);
            }
            v8[1078] = 500;
            grapher::ActorBase::FireEvent(a1, 2, a3);
          }
        }
        else
        {
          while ( 1 )
          {
            v4 = (int *)v4[1];
            if ( v4 == nullptr )
              break;
            if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_857AD0_ea857ad0  (binary VA: 0x857ad0)
// Original: sub_857AD0
// ----------------------------------------------------------------------------
int sub_857AD0_ea857ad0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int *v4;
  typedef void **_g4_t_v6;
  typedef int _g4_t_v7;
  typedef void *_g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  v8[0] = v8;
  v8[1] = v8;
  sub_856780(a1, 0, (int)(uintptr_t)(v8), (int)(uintptr_t)(a3), 1);
  v3 = (void **)v8[0];
  if ( v8[0] != v8 )
  {
    v7 = *((uint32_t *)v8[0] + 2);
    while ( 1 )
    {
      v6 = (void **)*v3;
      opDelete(v3);
      if ( v6 == v8 )
        break;
      v3 = v6;
    }
    if ( v7 != 0 )
    {
      v4 = (int *)G4_VCALL<int>(v7, 16);
      if ( v4 != nullptr )
      {
        if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          sub_981CA0(v7);
        }
        else
        {
          while ( 1 )
          {
            v4 = (int *)v4[1];
            if ( v4 == nullptr )
              break;
            if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_857BA0_ea857ba0  (binary VA: 0x857ba0)
// Original: sub_857BA0
// ----------------------------------------------------------------------------
int sub_857BA0_ea857ba0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int *v4;
  typedef void **_g4_t_v6;
  typedef int _g4_t_v7;
  typedef void *_g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  v8[0] = v8;
  v8[1] = v8;
  sub_856780(a1, 0, (int)(uintptr_t)(v8), (int)(uintptr_t)(a3), 1);
  v3 = (void **)v8[0];
  if ( v8[0] != v8 )
  {
    v7 = *((uint32_t *)v8[0] + 2);
    while ( 1 )
    {
      v6 = (void **)*v3;
      opDelete(v3);
      if ( v6 == v8 )
        break;
      v3 = v6;
    }
    if ( v7 != 0 )
    {
      v4 = (int *)G4_VCALL<int>(v7, 16);
      if ( v4 != nullptr )
      {
        if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          sub_985930(v7);
        }
        else
        {
          while ( 1 )
          {
            v4 = (int *)v4[1];
            if ( v4 == nullptr )
              break;
            if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_857C70_ea857c70  (binary VA: 0x857c70)
// Original: sub_857C70
// ----------------------------------------------------------------------------
void sub_857C70_ea857c70(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int *v4;
  bool v5;
  typedef void **_g4_t_v6;
  typedef g4_cxa_guard_t *_g4_t_v7;
  typedef void *_g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  v8[0] = v8;
  v8[1] = v8;
  sub_856780(a1, 0, (int)(uintptr_t)(v8), (int)(uintptr_t)(a3), 1);
  v3 = (void **)v8[0];
  if ( v8[0] != v8 )
  {
    v7 = *((g4_cxa_guard_t **)v8[0] + 2);
    while ( 1 )
    {
      v6 = (void **)*v3;
      opDelete(v3);
      if ( v6 == v8 )
        break;
      v3 = v6;
    }
    if ( v7 != nullptr )
    {
      v4 = (int *)G4_VCALL<int>(v7, 16);
      if ( v4 != nullptr )
      {
        if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_12;
        while ( 1 )
        {
          v4 = (int *)v4[1];
          if ( v4 == nullptr )
            break;
          if ( v4 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_12;
        }
      }
    }
  }
  v7 = nullptr;
LABEL_12:
  if ( *((uint8_t *)a1 + 52) != 0 && v7 != nullptr && *((uint8_t *)v7 + 2853) == 0 )
  {
    v5 = byte_20D5B50 == 0;
    *((uint8_t *)a1 + 52) = 0;
    if ( v5 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
    grapher::ActorBase::FireEvent(a1, 1, a3);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_857DC0_ea857dc0  (binary VA: 0x857dc0)
// Original: sub_857DC0
// ----------------------------------------------------------------------------
int sub_857DC0_ea857dc0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  void **v4;
  void **v5;
  int *v6;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  v3 = a3;
  v9[0] = v9;
  v9[1] = v9;
  sub_856780(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 1);
  v4 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    v8 = *((uint32_t *)v9[0] + 2);
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v9 )
        break;
      v4 = v5;
    }
    v3 = a3;
    if ( v8 != 0 )
    {
      v6 = (int *)G4_VCALL<int>(v8, 16);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_12:
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
              G4_VCALL<void>(v8, 540);
          }
          else
          {
            G4_VCALL<void>(v8, 528);
            G4_VCALL<void>(v8, 536);
          }
        }
        else
        {
          while ( 1 )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              break;
            if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_857EC0_ea857ec0  (binary VA: 0x857ec0)
// Original: sub_857EC0
// ----------------------------------------------------------------------------
int sub_857EC0_ea857ec0(grapher::ActorBase::Self *a1, int a2, int a3)
{
  grapher::ActorContext::Self *v3;
  void ***v4;
  int v5;
  void **v6;
  int v7;
  int *v8;
  void ***v9;
  int v10;
  void **v11;
  int v12;
  int *v13;
  typedef grapher::ActorContext::Self *_g4_t_v15;
  typedef grapher::ActorContext::Self *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void **_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v3 = (grapher::ActorContext::Self *)a3;
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 0, (int)(uintptr_t)(&v17), a3, 1);
  v4 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v5 = *((uint32_t *)v17 + 2);
    while ( 1 )
    {
      v6 = *v4;
      opDelete(v4);
      if ( v6 == &v17 )
        break;
      v4 = (void ***)v6;
    }
    v7 = v5;
    v3 = (grapher::ActorContext::Self *)a3;
    if ( v7 != 0 )
    {
      v8 = (int *)G4_VCALL<int>(v7, 16);
      if ( v8 != nullptr )
      {
        if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_12;
        while ( 1 )
        {
          v8 = (int *)v8[1];
          if ( v8 == nullptr )
            break;
          if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_12;
        }
      }
    }
  }
  v7 = 0;
LABEL_12:
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 1, (int)(uintptr_t)(&v17), (int)(uintptr_t)(v3), 1);
  v9 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v16 = v3;
    v15 = *((grapher::ActorContext::Self **)v17 + 2);
    v10 = v7;
    while ( 1 )
    {
      v11 = *v9;
      opDelete(v9);
      if ( v11 == &v17 )
        break;
      v9 = (void ***)v11;
    }
    v12 = v10;
    v3 = v16;
    if ( v15 != nullptr )
    {
      v13 = (int *)G4_VCALL<int>(v15, 16);
      if ( v13 != nullptr )
      {
        if ( v13 == (int *)(uintptr_t)(&dword_20D68D0) )
        {
LABEL_23:
          if ( v12 != 0 )
          {
            if ( a2 != 0 )
            {
              if ( a2 == 1 )
                G4_VCALL<void>(v12, 648);
            }
            else
            {
              G4_VCALL<void>(v12, 640, 0);
              G4_VCALL<void>(v12, 644);
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v13 = (int *)v13[1];
            if ( v13 == nullptr )
              break;
            if ( v13 == (int *)(uintptr_t)(&dword_20D68D0) )
              goto LABEL_23;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_858050_ea858050  (binary VA: 0x858050)
// Original: sub_858050
// ----------------------------------------------------------------------------
int sub_858050_ea858050(grapher::ActorBase::Self *a1, int a2, int a3)
{
  grapher::ActorContext::Self *v3;
  void ***v4;
  int v5;
  void **v6;
  int v7;
  int *v8;
  void ***v9;
  int v10;
  void **v11;
  int v12;
  int *v13;
  typedef grapher::ActorContext::Self *_g4_t_v15;
  typedef grapher::ActorContext::Self *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void **_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v3 = (grapher::ActorContext::Self *)a3;
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 0, (int)(uintptr_t)(&v17), a3, 1);
  v4 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v5 = *((uint32_t *)v17 + 2);
    while ( 1 )
    {
      v6 = *v4;
      opDelete(v4);
      if ( v6 == &v17 )
        break;
      v4 = (void ***)v6;
    }
    v7 = v5;
    v3 = (grapher::ActorContext::Self *)a3;
    if ( v7 != 0 )
    {
      v8 = (int *)G4_VCALL<int>(v7, 16);
      if ( v8 != nullptr )
      {
        if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_12;
        while ( 1 )
        {
          v8 = (int *)v8[1];
          if ( v8 == nullptr )
            break;
          if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_12;
        }
      }
    }
  }
  v7 = 0;
LABEL_12:
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 1, (int)(uintptr_t)(&v17), (int)(uintptr_t)(v3), 1);
  v9 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v16 = v3;
    v15 = *((grapher::ActorContext::Self **)v17 + 2);
    v10 = v7;
    while ( 1 )
    {
      v11 = *v9;
      opDelete(v9);
      if ( v11 == &v17 )
        break;
      v9 = (void ***)v11;
    }
    v12 = v10;
    v3 = v16;
    if ( v15 != nullptr )
    {
      v13 = (int *)G4_VCALL<int>(v15, 16);
      if ( v13 != nullptr )
      {
        if ( v13 == (int *)(uintptr_t)(&dword_20D68D0) )
        {
LABEL_23:
          if ( v12 != 0 && a2 == 0 )
            G4_VCALL<void>(v12, 628, 0);
        }
        else
        {
          while ( 1 )
          {
            v13 = (int *)v13[1];
            if ( v13 == nullptr )
              break;
            if ( v13 == (int *)(uintptr_t)(&dword_20D68D0) )
              goto LABEL_23;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_8581C0_ea8581c0  (binary VA: 0x8581c0)
// Original: sub_8581C0
// ----------------------------------------------------------------------------
int sub_8581C0_ea8581c0(grapher::ActorBase::Self *a1, int a2, int a3)
{
  grapher::ActorContext::Self *v3;
  void ***v4;
  int v5;
  void **v6;
  int v7;
  int *v8;
  void ***v9;
  int v10;
  void **v11;
  int v12;
  int *v13;
  typedef grapher::ActorContext::Self *_g4_t_v15;
  typedef grapher::ActorContext::Self *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void **_g4_t_v18;
  typedef uint8_t _g4_t_v19[12];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v17)) > _g4_s2 ? (20u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v19)) > _g4_s4 ? (28u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v20)) > _g4_s5 ? (40u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v21)) > _g4_s6 ? (44u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v22)) > _g4_s7 ? (48u + sizeof(_g4_t_v22)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);

  v3 = (grapher::ActorContext::Self *)a3;
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 0, (int)(uintptr_t)(&v17), a3, 1);
  v4 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v5 = *((uint32_t *)v17 + 2);
    while ( 1 )
    {
      v6 = *v4;
      opDelete(v4);
      if ( v6 == &v17 )
        break;
      v4 = (void ***)v6;
    }
    v7 = v5;
    v3 = (grapher::ActorContext::Self *)a3;
    if ( v7 != 0 )
    {
      v8 = (int *)G4_VCALL<int>(v7, 16);
      if ( v8 != nullptr )
      {
        if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_12;
        while ( 1 )
        {
          v8 = (int *)v8[1];
          if ( v8 == nullptr )
            break;
          if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_12;
        }
      }
    }
  }
  v7 = 0;
LABEL_12:
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 1, (int)(uintptr_t)(&v17), (int)(uintptr_t)(v3), 1);
  v9 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v16 = v3;
    v15 = *((grapher::ActorContext::Self **)v17 + 2);
    v10 = v7;
    while ( 1 )
    {
      v11 = *v9;
      opDelete(v9);
      if ( v11 == &v17 )
        break;
      v9 = (void ***)v11;
    }
    v12 = v10;
    v3 = v16;
    if ( v15 != nullptr )
    {
      v13 = (int *)G4_VCALL<int>(v15, 16);
      if ( v13 != nullptr )
      {
        if ( v13 == (int *)(uintptr_t)(&dword_20DE814) )
        {
LABEL_23:
          if ( v12 != 0 )
          {
            sub_9E5400(v12);
            *(uint32_t *)(v12 + 3780) = 0;
            sub_9873B0(v12);
            (*(void (**)(uint8_t *, grapher::ActorContext::Self *))(*(uint32_t *)v15 + 52))(v19, v15);
            ((void (*)(int))v15)(v12);
            sub_992A00(v12, 1);
            sub_995690(v12);
            v20 = 0;
            v21 = 0;
            v22 = 1232348160;
            sub_97FEC0(v12);
          }
        }
        else
        {
          while ( 1 )
          {
            v13 = (int *)v13[1];
            if ( v13 == nullptr )
              break;
            if ( v13 == (int *)(uintptr_t)(&dword_20DE814) )
              goto LABEL_23;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_8583A0_ea8583a0  (binary VA: 0x8583a0)
// Original: sub_8583A0
// ----------------------------------------------------------------------------
int sub_8583A0_ea8583a0(grapher::ActorBase::Self *a1)
{
  grapher::ActorVariable::Self *Variable;
  bool v2;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef grapher::ActorManager::Self *_g4_t_v6;
  typedef g4_cxa_guard_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v8)) > _g4_s4 ? (16u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v9)) > _g4_s5 ? (20u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v10)) > _g4_s6 ? (24u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v11)) > _g4_s7 ? (28u + sizeof(_g4_t_v11)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(v11, (int)(uintptr_t)(a1), Variable, nullptr, v4, v5, (int)(uintptr_t)(v6), (int)(uintptr_t)(v7), v8, v9, v10);
  v2 = byte_20D6700 == 0;
  *((uint32_t *)a1 + 13) = 0;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    if ( byte_20D5B50 != 0 )
      goto LABEL_3;
  }
  else if ( byte_20D5B50 != 0 )
  {
    goto LABEL_3;
  }
  if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
LABEL_3:
  grapher::ActorManager::AddIntoUpdateList(
    (grapher::ActorManager::Self *)&unk_20D5B60,
    a1,
    (grapher::ActorContext::Self *)&unk_20D6720);
  return ((g4_std::string::Destroy(v11)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_858510_ea858510  (binary VA: 0x858510)
// Original: sub_858510
// ----------------------------------------------------------------------------
int sub_858510_ea858510(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void ***v3;
  int *v4;
  grapher::ActorVariable::Self *Variable;
  int v7;
  grapher::ActorVariable::Self *v8;
  int v9;
  g4_cxa_guard_t v10;
  bool v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef void **_g4_t_v14;
  typedef g4_cxa_guard_t *_g4_t_v15;
  typedef g4_cxa_guard_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef void *_g4_t_v21[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v18)) > _g4_s6 ? (31u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v19)) > _g4_s7 ? (32u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v20)) > _g4_s8 ? (36u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v21)) > _g4_s9 ? (40u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 31u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);

  v21[0] = v21;
  v21[1] = v21;
  sub_856780(a1, 0, (int)(uintptr_t)(v21), (int)(uintptr_t)(a3), 1);
  v3 = (void ***)v21[0];
  if ( v21[0] == v21 )
    goto LABEL_11;
  v15 = *((g4_cxa_guard_t **)v21[0] + 2);
  while ( 1 )
  {
    v14 = *v3;
    opDelete(v3);
    if ( v14 == v21 )
      break;
    v3 = (void ***)v14;
  }
  if ( v15 == nullptr || (v4 = (int *)G4_VCALL<int>(v15, 16)) == nullptr )
  {
LABEL_11:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    sub_837730((int)(uintptr_t)(a1), Variable, a3, v12, v13, (int)(uintptr_t)(v14), (int)(uintptr_t)(v15), v17, v19, v20);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  while ( v4 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v4 = (int *)v4[1];
    if ( v4 == nullptr )
      goto LABEL_11;
  }
  v7 = G4_VCALL<int>(v15, 456);
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v18 = sub_837730((int)(uintptr_t)(a1), v8, a3, v12, v13, (int)(uintptr_t)(v14), (int)(uintptr_t)(v15), v17, v19, v20);
  if ( v7 == 0 || G4_VCALL<uint8_t>(v7, 564) == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  if ( v18 != 0 )
  {
    if ( G4_VCALL<int>(v16, 456) == 0 || (*((uint8_t *)v16 + 1873) & 8) == 0 )
      goto LABEL_18;
  }
  else
  {
    if ( G4_VCALL<int>(v16, 456) == 0 )
      goto LABEL_18;
    v9 = v16[468];
    v10 = v16[469];
    if ( (v9 & 0x100) == 0 || v9 < 0 || (v10 & 1) != 0 || (v10 & 4) != 0 )
      goto LABEL_18;
  }
  if ( *((uint8_t *)v16 + 2853) != 0 )
  {
LABEL_18:
    grapher::ActorBase::FireEvent(a1, 1, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  v11 = byte_20D5B50 == 0;
  *((uint8_t *)a1 + 52) = 1;
  *((uint8_t *)v16 + 2853) = 1;
  if ( v11 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  return ((grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_858760_ea858760  (binary VA: 0x858760)
// Original: sub_858760
// ----------------------------------------------------------------------------
int * sub_858760_ea858760(grapher::ActorBase::Self *a1, int *a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  char *v4;
  char *v5;
  int *v6;
  int *result;
  uint32_t *v8;
  uint32_t *v9;
  grapher::ActorVariable::Self *Variable;
  int v11;
  grapher::ActorVariable::Self *v12;
  char v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int *v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef void *_g4_t_v37[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v19)) > _g4_s1 ? (0u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v20)) > _g4_s2 ? (4u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v21)) > _g4_s3 ? (4u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v22)) > _g4_s4 ? (4u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v23)) > _g4_s5 ? (8u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v24)) > _g4_s6 ? (8u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v25)) > _g4_s7 ? (8u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v26)) > _g4_s8 ? (12u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v27)) > _g4_s9 ? (12u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v28)) > _g4_s10 ? (12u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v29)) > _g4_s11 ? (16u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v30)) > _g4_s12 ? (16u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v31)) > _g4_s13 ? (16u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v32)) > _g4_s14 ? (20u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v33)) > _g4_s15 ? (20u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v34)) > _g4_s16 ? (24u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v35)) > _g4_s17 ? (24u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (31u + sizeof(_g4_t_v36)) > _g4_s18 ? (31u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v37)) > _g4_s19 ? (36u + sizeof(_g4_t_v37)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 31u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);

  v3 = (uint32_t *)((char *)a1 + 52);
  v37[0] = (char *)a1 + 52;
  v4 = *((char **)a3 + 3);
  v5 = (char *)a3 + 8;
  v26 = (int)(uintptr_t)(a3) + 8;
  if ( v4 == nullptr )
    goto LABEL_53;
  do
  {
    while ( (unsigned int)(uintptr_t)(v3) <= *((uint32_t *)v4 + 4) )
    {
      v5 = v4;
      v4 = *((char **)v4 + 2);
      if ( v4 == nullptr )
        goto LABEL_6;
    }
    v4 = *((char **)v4 + 3);
  }
  while ( v4 != nullptr );
LABEL_6:
  if ( v5 == (char *)v26 || (unsigned int)(uintptr_t)(v3) < *((uint32_t *)v5 + 4) )
  {
LABEL_53:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v8 = (uint32_t *)dword_20D672C;
    v9 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( (unsigned int)(uintptr_t)(v3) <= v8[4] )
        {
          v9 = v8;
          v8 = (uint32_t *)v8[2];
        }
        else
        {
          v8 = (uint32_t *)v8[3];
        }
      }
      while ( v8 != nullptr );
      if ( v9 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v3) < v9[4] )
        v9 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)a1 + 13) = *(uint32_t *)(v9[5] + 4);
    v17 = (int *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *v17 = (int)(uintptr_t)(&off_205CD10);
    v17[1] = *((uint32_t *)a1 + 13);
    v20 = v17;
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)a3 + 4), v37) = (uint32_t)(uintptr_t)(v17);
  }
  else
  {
    *((uint32_t *)a1 + 13) = *(uint32_t *)(*((uint32_t *)v5 + 5) + 4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36) + 1, "Subject", (int)(uintptr_t)(&v36));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    v20 = (int *)(&dword_20D4A60);
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D4A64 == 0 )
    v6 = (int *)(&dword_20D4A60);
  v29 = sub_5B44E0((int)(uintptr_t)(v6), (int)(uintptr_t)(&v36) + 1, (unsigned int)(uintptr_t)(a3));
  g4_std::string::Destroy((char *)&v36 + 1);
  result = (int *)v29;
  if ( v29 != 0 )
  {
    result = (int *)G4_VCALL<int>(v29, 16);
    if ( result != nullptr )
    {
      if ( result == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_28:
        result = a2;
        if ( a2 == nullptr )
        {
          Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
          v11 = (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v18, (int)(uintptr_t)(v20), v23, v26, v29, v32, v34) != 0
              ? *(uint32_t *)(v30 + 720)
              : *(uint32_t *)(v30 + 676);
          v24 = v11;
          v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
          v13 = (uint8_t)sub_837730((int)(uintptr_t)(a1), v12, a3, v19, v21, v24, v27, v30, v33, v35) != 0
              ? *(uint8_t *)(v31 + 698)
              : *(uint8_t *)(v31 + 654);
          result = *((int **)a1 + 13);
          if ( result == (int *)-1 )
          {
            *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(v25);
            v22 = v13;
            sub_84BEC0(a3, v3);
            v13 = v22;
            result = *((int **)a1 + 13);
          }
          if ( v25 != result || v13 != 0 )
          {
            v37[0] = (char *)a1 + 52;
            *((uint32_t *)a1 + 13) = -1;
            v14 = *((uint32_t **)a3 + 3);
            if ( v14 == nullptr )
              goto LABEL_48;
            v15 = v28;
            do
            {
              while ( (unsigned int)(uintptr_t)(v3) <= v14[4] )
              {
                v15 = v14;
                v14 = (uint32_t *)v14[2];
                if ( v14 == nullptr )
                  goto LABEL_42;
              }
              v14 = (uint32_t *)v14[3];
            }
            while ( v14 != nullptr );
LABEL_42:
            if ( v28 == v15 || (unsigned int)(uintptr_t)(v3) < v15[4] )
            {
LABEL_48:
              v16 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
              *v16 = (uint32_t)(uintptr_t)(&off_205CD10);
              v16[1] = *((uint32_t *)a1 + 13);
              *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)a3 + 4),
                 v37) = (uint32_t)(uintptr_t)(v16);
            }
            else
            {
              *(uint32_t *)(v15[5] + 4) = -1;
            }
            return (int *)grapher::ActorBase::FireEvent(a1, 1, a3);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          result = (int *)result[1];
          if ( result == nullptr )
            break;
          if ( result == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_28;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_858B80  (binary VA: 0x858b80)
// Original: sub_858B80
// ----------------------------------------------------------------------------
uint32_t * sub_858B80(grapher::ActorBase::Self *a1, uint32_t *a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  char *v4;
  grapher::ActorContext::Self *v5;
  grapher::ActorContext::Self *v6;
  void *v7;
  grapher::ActorContext::Self *v8;
  grapher::ActorContext::Self *v9;
  uint32_t *result;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v16;
  grapher::ActorContext::Self *v17;
  grapher::ActorBase::Self *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  int v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef grapher::ActorBase::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef grapher::ActorBase::Self *_g4_t_v36;
  typedef grapher::ActorBase::Self *_g4_t_v37;
  typedef grapher::ActorBase::Self *_g4_t_v38;
  typedef grapher::ActorBase::Self *_g4_t_v39;
  typedef grapher::ActorBase::Self *_g4_t_v40;
  typedef void *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44;
  typedef grapher::ActorContext::Self *_g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef void *_g4_t_v47[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v33)) > _g4_s4 ? (28u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v34)) > _g4_s5 ? (28u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v35)) > _g4_s6 ? (28u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v36)) > _g4_s7 ? (28u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v37)) > _g4_s8 ? (28u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v38)) > _g4_s9 ? (28u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v39)) > _g4_s10 ? (28u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v40)) > _g4_s11 ? (28u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v41)) > _g4_s12 ? (32u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v42)) > _g4_s13 ? (36u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v43)) > _g4_s14 ? (40u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (43u + sizeof(_g4_t_v44)) > _g4_s15 ? (43u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v45)) > _g4_s16 ? (44u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v46)) > _g4_s17 ? (44u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v47)) > _g4_s18 ? (48u + sizeof(_g4_t_v47)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 43u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);

  v3 = a1;
  v45 = (grapher::ActorContext::Self *)((char *)a3 + 8);
  v4 = (char *)a1 + 52;
  v47[0] = (char *)a1 + 52;
  v5 = *((grapher::ActorContext::Self **)a3 + 3);
  if ( v5 == nullptr )
    goto LABEL_71;
  v6 = (grapher::ActorContext::Self *)((char *)a3 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= *((uint32_t *)v5 + 4) )
    {
      v6 = v5;
      v5 = *((grapher::ActorContext::Self **)v5 + 2);
      if ( v5 == nullptr )
        goto LABEL_6;
    }
    v5 = *((grapher::ActorContext::Self **)v5 + 3);
  }
  while ( v5 != nullptr );
LABEL_6:
  if ( v45 == v6 || (unsigned int)(uintptr_t)(v4) < *((uint32_t *)v6 + 4) )
  {
LABEL_71:
    if ( byte_20D6700 == 0 )
    {
      v27 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      v3 = a1;
      if ( v27 != 0 )
      {
        v41 = &unk_20D6720;
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v3 = a1;
      }
    }
    v11 = (uint32_t *)dword_20D672C;
    v12 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      v42 = (char *)&unk_20D6728;
      do
      {
        if ( (unsigned int)(uintptr_t)(v4) <= v11[4] )
        {
          v12 = v11;
          v11 = (uint32_t *)v11[2];
        }
        else
        {
          v11 = (uint32_t *)v11[3];
        }
      }
      while ( v11 != nullptr );
      if ( v12 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v4) < v12[4] )
        v12 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)v3 + 13) = *(uint32_t *)(v12[5] + 4);
    v37 = v3;
    v24 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *v24 = (uint32_t)(uintptr_t)(&off_205DD50);
    v24[1] = *((uint32_t *)v37 + 13);
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)a3 + 4), v47) = (uint32_t)(uintptr_t)(v24);
    v3 = v37;
  }
  else
  {
    *((uint32_t *)a1 + 13) = *(uint32_t *)(*((uint32_t *)v6 + 5) + 4);
  }
  v7 = (char *)v3 + 56;
  v47[0] = (char *)v3 + 56;
  v8 = *((grapher::ActorContext::Self **)a3 + 3);
  if ( v8 == nullptr )
    goto LABEL_72;
  v9 = (grapher::ActorContext::Self *)((char *)a3 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v7) <= *((uint32_t *)v8 + 4) )
    {
      v9 = v8;
      v8 = *((grapher::ActorContext::Self **)v8 + 2);
      if ( v8 == nullptr )
        goto LABEL_14;
    }
    v8 = *((grapher::ActorContext::Self **)v8 + 3);
  }
  while ( v8 != nullptr );
LABEL_14:
  if ( v45 == v9 || (unsigned int)(uintptr_t)(v7) < *((uint32_t *)v9 + 4) )
  {
LABEL_72:
    if ( byte_20D6700 == 0 )
    {
      v40 = v3;
      v42 = (char *)(&byte_20D6700);
      v28 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      v3 = v40;
      if ( v28 != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v3 = v40;
      }
    }
    v13 = (uint32_t *)dword_20D672C;
    v14 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      v42 = (char *)&unk_20D6728;
      do
      {
        if ( (unsigned int)(uintptr_t)(v7) <= v13[4] )
        {
          v14 = v13;
          v13 = (uint32_t *)v13[2];
        }
        else
        {
          v13 = (uint32_t *)v13[3];
        }
      }
      while ( v13 != nullptr );
      if ( v14 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v7) < v14[4] )
        v14 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)v3 + 14) = *(uint32_t *)(v14[5] + 4);
    v39 = v3;
    v26 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *v26 = (uint32_t)(uintptr_t)(&off_205CD10);
    v26[1] = *((uint32_t *)v39 + 14);
    v41 = v26;
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)a3 + 4), v47) = (uint32_t)(uintptr_t)(v26);
    v3 = v39;
  }
  else
  {
    *((uint32_t *)v3 + 14) = *(uint32_t *)(*((uint32_t *)v9 + 5) + 4);
  }
  result = a2;
  if ( a2 != nullptr )
  {
    if ( a2 != (uint32_t *)(uintptr_t)((int *)((char *)&dword_0 + 1)) )
      return result;
    result = (uint32_t *)dword_20DDD80;
    if ( *((uint32_t *)v3 + 13) + *((uint32_t *)v3 + 14) > (unsigned int)dword_20DDD80 )
      return result;
    HIBYTE(v43) = 1;
  }
  else
  {
    v33 = (int)(uintptr_t)(v3);
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    HIBYTE(v43) = sub_837730(v33, Variable, a3, v29, v30, v31, v32, v33, (int)(uintptr_t)(v41), (int)(uintptr_t)(v42));
    v3 = v34;
    result = (uint32_t *)dword_20DDD80;
  }
  *((uint32_t *)v3 + 13) = (uint32_t)(uintptr_t)(result);
  v35 = (int)(uintptr_t)(v3);
  v16 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
  v17 = sub_837200(v35, v16, a3, v29, v30, v31, v32, v35, (int)(uintptr_t)(v41), (int)(uintptr_t)(v42), v43, v45);
  v18 = v36;
  v47[0] = (char *)a1 + 52;
  *((uint32_t *)v36 + 14) = (uint32_t)(uintptr_t)(v17);
  v19 = *((uint32_t **)a3 + 3);
  if ( v19 == nullptr )
    goto LABEL_53;
  v20 = v46;
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= v19[4] )
    {
      v20 = v19;
      v19 = (uint32_t *)v19[2];
      if ( v19 == nullptr )
        goto LABEL_40;
    }
    v19 = (uint32_t *)v19[3];
  }
  while ( v19 != nullptr );
LABEL_40:
  if ( v46 == v20 || (unsigned int)(uintptr_t)(v4) < v20[4] )
  {
LABEL_53:
    v23 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v23 = (uint32_t)(uintptr_t)(&off_205DD50);
    v23[1] = *((uint32_t *)v36 + 13);
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)a3 + 4), v47) = (uint32_t)(uintptr_t)(v23);
    v18 = v36;
  }
  else
  {
    *(uint32_t *)(v20[5] + 4) = *((uint32_t *)v36 + 13);
  }
  v47[0] = v7;
  v21 = *((uint32_t **)a3 + 3);
  if ( v21 == nullptr )
    goto LABEL_60;
  v22 = v46;
  do
  {
    while ( (unsigned int)(uintptr_t)(v7) <= v21[4] )
    {
      v22 = v21;
      v21 = (uint32_t *)v21[2];
      if ( v21 == nullptr )
        goto LABEL_48;
    }
    v21 = (uint32_t *)v21[3];
  }
  while ( v21 != nullptr );
LABEL_48:
  if ( v46 == v22 || (unsigned int)(uintptr_t)(v7) < v22[4] )
  {
LABEL_60:
    v38 = v18;
    v25 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v25 = (uint32_t)(uintptr_t)(&off_205CD10);
    v25[1] = *((uint32_t *)v38 + 14);
    result = g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)a3 + 4), v47);
    *result = (uint32_t)(uintptr_t)(v25);
    v18 = v38;
  }
  else
  {
    result = (uint32_t *)v22[5];
    result[1] = *((uint32_t *)v18 + 14);
  }
  if ( v44 != 0 )
    return (uint32_t *)grapher::ActorBase::FireEvent(v18, 2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_8590C0_ea8590c0  (binary VA: 0x8590c0)
// Original: sub_8590C0
// ----------------------------------------------------------------------------
int sub_8590C0_ea8590c0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  void ***v6;
  void **v7;
  int *v8;
  int *v9;
  int *v10;
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int *_g4_t_v14;
  typedef g4_cxa_guard_t *_g4_t_v15;
  typedef g4_cxa_guard_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef grapher::ActorContext::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef void *_g4_t_v22;
  typedef void **_g4_t_v23;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v20)) > _g4_s8 ? (32u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v21)) > _g4_s9 ? (36u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v22)) > _g4_s10 ? (40u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v23)) > _g4_s11 ? (44u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  v3 = a1;
  v4 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v19 = sub_837200(
          (int)(uintptr_t)(a1),
          Variable,
          a3,
          v12,
          (int)(uintptr_t)(v13),
          (int)(uintptr_t)(v15),
          v17,
          v18,
          v20,
          v21,
          (int)(uintptr_t)(v22),
          (grapher::ActorContext::Self *)v23);
  v22 = &v22;
  v23 = &v22;
  sub_856780(a1, 1, (int)(uintptr_t)(&v22), (int)(uintptr_t)(a3), 1);
  v6 = (void ***)v22;
  if ( v22 != &v22 )
  {
    v16 = *((g4_cxa_guard_t **)v22 + 2);
    while ( 1 )
    {
      v7 = *v6;
      opDelete(v6);
      if ( v7 == &v22 )
        break;
      v6 = (void ***)v7;
    }
    v3 = a1;
    v4 = a3;
    if ( v16 != nullptr )
    {
      v8 = (int *)G4_VCALL<int>(v16, 16);
      if ( v8 != nullptr )
      {
        if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_16:
          if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
          {
            v14 = (int *)(&dword_20D5240);
            sub_976230(&dword_20D5240);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
            __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
          }
          v10 = nullptr;
          if ( byte_20D5248 == 0 )
            v10 = (int *)(&dword_20D5240);
          if ( (uint8_t)sub_9767E0(v10) == 0 )
            sub_913030(v16, v19, 0, -1082130432, v14);
          return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v4));
        }
        while ( 1 )
        {
          v8 = (int *)v8[1];
          if ( v8 == nullptr )
            break;
          if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_16;
        }
      }
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Subject", (int)(uintptr_t)(&v20) + 3);
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v9 = nullptr;
  if ( byte_20D4A64 == 0 )
    v9 = (int *)(&dword_20D4A60);
  v14 = (int *)sub_5B44E0((int)(uintptr_t)(v9), (int)(uintptr_t)(&v21), (unsigned int)(uintptr_t)(v4));
  g4_std::string::Destroy(&v21);
  if ( v14 != nullptr )
  {
    v16 = (g4_cxa_guard_t *)(v14);
    goto LABEL_16;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v4));
}

// ----------------------------------------------------------------------------
// Function: sub_859310_ea859310  (binary VA: 0x859310)
// Original: sub_859310
// ----------------------------------------------------------------------------
int sub_859310_ea859310(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  void ***v4;
  void **v5;
  int *v6;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  grapher::ActorVariable::Self *v10;
  grapher::ActorVariable::Self *v11;
  int *v12;
  int v13;
  int v14;
  uint32_t *v15;
  g4_cxa_guard_t v16;
  int *v17;
  void ***v18;
  void **v19;
  int *v20;
  int v21;
  float *v22;
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  int v26;
  g4_cxa_guard_t *v27;
  int v28;
  int *v29;
  int v30;
  float *v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef int _g4_t_v35;
  typedef float _g4_t_v36;
  typedef int _g4_t_v37;
  typedef float _g4_t_obj;
  typedef float _g4_t_obja;
  typedef g4_cxa_guard_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef grapher::ActorContext::Self *_g4_t_v44;
  typedef g4_cxa_guard_t *_g4_t_v45;
  typedef g4_cxa_guard_t *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef g4_cxa_guard_t *_g4_t_v49;
  typedef void *_g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef uint32_t _g4_t_v53[3];
  typedef uint32_t _g4_t_v54[3];
  typedef uint32_t _g4_t_v55[3];
  typedef float _g4_t_v56[3];
  typedef float _g4_t_v57[3];
  typedef float _g4_t_v58[3];
  typedef float _g4_t_v59[3];
  typedef uint32_t _g4_t_v60[3];
  typedef float _g4_t_v61[3];
  typedef float _g4_t_v62[3];
  typedef float _g4_t_v63[3];
  typedef float _g4_t_v64[3];
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef grapher::ActorBase::Self **_g4_t_v68;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v33)) > _g4_s1 ? (0u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v34)) > _g4_s2 ? (16u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v35)) > _g4_s3 ? (16u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v36)) > _g4_s4 ? (16u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v37)) > _g4_s5 ? (16u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_obj)) > _g4_s6 ? (32u + sizeof(_g4_t_obj)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_obja)) > _g4_s7 ? (32u + sizeof(_g4_t_obja)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v40)) > _g4_s8 ? (56u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v41)) > _g4_s9 ? (60u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v42)) > _g4_s10 ? (64u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v43)) > _g4_s11 ? (68u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v44)) > _g4_s12 ? (72u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v45)) > _g4_s13 ? (76u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v46)) > _g4_s14 ? (76u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v47)) > _g4_s15 ? (80u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v48)) > _g4_s16 ? (88u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v49)) > _g4_s17 ? (92u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v50)) > _g4_s18 ? (96u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v51)) > _g4_s19 ? (100u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v52)) > _g4_s20 ? (104u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v53)) > _g4_s21 ? (116u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v54)) > _g4_s22 ? (128u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v55)) > _g4_s23 ? (140u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v56)) > _g4_s24 ? (152u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (164u + sizeof(_g4_t_v57)) > _g4_s25 ? (164u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (176u + sizeof(_g4_t_v58)) > _g4_s26 ? (176u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v59)) > _g4_s27 ? (188u + sizeof(_g4_t_v59)) : _g4_s27,
    _g4_s29 = (200u + sizeof(_g4_t_v60)) > _g4_s28 ? (200u + sizeof(_g4_t_v60)) : _g4_s28,
    _g4_s30 = (212u + sizeof(_g4_t_v61)) > _g4_s29 ? (212u + sizeof(_g4_t_v61)) : _g4_s29,
    _g4_s31 = (224u + sizeof(_g4_t_v62)) > _g4_s30 ? (224u + sizeof(_g4_t_v62)) : _g4_s30,
    _g4_s32 = (236u + sizeof(_g4_t_v63)) > _g4_s31 ? (236u + sizeof(_g4_t_v63)) : _g4_s31,
    _g4_s33 = (248u + sizeof(_g4_t_v64)) > _g4_s32 ? (248u + sizeof(_g4_t_v64)) : _g4_s32,
    _g4_s34 = (260u + sizeof(_g4_t_v65)) > _g4_s33 ? (260u + sizeof(_g4_t_v65)) : _g4_s33,
    _g4_s35 = (264u + sizeof(_g4_t_v66)) > _g4_s34 ? (264u + sizeof(_g4_t_v66)) : _g4_s34,
    _g4_s36 = (268u + sizeof(_g4_t_v67)) > _g4_s35 ? (268u + sizeof(_g4_t_v67)) : _g4_s35,
    _g4_s37 = (280u + sizeof(_g4_t_v68)) > _g4_s36 ? (280u + sizeof(_g4_t_v68)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 32u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 104u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 116u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 128u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 140u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 152u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 164u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 176u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 188u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 200u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 212u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 224u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 236u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 248u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 260u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 264u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 268u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 280u);

  v68 = &a1;
  v3 = a1;
  v44 = a3;
  *(float *)&v50 = COERCE_FLOAT(&v50);
  v51 = COERCE_FLOAT(&v50);
  sub_856780(a1, 0, (int)(uintptr_t)(&v50), (int)(uintptr_t)(a3), 1);
  v4 = (void ***)v50;
  if ( v50 == &v50 )
    goto LABEL_11;
  v45 = (g4_cxa_guard_t *)v3;
  v43 = *((uint32_t *)v50 + 2);
  while ( 1 )
  {
    v5 = *v4;
    opDelete(v4);
    if ( v5 == &v50 )
      break;
    v4 = (void ***)v5;
  }
  v3 = (grapher::ActorBase::Self *)v45;
  if ( v43 == 0 || (v6 = (int *)G4_VCALL<int>(v43, 16)) == nullptr )
  {
LABEL_11:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    sub_837200(v3, Variable, v44);
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    sub_837200(v3, v8, v44);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  }
  while ( v6 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v6 = (int *)v6[1];
    if ( v6 == nullptr )
      goto LABEL_11;
  }
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v45, 1);
  v42 = (int)(uintptr_t)(sub_837200(v45, v10, v44));
  v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v45, 2);
  v41 = (int)(uintptr_t)(sub_837200(v45, v11, v44));
  if ( v41 < 0 )
  {
    *(float *)&v50 = COERCE_FLOAT(&v50);
    v51 = COERCE_FLOAT(&v50);
    sub_856780((grapher::ActorBase::Self *)v45, 3, (int)(uintptr_t)(&v50), (int)(uintptr_t)(v44), 1);
    v18 = (void ***)v50;
    if ( v50 == &v50 )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    v40 = v45;
    v46 = *((g4_cxa_guard_t **)v50 + 2);
    while ( 1 )
    {
      v19 = *v18;
      opDelete(v18);
      if ( v19 == &v50 )
        break;
      v18 = (void ***)v19;
    }
    v3 = (grapher::ActorBase::Self *)v40;
    if ( v46 == nullptr )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    v20 = (int *)G4_VCALL<int>(v46, 16);
    if ( v20 == nullptr )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    while ( v20 != (int *)(uintptr_t)(&dword_20DE814) )
    {
      v20 = (int *)v20[1];
      if ( v20 == nullptr )
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    }
  }
  else
  {
    if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
    {
      sub_5B3AF0(&dword_20D4A60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
      __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
    }
    v12 = nullptr;
    if ( byte_20D4A64 == 0 )
      v12 = (int *)(&dword_20D4A60);
    v46 = (g4_cxa_guard_t *)sub_5B4770(v12, v41, v44);
  }
  if ( v46 == nullptr )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  if ( v42 == 2 )
  {
    *(float *)&v50 = 0.0;
    v51 = 0.0;
    v52 = 0.0;
    if ( v41 >= 0 )
    {
      if ( v41 == 17 )
      {
        if ( *(uint32_t *)(v43 + 4104) == 0 )
          return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
        sub_989330(v43, *(uint32_t *)(v43 + 4104));
        (*(void (**)(uint32_t *))(**(uint32_t **)(v43 + 4104) + 52))(v53);
        v50 = (void *)v53[0];
        v51 = *(float *)&v53[1];
        v52 = *(float *)&v53[2];
        v26 = 0;
        goto LABEL_63;
      }
      if ( v41 == 11 )
      {
        if ( (uint8_t)sub_986BB0(v43) != 0 )
        {
          sub_986B80(v54);
          v50 = (void *)v54[0];
          v51 = *(float *)&v54[1];
          v52 = *(float *)&v54[2];
          v26 = 0;
        }
        else
        {
          if ( *(uint8_t *)(v43 + 189) == 0 )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
          if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
          {
            sub_971D40(&dword_20D3BC0);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
            __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
          }
          v29 = nullptr;
          if ( byte_20D3BC4 == 0 )
            v29 = (int *)(&dword_20D3BC0);
          if ( (int)sub_971F30(v29) <= 0 )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
          (*(void (**)(uint32_t *))(*(uint32_t *)v43 + 52))(v55);
          v50 = (void *)v55[0];
          v51 = *(float *)&v55[1];
          v52 = *(float *)&v55[2];
          v26 = 0;
        }
      }
      else
      {
        if ( v41 == 7 )
        {
          if ( (uint8_t)sub_5EC9B0(v46) != 0 )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
        }
        else if ( (unsigned int)(*(uint32_t *)(v43 + 4296) - 2) > 2 )
        {
          v28 = *(uint32_t *)(v43 + 4280);
          if ( v28 != 0 && *(uint32_t *)(v28 + 532) - *(uint32_t *)(v28 + 528) > 19 )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
        }
        if ( v46 == *(g4_cxa_guard_t **)(v43 + 4104) )
        {
          v30 = *(uint32_t *)(v43 + 1872);
          if ( (v30 & 0x200000) != 0 || (v30 & 0x400000) != 0 )
          {
            (*(void (**)(float *))(*v46 + 52))(v57);
            (*(void (**)(float *))(*(uint32_t *)v43 + 52))(v56);
            v58[0] = v56[0] - v57[0];
            v58[1] = v56[1] - v57[1];
            v58[2] = v56[2] - v57[2];
            v31 = (float *)sub_5ED3D0(v58);
            obja = *v31 * 500.0;
            v36 = v31[1] * 500.0;
            v33 = 500.0 * v31[2];
            (*(void (**)(float *))(*(uint32_t *)v43 + 52))(v59);
            v23 = v36 + v59[1];
            v24 = v33 + v59[2];
            v25 = obja + v59[0];
            goto LABEL_62;
          }
        }
        if ( v41 != 18 )
        {
          if ( *(uint8_t *)(v43 + 2357) != 0 )
          {
            v21 = *(uint32_t *)(v43 + 1872);
            if ( (v21 & 0x200000) != 0 || (v21 & 0x400000) != 0 )
            {
              (*(void (**)(float *))(*v46 + 52))(v62);
              (*(void (**)(float *))(*(uint32_t *)v43 + 52))(v61);
              v63[0] = v61[0] - v62[0];
              v63[1] = v61[1] - v62[1];
              v63[2] = v61[2] - v62[2];
              v22 = (float *)sub_5ED3D0(v63);
              obj = *v22 * 500.0;
              v34 = v22[1] * 500.0;
              v32 = 500.0 * v22[2];
              (*(void (**)(float *))(*(uint32_t *)v43 + 52))(v64);
              v23 = v34 + v64[1];
              v24 = v32 + v64[2];
              v25 = obj + v64[0];
LABEL_62:
              *(float *)&v50 = v25;
              v26 = 2;
              v51 = v23;
              v52 = v24;
              goto LABEL_63;
            }
          }
          goto LABEL_65;
        }
        sub_9A5920(&v48);
        v37 = v48;
        sub_5F76C0(&v48, 0);
        if ( v37 != 0 )
        {
          sub_9A5920(&v49);
          v27 = v49;
          sub_5F76C0(&v49, 0);
          if ( v27 == nullptr )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
          goto LABEL_66;
        }
        sub_986390(v60);
        v50 = (void *)v60[0];
        v51 = *(float *)&v60[1];
        v52 = *(float *)&v60[2];
        v26 = 0;
      }
LABEL_63:
      v35 = v26;
      (*(void (**)(float *))(*(uint32_t *)v43 + 52))(&v65);
      if ( (float)((float)((float)((float)(v66 - v51) * (float)(v66 - v51))
                         + (float)((float)(v65 - *(float *)&v50) * (float)(v65 - *(float *)&v50)))
                 + (float)((float)(v67 - v52) * (float)(v67 - v52))) > 625.0 )
        sub_9B4460(v43, &v50, v35, 25, 0, 3);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    }
LABEL_65:
    v27 = v46;
LABEL_66:
    sub_9B71D0(v43, v27, 1);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  }
  if ( v42 <= 2 )
  {
    if ( v42 == 1 )
    {
      v13 = v43;
      v14 = *(uint32_t *)(v43 + 4240);
      if ( v14 != 0 )
      {
        sub_5459F0(v43 + 4240, v14 + 16);
        v13 = v43;
      }
      v47 = v43 + 4240;
      *(uint32_t *)(v13 + 4240) = (uint32_t)(uintptr_t)(v46);
      v15 = (uint32_t *)v46[5];
      if ( v15 == (uint32_t *)v46[6] )
      {
        g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux((int)(uintptr_t)(v46 + 4), (void *)v46[5], (int)(uintptr_t)(&v47));
      }
      else
      {
        v16 = 0;
        if ( v15 != nullptr )
        {
          *v15 = v43 + 4240;
          v16 = v46[5];
        }
        v46[5] = v16 + 4;
      }
    }
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  }
  if ( v42 == 3 )
  {
    sub_9A5670(v43 + 2296, v46);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  }
  if ( v42 == 4 )
  {
    v17 = (int *)G4_VCALL<int>(v46, 16);
    if ( v17 != nullptr )
    {
      if ( v17 == (int *)(uintptr_t)(&dword_20D68D0) )
        goto LABEL_36;
      while ( 1 )
      {
        v17 = (int *)v17[1];
        if ( v17 == nullptr )
          break;
        if ( v17 == (int *)(uintptr_t)(&dword_20D68D0) )
          goto LABEL_36;
      }
    }
    v46 = nullptr;
LABEL_36:
    sub_9AC6E0(v43, v46);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
}

// ----------------------------------------------------------------------------
// Function: sub_859E00_ea859e00  (binary VA: 0x859e00)
// Original: sub_859E00
// ----------------------------------------------------------------------------
int sub_859E00_ea859e00(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void ***v3;
  void **v4;
  void **v5;
  void *v6;
  int *v7;
  int v8;
  void ***v9;
  void **v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  unsigned int v15;
  void **v16;
  unsigned int v17;
  int v18;
  int v19;
  char v20;
  uint32_t *v21;
  uint8_t v22;
  grapher::ActorVariable::Self *v23;
  grapher::ActorVariable::Self *v24;
  int v25;
  int v26;
  void **v27;
  void **v28;
  void **v29;
  void **v30;
  uint8_t v32;
  int v33;
  grapher::ActorVariable::Self *Variable;
  typedef grapher::ActorContext::Self *_g4_t_v35;
  typedef void **_g4_t_v36;
  typedef int _g4_t_v37;
  typedef grapher::ActorContext::Self *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef void (*_g4_t_v40)(uint32_t *, int, uint32_t);
  typedef void (*_g4_t_v41)(uint32_t *, int, uint32_t);
  typedef grapher::ActorBase::Self *_g4_t_v42;
  typedef void **_g4_t_v43;
  typedef int _g4_t_v44;
  typedef void *_g4_t_v45[2];
  typedef void *_g4_t_v46[2];
  typedef void *_g4_t_v47;
  typedef void **_g4_t_v48;
  typedef uint32_t _g4_t_v49[9];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v35)) > _g4_s0 ? (4u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v36)) > _g4_s1 ? (16u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v37)) > _g4_s2 ? (20u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v38)) > _g4_s3 ? (28u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v39)) > _g4_s4 ? (32u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v40)) > _g4_s5 ? (32u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v41)) > _g4_s6 ? (32u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v42)) > _g4_s7 ? (36u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v43)) > _g4_s8 ? (40u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v44)) > _g4_s9 ? (68u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v45)) > _g4_s10 ? (72u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v46)) > _g4_s11 ? (80u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v47)) > _g4_s12 ? (88u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v48)) > _g4_s13 ? (92u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v49)) > _g4_s14 ? (108u + sizeof(_g4_t_v49)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);

  v49[5] = (uint32_t)(uintptr_t)(&a1);
  v42 = a1;
  v38 = a3;
  v47 = &v47;
  v48 = &v47;
  sub_856780(a1, 1, (int)(uintptr_t)(&v47), (int)(uintptr_t)(a3), 1);
  v3 = (void ***)v47;
  if ( v47 == &v47 )
  {
    v37 = 0;
  }
  else
  {
    v37 = *((uint32_t *)v47 + 2);
    while ( 1 )
    {
      v4 = *v3;
      opDelete(v3);
      if ( v4 == &v47 )
        break;
      v3 = (void ***)v4;
    }
  }
  grapher::ActorBase::GetVariable(v42, 1);
  v35 = v38;
  sub_837C70(&v44);
  v45[0] = v45;
  v45[1] = v45;
  sub_856EF0(v38);
  v46[0] = v46;
  v46[1] = v46;
  v47 = &v47;
  v48 = &v47;
  sub_856780(v42, 1, (int)(uintptr_t)(&v47), (int)(uintptr_t)(v38), 0x7FFFFFFF);
  if ( v47 != &v47 )
  {
    v5 = (void **)v47;
    do
    {
      v6 = v5[2];
      if ( v6 != nullptr )
      {
        v36 = v5;
        v7 = (int *)G4_VCALL<int>(v6, 16);
        v5 = v36;
        if ( v7 != nullptr )
        {
          while ( v7 != (int *)(uintptr_t)(&dword_20DE814) )
          {
            v7 = (int *)v7[1];
            if ( v7 == nullptr )
              goto LABEL_15;
          }
          v8 = opNew(0xCu);
          if ( v8 != -8 )
            *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(v6);
          sub_1901920(v8, v46);
          v5 = v36;
        }
      }
LABEL_15:
      v5 = (void **)*v5;
    }
    while ( v5 != &v47 );
    v9 = (void ***)v47;
    if ( v47 != &v47 )
    {
      while ( 1 )
      {
        v10 = *v9;
        opDelete(v9);
        if ( v10 == &v47 )
          break;
        v9 = (void ***)v10;
      }
    }
  }
  v43 = (void **)v45[0];
  if ( v45[0] != v45 )
  {
    v11 = v37;
    v12 = (uint32_t *)(v45[0]);
    do
    {
      while ( 1 )
      {
        v13 = (uint32_t *)v12[2];
        if ( v13 != nullptr
          && (uint8_t)sub_C170A0(v12[2]) != 0
          && G4_VCALL<uint8_t>(v13, 208) == 0 )
        {
          if ( v37 != 0 )
          {
            v14 = (uint32_t *)(v46[0]);
            v15 = lrand48();
            v16 = (void **)v46[0];
            v39 = 0;
            if ( v46[0] != v46 )
            {
              v17 = 0;
              do
              {
                v16 = (void **)*v16;
                ++v17;
              }
              while ( v16 != v46 );
              v39 = v17;
            }
            v18 = v15 % v39;
            v19 = v15 % v39 - 1;
            if ( (int)(v15 % v39) <= 0 )
            {
              v33 = v18 + 1;
              if ( v18 != 0 )
              {
                do
                {
                  ++v33;
                  v14 = (uint32_t *)v14[1];
                }
                while ( v33 != 1 );
              }
            }
            else
            {
              do
              {
                --v19;
                v14 = (uint32_t *)*v14;
              }
              while ( v19 != -1 );
            }
            v11 = v14[2];
          }
          if ( g4_std::string::compare((int)(uintptr_t)(&v44), "Random") != 0 )
          {
            if ( v11 != 0 )
            {
              sub_9A5670(v13 + 574, v11);
              v20 = sub_97FD30(v13);
              v21 = v13 + 574;
              if ( v20 == 0 )
              {
                Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v42, 2);
                v13[723] = (uint32_t)(uintptr_t)(sub_837200(v42, Variable, v38));
                v21 = v13 + 574;
              }
              sub_9A5670(v21, v11);
              (*(void (**)(uint32_t *, int))(*(uint32_t *)v11 + 52))(v49, v11);
              sub_986B50(v13, v49);
              G4_VCALL<void>(v13, 120);
              v40 = *(void (**)(uint32_t *, int, uint32_t))(*v13 + 120);
              v22 = G4_VCALL<int>(v13, 564);
              v40(v13, 188, v22);
              v23 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v42, 3);
              *((uint8_t *)v13 + 3572) = sub_837730(v42, v23, v38) ^ 1;
            }
            else
            {
              if ( v13[574] == v13[1061] )
                sub_9B71D0(v13, 0, 1);
              sub_9A5670(v13 + 574, 0);
              sub_9A5670(v13 + 574, 0);
              G4_VCALL<void>(v13, 120, 189, 0);
              G4_VCALL<void>(v13, 120, 188, 0);
              *((uint8_t *)v13 + 3572) = 0;
            }
          }
          else
          {
            G4_VCALL<void>(v13, 120, 189, 1, v35);
            v41 = *(void (**)(uint32_t *, int, uint32_t))(*v13 + 120);
            v32 = G4_VCALL<int>(v13, 564);
            v41(v13, 188, v32);
            *((uint8_t *)v13 + 3572) = 0;
          }
          if ( (v24 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v42, 4),
                *((uint8_t *)v13 + 1945) = sub_837730(v42, v24, v38),
                G4_VCALL<int>(v13, 456) != 0)
            && (v25 = v13[468], v26 = v13[469], (v25 & 0x100) != 0)
            && v25 >= 0
            && (v26 & 1) == 0
            && (v26 & 4) == 0
            || G4_VCALL<int>(v13, 456) != 0
            && (v25 = v13[468], v26 = v13[469], (v25 & 0x800) != 0) )
          {
            if ( v13[922] == 0 )
              break;
          }
        }
        v12 = (uint32_t *)(*v43);
        v43 = (void **)*v43;
        if ( v43 == v45 )
          goto LABEL_45;
      }
      v13[469] = v26;
      v13[468] = v25 | 0x800000;
      sub_9B7760(v13, 1);
      v12 = (uint32_t *)(*v43);
      v43 = (void **)*v43;
    }
    while ( v43 != v45 );
  }
LABEL_45:
  grapher::ActorBase::FireEvent(v42, 1, v38);
  v27 = (void **)v46[0];
  if ( v46[0] != v46 )
  {
    while ( 1 )
    {
      v28 = (void **)*v27;
      opDelete(v27);
      if ( v28 == v46 )
        break;
      v27 = v28;
    }
  }
  v29 = (void **)v45[0];
  if ( v45[0] != v45 )
  {
    while ( 1 )
    {
      v30 = (void **)*v29;
      opDelete(v29);
      if ( v30 == v45 )
        break;
      v29 = v30;
    }
  }
  return ((g4_std::string::Destroy(&v44)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85A3E0  (binary VA: 0x85a3e0)
// Original: sub_85A3E0
// ----------------------------------------------------------------------------
uint32_t * sub_85A3E0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_85A400_ea85a400  (binary VA: 0x85a400)
// Original: sub_85A400
// ----------------------------------------------------------------------------
void sub_85A400_ea85a400()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_85A410  (binary VA: 0x85a410)
// Original: sub_85A410
// ----------------------------------------------------------------------------
int sub_85A410(int a1)
{
  *(uint8_t *)(a1 + 4) = 1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2048CA0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_85A430_ea85a430  (binary VA: 0x85a430)
// Original: sub_85A430
// ----------------------------------------------------------------------------
uint32_t * sub_85A430_ea85a430(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_85A450_ea85a450  (binary VA: 0x85a450)
// Original: sub_85A450
// ----------------------------------------------------------------------------
void sub_85A450_ea85a450(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_85A480  (binary VA: 0x85a480)
// Original: sub_85A480
// ----------------------------------------------------------------------------
void sub_85A480(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_85A4B0  (binary VA: 0x85a4b0)
// Original: sub_85A4B0
// ----------------------------------------------------------------------------
void sub_85A4B0(uint8_t *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2048CA0);
  a1[4] = 1;
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_85A4E0  (binary VA: 0x85a4e0)
// Original: sub_85A4E0
// ----------------------------------------------------------------------------
bool sub_85A4E0(uint32_t *a1, int a2, int a3)
{
  bool result;

  result = false;
  if ( a2 != a3 )
    return sub_7CD120(a1, a2, a3) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_85A520  (binary VA: 0x85a520)
// Original: sub_85A520
// ----------------------------------------------------------------------------
unsigned int sub_85A520(uint32_t *a1, int a2, int a3)
{
  unsigned int result;

  result = 0;
  if ( a2 != a3 )
    return (unsigned int)sub_7CD120(a1, a2, a3) >> 31;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_85A560  (binary VA: 0x85a560)
// Original: sub_85A560
// ----------------------------------------------------------------------------
int sub_85A560(uint32_t *a1)
{
  return sub_85A590((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_85A570  (binary VA: 0x85a570)
// Original: sub_85A570
// ----------------------------------------------------------------------------
int sub_85A570(uint32_t *a1)
{
  return sub_85A590((char *)a1 + *(uint32_t *)(*a1 - 24));
}

// ----------------------------------------------------------------------------
// Function: sub_85A580  (binary VA: 0x85a580)
// Original: sub_85A580
// ----------------------------------------------------------------------------
int sub_85A580(int a1)
{
  return sub_85A590(a1 - 4);
}



// ============================================================================
// Address:   0x85a590 (size: 154 bytes)
// Symbol:    sub_85A590
// Demangled: sub_85A590
// ============================================================================
int (**sub_85A590(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_208ACF0);
  a1[1] = ((uint32_t)(uintptr_t)&off_208AD20);
  a1[66] = (uint32_t)(uintptr_t)(&off_208AE54);
  a1[67] = (uint32_t)(uintptr_t)(&off_208AE74);
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)(a1 + 1));
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  a1[66] = (uint32_t)(uintptr_t)(off_208AAEC);
  *(uint32_t *)((char *)off_208AAEC[-3] + (uint32_t)(uintptr_t)(a1) + 264) = (uint32_t)(uintptr_t)(&off_208AB0C);
  a1[67] = (uint32_t)(uintptr_t)(&off_20483C0);
  return (int (**)(int))(uintptr_t)(&off_20483C0);
}
// ----------------------------------------------------------------------------
// Function: sub_85A630  (binary VA: 0x85a630)
// Original: sub_85A630
// ----------------------------------------------------------------------------
bool sub_85A630(uint32_t *a1, int a2, int a3)
{
  bool result;

  result = true;
  if ( a2 != a3 )
    return sub_7CD120(a1, a2, a3) > 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_85A670  (binary VA: 0x85a670)
// Original: sub_85A670
// ----------------------------------------------------------------------------
int sub_85A670(int a1)
{
  int result;
  int v2;

  result = 0;
  if ( a1 != 0 && *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 404);
    if ( v2 != 0 )
      return G4_VCALL<int>(v2, 36);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_85A6B0  (binary VA: 0x85a6b0)
// Original: sub_85A6B0
// ----------------------------------------------------------------------------
int sub_85A6B0(char *a1)
{
  return ((sub_85A6E0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85A6C0  (binary VA: 0x85a6c0)
// Original: sub_85A6C0
// ----------------------------------------------------------------------------
int sub_85A6C0(char *a1)
{
  return ((sub_85A6E0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 24)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85A6D0  (binary VA: 0x85a6d0)
// Original: sub_85A6D0
// ----------------------------------------------------------------------------
int sub_85A6D0(int a1)
{
  return ((sub_85A6E0((void *)(a1 - 4))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85A6E0  (binary VA: 0x85a6e0)
// Original: sub_85A6E0
// ----------------------------------------------------------------------------
void sub_85A6E0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_208ACF0);
  a1[1] = ((uint32_t)(uintptr_t)&off_208AD20);
  a1[66] = (uint32_t)(uintptr_t)(&off_208AE54);
  a1[67] = (uint32_t)(uintptr_t)(&off_208AE74);
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)(a1 + 1));
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  a1[66] = (uint32_t)(uintptr_t)(off_208AAEC);
  *(uint32_t *)((char *)off_208AAEC[-3] + (uint32_t)(uintptr_t)(a1) + 264) = (uint32_t)(uintptr_t)(&off_208AB0C);
  a1[67] = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_85A790  (binary VA: 0x85a790)
// Original: sub_85A790
// ----------------------------------------------------------------------------
int sub_85A790(int a1)
{
  int v1;
  int v3;
  int v4;
  typedef const char *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef char *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v1 = 0;
  if ( a1 != 0 && *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 404);
    if ( v3 != 0 && ((*(int (**)(uint32_t))(*(uint32_t *)v3 + 32))(*(uint32_t *)(a1 + 404)) & 2) != 0 )
    {
      sub_AB7AC0((int)(uintptr_t)(&v6), (glf::Self *)"Player");
      v4 = glf::Stricmp(*(glf::Self **)(a1 + 408), v7, v5);
      LOBYTE(v4) = v4 != 0;
      v1 = v4;
      g4_std::string::Destroy(&v7);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_85A830  (binary VA: 0x85a830)
// Original: sub_85A830
// ----------------------------------------------------------------------------
int sub_85A830(int a1, int a2)
{
  uint8_t (*v2)(int);
  int v3;
  int v4;

  v2 = *(uint8_t (**)(int))(a1 + 4);
  if ( v2 != nullptr && v2(a2) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 8);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = a2;
    sub_1901920(v4, v3);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_85A8A0  (binary VA: 0x85a8a0)
// Original: sub_85A8A0
// ----------------------------------------------------------------------------
int sub_85A8A0(uint32_t *a1)
{
  return sub_85A8D0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_85A8B0  (binary VA: 0x85a8b0)
// Original: sub_85A8B0
// ----------------------------------------------------------------------------
int sub_85A8B0(uint32_t *a1)
{
  return sub_85A8D0((char *)a1 + *(uint32_t *)(*a1 - 24));
}

// ----------------------------------------------------------------------------
// Function: sub_85A8C0  (binary VA: 0x85a8c0)
// Original: sub_85A8C0
// ----------------------------------------------------------------------------
int sub_85A8C0(int a1)
{
  return sub_85A8D0(a1 - 4);
}



// ============================================================================
// Address:   0x85a8d0 (size: 301 bytes)
// Symbol:    sub_85A8D0
// Demangled: sub_85A8D0
// ============================================================================
int (**sub_85A8D0(uint32_t *a1))(int)
{
  glitch::video::CVertexStreams::Self *v1;
  glitch::video::CMaterial::Self *v2;
  bool v3;

  v1 = (glitch::video::CVertexStreams::Self *)a1[112];
  *a1 = (uint32_t)(uintptr_t)(&off_2086150);
  a1[1] = ((uint32_t)(uintptr_t)&off_20861AC);
  a1[113] = ((uint32_t)(uintptr_t)&off_20862E0);
  a1[114] = (uint32_t)(uintptr_t)(&off_2086300);
  if ( v1 != nullptr && __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v1);
    gll_operator_delete_arr((int)(uintptr_t)(v1));
  }
  v2 = (glitch::video::CMaterial::Self *)a1[74];
  if ( v2 != nullptr )
  {
    v3 = *(uint32_t *)v2 == 2;
    _mm_mfence();
    if ( v3 )
      glitch::video::CMaterial::removeFromRootSceneNode(v2);
    if ( __sync_fetch_and_add((volatile int32_t *)v2, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v2);
      gll_operator_delete_arr((int)(uintptr_t)(v2));
    }
  }
  *a1 = (uint32_t)(uintptr_t)(&off_2085F70);
  a1[1] = ((uint32_t)(uintptr_t)&off_2085FA0);
  *(uint32_t *)((char *)*(&off_2085F70 - 3) + (uint32_t)(uintptr_t)(a1)) = (uint32_t)(uintptr_t)(&off_20860D4);
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = (uint32_t)(uintptr_t)(&off_20860F4);
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)(a1 + 1));
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  a1[113] = (uint32_t)(uintptr_t)(off_2085DAC);
  *(uint32_t *)((char *)off_2085DAC[-3] + (uint32_t)(uintptr_t)(a1) + 452) = (uint32_t)(uintptr_t)(&off_2085DCC);
  a1[114] = (uint32_t)(uintptr_t)(&off_20483C0);
  return (int (**)(int))(uintptr_t)(&off_20483C0);
}
// ----------------------------------------------------------------------------
// Function: sub_85AA00  (binary VA: 0x85aa00)
// Original: sub_85AA00
// ----------------------------------------------------------------------------
int sub_85AA00(uint32_t *a1, int a2)
{
  int v2;
  bool v4; // bp
  int v5;
  int v6;
  char *v7;
  char *v8;
  char *v9;
  int v10;
  int v11;
  typedef const char *_g4_t_lpdso_handle;
  typedef int _g4_t_v13;
  typedef char *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_lpdso_handle)) > _g4_s0 ? (8u + sizeof(_g4_t_lpdso_handle)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v13)) > _g4_s1 ? (36u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v14)) > _g4_s2 ? (44u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  if ( a1[1] != 0 && a2 != 0 && *(uint32_t *)(*(uint32_t *)(a2 + 408) - 12) != 0 )
  {
    v2 = *(uint32_t *)(a2 + 404);
    if ( v2 != 0 && ((*(int (**)(uint32_t))(*(uint32_t *)v2 + 32))(*(uint32_t *)(a2 + 404)) & 2) != 0 )
    {
      sub_AB7AC0((int)(uintptr_t)(&v13), (glf::Self *)"Player");
      v4 = glf::Stricmp(*(glf::Self **)(a2 + 408), v14, lpdso_handle) != 0;
      g4_std::string::Destroy(&v14);
      if ( v4 )
      {
        v6 = sub_8F0680(v5);
        if ( byte_20D5DE0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DE0) != 0 )
        {
          sub_787620((int)(uintptr_t)(&unk_20D5E00));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DE0);
          __cxa_atexit((void (*)(void *))sub_7BEFE0, &unk_20D5E00, &unk_20D1280);
        }
        v7 = nullptr;
        if ( byte_20D5E04 == 0 )
          v7 = (char *)&unk_20D5E00;
        v8 = (char *)a1[1];
        v9 = &v7[a1[2]];
        if ( ((uint8_t)(uintptr_t)(v8) & 1) != 0 )
          v8 = *(char **)&v8[*(uint32_t *)v9 - 1];
        if ( ((uint8_t (*)(char *, uint32_t, uint32_t))v8)(
               v9,
               *(uint32_t *)(v6 + 1892),
               *(uint32_t *)(a2 + 1892)) != 0 )
        {
          v10 = a1[3];
          v11 = opNew(0xCu);
          if ( v11 != -8 )
            *(uint32_t *)(v11 + 8) = a2;
          sub_1901920(v11, v10);
        }
      }
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_85ABA0  (binary VA: 0x85aba0)
// Original: sub_85ABA0
// ----------------------------------------------------------------------------
int sub_85ABA0(char *a1)
{
  return ((sub_85ABD0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85ABB0  (binary VA: 0x85abb0)
// Original: sub_85ABB0
// ----------------------------------------------------------------------------
int sub_85ABB0(char *a1)
{
  return ((sub_85ABD0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 24)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85ABC0  (binary VA: 0x85abc0)
// Original: sub_85ABC0
// ----------------------------------------------------------------------------
int sub_85ABC0(int a1)
{
  return ((sub_85ABD0((void *)(a1 - 4))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85ABD0  (binary VA: 0x85abd0)
// Original: sub_85ABD0
// ----------------------------------------------------------------------------
void sub_85ABD0(uint32_t *a1)
{
  glitch::video::CVertexStreams::Self *v1;
  glitch::video::CMaterial::Self *v2;
  bool v3;

  v1 = (glitch::video::CVertexStreams::Self *)a1[112];
  *a1 = (uint32_t)(uintptr_t)(&off_2086150);
  a1[1] = ((uint32_t)(uintptr_t)&off_20861AC);
  a1[113] = ((uint32_t)(uintptr_t)&off_20862E0);
  a1[114] = (uint32_t)(uintptr_t)(&off_2086300);
  if ( v1 != nullptr && __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v1);
    gll_operator_delete_arr((int)(uintptr_t)(v1));
  }
  v2 = (glitch::video::CMaterial::Self *)a1[74];
  if ( v2 != nullptr )
  {
    v3 = *(uint32_t *)v2 == 2;
    _mm_mfence();
    if ( v3 )
      glitch::video::CMaterial::removeFromRootSceneNode(v2);
    if ( __sync_fetch_and_add((volatile int32_t *)v2, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v2);
      gll_operator_delete_arr((int)(uintptr_t)(v2));
    }
  }
  *a1 = (uint32_t)(uintptr_t)(&off_2085F70);
  a1[1] = ((uint32_t)(uintptr_t)&off_2085FA0);
  *(uint32_t *)((char *)*(&off_2085F70 - 3) + (uint32_t)(uintptr_t)(a1)) = (uint32_t)(uintptr_t)(&off_20860D4);
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = (uint32_t)(uintptr_t)(&off_20860F4);
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)(a1 + 1));
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  a1[113] = (uint32_t)(uintptr_t)(off_2085DAC);
  *(uint32_t *)((char *)off_2085DAC[-3] + (uint32_t)(uintptr_t)(a1) + 452) = (uint32_t)(uintptr_t)(&off_2085DCC);
  a1[114] = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_85AD10  (binary VA: 0x85ad10)
// Original: sub_85AD10
// ----------------------------------------------------------------------------
int sub_85AD10(char *a1)
{
  return ((sub_85AD40(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85AD20  (binary VA: 0x85ad20)
// Original: sub_85AD20
// ----------------------------------------------------------------------------
int sub_85AD20(char *a1)
{
  return ((sub_85AD40(&a1[*(uint32_t *)(*(uint32_t *)a1 - 24)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85AD30  (binary VA: 0x85ad30)
// Original: sub_85AD30
// ----------------------------------------------------------------------------
int sub_85AD30(int a1)
{
  return ((sub_85AD40((void *)(a1 - 4))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_85AD40  (binary VA: 0x85ad40)
// Original: sub_85AD40
// ----------------------------------------------------------------------------
void sub_85AD40(uint32_t *a1)
{
  volatile int32_t *v1;
  glitch::video::CVertexStreams::Self *v2;
  glitch::video::CMaterial::Self *v3;
  bool v4;

  v1 = (volatile int32_t *)a1[115];
  *a1 = (uint32_t)(uintptr_t)(&off_205F910);
  a1[1] = ((uint32_t)(uintptr_t)&off_205F96C);
  a1[121] = ((uint32_t)(uintptr_t)&off_205FAA0);
  a1[122] = (uint32_t)(uintptr_t)(&off_205FAC0);
  if ( v1 != nullptr && __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8);
    G4_VCALL<void>(v1, 4);
  }
  *a1 = (uint32_t)(uintptr_t)(&off_205F6D0);
  a1[1] = ((uint32_t)(uintptr_t)&off_205F72C);
  *(uint32_t *)((char *)*(&off_205F6D0 - 3) + (uint32_t)(uintptr_t)(a1)) = ((uint32_t)(uintptr_t)&off_205F860);
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = (uint32_t)(uintptr_t)(&off_205F880);
  v2 = (glitch::video::CVertexStreams::Self *)a1[112];
  if ( v2 != nullptr && __sync_fetch_and_add((volatile int32_t *)v2, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v2);
    gll_operator_delete_arr((int)(uintptr_t)(v2));
  }
  v3 = (glitch::video::CMaterial::Self *)a1[74];
  if ( v3 != nullptr )
  {
    v4 = *(uint32_t *)v3 == 2;
    _mm_mfence();
    if ( v4 )
      glitch::video::CMaterial::removeFromRootSceneNode(v3);
    if ( __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v3);
      gll_operator_delete_arr((int)(uintptr_t)(v3));
    }
  }
  *a1 = (uint32_t)(uintptr_t)(&off_205F530);
  a1[1] = ((uint32_t)(uintptr_t)&off_205F560);
  *(uint32_t *)((char *)*(&off_205F530 - 3) + (uint32_t)(uintptr_t)(a1)) = (uint32_t)(uintptr_t)(&off_205F694);
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = (uint32_t)(uintptr_t)(&off_205F6B4);
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)(a1 + 1));
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  a1[121] = (uint32_t)(uintptr_t)(off_205F36C);
  *(uint32_t *)((char *)off_205F36C[-3] + (uint32_t)(uintptr_t)(a1) + 484) = (uint32_t)(uintptr_t)(&off_205F38C);
  a1[122] = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_85AED0  (binary VA: 0x85aed0)
// Original: sub_85AED0
// ----------------------------------------------------------------------------
int sub_85AED0(uint32_t *a1)
{
  return sub_85AF00((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_85AEE0  (binary VA: 0x85aee0)
// Original: sub_85AEE0
// ----------------------------------------------------------------------------
int sub_85AEE0(uint32_t *a1)
{
  return sub_85AF00((char *)a1 + *(uint32_t *)(*a1 - 24));
}

// ----------------------------------------------------------------------------
// Function: sub_85AEF0  (binary VA: 0x85aef0)
// Original: sub_85AEF0
// ----------------------------------------------------------------------------
int sub_85AEF0(int a1)
{
  return sub_85AF00(a1 - 4);
}



// ============================================================================
// Address:   0x85af00 (size: 389 bytes)
// Symbol:    sub_85AF00
// Demangled: sub_85AF00
// ============================================================================
int (**sub_85AF00(uint32_t *a1))(int)
{
  volatile int32_t *v1;
  glitch::video::CVertexStreams::Self *v2;
  glitch::video::CMaterial::Self *v3;
  bool v4;

  v1 = (volatile int32_t *)a1[115];
  *a1 = (uint32_t)(uintptr_t)(&off_205F910);
  a1[1] = ((uint32_t)(uintptr_t)&off_205F96C);
  a1[121] = ((uint32_t)(uintptr_t)&off_205FAA0);
  a1[122] = (uint32_t)(uintptr_t)(&off_205FAC0);
  if ( v1 != nullptr && __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8);
    G4_VCALL<void>(v1, 4);
  }
  *a1 = (uint32_t)(uintptr_t)(&off_205F6D0);
  a1[1] = ((uint32_t)(uintptr_t)&off_205F72C);
  *(uint32_t *)((char *)*(&off_205F6D0 - 3) + (uint32_t)(uintptr_t)(a1)) = ((uint32_t)(uintptr_t)&off_205F860);
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = (uint32_t)(uintptr_t)(&off_205F880);
  v2 = (glitch::video::CVertexStreams::Self *)a1[112];
  if ( v2 != nullptr && __sync_fetch_and_add((volatile int32_t *)v2, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v2);
    gll_operator_delete_arr((int)(uintptr_t)(v2));
  }
  v3 = (glitch::video::CMaterial::Self *)a1[74];
  if ( v3 != nullptr )
  {
    v4 = *(uint32_t *)v3 == 2;
    _mm_mfence();
    if ( v4 )
      glitch::video::CMaterial::removeFromRootSceneNode(v3);
    if ( __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v3);
      gll_operator_delete_arr((int)(uintptr_t)(v3));
    }
  }
  *a1 = (uint32_t)(uintptr_t)(&off_205F530);
  a1[1] = ((uint32_t)(uintptr_t)&off_205F560);
  *(uint32_t *)((char *)*(&off_205F530 - 3) + (uint32_t)(uintptr_t)(a1)) = (uint32_t)(uintptr_t)(&off_205F694);
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)) = (uint32_t)(uintptr_t)(&off_205F6B4);
  glitch::scene::ISceneNode::Destroy((glitch::scene::ISceneNode::Self *)(a1 + 1));
  *a1 = (uint32_t)(uintptr_t)(&off_205DD08);
  a1[121] = (uint32_t)(uintptr_t)(off_205F36C);
  *(uint32_t *)((char *)off_205F36C[-3] + (uint32_t)(uintptr_t)(a1) + 484) = (uint32_t)(uintptr_t)(&off_205F38C);
  a1[122] = (uint32_t)(uintptr_t)(&off_20483C0);
  return (int (**)(int))(uintptr_t)(&off_20483C0);
}
// ----------------------------------------------------------------------------
// Function: g4_std::list_LevelObject_22413e::push_back  (binary VA: 0x85b090)
// Original: std::list<LevelObject *>::push_back
// ----------------------------------------------------------------------------
int g4_std::list_LevelObject_22413e::push_back(int a1, uint32_t *a2)
{
  int v2;

  v2 = opNew(0xCu);
  if ( v2 != -8 )
    *(uint32_t *)(v2 + 8) = *a2;
  return sub_1901920(v2, a1);
}


