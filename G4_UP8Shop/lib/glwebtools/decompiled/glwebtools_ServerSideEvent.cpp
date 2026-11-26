#include "Core/Utils/DecompTypes.h"
#include "glwebtools_ServerSideEvent.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::SetEventName  (binary VA: 0x1407e10)
// Original: glwebtools::ServerSideEvent::SetEventName
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEvent::SetEventName(int a1, int a2)
{
  g4_std::string::assign_str(a1, a2);
  *(uint8_t *)(a1 + 6) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::AddData  (binary VA: 0x1407e50)
// Original: glwebtools::ServerSideEvent::AddData
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEvent::AddData(int a1, int a2)
{
  int v3;
  void *v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  if ( *(uint8_t *)(a1 + 14) != 0 )
  {
    g4_std::string::construct_copy(&v5, a1 + 8);
    g4_std_compat::string_reserve((int)(uintptr_t)(&v5), 1u, 10);
    g4_std::string::construct_copy(v6, &v5);
    g4_std::string::append_str(v6, a2);
    g4_std::string::assign_str(a1 + 8, v6);
    v3 = v6[0];
    *(uint8_t *)(a1 + 14) = 1;
    if ( (uint32_t *)(v3 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v3 - 12));
    }
    v4 = (void *)(v5 - 12);
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
  }
  else
  {
    g4_std::string::assign_str(a1 + 8, a2);
    *(uint8_t *)(a1 + 14) = 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::SetLastEventId  (binary VA: 0x1407f70)
// Original: glwebtools::ServerSideEvent::SetLastEventId
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEvent::SetLastEventId(int a1, int a2)
{
  g4_std::string::assign_str(a1 + 16, a2);
  *(uint8_t *)(a1 + 22) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::SetRetry  (binary VA: 0x1407fc0)
// Original: glwebtools::ServerSideEvent::SetRetry
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEvent::SetRetry(glwebtools::ServerSideEvent::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 6) = a2;
  *((uint8_t *)self + 30) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::Clear  (binary VA: 0x1407fe0)
// Original: glwebtools::ServerSideEvent::Clear
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEvent::Clear(glwebtools::ServerSideEvent::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int result;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v5 = &dword_213B814;
  g4_std::string::assign_str(self, &v5);
  v1 = v5 - 3;
  if ( v5 - 3 != dword_213B808 && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  *((uint8_t *)self + 6) = 0;
  v6 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 8, &v6);
  v2 = v6 - 3;
  if ( v6 - 3 != dword_213B808 && __sync_fetch_and_add(v6 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 14) = 0;
  v7 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 16, &v7);
  result = (int)(uintptr_t)(v7);
  v4 = v7 - 3;
  if ( v7 - 3 != dword_213B808 && __sync_fetch_and_add(v7 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  *((uint8_t *)self + 22) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint8_t *)self + 30) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::IsValid  (binary VA: 0x1408110)
// Original: glwebtools::ServerSideEvent::IsValid
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEvent::IsValid(glwebtools::ServerSideEvent::Self *self)
{
  int result;
  void *v2;
  uint32_t v3[4];

  result = 0;
  if ( *((uint8_t *)self + 14) != 0 )
  {
    g4_std::string::construct_copy(v3, (char *)self + 8);
    v2 = (void *)(v3[0] - 12);
    if ( (uint32_t *)(v3[0] - 12) == dword_213B808 )
    {
      return 1;
    }
    else
    {
      result = 1;
      if ( __sync_fetch_and_add((volatile int32_t *)(v3[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v2);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::GetEventName  (binary VA: 0x14081a0)
// Original: glwebtools::ServerSideEvent::GetEventName
// ----------------------------------------------------------------------------
glwebtools::ServerSideEvent::Self * glwebtools::ServerSideEvent::GetEventName(glwebtools::ServerSideEvent::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::GetData  (binary VA: 0x14081b0)
// Original: glwebtools::ServerSideEvent::GetData
// ----------------------------------------------------------------------------
char * glwebtools::ServerSideEvent::GetData(glwebtools::ServerSideEvent::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::GetLastEventId  (binary VA: 0x14081c0)
// Original: glwebtools::ServerSideEvent::GetLastEventId
// ----------------------------------------------------------------------------
char * glwebtools::ServerSideEvent::GetLastEventId(glwebtools::ServerSideEvent::Self *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::GetRetry  (binary VA: 0x14081d0)
// Original: glwebtools::ServerSideEvent::GetRetry
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEvent::GetRetry(glwebtools::ServerSideEvent::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::ToString  (binary VA: 0x14081e0)
// Original: glwebtools::ServerSideEvent::ToString
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEvent::ToString(glwebtools::ServerSideEvent::Self *a1, uint32_t *a2)
{
  int Retry;
  void *v4;
  void *v5;
  void *v6;
  uint32_t *v7;
  uint32_t *v8;
  char *LastEventId;
  void *v10;
  void *v11;
  char *Data;
  void *v13;
  void *v14;
  glwebtools::ServerSideEvent::Self *EventName;
  void *v16;
  void *v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int (**_g4_t_v29)(int);
  typedef int _g4_t_v30;
  typedef int (**_g4_t_v31)(int);
  typedef uint32_t _g4_t_v32[3];
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[4];
  typedef int _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef uint32_t _g4_t_v40[29];
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v25)) > _g4_s7 ? (36u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v26)) > _g4_s8 ? (40u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v27)) > _g4_s9 ? (44u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v28)) > _g4_s10 ? (48u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v29)) > _g4_s11 ? (52u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v30)) > _g4_s12 ? (56u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v31)) > _g4_s13 ? (60u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v32)) > _g4_s14 ? (64u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v33)) > _g4_s15 ? (76u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v34)) > _g4_s16 ? (80u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v35)) > _g4_s17 ? (84u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v36)) > _g4_s18 ? (88u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v37)) > _g4_s19 ? (92u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v38)) > _g4_s20 ? (96u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v39)) > _g4_s21 ? (100u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v40)) > _g4_s22 ? (104u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (220u + sizeof(_g4_t_v41)) > _g4_s23 ? (220u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (221u + sizeof(_g4_t_v42)) > _g4_s24 ? (221u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (224u + sizeof(_g4_t_v43)) > _g4_s25 ? (224u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (228u + sizeof(_g4_t_v44)) > _g4_s26 ? (228u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (232u + sizeof(_g4_t_v45)) > _g4_s27 ? (232u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (236u + sizeof(_g4_t_v46)) > _g4_s28 ? (236u + sizeof(_g4_t_v46)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 220u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 221u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 224u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 228u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 232u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 236u);

  g4_std::string::clear(a2, 0, *(uint32_t *)(*a2 - 12), 0);
  if ( *((uint8_t *)a1 + 6) != 0 )
  {
    EventName = glwebtools::ServerSideEvent::GetEventName(a1);
    sub_59E340(&v18, "event:", EventName);
    g4_std::string::construct_copy(&v19, &v18);
    g4_std_compat::string_reserve((int)(uintptr_t)(&v19), 1u, 10);
    g4_std::string::append_str(a2, &v19);
    v16 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
  }
  if ( *((uint8_t *)a1 + 14) != 0 )
  {
    Data = glwebtools::ServerSideEvent::GetData(a1);
    sub_59E340(&v20, "data:", Data);
    g4_std::string::construct_copy(&v21, &v20);
    g4_std_compat::string_reserve((int)(uintptr_t)(&v21), 1u, 10);
    g4_std::string::append_str(a2, &v21);
    v13 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
  }
  if ( *((uint8_t *)a1 + 22) != 0 )
  {
    LastEventId = glwebtools::ServerSideEvent::GetLastEventId(a1);
    sub_59E340(&v22, "id:", LastEventId);
    g4_std::string::construct_copy(&v23, &v22);
    g4_std_compat::string_reserve((int)(uintptr_t)(&v23), 1u, 10);
    g4_std::string::append_str(a2, &v23);
    v10 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
  }
  if ( *((uint8_t *)a1 + 30) == 0 )
    return 0;
  sub_1900810(v40);
  v40[28] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v40[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v46 = 0;
  v29 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v29 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v30 = 0;
  sub_19119D0((char *)&v29 + (uint32_t)(uintptr_t)(*(v29 - 3)), 0);
  v31 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v32[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v32[-1] + (uint32_t)(uintptr_t)(*(v31 - 3)), 0);
  v29 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v29 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v32[1] = 0;
  v32[2] = 0;
  v33 = 0;
  v34 = nullptr;
  v35 = 0;
  v36 = 0;
  v29 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v40[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v31 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v32[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v37);
  v38 = 24;
  v32[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v39 = &dword_213B814;
  sub_19119D0(v40, v32);
  Retry = glwebtools::ServerSideEvent::GetRetry(a1);
  sub_192D8B0(&v31, Retry);
  v24 = &dword_213B814;
  if ( v35 != 0 )
  {
    if ( v35 > (unsigned int)v33 )
    {
      sub_11A9950(&v28, v34, (uint8_t *)v35);
      g4_std::string::assign_str(&v24, &v28);
      v4 = (void *)(v28 - 12);
      if ( (uint32_t *)(v28 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_9;
      }
    }
    else
    {
      sub_11A9950(&v27, v34, (uint8_t *)v33);
      g4_std::string::assign_str(&v24, &v27);
      v4 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_9;
      }
    }
    g4_std::string::Rep::M_destroy(v4);
  }
  else
  {
    g4_std::string::assign_str(&v24, &v39);
  }
LABEL_9:
  sub_59E340(&v25, "retry:", &v24);
  g4_std::string::construct_copy(&v26, &v25);
  g4_std_compat::string_reserve((int)(uintptr_t)(&v26), 1u, 10);
  g4_std::string::append_str(a2, &v26);
  v5 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = v24 - 3;
  if ( v24 - 3 != dword_213B808 && __sync_fetch_and_add(v24 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  v29 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v40[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v31 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v32[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v8 = v39 - 3;
  if ( v39 - 3 != dword_213B808 && __sync_fetch_and_add(v39 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  v32[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v37);
  v29 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v29 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v31 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v32[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v29 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v29 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v30 = 0;
  v40[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v40);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEvent::ToString  (binary VA: 0x1408980)
// Original: glwebtools::ServerSideEvent::ToString
// ----------------------------------------------------------------------------
glwebtools::ServerSideEvent::Self * glwebtools::ServerSideEvent::ToString(glwebtools::ServerSideEvent::Self *self, glwebtools::ServerSideEvent::Self *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::ServerSideEvent::ToString(a2, self);
  return self;
}


