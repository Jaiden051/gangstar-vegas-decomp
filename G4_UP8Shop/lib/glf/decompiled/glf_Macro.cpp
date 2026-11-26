#include "Core/Utils/DecompTypes.h"
#include "glf_Macro.h"
uint32_t *g4_sub_1914A20(uint32_t *a1, int a2, int a3, int a4);

// ----------------------------------------------------------------------------
// Function: glf::Macro::OnEvent  (binary VA: 0xc75ae0)
// Original: glf::Macro::OnEvent
// ----------------------------------------------------------------------------
int glf::Macro::OnEvent(uint32_t *a1, char *a2)
{
  int v2;
  char *v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  uint32_t *v9;
  int v10;
  int v11;
  glf::WaitForNotification::Self *v12;
  char *Tag;
  int v14;
  int v15;
  char *v16;
  int v17;

  v2 = a1[65];
  if ( (unsigned int)(v2 - 2) <= 1 )
  {
    if ( *(uint16_t *)a2 == 300 )
    {
      v12 = (glf::WaitForNotification::Self *)(a1 + 76);
      if ( glf::WaitForNotification::initialized((glf::WaitForNotification::Self *)(a1 + 76)) )
      {
        Tag = glf::WaitForNotification::getTag(v12);
        if ( g4_std::string::compare((int)(uintptr_t)(Tag), a2 + 8) == 0 )
          glf::WaitForNotification::set(v12);
      }
    }
    return 0;
  }
  if ( v2 != 1 )
    return 0;
  v4 = (char *)a1[62];
  v16 = (char *)a1[63];
  v5 = (v16 - v4) >> 4;
  v6 = (v16 - v4) >> 2;
  if ( v5 > 0 )
  {
    v7 = *(uint16_t *)a2;
    if ( *(uint32_t *)v4 != v7 )
    {
      if ( v7 == *((uint32_t *)v4 + 1) )
      {
        v4 += 4;
      }
      else if ( v7 == *((uint32_t *)v4 + 2) )
      {
        v4 += 8;
      }
      else if ( v7 == *((uint32_t *)v4 + 3) )
      {
        v4 += 12;
      }
      else
      {
        do
        {
          --v5;
          v9 = (uint32_t *)(v4 + 16);
          v4 += 16;
          if ( v5 == 0 )
          {
            v6 = (v16 - v4) >> 2;
            goto LABEL_16;
          }
          if ( *v9 == v7 )
            goto LABEL_21;
          v8 = v4 + 4;
          if ( v9[1] == v7 )
            break;
          v8 = v4 + 8;
          if ( v9[2] == v7 )
            break;
          v8 = v4 + 12;
        }
        while ( v9[3] != v7 );
        v4 = v8;
      }
    }
    goto LABEL_21;
  }
LABEL_16:
  if ( v6 == 2 )
  {
    v10 = *(uint16_t *)a2;
LABEL_32:
    if ( *(uint32_t *)v4 == v10 )
      goto LABEL_21;
    v4 += 4;
    goto LABEL_20;
  }
  if ( v6 == 3 )
  {
    v10 = *(uint16_t *)a2;
    if ( *(uint32_t *)v4 == v10 )
      goto LABEL_21;
    v4 += 4;
    goto LABEL_32;
  }
  if ( v6 != 1 )
    return 0;
  v10 = *(uint16_t *)a2;
LABEL_20:
  if ( v10 != *(uint32_t *)v4 )
    return 0;
LABEL_21:
  if ( v16 == v4 )
    return 0;
  v11 = a1[67];
  a1[67] = v11 + 1;
  if ( v11 == 0 )
  {
    v17 = a1[66] + 1;
    g4_std_compat::ostream_write(a1 + 8, "NEW_FRAME", 9);
    g4_std_compat::ostream_write(a1 + 8, " ", 1);
    v14 = (int)(uintptr_t)(sub_192D8B0(a1 + 8, 99));
    g4_std_compat::ostream_write(v14, " ", 1);
    v15 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v14, v17));
    g4_std_compat::ostream_write(v15, &a0[1], 1);
    a1[66] = 0;
  }
  glf::AppEventSerializer::StaticTextSerialize((int)(uintptr_t)(a1 + 6), (uint16_t *)a2, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::StopRecording  (binary VA: 0xc75d70)
// Original: glf::Macro::StopRecording
// ----------------------------------------------------------------------------
void glf::Macro::StopRecording(glf::Macro::Self *self)
{
  int i;
  int v2;
  int v3;
  int v4;

  if ( *((uint32_t *)self + 65) == 1 )
  {
    if ( *((uint32_t *)self + 67) == 0 )
    {
      v4 = *((uint32_t *)self + 66) + 1;
      g4_std_compat::ostream_write((char *)self + 32, "NEW_FRAME", 9);
      g4_std_compat::ostream_write((char *)self + 32, " ", 1);
      v2 = (int)(uintptr_t)(sub_192D8B0((char *)self + 32, 99));
      g4_std_compat::ostream_write(v2, " ", 1);
      v3 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v2, v4));
      g4_std_compat::ostream_write(v3, &a0[1], 1);
      *((uint32_t *)self + 66) = 0;
    }
    for ( i = *((uint32_t *)self + 79); i != *((uint32_t *)self + 80); i += 8 )
      (*(void (**)(glf::Macro::Self *, int, uint32_t, uint32_t))i)(self, 6, 0, *(uint32_t *)(i + 4));
    glf::EventManager::RemoveEventReceiver(*((glf::EventManager::Self **)self + 2), self);
    *((uint32_t *)self + 65) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::CountDuration  (binary VA: 0xc75ec0)
// Original: glf::Macro::CountDuration
// ----------------------------------------------------------------------------
int glf::Macro::CountDuration(glf::Macro::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v5;
  void *v6;
  uint32_t *v7;
  typedef int _g4_t_v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef glf::Macro::Self *_g4_t_v11;
  typedef uint16_t _g4_t_v12[8];
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t _g4_t_v14[5];
  typedef int _g4_t_v15[3];
  typedef uint32_t _g4_t_v16[38];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v13)) > _g4_s5 ? (48u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v14)) > _g4_s6 ? (64u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v15)) > _g4_s7 ? (84u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v16)) > _g4_s8 ? (96u + sizeof(_g4_t_v16)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 84u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);

  v16[34] = (uint32_t)(uintptr_t)(&self);
  v11 = self;
  v9 = (char *)self + 24;
  sub_19135E0((uint32_t *)v15, (uint32_t *)v9);
  v8 = v15[0];
  v10 = 0;
  while ( (*((uint8_t *)v11 + 96) & 2) == 0 )
  {
    ++v10;
    v13 = &dword_213B814;
    v1 = sub_19056D0(v9, &v13);
    sub_19150E0(v1, v12);
    v2 = *((uint32_t *)v11 + 24);
    if ( (v2 & 5) != 0 || (v2 & 2) != 0 )
    {
      v3 = v13 - 3;
      if ( v13 - 3 != dword_213B808 && __sync_fetch_and_add(v13 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v3);
      break;
    }
    switch ( v12[0] )
    {
      case 'b':
        sub_1914710(v9, v14);
        v16[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        sub_19056D0(v9, v16);
        v6 = (void *)(v16[0] - 12);
        if ( (uint32_t *)(v16[0] - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_18;
        }
        break;
      case 'c':
        v14[0] = 0;
        sub_1914710(v9, v14);
        goto LABEL_18;
      case 'a':
        v14[0] = 0;
        v14[1] = 0;
        sub_1915810(v9, v14);
        goto LABEL_18;
      case ']':
      case '_':
      case '`':
        v16[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        sub_19056D0(v9, v16);
        v6 = (void *)(v16[0] - 12);
        if ( (uint32_t *)(v16[0] - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_18;
        }
        break;
      case '[':
      case '\\':
      case '^':
        goto LABEL_18;
      default:
        LOWORD(v14[0]) = 0;
        if ( v12[0] <= 0x3E7u )
        {
          glf::AppEventSerializer::StaticTextUnserialize((uint16_t *)v16, v12[0], (int)(uintptr_t)(v9), (unsigned int)(uintptr_t)(v14));
          goto LABEL_18;
        }
        v16[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v5 = sub_19056D0(v9, v16);
        sub_19150E0(v5, v14);
        v6 = (void *)(v16[0] - 12);
        if ( (uint32_t *)(v16[0] - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_18;
        }
        break;
    }
    g4_std::string::Rep::M_destroy(v6);
LABEL_18:
    v7 = v13 - 3;
    if ( v13 - 3 != dword_213B808 && __sync_fetch_and_add(v13 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v7);
  }
  sub_1911530((char *)v11 + 76, 0);
  g4_sub_1914A20((uint32_t *)v9, v8, v8 >> 31, 0);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::StopPlaying  (binary VA: 0xc76330)
// Original: glf::Macro::StopPlaying
// ----------------------------------------------------------------------------
int glf::Macro::StopPlaying(glf::Macro::Self *self)
{
  int v2;
  int i;
  int v4;

  if ( (unsigned int)(*((uint32_t *)self + 65) - 2) <= 1 )
  {
    v2 = *((uint32_t *)self + 59);
    *((uint32_t *)self + 65) = 0;
    if ( v2 != 0 )
    {
      G4_VCALL<void>(v2, 4);
      *((uint32_t *)self + 59) = 0;
    }
    for ( i = *((uint32_t *)self + 79); i != *((uint32_t *)self + 80); i += 8 )
      (*(void (**)(glf::Macro::Self *, int, uint32_t, uint32_t))i)(self, 3, 0, *(uint32_t *)(i + 4));
    v4 = *((uint32_t *)self + 68);
    if ( v4 != 0 )
    {
      (*(void (**)(uint32_t))(*(uint32_t *)v4 + 4))(*((uint32_t *)self + 68));
      *((uint32_t *)self + 68) = 0;
    }
  }
  return glf::EventManager::RemoveEventReceiver(*((glf::EventManager::Self **)self + 2), self);
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::Destroy  (binary VA: 0xc76400)
// Original: glf::Macro::~Macro
// ----------------------------------------------------------------------------
void glf::Macro::Destroy(glf::Macro::Self *self)
{
  int v1;
  glf::Macro::Self **dest;
  glf::Macro::Self **i;
  int v4;
  int v5;
  int v6;
  int v7;
  glf::Macro::Self **v8;
  typedef char *_g4_t_src;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_src)) > _g4_s0 ? (4u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v10)) > _g4_s1 ? (29u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 29u);

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D648);
  dest = *(glf::Macro::Self ***)(v1 + 120);
  for ( i = *(glf::Macro::Self ***)(v1 + 124); dest != i; *(uint32_t *)(v1 + 124) = (uint32_t)(uintptr_t)(i) )
  {
    while ( self != *dest )
    {
      if ( ++dest == i )
        goto LABEL_5;
    }
    v8 = dest + 1;
    if ( dest + 1 != i && i - v8 != 0 )
    {
      memmove(dest, dest + 1, 4 * (i - v8));
      i = *(glf::Macro::Self ***)(v1 + 124);
    }
    --i;
  }
LABEL_5:
  glf::Macro::StopRecording(self);
  glf::Macro::StopPlaying(self);
  if ( *((uint32_t *)self + 79) != 0 )
    opDelete(*((void **)self + 79));
  *((uint32_t *)self + 76) = ((uint32_t)(uintptr_t)&off_206D628);
  v4 = *((uint32_t *)self + 77);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    src = &v10;
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  *((uint32_t *)self + 76) = ((uint32_t)(uintptr_t)&off_206D668);
  *((uint32_t *)self + 71) = ((uint32_t)(uintptr_t)&off_206D668);
  *((uint32_t *)self + 69) = ((uint32_t)(uintptr_t)&off_206D668);
  if ( *((uint32_t *)self + 62) != 0 )
    opDelete(*((void **)self + 62));
  v5 = *((uint32_t *)self + 59);
  if ( v5 != 0 )
    (*(void (**)(uint32_t, char *))(*(uint32_t *)v5 + 4))(*((uint32_t *)self + 59), src);
  *((uint32_t *)self + 53) = ((uint32_t)(uintptr_t)&off_206D898);
  if ( *((uint32_t *)self + 54) != 0 )
    opDelete(*((void **)self + 54));
  *((uint32_t *)self + 53) = ((uint32_t)(uintptr_t)&off_206D878);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&off_20AAFEC);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20AB000);
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)(&off_20AB014);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v6 = *((uint32_t *)self + 18);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 64);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&off_20AAF6C);
  *(uint32_t *)((char *)*(&off_20AAF6C - 3) + (uint32_t)(uintptr_t)(self) + 24) = (uint32_t)(uintptr_t)(&off_20AAF94);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)*(&off_20AAEEC - 3) + (uint32_t)(uintptr_t)(self) + 32) = (uint32_t)(uintptr_t)(&off_20AAF00);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&off_20AAF2C);
  *(uint32_t *)((char *)*(&off_20AAF2C - 3) + (uint32_t)(uintptr_t)(self) + 24) = (uint32_t)(uintptr_t)(&off_20AAF40);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 76);
  v7 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D428);
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::Destroy_eac76660  (binary VA: 0xc76660)
// Original: glf::Macro::~Macro
// ----------------------------------------------------------------------------
void glf::Macro::Destroy_eac76660(glf::Macro::Self *self)
{
  glf::Macro::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::Pause  (binary VA: 0xc766a0)
// Original: glf::Macro::Pause
// ----------------------------------------------------------------------------
int glf::Macro::Pause(glf::Macro::Self *self)
{
  int result;
  int v2;
  bool v3;
  int v4;

  result = *((uint32_t *)self + 65);
  if ( result == 2 )
  {
    v4 = *((uint32_t *)self + 79);
    v3 = v4 == *((uint32_t *)self + 80);
    *((uint32_t *)self + 65) = 3;
    if ( !v3 )
    {
      do
      {
        result = (*(int (**)(glf::Macro::Self *, int, uint32_t, uint32_t))v4)(self, 1, 0, *(uint32_t *)(v4 + 4));
        v4 += 8;
      }
      while ( v4 != *((uint32_t *)self + 80) );
    }
  }
  else if ( result == 3 )
  {
    v2 = *((uint32_t *)self + 79);
    v3 = v2 == *((uint32_t *)self + 80);
    *((uint32_t *)self + 65) = 2;
    if ( !v3 )
    {
      do
      {
        result = (*(int (**)(glf::Macro::Self *, int, uint32_t, uint32_t))v2)(self, 1, 0, *(uint32_t *)(v2 + 4));
        v2 += 8;
      }
      while ( v2 != *((uint32_t *)self + 80) );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::SetData  (binary VA: 0xc76760)
// Original: glf::Macro::SetData
// ----------------------------------------------------------------------------
int glf::Macro::SetData(glf::Macro::Self *self, const char *a2, int a3)
{
  int v3;
  int v4;
  void *v5;
  uint16_t v7[9];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v7));
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 72, *(void **)&v7[1], *(uint32_t *)(*(uint32_t *)&v7[1] - 12));
  v3 = 0;
  v4 = *((uint32_t *)self + 18);
  if ( (*((uint8_t *)self + 68) & 3) != 0 )
    v3 = *(uint32_t *)(v4 - 12);
  sub_1931CD0((char *)self + 36, v4, 0, v3);
  v5 = (void *)(*(uint32_t *)&v7[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v7[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v7[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  sub_1911530((char *)self + 76, 0);
  return (int)(uintptr_t)(sub_192C9E0((char *)self + 32, a2, a3));
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::Save  (binary VA: 0xc76840)
// Original: glf::Macro::Save
// ----------------------------------------------------------------------------
const void * glf::Macro::Save(uint32_t *a1, char *a2, int a3)
{
  uint8_t *v3;
  uint32_t *v4;
  uint8_t *v5;
  uint8_t *v6;
  size_t *v7;
  uint32_t *v8;
  size_t *v9;
  const void *result;
  char *v11;
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef size_t *_g4_t_v14;
  typedef size_t *_g4_t_v15;
  typedef size_t _g4_t_v16;
  typedef size_t _g4_t_v17;
  typedef const void *_g4_t_v18[2];
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v16)) > _g4_s4 ? (12u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v17)) > _g4_s5 ? (12u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v18)) > _g4_s6 ? (32u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v3 = (uint8_t *)a1[14];
  v4 = &dword_213B814;
  v18[0] = &dword_213B814;
  if ( v3 == nullptr )
  {
    g4_std::string::assign_str(v18, a1 + 18);
    goto LABEL_19;
  }
  v5 = (uint8_t *)a1[12];
  v6 = (uint8_t *)a1[13];
  if ( v3 <= v5 )
  {
    if ( v5 == v6 )
      goto LABEL_18;
    if ( v6 != nullptr )
    {
      v17 = v5 - v6;
      v9 = (size_t *)sub_1938930(v5 - v6, 0);
      v4 = (uint32_t *)(v9 + 3);
      if ( v17 == 1 )
      {
        *((uint8_t *)v9 + 12) = *v6;
LABEL_16:
        if ( v9 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v9[2] = 0;
          *v9 = v17;
          *((uint8_t *)v4 + v17) = 0;
        }
LABEL_18:
        v19 = v4;
        g4_std::string::assign_str(v18, &v19);
        v8 = v19 - 3;
        if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_11;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v5 != nullptr )
        goto LABEL_23;
      v9 = (size_t *)sub_1938930(0, 0);
      v4 = (uint32_t *)(v9 + 3);
      v17 = 0;
    }
    v13 = v4;
    v15 = v9;
    memcpy(v4, v6, v17);
    v9 = v15;
    v4 = v13;
    goto LABEL_16;
  }
  if ( v3 == v6 )
    goto LABEL_9;
  if ( v6 == nullptr )
LABEL_23:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v16 = v3 - v6;
  v7 = (size_t *)sub_1938930(v3 - v6, 0);
  v4 = (uint32_t *)(v7 + 3);
  if ( v16 == 1 )
  {
    *((uint8_t *)v7 + 12) = *v6;
  }
  else
  {
    v12 = (uint32_t *)(v7 + 3);
    v14 = v7;
    memcpy(v4, v6, v16);
    v7 = v14;
    v4 = v12;
  }
  if ( v7 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v7[2] = 0;
    *v7 = v16;
    *((uint8_t *)v7 + v16 + 12) = 0;
  }
LABEL_9:
  v20 = v4;
  g4_std::string::assign_str(v18, &v20);
  v8 = v20 - 3;
  if ( v20 - 3 != dword_213B808 && __sync_fetch_and_add(v20 - 1, 0xFFFFFFFF) <= 0 )
LABEL_11:
    g4_std::string::Rep::M_destroy(v8);
LABEL_19:
  glf::WriteFully(a2, a3 | 0x1A, v18);
  result = v18[0];
  v11 = (char *)v18[0] - 12;
  if ( (char *)v18[0] - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v18[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    return (g4_std::string::Rep::M_destroy(v11), (const void *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::Save  (binary VA: 0xc76af0)
// Original: glf::Macro::Save
// ----------------------------------------------------------------------------
void glf::Macro::Save()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::Save  (binary VA: 0xc76b00)
// Original: glf::Macro::Save
// ----------------------------------------------------------------------------
void glf::Macro::Save(glf::Macro::Self *self)
{
  uint32_t *v1;
  uint8_t *v2;
  uint8_t *v3;
  uint8_t *v4;
  size_t *v5;
  uint32_t *v6;
  char *v7;
  size_t *v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef size_t *_g4_t_v11;
  typedef size_t *_g4_t_v12;
  typedef size_t _g4_t_v13;
  typedef size_t _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t _g4_t_v18[13];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v14)) > _g4_s5 ? (16u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v15)) > _g4_s6 ? (36u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v16)) > _g4_s7 ? (40u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v17)) > _g4_s8 ? (44u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v18)) > _g4_s9 ? (48u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v18, *((uint32_t *)self + 4), *((uint32_t *)self + 5) | 0x1A);
  v18[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v18) == 0 )
    goto LABEL_2;
  v1 = &dword_213B814;
  v2 = *((uint8_t **)self + 14);
  v15 = (char *)&dword_213B814;
  if ( v2 == nullptr )
  {
    g4_std::string::assign_str(&v15, (char *)self + 72);
    goto LABEL_12;
  }
  v3 = *((uint8_t **)self + 12);
  v4 = *((uint8_t **)self + 13);
  if ( v2 > v3 )
  {
    if ( v2 != v4 )
    {
      if ( v4 == nullptr )
        goto LABEL_26;
      v14 = v2 - v4;
      v8 = (size_t *)sub_1938930(v2 - v4, 0);
      v1 = (uint32_t *)(v8 + 3);
      if ( v14 == 1 )
      {
        *((uint8_t *)v8 + 12) = *v4;
      }
      else
      {
        v10 = (uint32_t *)(v8 + 3);
        v12 = v8;
        memcpy(v1, v4, v14);
        v8 = v12;
        v1 = v10;
      }
      if ( v8 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        v8[2] = 0;
        *v8 = v14;
        *((uint8_t *)v8 + v14 + 12) = 0;
      }
    }
    v17 = v1;
    g4_std::string::assign_str(&v15, &v17);
    v6 = v17 - 3;
    if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
      goto LABEL_23;
    goto LABEL_12;
  }
  if ( v3 == v4 )
    goto LABEL_11;
  if ( v4 == nullptr )
  {
    if ( v3 == nullptr )
    {
      v5 = (size_t *)sub_1938930(0, 0);
      v1 = (uint32_t *)(v5 + 3);
      v13 = 0;
      goto LABEL_8;
    }
LABEL_26:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  v13 = v3 - v4;
  v5 = (size_t *)sub_1938930(v3 - v4, 0);
  v1 = (uint32_t *)(v5 + 3);
  if ( v13 != 1 )
  {
LABEL_8:
    v9 = v1;
    v11 = v5;
    memcpy(v1, v4, v13);
    v5 = v11;
    v1 = v9;
    goto LABEL_9;
  }
  *((uint8_t *)v5 + 12) = *v4;
LABEL_9:
  if ( v5 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v5[2] = 0;
    *v5 = v13;
    *((uint8_t *)v1 + v13) = 0;
  }
LABEL_11:
  v16 = v1;
  g4_std::string::assign_str(&v15, &v16);
  v6 = v16 - 3;
  if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
LABEL_23:
    g4_std::string::Rep::M_destroy(v6);
LABEL_12:
  glf::FileStreamImpl::Write((glf::FileStreamImpl::Self *)v18, v15, *((uint32_t *)v15 - 3));
  v7 = v15 - 12;
  if ( v15 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
LABEL_2:
  v18[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v18);
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::Load  (binary VA: 0xc76e20)
// Original: glf::Macro::Load
// ----------------------------------------------------------------------------
int glf::Macro::Load(glf::Macro::Self *a1)
{
  int result;

  result = *((uint32_t *)a1 + 65);
  if ( result == 1 )
  {
    glf::Macro::StopRecording(a1);
    result = *((uint32_t *)a1 + 65);
  }
  if ( result == 2 || result == 3 )
    return glf::Macro::StopPlaying(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::UpdateFrame  (binary VA: 0xc76e90)
// Original: glf::Macro::UpdateFrame
// ----------------------------------------------------------------------------
const char * glf::Macro::UpdateFrame(glf::Macro::Self *self)
{
  const char *result;
  int v2;
  int v3;
  int v4;
  char *v5;
  int i;
  int v7;
  void *v8;
  char *v9;
  char *v10;
  void *v11;
  char *Dir;
  void *v13;
  int v14;
  void *v15;
  glf::FunctionalTest::Self *v16;
  const char *v17;
  char *v18;
  int v19;
  uint16_t v20[8];
  const char *v21;
  int v22[4];
  uint32_t v23[4];
  int64_t v24[2];
  char v25[140];

  result = *((const char **)self + 65);
  if ( result == (const char *)(uintptr_t)(uint8_t *)&dword_0 + 1 )
  {
    if ( *((uint32_t *)self + 67) == 0 )
      ++*((uint32_t *)self + 66);
    *((uint32_t *)self + 67) = 0;
  }
  else if ( result == (const char *)(uintptr_t)(uint8_t *)&dword_0 + 2 )
  {
    v2 = *((uint32_t *)self + 68);
    if ( v2 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v2 + 8))(*((uint32_t *)self + 68)) != 0 )
    {
      (***((void (****)(uint32_t))self + 68))(*((uint32_t *)self + 68));
      result = (const char *)(*(int (**)(uint32_t))(**((uint32_t **)self + 68) + 12))(*((uint32_t *)self + 68));
      if ( (uint8_t)(uintptr_t)(result) != 0 )
      {
        result = (const char *)(*(int (**)(uint32_t))(**((uint32_t **)self + 68) + 4))(*((uint32_t *)self + 68));
        *((uint32_t *)self + 68) = 0;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( (*((uint8_t *)self + 96) & 2) != 0 )
          goto LABEL_14;
        ++*((uint32_t *)self + 60);
        v18 = (char *)self + 24;
        v21 = (const char *)&dword_213B814;
        v3 = sub_19056D0((char *)self + 24, &v21);
        sub_19150E0(v3, v20);
        puts(v21);
        v4 = *((uint32_t *)self + 24);
        if ( (v4 & 5) != 0 || (v4 & 2) != 0 )
          break;
        switch ( v20[0] )
        {
          case 'b':
            sub_1914710(v18, v24);
            v23[0] = (uint32_t)(uintptr_t)(&dword_213B814);
            sub_19056D0(v18, v23);
            Dir = (char *)glf::Fs::GetDir(glf::Fs::sFs, v24[0]);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), Dir, (int)(uintptr_t)(&v19));
            v22[0] = (int)(uintptr_t)(&dword_213B814);
            sub_1939B80(v22, *(uint32_t *)(v23[0] - 12) + 1);
            g4_std::string::append((int)(uintptr_t)(v22), "/", 1u);
            g4_std::string::append_str(v22, v23);
            g4_std::string::append_str(v25, v22);
            v13 = (void *)(v22[0] - 12);
            if ( (uint32_t *)(v22[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v13);
            }
            v14 = *(uint32_t *)v25;
            if ( *(uint32_t *)(*(uint32_t *)v25 - 12) != 0
              && glf::FunctionalTest::TakeScreenshot::sTakeScreenshotRef != 0
              && (uint8_t)glf::FunctionalTest::sEnabled[0] != 0 )
            {
              (**(void (***)(void *, uint32_t))glf::FunctionalTest::TakeScreenshot::sTakeScreenshotRef)(
                (void *)(uintptr_t)(glf::FunctionalTest::TakeScreenshot::sTakeScreenshotRef),
                *(uint32_t *)v25);
              v14 = *(uint32_t *)v25;
            }
            if ( (uint32_t *)(v14 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v14 - 12));
            }
            v15 = (void *)(v23[0] - 12);
            if ( (uint32_t *)(v23[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v15);
            }
            goto LABEL_35;
          case 'c':
            LODWORD(v24[0]) = 0;
            sub_1914710(v18, v24);
            glf::WaitForFrame::start((glf::Macro::Self *)((char *)self + 276), v24[0]);
            *((uint32_t *)self + 68) = (uint32_t)(uintptr_t)((char *)self + 276);
            goto LABEL_35;
          case 'a':
            v24[0] = 0;
            sub_1915810(v18, v24);
            glf::WaitForTime::start((glf::Macro::Self *)((char *)self + 284), v24[0]);
            *((uint32_t *)self + 68) = (uint32_t)(uintptr_t)((char *)self + 284);
            goto LABEL_35;
          case '`':
            *(uint32_t *)v25 = (uint32_t)(uintptr_t)(&dword_213B814);
            sub_19056D0(v18, v25);
            glf::WaitForNotification::start((char *)self + 304, v25);
            *((uint32_t *)self + 68) = (uint32_t)(uintptr_t)((char *)self + 304);
            v11 = (void *)(*(uint32_t *)v25 - 12);
            if ( (uint32_t *)(*(uint32_t *)v25 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v25 - 4), 0xFFFFFFFF) <= 0 )
            {
              goto LABEL_51;
            }
            goto LABEL_35;
          case '_':
            *(uint32_t *)v25 = (uint32_t)(uintptr_t)(&dword_213B814);
            sub_19056D0(v18, v25);
            glf::FunctionalTest::CheckPoint(v25);
            v11 = (void *)(*(uint32_t *)v25 - 12);
            if ( (uint32_t *)(*(uint32_t *)v25 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v25 - 4), 0xFFFFFFFF) <= 0 )
            {
LABEL_51:
              g4_std::string::Rep::M_destroy(v11);
            }
LABEL_35:
            result = v21;
            v10 = (char *)(v21 - 12);
            if ( v21 - 12 != (const char *)dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v21 - 1, 0xFFFFFFFF) <= 0 )
            {
              return (g4_std::string::Rep::M_destroy(v10), (const char *)0);
            }
            return result;
          case '[':
            glf::FunctionalTest::Terminate(v16);
            goto LABEL_35;
          case '^':
            glf::FunctionalTest::StartProfiler(v16);
            goto LABEL_35;
          case ']':
            *(uint32_t *)v25 = (uint32_t)(uintptr_t)(&dword_213B814);
            sub_19056D0(v18, v25);
            if ( *(uint32_t *)(*(uint32_t *)v25 - 12) != 0 )
              glf::FunctionalTest::StopProfiler(*(glf::FunctionalTest::Self **)v25, v17);
            else
              glf::FunctionalTest::StopProfiler(nullptr, v17);
            v11 = (void *)(*(uint32_t *)v25 - 12);
            if ( (uint32_t *)(*(uint32_t *)v25 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v25 - 4), 0xFFFFFFFF) <= 0 )
            {
              goto LABEL_51;
            }
            goto LABEL_35;
          case '\\':
            sub_1911530((char *)self + 76, 0);
            g4_sub_1914A20((uint32_t *)v18, 0, 0, 0);
            *((uint32_t *)self + 60) = 0;
            goto LABEL_35;
          default:
            break;
        }
        LOWORD(v24[0]) = 0;
        if ( v20[0] <= 0x3E7u )
        {
          glf::AppEventSerializer::StaticTextUnserialize(v25, v20[0], v18, v24);
          glf::EventManager::SendEvent(*((glf::EventManager::Self **)self + 2), (int)(uintptr_t)(v25));
        }
        else
        {
          *(uint16_t *)v25 = v20[0];
          v23[0] = (uint32_t)(uintptr_t)(&dword_213B814);
          v7 = sub_19056D0(v18, v23);
          sub_19150E0(v7, v24);
          v8 = (void *)(v23[0] - 12);
          if ( (uint32_t *)(v23[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          glf::EventManager::SendEvent(*((glf::EventManager::Self **)self + 2), (int)(uintptr_t)(v25));
        }
        v9 = (char *)(v21 - 12);
        if ( v21 - 12 != (const char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v21 - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
      }
      v5 = (char *)(v21 - 12);
      if ( v21 - 12 != (const char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v21 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
LABEL_14:
      for ( i = *((uint32_t *)self + 79); i != *((uint32_t *)self + 80); i += 8 )
        (*(void (**)(glf::Macro::Self *, int, uint32_t, uint32_t))i)(self, 4, 0, *(uint32_t *)(i + 4));
      return (const char *)glf::Macro::StopPlaying(self);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::StartPlaying  (binary VA: 0xc78bc0)
// Original: glf::Macro::StartPlaying
// ----------------------------------------------------------------------------
void glf::Macro::StartPlaying(glf::Macro::Self *self)
{
  int v1;
  int v2;
  bool v3;
  int v4;
  int i;

  v1 = *((uint32_t *)self + 65);
  if ( v1 != 0 )
  {
    if ( v1 == 3 )
    {
      v2 = *((uint32_t *)self + 79);
      v3 = v2 == *((uint32_t *)self + 80);
      *((uint32_t *)self + 65) = 2;
      if ( !v3 )
      {
        do
        {
          (*(void (**)(glf::Macro::Self *, int, uint32_t, uint32_t))v2)(self, 2, 0, *(uint32_t *)(v2 + 4));
          v2 += 8;
        }
        while ( v2 != *((uint32_t *)self + 80) );
      }
    }
  }
  else
  {
    *((uint32_t *)self + 65) = 2;
    sub_1911530((char *)self + 76, 0);
    g4_sub_1914A20((uint32_t *)((char *)self + 24), 0, 0, 0);
    v4 = *((uint32_t *)self + 68);
    *((uint32_t *)self + 60) = 0;
    if ( v4 != 0 )
    {
      G4_VCALL<void>(v4, 4);
      *((uint32_t *)self + 68) = 0;
    }
    *((uint32_t *)self + 61) = glf::Macro::CountDuration(self);
    glf::EventManager::AddEventReceiver(
      *((glf::EventManager::Self **)self + 2),
      self,
      (glf::EventReceiver::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_124)->st_size);
    for ( i = *((uint32_t *)self + 79); i != *((uint32_t *)self + 80); i += 8 )
      (*(void (**)(glf::Macro::Self *, uint32_t, uint32_t, uint32_t))i)(self, 0, 0, *(uint32_t *)(i + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::StartRecording  (binary VA: 0xc78d10)
// Original: glf::Macro::StartRecording
// ----------------------------------------------------------------------------
void glf::Macro::StartRecording(glf::Macro::Self *self)
{
  int v1;
  int i;

  v1 = *((uint32_t *)self + 65);
  if ( v1 != 0 )
  {
    if ( v1 == 1 )
      glf::Macro::StopRecording(self);
  }
  else
  {
    *((uint32_t *)self + 65) = 1;
    *((uint32_t *)self + 66) = 0;
    glf::EventManager::AddEventReceiver(
      *((glf::EventManager::Self **)self + 2),
      self,
      (glf::EventReceiver::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_124)->st_size);
    for ( i = *((uint32_t *)self + 79); i != *((uint32_t *)self + 80); i += 8 )
      (*(void (**)(glf::Macro::Self *, int, uint32_t, uint32_t))i)(self, 5, 0, *(uint32_t *)(i + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::Construct  (binary VA: 0xc78de0)
// Original: glf::Macro::Macro
// ----------------------------------------------------------------------------
int glf::Macro::Construct(glf::Macro::Self *a1, int a2)
{
  int v3;
  uint32_t *v4;
  bool v5;
  int v6;
  int v8[8];

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206D648);
  *((uint32_t *)a1 + 2) = a2;
  *((uint8_t *)a1 + 4) = 1;
  *((uint8_t *)a1 + 12) = 0;
  *((uint32_t *)a1 + 5) = 4096;
  *((uint32_t *)a1 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  sub_1900810((char *)a1 + 76);
  *((uint32_t *)a1 + 47) = 0;
  *((uint32_t *)a1 + 19) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *((uint8_t *)a1 + 192) = 0;
  *((uint8_t *)a1 + 193) = 0;
  *((uint32_t *)a1 + 49) = 0;
  *((uint32_t *)a1 + 50) = 0;
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20AAF2C);
  *((uint32_t *)a1 + 51) = 0;
  *((uint32_t *)a1 + 52) = 0;
  *(uint32_t *)((char *)*(&off_20AAF2C - 3) + (uint32_t)(uintptr_t)(a1) + 24) = (uint32_t)(uintptr_t)(&off_20AAF40);
  *((uint32_t *)a1 + 7) = 0;
  sub_19119D0((char *)a1 + *(uint32_t *)(*((uint32_t *)a1 + 6) - 12) + 24, 0);
  *((uint32_t *)a1 + 8) = (uint32_t)(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)*(&off_20AAEEC - 3) + (uint32_t)(uintptr_t)(a1) + 32) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)a1 + *(uint32_t *)(*((uint32_t *)a1 + 8) - 12) + 32, 0);
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20AAF6C);
  *(uint32_t *)((char *)*(&off_20AAF6C - 3) + (uint32_t)(uintptr_t)(a1) + 24) = (uint32_t)(uintptr_t)(&off_20AAF94);
  *((uint32_t *)a1 + 10) = 0;
  *((uint32_t *)a1 + 11) = 0;
  *((uint32_t *)a1 + 12) = 0;
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 14) = 0;
  *((uint32_t *)a1 + 15) = 0;
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20AAFEC);
  *((uint32_t *)a1 + 8) = ((uint32_t)(uintptr_t)&off_20AB000);
  *((uint32_t *)a1 + 19) = (uint32_t)(uintptr_t)(&off_20AB014);
  *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70((char *)a1 + 64);
  *((uint32_t *)a1 + 17) = 24;
  *((uint32_t *)a1 + 18) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_19119D0((char *)a1 + 76, (char *)a1 + 36);
  *((uint32_t *)a1 + 54) = 0;
  *((uint32_t *)a1 + 55) = 0;
  *((uint32_t *)a1 + 53) = ((uint32_t)(uintptr_t)&off_206D898);
  *((uint32_t *)a1 + 56) = 0;
  *((uint32_t *)a1 + 69) = ((uint32_t)(uintptr_t)&off_206D5E8);
  *((uint32_t *)a1 + 57) = 0;
  *((uint32_t *)a1 + 71) = ((uint32_t)(uintptr_t)&off_206D608);
  *((uint32_t *)a1 + 58) = 0;
  *((uint32_t *)a1 + 76) = ((uint32_t)(uintptr_t)&off_206D628);
  v3 = *((uint32_t *)a1 + 2);
  *((uint32_t *)a1 + 59) = 0;
  *((uint32_t *)a1 + 62) = 0;
  *((uint32_t *)a1 + 63) = 0;
  *((uint32_t *)a1 + 64) = 0;
  *((uint32_t *)a1 + 65) = 0;
  *((uint32_t *)a1 + 66) = 0;
  *((uint32_t *)a1 + 67) = 0;
  *((uint32_t *)a1 + 68) = 0;
  *((uint32_t *)a1 + 77) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)a1 + 79) = 0;
  *((uint32_t *)a1 + 80) = 0;
  *((uint32_t *)a1 + 81) = 0;
  v4 = *(uint32_t **)(v3 + 124);
  v5 = v4 == *(uint32_t **)(v3 + 128);
  v8[0] = (int)(uintptr_t)(a1);
  if ( v5 )
  {
    g4_std_compat::vector_fill_insert(v3 + 120, v4, (int)(uintptr_t)(v8));
  }
  else
  {
    v6 = 0;
    if ( v4 != nullptr )
    {
      *v4 = (uint32_t)(uintptr_t)(a1);
      v6 = *(uint32_t *)(v3 + 124);
    }
    *(uint32_t *)(v3 + 124) = v6 + 4;
  }
  return glf::Macro::Load(a1);
}

// ----------------------------------------------------------------------------
// Function: glf::Macro::Construct  (binary VA: 0xc790c0)
// Original: glf::Macro::Macro
// ----------------------------------------------------------------------------
int glf::Macro::Construct(glf::Macro::Self *a1, int a2, char **a3, char a4, int a5)
{
  int result;
  uint32_t *v7;
  bool v8;
  int v9;
  uint8_t v10[33];

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206D648);
  *((uint32_t *)a1 + 2) = a2;
  *((uint8_t *)a1 + 12) = a4;
  *((uint8_t *)a1 + 4) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(a1) + 16, *a3, (int)(uintptr_t)(v10));
  *((uint32_t *)a1 + 5) = a5;
  sub_1900810((char *)a1 + 76);
  *((uint32_t *)a1 + 47) = 0;
  *((uint32_t *)a1 + 19) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *((uint8_t *)a1 + 192) = 0;
  *((uint8_t *)a1 + 193) = 0;
  *((uint32_t *)a1 + 49) = 0;
  *((uint32_t *)a1 + 50) = 0;
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20AAF2C);
  *((uint32_t *)a1 + 51) = 0;
  *((uint32_t *)a1 + 52) = 0;
  *(uint32_t *)((char *)*(&off_20AAF2C - 3) + (uint32_t)(uintptr_t)(a1) + 24) = (uint32_t)(uintptr_t)(&off_20AAF40);
  *((uint32_t *)a1 + 7) = 0;
  sub_19119D0((char *)a1 + *(uint32_t *)(*((uint32_t *)a1 + 6) - 12) + 24, 0);
  *((uint32_t *)a1 + 8) = (uint32_t)(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)*(&off_20AAEEC - 3) + (uint32_t)(uintptr_t)(a1) + 32) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)a1 + *(uint32_t *)(*((uint32_t *)a1 + 8) - 12) + 32, 0);
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20AAF6C);
  *(uint32_t *)((char *)*(&off_20AAF6C - 3) + (uint32_t)(uintptr_t)(a1) + 24) = (uint32_t)(uintptr_t)(&off_20AAF94);
  *((uint32_t *)a1 + 10) = 0;
  *((uint32_t *)a1 + 11) = 0;
  *((uint32_t *)a1 + 12) = 0;
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 14) = 0;
  *((uint32_t *)a1 + 15) = 0;
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20AAFEC);
  *((uint32_t *)a1 + 8) = ((uint32_t)(uintptr_t)&off_20AB000);
  *((uint32_t *)a1 + 19) = (uint32_t)(uintptr_t)(&off_20AB014);
  *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70((char *)a1 + 64);
  *((uint32_t *)a1 + 17) = 24;
  *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *((uint32_t *)a1 + 18) = (uint32_t)(uintptr_t)(&dword_213B814);
  sub_19119D0((char *)a1 + 76, (char *)a1 + 36);
  *((uint32_t *)a1 + 54) = 0;
  *((uint32_t *)a1 + 55) = 0;
  *((uint32_t *)a1 + 53) = ((uint32_t)(uintptr_t)&off_206D898);
  *((uint32_t *)a1 + 56) = 0;
  *((uint32_t *)a1 + 69) = ((uint32_t)(uintptr_t)&off_206D5E8);
  *((uint32_t *)a1 + 57) = 0;
  *((uint32_t *)a1 + 71) = ((uint32_t)(uintptr_t)&off_206D608);
  *((uint32_t *)a1 + 58) = 0;
  *((uint32_t *)a1 + 76) = ((uint32_t)(uintptr_t)&off_206D628);
  result = *((uint32_t *)a1 + 2);
  *((uint32_t *)a1 + 59) = 0;
  *((uint32_t *)a1 + 62) = 0;
  *((uint32_t *)a1 + 63) = 0;
  *((uint32_t *)a1 + 64) = 0;
  *((uint32_t *)a1 + 65) = 0;
  *((uint32_t *)a1 + 66) = 0;
  *((uint32_t *)a1 + 67) = 0;
  *((uint32_t *)a1 + 68) = 0;
  *((uint32_t *)a1 + 77) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)a1 + 79) = 0;
  *((uint32_t *)a1 + 80) = 0;
  *((uint32_t *)a1 + 81) = 0;
  v7 = *(uint32_t **)(result + 124);
  v8 = v7 == *(uint32_t **)(result + 128);
  *(uint32_t *)&v10[1] = (uint32_t)(uintptr_t)(a1);
  if ( v8 )
  {
    result = g4_std_compat::vector_fill_insert(result + 120, v7, (int)(uintptr_t)(&v10[1]));
  }
  else
  {
    v9 = 0;
    if ( v7 != nullptr )
    {
      *v7 = (uint32_t)(uintptr_t)(a1);
      v9 = *(uint32_t *)(result + 124);
    }
    *(uint32_t *)(result + 124) = v9 + 4;
  }
  if ( a4 != 0 )
    return glf::Macro::Load(a1, *((char **)a1 + 4), *((uint32_t *)a1 + 5));
  return result;
}


