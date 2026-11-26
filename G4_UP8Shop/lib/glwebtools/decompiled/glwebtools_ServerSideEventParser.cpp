#include "Core/Utils/DecompTypes.h"
#include "glwebtools_ServerSideEventParser.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventParser::Field::Parse  (binary VA: 0x1406f20)
// Original: glwebtools::ServerSideEventParser::Field::Parse
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEventParser::Field::Parse(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  void *v4;
  unsigned int v5;
  void *v6;
  int result;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  if ( *(uint32_t *)(*a2 - 12) == 0 )
    return -2147483646;
  if ( *(uint8_t *)*a2 == 58 )
    return 0;
  v2 = (int)(uintptr_t)(sub_1937EB0(a2, 58, 0));
  v3 = v2;
  if ( v2 == -1 )
  {
    g4_std::string::assign_str(a1, a2);
    return 0;
  }
  sub_193A6F0(&v8, a2, 0, v2);
  g4_std::string::assign_str(a1, &v8);
  v4 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = sub_19383A0(a2, 32, v3 + 1);
  if ( v5 == -1 )
  {
    g4_std::string::clear(a1 + 4, 0, *(uint32_t *)(*(uint32_t *)(a1 + 4) - 12), 0);
    return 0;
  }
  if ( v5 > *(uint32_t *)(*a2 - 12) )
    sub_1900210("basic_string::substr");
  sub_193A6F0(v9, a2, v5, -1);
  g4_std::string::assign_str(a1 + 4, v9);
  v6 = (void *)(v9[0] - 12);
  if ( (uint32_t *)(v9[0] - 12) == dword_213B808 )
    return 0;
  result = 0;
  if ( __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventParser::Field::IsValid  (binary VA: 0x14070f0)
// Original: glwebtools::ServerSideEventParser::Field::IsValid
// ----------------------------------------------------------------------------
bool glwebtools::ServerSideEventParser::Field::IsValid(glwebtools::ServerSideEventParser::Field::Self *self)
{
  return *(uint32_t *)(*(uint32_t *)self - 12) != 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventParser::Field::ToString  (binary VA: 0x1407100)
// Original: glwebtools::ServerSideEventParser::Field::ToString
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEventParser::Field::ToString(int a1, int a2)
{
  void *v2;
  void *v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  g4_std::string::construct_copy(&v5, a1);
  g4_std::string::append((int)(uintptr_t)(&v5), ":", 1u);
  g4_std::string::construct_copy(&v6, &v5);
  g4_std::string::append_str(&v6, a1 + 4);
  g4_std::string::assign_str(a2, &v6);
  v2 = (void *)(v6 - 12);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v5 - 12);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventParser::Field::ToString  (binary VA: 0x14071f0)
// Original: glwebtools::ServerSideEventParser::Field::ToString
// ----------------------------------------------------------------------------
glwebtools::ServerSideEventParser::Field::Self * glwebtools::ServerSideEventParser::Field::ToString(glwebtools::ServerSideEventParser::Field::Self *self, int a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::ServerSideEventParser::Field::ToString(a2, (int)(uintptr_t)(self));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventParser::Clear  (binary VA: 0x1407240)
// Original: glwebtools::ServerSideEventParser::Clear
// ----------------------------------------------------------------------------
glwebtools::ServerSideEventParser::Self * glwebtools::ServerSideEventParser::Clear(glwebtools::ServerSideEventParser::Self ***self)
{
  glwebtools::ServerSideEventParser::Self *result;
  glwebtools::ServerSideEventParser::Self **v2;
  glwebtools::ServerSideEventParser::Self **v3;
  glwebtools::ServerSideEventParser::Self *v4;
  uint32_t *v5;
  glwebtools::ServerSideEventParser::Self **v6;

  result = (glwebtools::ServerSideEventParser::Self *)self;
  v2 = *self;
  v6 = *(self + 1);
  if ( *self != v6 )
  {
    v3 = *self;
    do
    {
      v4 = v3[1];
      if ( (uint32_t *)((char *)v4 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v4 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((char *)v4 - 12);
      }
      result = *v3;
      v5 = (uint32_t *)((char *)*v3 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)result - 1, 0xFFFFFFFF) <= 0 )
        result = (g4_std::string::Rep::M_destroy(v5), (glwebtools::ServerSideEventParser::Self *)0);
      v3 += 2;
    }
    while ( v6 != v3 );
  }
  *(self + 1) = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventParser::PopEvent  (binary VA: 0x14072f0)
// Original: glwebtools::ServerSideEventParser::PopEvent
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEventParser::PopEvent(glwebtools::ServerSideEventParser::Self ***self, glwebtools::ServerSideEvent::Self *a2)
{
  glwebtools::ServerSideEventParser::Self **v2;
  glwebtools::Self *v3;
  glwebtools::Self *v4;
  glwebtools::Self *EventId;
  void *v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint8_t _g4_t_v10[7];
  typedef int (**_g4_t_v11)(int);
  typedef int _g4_t_v12;
  typedef int (**_g4_t_v13)(int);
  typedef uint32_t _g4_t_v14[7];
  typedef uint8_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[5];
  typedef char _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (61u + sizeof(_g4_t_v10)) > _g4_s2 ? (61u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v11)) > _g4_s3 ? (68u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v12)) > _g4_s4 ? (72u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v13)) > _g4_s5 ? (76u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v14)) > _g4_s6 ? (80u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (108u + sizeof(_g4_t_v15)) > _g4_s7 ? (108u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v16)) > _g4_s8 ? (112u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v17)) > _g4_s9 ? (116u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (120u + sizeof(_g4_t_v18)) > _g4_s10 ? (120u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (140u + sizeof(_g4_t_v19)) > _g4_s11 ? (140u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (232u + sizeof(_g4_t_v20)) > _g4_s12 ? (232u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (236u + sizeof(_g4_t_v21)) > _g4_s13 ? (236u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (237u + sizeof(_g4_t_v22)) > _g4_s14 ? (237u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (240u + sizeof(_g4_t_v23)) > _g4_s15 ? (240u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (244u + sizeof(_g4_t_v24)) > _g4_s16 ? (244u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (248u + sizeof(_g4_t_v25)) > _g4_s17 ? (248u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (252u + sizeof(_g4_t_v26)) > _g4_s18 ? (252u + sizeof(_g4_t_v26)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 61u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 68u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 72u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 108u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 112u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 116u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 120u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 140u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 232u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 236u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 237u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 240u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 244u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 248u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 252u);

  glwebtools::ServerSideEvent::Clear(a2);
  v2 = *self;
  if ( *self == *(self + 1) )
  {
LABEL_8:
    if ( (uint8_t)glwebtools::ServerSideEvent::IsValid(a2) != 0 )
    {
      glwebtools::ServerSideEventParser::Clear(self);
      v8 = 0;
    }
    else
    {
      glwebtools::ServerSideEventParser::Clear(self);
      glwebtools::ServerSideEvent::Clear(a2);
      v8 = -2147483642;
    }
    goto LABEL_10;
  }
  while ( 1 )
  {
    while ( g4_std::string::compare((int)(uintptr_t)(v2), "event") == 0 )
    {
      v3 = (glwebtools::Self *)glwebtools::ServerSideEvent::SetEventName(a2, v2 + 1);
      glwebtools::IsOperationSuccess(v3);
LABEL_4:
      v2 += 2;
      if ( v2 == *(self + 1) )
        goto LABEL_8;
    }
    if ( g4_std::string::compare((int)(uintptr_t)(v2), "data") != 0 )
      break;
    v4 = (glwebtools::Self *)glwebtools::ServerSideEvent::AddData(a2, v2 + 1);
    v2 += 2;
    glwebtools::IsOperationSuccess(v4);
    if ( v2 == *(self + 1) )
      goto LABEL_8;
  }
  if ( g4_std::string::compare((int)(uintptr_t)(v2), "id") == 0 )
  {
    EventId = (glwebtools::Self *)glwebtools::ServerSideEvent::SetLastEventId(a2, v2 + 1);
    glwebtools::IsOperationSuccess(EventId);
    goto LABEL_4;
  }
  if ( g4_std::string::compare((int)(uintptr_t)(v2), "retry") != 0 )
    goto LABEL_4;
  sub_1900810(v18);
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  sub_19119D0((char *)&v11 + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v14[-1] + (uint32_t)(uintptr_t)(*(v13 - 3)), 0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  memset(&v14[1], 0, 24);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v15);
  v16 = 0;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v17), v2[1], *((uint32_t *)v2[1] - 3), (int)(uintptr_t)(v10));
  v16 = 24;
  sub_1931CD0(v14, v17, 0, 0);
  sub_19119D0(v18, v14);
  *(uint32_t *)&v10[3] = 0;
  sub_1915250(&v11, &v10[3]);
  if ( (v19 & 5) != 0
    || (v8 = glwebtools::ServerSideEvent::SetRetry(a2, *(unsigned int *)&v10[3]),
        glwebtools::IsOperationSuccess((glwebtools::Self *)v8)) )
  {
    v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v9 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v15);
    v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v12 = 0;
    v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v18);
    goto LABEL_4;
  }
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v7 = (void *)(v17 - 12);
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v15);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v18);
LABEL_10:
  glwebtools::ServerSideEventParser::Clear(self);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventParser::HasEvent  (binary VA: 0x14078e0)
// Original: glwebtools::ServerSideEventParser::HasEvent
// ----------------------------------------------------------------------------
bool glwebtools::ServerSideEventParser::HasEvent(glwebtools::ServerSideEventParser::Self *self)
{
  return *((uint32_t *)self + 1) != *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventParser::PushField  (binary VA: 0x14078f0)
// Original: glwebtools::ServerSideEventParser::PushField
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEventParser::PushField(int a1, uint32_t *a2)
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v2 = -2147483646;
  if ( *(uint32_t *)(*a2 - 12) != 0 )
  {
    v9 = &dword_213B814;
    v10 = &dword_213B814;
    v2 = glwebtools::ServerSideEventParser::Field::Parse((int)(uintptr_t)(&v9), a2);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
    {
      v2 = 0;
      if ( glwebtools::ServerSideEventParser::Field::IsValid((glwebtools::ServerSideEventParser::Field::Self *)&v9) )
      {
        v6 = *(uint32_t *)(a1 + 4);
        if ( v6 == *(uint32_t *)(a1 + 8) )
        {
          g4_std::vector_glwebtools_ServerSideEve_670e48::M_insert_aux(a1, v6, &v9);
        }
        else
        {
          v7 = 0;
          if ( v6 != 0 )
          {
            v8 = *(uint32_t *)(a1 + 4);
            g4_std::string::construct_copy(v8, &v9);
            g4_std::string::construct_copy(v8 + 4, &v10);
            v7 = *(uint32_t *)(a1 + 4);
          }
          v2 = 0;
          *(uint32_t *)(a1 + 4) = v7 + 8;
        }
      }
    }
    v3 = v10 - 3;
    if ( v10 - 3 != dword_213B808 && __sync_fetch_and_add(v10 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v3);
    v4 = v9 - 3;
    if ( v9 - 3 != dword_213B808 && __sync_fetch_and_add(v9 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v4);
  }
  return v2;
}


