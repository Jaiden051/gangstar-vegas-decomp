#include "Core/Utils/DecompTypes.h"
#include "vox_AmbienceInternal.h"

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::GetLastPositionOffset  (binary VA: 0xfd07f0)
// Original: vox::AmbienceInternal::GetLastPositionOffset
// ----------------------------------------------------------------------------
float * vox::AmbienceInternal::GetLastPositionOffset(vox::AmbienceInternal::Self *self, float *a2, float *a3, float *a4)
{
  *a2 = *((float *)self + 10);
  *a3 = *((float *)self + 11);
  *a4 = *((float *)self + 12);
  return a4;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::IsValid  (binary VA: 0xfd0810)
// Original: vox::AmbienceInternal::IsValid
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::IsValid(vox::AmbienceInternal::Self *self)
{
  return *((uint8_t *)self + 28);
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::Pause  (binary VA: 0xfd0820)
// Original: vox::AmbienceInternal::Pause
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::Pause(long double a1, vox::AmbienceInternal::Self *self)
{
  vox::Mutex::Lock((vox::AmbienceInternal::Self *)((char *)self + 80));
  if ( *((uint8_t *)self + 28) != 0 && *((uint32_t *)self + 8) == 1 )
  {
    *((uint32_t *)self + 8) = 2;
    GetTime();
    *(double *)((char *)self + 60) = a1;
  }
  return (int)(uintptr_t)(vox::Mutex::Unlock((vox::AmbienceInternal::Self *)((char *)self + 80)));
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::Resume  (binary VA: 0xfd0890)
// Original: vox::AmbienceInternal::Resume
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::Resume(long double a1, vox::AmbienceInternal::Self *self)
{
  double v3; // xmm0_8

  vox::Mutex::Lock((vox::AmbienceInternal::Self *)((char *)self + 80));
  if ( *((uint8_t *)self + 28) != 0 && *((uint32_t *)self + 8) == 2 )
  {
    v3 = *(double *)((char *)self + 52);
    *((uint32_t *)self + 8) = 1;
    GetTime();
    *(double *)((char *)self + 52) = v3 - *(double *)((char *)self + 60) + (double)a1;
  }
  return (int)(uintptr_t)(vox::Mutex::Unlock((vox::AmbienceInternal::Self *)((char *)self + 80)));
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::GetRandomLabel  (binary VA: 0xfd0920)
// Original: vox::AmbienceInternal::GetRandomLabel
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::GetRandomLabel(vox::AmbienceInternal::Self *self)
{
  uint32_t *v1;
  int *v2;
  int i;
  int v4;
  int v5;
  int **v6;
  int v7;
  int v8;
  int **v9;
  int *v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  char *v16;
  uint32_t *v17;
  char *v18;
  int v20;
  unsigned int v21;
  uint32_t *v22;
  vox::AmbienceInternal::Self *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  unsigned int v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  int v31;
  int v32;
  size_t v33;
  int v34;
  int v35;
  int v36;

  v31 = 0;
  v1 = *((uint32_t **)self + 2);
  v2 = *((int **)self + 1);
  v33 = v1 - (uint32_t *)(v2);
  if ( v33 == 0 )
    return v31;
  for ( i = 0; v1 != (uint32_t *)(v2); i += *(uint32_t *)(v4 + 4) )
    v4 = *v2++;
  v5 = lrand48() % i;
  v6 = *((int ***)self + 1);
  v7 = 0;
  v8 = 0;
  v9 = v6;
  v10 = *v6;
  v32 = v5;
  v11 = (*v6)[1];
  if ( v32 >= v11 )
  {
    while ( ++v8 != v33 )
    {
      v7 = 4 * v8;
      v9 = &v6[v8];
      v10 = *v9;
      v11 += (*v9)[1];
      if ( v32 < v11 )
        goto LABEL_9;
    }
    v7 = 4 * v33;
    v9 = &v6[v33];
    v10 = *v9;
  }
LABEL_9:
  v31 = *v10;
  if ( *(int *)(*(uint32_t *)self + 4) <= 0 )
    return v31;
  v12 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  v13 = (char *)self + 16;
  if ( v12 != -8 )
    *(uint32_t *)(v12 + 8) = (uint32_t)(uintptr_t)(*v9);
  sub_1901920(v12, v13);
  *(uint32_t *)(*((uint32_t *)self + 1) + v7) = *(uint32_t *)(*((uint32_t *)self + 1) + 4 * v33 - 4);
  v14 = 0;
  v15 = *((uint32_t *)self + 2);
  v16 = *((char **)self + 4);
  v17 = (uint32_t *)(v15 - 4);
  *((uint32_t *)self + 2) = v15 - 4;
  if ( v13 != v16 )
  {
    v18 = v16;
    do
    {
      v18 = *(char **)v18;
      ++v14;
    }
    while ( v13 != v18 );
  }
  if ( *(uint32_t *)(*(uint32_t *)self + 4) >= v14 )
    return v31;
  if ( v17 == *((uint32_t **)self + 3) )
  {
    v34 = 4;
    v21 = ((int)(uintptr_t)(v17) - *((uint32_t *)self + 1)) >> 2;
    if ( v21 != 0 )
    {
      if ( v21 > 2 * v21 || 2 * v21 > 0x3FFFFFFF )
        v34 = -4;
      else
        v34 = 8 * v21;
    }
    v30 = v15;
    v35 = VoxAllocInternal(v34, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v36 = v35 + 4;
    v22 = (uint32_t *)(v35 + 4 * v21);
    if ( v22 != nullptr )
      *v22 = *((uint32_t *)v16 + 2);
    v23 = self;
    v24 = *((uint32_t **)self + 1);
    if ( v17 != v24 )
    {
      v25 = v24 + 1;
      v26 = (uint32_t *)v35;
      v27 = (unsigned int)(v30 - (uint32_t)(uintptr_t)(v24) - 8) >> 2;
      do
      {
        if ( v26 != nullptr )
          *v26 = *(v25 - 1);
        ++v26;
        ++v25;
      }
      while ( v25 != &v24[v27 + 2] );
      v36 = v35 + 4 * v27 + 8;
      v23 = self;
    }
    v28 = *((uint32_t **)v23 + 2);
    if ( v17 != v28 )
    {
      v29 = (uint32_t *)v36;
      do
      {
        if ( v29 != nullptr )
          *v29 = *v17;
        ++v17;
        ++v29;
      }
      while ( v28 != v17 );
      v36 += 4 * (((unsigned int)(uintptr_t)(v28) - v30) >> 2) + 4;
    }
    if ( *((uint32_t *)self + 1) != 0 )
      VoxFreeInternal(*((void **)self + 1));
    *((uint32_t *)self + 1) = v35;
    *((uint32_t *)self + 2) = v36;
    *((uint32_t *)self + 3) = v34 + v35;
    v16 = *((char **)self + 4);
  }
  else
  {
    v20 = 0;
    if ( v15 != 4 )
    {
      *(uint32_t *)(v15 - 4) = *((uint32_t *)v16 + 2);
      v20 = *((uint32_t *)self + 2);
      v16 = *((char **)self + 4);
    }
    *((uint32_t *)self + 2) = v20 + 4;
  }
  sub_1901940(v16);
  VoxFreeInternal(v16);
  return v31;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::ResetOnStop  (binary VA: 0xfd0c10)
// Original: vox::AmbienceInternal::ResetOnStop
// ----------------------------------------------------------------------------
uint8_t * vox::AmbienceInternal::ResetOnStop(vox::AmbienceInternal::Self *self)
{
  char *v1;
  char *v2;
  char *v3;
  char *v4;
  int v5;
  uint8_t *result;
  unsigned int v7;
  uint32_t *v8;
  char *v9;
  uint32_t *v10;
  char *v11;
  uint32_t *v12;
  int v13;
  int v14;
  char *v15;
  char *v16;
  int v17;
  int v18;
  unsigned int v19;

  v1 = (char *)self + 16;
  while ( 1 )
  {
    v2 = *((char **)self + 4);
    if ( v1 == v2 )
      break;
    while ( 1 )
    {
      v3 = v2;
      do
        v3 = *(char **)v3;
      while ( v1 != v3 );
      v14 = *((uint32_t *)v2 + 2);
      sub_1901940(v2);
      VoxFreeInternal(v2);
      v4 = *((char **)self + 2);
      if ( v4 == *((char **)self + 3) )
        break;
      v5 = 0;
      if ( v4 != nullptr )
      {
        *(uint32_t *)v4 = v14;
        v5 = *((uint32_t *)self + 2);
      }
      v2 = *((char **)self + 4);
      *((uint32_t *)self + 2) = v5 + 4;
      if ( v1 == v2 )
        goto LABEL_9;
    }
    v7 = (int)(uintptr_t)(&v4[-*((uint32_t *)self + 1)]) >> 2;
    v17 = 4;
    if ( v7 != 0 )
    {
      if ( v7 > 2 * v7 || 2 * v7 > 0x3FFFFFFF )
        v17 = -4;
      else
        v17 = 8 * v7;
    }
    v13 = (int)(uintptr_t)(&v4[-*((uint32_t *)self + 1)]) >> 2;
    v18 = VoxAllocInternal(v17, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v19 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v13);
    if ( v8 != nullptr )
      *v8 = v14;
    v15 = *((char **)self + 1);
    if ( v4 != v15 )
    {
      v9 = *((char **)self + 1);
      v10 = (uint32_t *)v18;
      do
      {
        if ( v10 != nullptr )
          *v10 = *(uint32_t *)v9;
        v9 += 4;
        ++v10;
      }
      while ( v4 != v9 );
      v19 = v18 + 4 * ((unsigned int)(v4 - (v15 + 4)) >> 2) + 8;
    }
    v16 = *((char **)self + 2);
    if ( v4 != v16 )
    {
      v11 = v4;
      v12 = (uint32_t *)v19;
      do
      {
        if ( v12 != nullptr )
          *v12 = *(uint32_t *)v11;
        v11 += 4;
        ++v12;
      }
      while ( v16 != v11 );
      v19 += 4 * ((unsigned int)(v16 - (v4 + 4)) >> 2) + 4;
    }
    if ( *((uint32_t *)self + 1) != 0 )
      VoxFreeInternal(*((void **)self + 1));
    *((uint32_t *)self + 1) = v18;
    *((uint32_t *)self + 2) = v19;
    *((uint32_t *)self + 3) = v17 + v18;
  }
LABEL_9:
  result = *((uint8_t **)self + 6);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 17) = 0;
  *result = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::Stop  (binary VA: 0xfd0e00)
// Original: vox::AmbienceInternal::Stop
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::Stop(vox::AmbienceInternal::Self *self)
{
  vox::Mutex::Lock((vox::AmbienceInternal::Self *)((char *)self + 80));
  if ( *((uint8_t *)self + 28) != 0 && (unsigned int)(*((uint32_t *)self + 8) - 1) <= 1 )
  {
    *((uint32_t *)self + 8) = 3;
    vox::AmbienceInternal::ResetOnStop(self);
  }
  return (int)(uintptr_t)(vox::Mutex::Unlock((vox::AmbienceInternal::Self *)((char *)self + 80)));
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::SetNextTriggerTimeInterval  (binary VA: 0xfd0e70)
// Original: vox::AmbienceInternal::SetNextTriggerTimeInterval
// ----------------------------------------------------------------------------
char * vox::AmbienceInternal::SetNextTriggerTimeInterval(char **self)
{
  char **v1;
  char *result;
  int v3;
  int v4;
  uint32_t *v5;
  bool v6;
  float v7; // xmm1_4
  int v8;
  float v9; // xmm0_4
  typedef char *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef float _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (39u + sizeof(_g4_t_v16)) > _g4_s6 ? (39u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 39u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);

  v1 = self + 6;
  result = *self;
  v13 = *((float *)*self + 2);
  v3 = *((uint32_t *)*self + 6);
  v4 = (int)(uintptr_t)(*self + 20);
  v5 = (uint32_t *)(*self + 16);
  v12 = v4;
  v14 = v4;
  if ( v3 != 0 )
  {
    v10 = result + 20;
    do
    {
      while ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(v5), *(char **)(v3 + 16), *v1) == 0 )
      {
        v10 = (char *)v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_6;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_6:
    if ( (char *)v12 == v10 )
    {
      result = *self;
      v5 = (uint32_t *)(*self + 16);
      v12 = (int)(uintptr_t)(*self + 20);
      v4 = v14;
    }
    else
    {
      v6 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(v5), *(self + 6), *((char **)v10 + 4)) == 0;
      result = *self;
      v5 = (uint32_t *)(*self + 16);
      v12 = (int)(uintptr_t)(*self + 20);
      if ( v6 )
        v4 = (int)(uintptr_t)(v10);
      else
        v4 = v14;
    }
  }
  v7 = 0.0;
  if ( v12 != v4 )
  {
    v8 = *((uint32_t *)result + 6);
    v11 = v12;
    if ( v8 == 0 )
      goto LABEL_17;
    do
    {
      while ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(v5), *(char **)(v8 + 16), *v1) == 0 )
      {
        v11 = v8;
        v8 = *(uint32_t *)(v8 + 8);
        if ( v8 == 0 )
          goto LABEL_15;
      }
      v8 = *(uint32_t *)(v8 + 12);
    }
    while ( v8 != 0 );
LABEL_15:
    if ( v11 == v12
      || (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(&v16), *(self + 6), *(char **)(v11 + 16)) != 0 )
    {
LABEL_17:
      v17[1] = 0;
      v17[0] = (uint32_t)(uintptr_t)(*(self + 6));
      sub_FCF9A0(&v15, v5, v11, (int)(uintptr_t)(v17));
      v11 = v15;
    }
    v7 = **(float **)(v11 + 20);
    result = *self;
  }
  if ( *((uint8_t *)self + 36) != 0 )
  {
    *((uint8_t *)self + 36) = 0;
    v13 = 0.0;
  }
  v9 = *((float *)result + 3) - v13;
  if ( v9 >= 0.000001f )
  {
    *((float *)self + 17) = (float)(v7 + v13) + (float)((float)(v9 * 4.656613e-10f) * (float)lrand48());
    return (char *)self;
  }
  else
  {
    *((float *)self + 17) = v7 + v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::Play  (binary VA: 0xfd10e0)
// Original: vox::AmbienceInternal::Play
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::Play(long double a1, vox::AmbienceInternal::Self *a2, uint8_t *a3)
{
  vox::Mutex::Self *v3;
  int v4;

  v3 = (vox::Mutex::Self *)((vox::AmbienceInternal::Self *)((char *)a2 + 80));
  vox::Mutex::Lock((vox::AmbienceInternal::Self *)((char *)a2 + 80));
  if ( *((uint8_t *)a2 + 28) != 0 )
  {
    GetTime();
    *(double *)((char *)a2 + 52) = a1;
    *((uint8_t *)a2 + 36) = 1;
    if ( *a3 != 0 )
    {
      if ( *((uint32_t *)a2 + 8) != 2 )
        goto LABEL_4;
    }
    else
    {
      vox::AmbienceInternal::SetNextTriggerTimeInterval((char **)a2);
      if ( *((uint32_t *)a2 + 8) != 2 )
      {
LABEL_4:
        v4 = **(uint32_t **)a2;
        if ( v4 != 0 )
          (*((void (**)(int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))a2 + 18))(
            v4,
            0,
            0,
            0,
            *((uint8_t *)a2 + 37),
            *((uint32_t *)a2 + 19));
        goto LABEL_6;
      }
    }
    vox::AmbienceInternal::Resume(a1, a2);
LABEL_6:
    *((uint32_t *)a2 + 8) = 1;
    return (int)(uintptr_t)(vox::Mutex::Unlock(v3));
  }
  return (int)(uintptr_t)(vox::Mutex::Unlock(v3));
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::Play  (binary VA: 0xfd11b0)
// Original: vox::AmbienceInternal::Play
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::Play(long double a1, vox::AmbienceInternal::Self *self)
{
  vox::Mutex::Self *v2;
  int v3;

  v2 = (vox::Mutex::Self *)((vox::AmbienceInternal::Self *)((char *)self + 80));
  vox::Mutex::Lock((vox::AmbienceInternal::Self *)((char *)self + 80));
  if ( *((uint8_t *)self + 28) == 0 )
    return (int)(uintptr_t)(vox::Mutex::Unlock(v2));
  GetTime();
  *(double *)((char *)self + 52) = a1;
  *((uint8_t *)self + 36) = 1;
  vox::AmbienceInternal::SetNextTriggerTimeInterval((char **)self);
  if ( *((uint32_t *)self + 8) == 2 )
  {
    vox::AmbienceInternal::Resume(a1, self);
  }
  else
  {
    v3 = **(uint32_t **)self;
    if ( v3 != 0 )
      (*((void (**)(int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))self + 18))(
        v3,
        0,
        0,
        0,
        *((uint8_t *)self + 37),
        *((uint32_t *)self + 19));
  }
  *((uint32_t *)self + 8) = 1;
  return (int)(uintptr_t)(vox::Mutex::Unlock(v2));
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::GetRandomPositionOffset  (binary VA: 0xfd1270)
// Original: vox::AmbienceInternal::GetRandomPositionOffset
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::GetRandomPositionOffset(vox::AmbienceInternal::Self *self, char *a2, float *a3, float *a4, float *a5)
{
  int result;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  float v11; // xmm0_4
  int v12;
  float v13; // xmm2_4
  double x;
  int v15;
  double v16;
  int v17;
  int v18;

  result = *(uint32_t *)self;
  v6 = *(uint32_t *)(*(uint32_t *)self + 24);
  v7 = *(uint32_t *)self + 20;
  v8 = *(uint32_t *)self + 16;
  v17 = v7;
  v18 = v7;
  if ( v6 != 0 )
  {
    v15 = *(uint32_t *)self + 20;
    do
    {
      while ( (uint8_t)vox::c8stringcompare::opCall(v8, *(char **)(v6 + 16), a2) == 0 )
      {
        v15 = v6;
        v6 = *(uint32_t *)(v6 + 8);
        if ( v6 == 0 )
          goto LABEL_6;
      }
      v6 = *(uint32_t *)(v6 + 12);
    }
    while ( v6 != 0 );
LABEL_6:
    if ( v17 == v15 )
    {
      result = *(uint32_t *)self + 20;
      v7 = result;
    }
    else
    {
      v9 = (uint8_t)vox::c8stringcompare::opCall(v8, a2, *(char **)(v15 + 16)) == 0;
      v10 = *(uint32_t *)self;
      if ( !v9 )
      {
        result = v10 + 20;
        if ( v18 != result )
          goto LABEL_10;
LABEL_15:
        *a3 = 0.0;
        *a4 = 0.0;
        *a5 = 0.0;
        *((uint32_t *)self + 10) = 0;
        *((uint32_t *)self + 11) = 0;
        *((uint32_t *)self + 12) = 0;
        return result;
      }
      result = v10 + 20;
      v18 = v15;
      v7 = result;
    }
  }
  if ( v18 == v7 )
    goto LABEL_15;
LABEL_10:
  v11 = 0.0;
  v12 = *(uint32_t *)(v18 + 20);
  if ( *(float *)(v12 + 8) <= 0.0 )
  {
    *a3 = 0.0;
  }
  else
  {
    v16 = (float)((float)((float)((float)(*(float *)(v12 + 8) - *(float *)(v12 + 4)) * 4.656613e-10f) * (float)lrand48())
                + *(float *)(v12 + 4));
    x = (float)((float)lrand48() * 0.0000000029258362f);
    v13 = cos(x) * v16;
    *a3 = v13;
    v11 = sin(x) * v16;
  }
  *a4 = v11;
  *a5 = 0.0;
  *((float *)self + 10) = *a3;
  *((float *)self + 11) = *a4;
  result = *(uint32_t *)a5;
  *((float *)self + 12) = *a5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::Update  (binary VA: 0xfd14a0)
// Original: vox::AmbienceInternal::Update
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::Update(long double a1, vox::AmbienceInternal::Self *self)
{
  const char *src;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  vox::Mutex::Lock((vox::AmbienceInternal::Self *)((char *)self + 80));
  if ( *((uint8_t *)self + 28) != 0 && *((uint32_t *)self + 8) == 1 )
  {
    GetTime();
    if ( (double)a1 - *(double *)((char *)self + 52) > *((float *)self + 17) )
    {
      src = (const char *)vox::AmbienceInternal::GetRandomLabel(self);
      if ( src != nullptr )
      {
        strcpy(*((char **)self + 6), src);
        vox::AmbienceInternal::GetRandomPositionOffset(
          self,
          *((char **)self + 6),
          (float *)&v4,
          (float *)&v5,
          (float *)&v6);
        (*((void (**)(uint32_t, int, int, int, uint32_t, uint32_t))self + 18))(
          *((uint32_t *)self + 6),
          v4,
          v5,
          v6,
          *((uint8_t *)self + 37),
          *((uint32_t *)self + 19));
        vox::AmbienceInternal::SetNextTriggerTimeInterval((char **)self);
        *(double *)((char *)self + 52) = a1;
      }
    }
  }
  return (int)(uintptr_t)(vox::Mutex::Unlock((vox::AmbienceInternal::Self *)((char *)self + 80)));
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::Destroy  (binary VA: 0xfd20d0)
// Original: vox::AmbienceInternal::~AmbienceInternal
// ----------------------------------------------------------------------------
void vox::AmbienceInternal::Destroy(vox::AmbienceInternal::Self *self)
{
  void ***v1;
  void ***v2;
  void **v3;
  char *v4;
  char *v5;
  void **v6;
  vox::AmbienceFileParams::Self *v7;
  char *v8;
  char *v9;
  char *v10;

  v1 = *((void ****)self + 1);
  v2 = *((void ****)self + 2);
  if ( v1 != v2 )
  {
    do
    {
      v3 = *v1;
      if ( *v1 != nullptr )
      {
        if ( *v3 == nullptr || (VoxFreeInternal(*v3), v3 = *v1, *v1 != nullptr) )
          VoxFreeInternal(v3);
      }
      ++v1;
    }
    while ( v2 != v1 );
    v1 = *((void ****)self + 1);
  }
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v1);
  v4 = (char *)self + 16;
  v5 = *((char **)self + 4);
  if ( v5 != (char *)self + 16 )
  {
    do
    {
      v6 = *((void ***)v5 + 2);
      if ( v6 != nullptr )
      {
        if ( *v6 == nullptr || (VoxFreeInternal(*v6), (v6 = *((void ***)v5 + 2)) != nullptr) )
          VoxFreeInternal(v6);
      }
      v5 = *(char **)v5;
    }
    while ( v4 != v5 );
    v5 = *((char **)self + 4);
  }
  if ( v4 != v5 )
  {
    while ( 1 )
    {
      v10 = *(char **)v5;
      VoxFreeInternal(v5);
      if ( v4 == v10 )
        break;
      v5 = v10;
    }
  }
  v7 = *(vox::AmbienceFileParams::Self **)self;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v4);
  if ( v7 != nullptr )
  {
    vox::AmbienceFileParams::Destroy(v7);
    VoxFreeInternal(*(void **)self);
    *(uint32_t *)self = 0;
  }
  if ( *((uint32_t *)self + 6) != 0 )
  {
    VoxFreeInternal(*((void **)self + 6));
    *((uint32_t *)self + 6) = 0;
  }
  vox::Mutex::Destroy((vox::AmbienceInternal::Self *)((char *)self + 80));
  v8 = *((char **)self + 4);
  if ( v4 != v8 )
  {
    while ( 1 )
    {
      v9 = *(char **)v8;
      VoxFreeInternal(v8);
      if ( v4 == v9 )
        break;
      v8 = v9;
    }
  }
  if ( *((uint32_t *)self + 1) != 0 )
    VoxFreeInternal(*((void **)self + 1));
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::UnloadAmbiences  (binary VA: 0xfd2630)
// Original: vox::AmbienceInternal::UnloadAmbiences
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::UnloadAmbiences()
{
  int result;

  result = vox::AmbienceInternal::s_pAmbienceReader;
  if ( vox::AmbienceInternal::s_pAmbienceReader != 0 )
  {
    vox::AmbienceFileReader::Destroy(vox::AmbienceInternal::s_pAmbienceReader);
    result = VoxFreeInternal(vox::AmbienceInternal::s_pAmbienceReader);
    vox::AmbienceInternal::s_pAmbienceReader = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::LoadAmbiences  (binary VA: 0xfd3050)
// Original: vox::AmbienceInternal::LoadAmbiences
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::LoadAmbiences(vox::AmbienceInternal::Self *self)
{
  vox::AmbienceFileReader::Self *v1;

  v1 = (vox::AmbienceFileReader::Self *)vox::AmbienceInternal::s_pAmbienceReader;
  if ( vox::AmbienceInternal::s_pAmbienceReader == 0 )
  {
    v1 = (vox::AmbienceFileReader::Self *)VoxAllocInternal(
                                      0x18u,
                                      0,
                                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                                      (int)(uintptr_t)("LoadAmbiences"),
                                      199);
    vox::AmbienceFileReader::AmbienceFileReader(v1);
    vox::AmbienceInternal::s_pAmbienceReader = (uintptr_t)(uintptr_t)(v1);
    if ( v1 == nullptr )
      return 0;
  }
  vox::AmbienceFileReader::Unload(v1);
  return vox::AmbienceFileReader::Load(vox::AmbienceInternal::s_pAmbienceReader, (const char *)self);
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::AddAmbiences  (binary VA: 0xfd3120)
// Original: vox::AmbienceInternal::AddAmbiences
// ----------------------------------------------------------------------------
int vox::AmbienceInternal::AddAmbiences(vox::AmbienceInternal::Self *self)
{
  vox::AmbienceFileReader::Self *v1;

  v1 = (vox::AmbienceFileReader::Self *)vox::AmbienceInternal::s_pAmbienceReader;
  if ( vox::AmbienceInternal::s_pAmbienceReader != 0 )
    return vox::AmbienceFileReader::Load(v1, (const char *)self);
  v1 = (vox::AmbienceFileReader::Self *)VoxAllocInternal(
                                    0x18u,
                                    0,
                                    (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                                    (int)(uintptr_t)("AddAmbiences"),
                                    184);
  vox::AmbienceFileReader::AmbienceFileReader(v1);
  vox::AmbienceInternal::s_pAmbienceReader = (uintptr_t)(uintptr_t)(v1);
  if ( v1 != nullptr )
    return vox::AmbienceFileReader::Load(v1, (const char *)self);
  else
    return 0;
}


