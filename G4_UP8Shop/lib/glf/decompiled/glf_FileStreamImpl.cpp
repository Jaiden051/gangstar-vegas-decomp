#include "Core/Utils/DecompTypes.h"
#include "glf_FileStreamImpl.h"

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::CanSeek  (binary VA: 0xcb72f0)
// Original: glf::FileStreamImpl::CanSeek
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::CanSeek()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::CanRead  (binary VA: 0xcb7300)
// Original: glf::FileStreamImpl::CanRead
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::CanRead(glf::FileStreamImpl::Self *self)
{
  return *((uint32_t *)self + 9) & 1;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::CanWrite  (binary VA: 0xcb7310)
// Original: glf::FileStreamImpl::CanWrite
// ----------------------------------------------------------------------------
bool glf::FileStreamImpl::CanWrite(glf::FileStreamImpl::Self *self)
{
  return (*((uint8_t *)self + 36) & 2) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Tell  (binary VA: 0xcb7320)
// Original: glf::FileStreamImpl::Tell
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Tell(glf::FileStreamImpl::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 12) + 20))(*((uint32_t *)self + 12));
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::ReadWithOffset  (binary VA: 0xcb7340)
// Original: glf::FileStreamImpl::ReadWithOffset
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::ReadWithOffset(glf::FileStreamImpl::Self *self, void *a2, unsigned int a3, unsigned int a4)
{
  return (*(int (**)(uint32_t, void *, unsigned int, unsigned int))(**((uint32_t **)self + 12) + 28))(
           *((uint32_t *)self + 12),
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Peek  (binary VA: 0xcb7370)
// Original: glf::FileStreamImpl::Peek
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Peek(glf::FileStreamImpl::Self *self, void *a2, unsigned int a3)
{
  int v3;
  int v5;

  if ( *((uint8_t *)self + 9) != 0 )
  {
    *((uint32_t *)self + 1) = 11;
    return -1;
  }
  else
  {
    v5 = G4_VCALL<int>(self, 64);
    v3 = G4_VCALL<int>(self, 12, a2, a3);
    G4_VCALL<void>(self, 60, v5, 0);
    *((uint32_t *)self + 1) = 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Write  (binary VA: 0xcb7400)
// Original: glf::FileStreamImpl::Write
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Write(glf::FileStreamImpl::Self *self, const void *a2, unsigned int a3)
{
  int v3;
  int v5;

  if ( *((uint8_t *)self + 9) != 0 )
  {
    *((uint32_t *)self + 1) = 11;
    return -1;
  }
  else
  {
    v5 = (*(int (**)(uint32_t, const void *, unsigned int))(**((uint32_t **)self + 12) + 32))(
           *((uint32_t *)self + 12),
           a2,
           a3);
    v3 = v5;
    if ( v5 >= 0 )
      glf::IOStream::FilePosition::Append((glf::FileStreamImpl::Self *)((char *)self + 24), v5);
    *((uint32_t *)self + 1) = 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::GetSize  (binary VA: 0xcb7490)
// Original: glf::FileStreamImpl::GetSize
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::GetSize(glf::FileStreamImpl::Self *self)
{
  int result;

  result = glf::IOStream::FilePosition::GetFileSize((glf::FileStreamImpl::Self *)((char *)self + 24));
  if ( result == 0 )
    return (*(int (**)(uint32_t))(**((uint32_t **)self + 12) + 36))(*((uint32_t *)self + 12));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Seek  (binary VA: 0xcb74e0)
// Original: glf::FileStreamImpl::Seek
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Seek(int a1, int a2, int a3)
{
  int result;

  if ( *(uint8_t *)(a1 + 9) != 0 )
  {
    *(uint32_t *)(a1 + 4) = 11;
    return 0;
  }
  else
  {
    glf::IOStream::FilePosition::Seek((glf::IOStream::FilePosition::Self *)(a1 + 24), a2, a3);
    result = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 48) + 16))(*(uint32_t *)(a1 + 48), a2, a3);
    *(uint32_t *)(a1 + 4) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Read  (binary VA: 0xcb7570)
// Original: glf::FileStreamImpl::Read
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Read(glf::FileStreamImpl::Self *self, int a2, unsigned int a3)
{
  int v4;
  bool v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i *v14;
  __m128i v15;
  __m128i *v16;
  __m128i i;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;

  if ( *((uint8_t *)self + 9) != 0 )
  {
    *((uint32_t *)self + 1) = 11;
    return -1;
  }
  v39 = 0;
  if ( (*((uint8_t *)self + 38) & 4) != 0 )
    v39 = G4_VCALL<int>(self, 64);
  v4 = (*(int (**)(uint32_t, int, unsigned int))(**((uint32_t **)self + 12) + 24))(*((uint32_t *)self + 12), a2, a3);
  v41 = v4;
  if ( v4 >= 0 )
    glf::IOStream::FilePosition::Skip((glf::FileStreamImpl::Self *)((char *)self + 24), v4);
  v5 = (*((uint8_t *)self + 38) & 4) == 0;
  *((uint32_t *)self + 1) = 0;
  if ( v5 || v39 > 3 )
    return v41;
  v6 = 4 - v39;
  if ( 4 - v39 > a3 )
    v6 = a3;
  v40 = v6;
  if ( v6 == 0 )
    return v41;
  v7 = -a2 & 0xF;
  if ( v6 <= v7 )
    v7 = v6;
  if ( v7 != 0 )
  {
    v8 = 0;
    v9 = ~(uint8_t)v39;
    do
      *(uint8_t *)(a2 + v8++) += v9--;
    while ( v7 > v8 );
    if ( v40 == v7 )
      return v41;
  }
  else
  {
    v8 = 0;
  }
  v37 = v40 - v7;
  v38 = (v40 - v7) >> 4;
  v36 = 16 * v38;
  if ( 16 * v38 != 0 )
  {
    v10 = 0;
g4_m128_lane<int64_t>(v11, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(v8 + 1)), 0);
    v12 = _mm_cvtsi32_si128((uint8_t)v39);
    v13 = _mm_unpacklo_epi8(v12, v12);
g4_m128_lane<int64_t>(v11, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v8 + 2), _mm_cvtsi32_si128(v8 + 3)), 0);
    v14 = (__m128i *)(a2 + v7);
    v15 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v13, v13), 0);
    v16 = (__m128i *)(a2 + v7);
    for ( i = v11; ; i = v29 )
    {
      v18 = i;
      v19 = _mm_add_epi32(i, G4_BITCAST<__m128i>(xmmword_1C7C400));
      v20 = i;
      v21 = _mm_unpacklo_epi16(i, v19);
      v22 = _mm_unpackhi_epi16(v20, v19);
      v23 = _mm_add_epi32(v19, G4_BITCAST<__m128i>(xmmword_1C7C400));
      v24 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v21, v22), _mm_unpackhi_epi16(v21, v22));
      v25 = _mm_add_epi32(v23, G4_BITCAST<__m128i>(xmmword_1C7C400));
      ++v10;
      v26 = _mm_unpackhi_epi16(v23, v25);
      v27 = _mm_unpacklo_epi16(v23, v25);
      v28 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v27, v26), _mm_unpackhi_epi16(v27, v26));
      v29 = _mm_add_epi32(v18, G4_BITCAST<__m128i>(xmmword_1C7C440));
      v30 = _mm_unpackhi_epi8(v24, v28);
      v31 = _mm_unpacklo_epi8(v24, v28);
      v32 = _mm_unpacklo_epi8(v31, v30);
      v33 = _mm_unpackhi_epi8(v31, v30);
      v34 = _mm_add_epi8(
              _mm_xor_si128(
                _mm_add_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v32, v33), _mm_unpackhi_epi8(v32, v33)), v15),
                G4_BITCAST<__m128i>(xmmword_1C7C450)),
              *v16++);
      *v14++ = v34;
      if ( v10 >= v38 )
        break;
    }
    v8 += v36;
    if ( v37 == v36 )
      return v41;
  }
  v35 = ~(v8 + (uint8_t)v39);
  do
    *(uint8_t *)(a2 + v8++) += v35--;
  while ( v40 > v8 );
  return v41;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::ReadASync  (binary VA: 0xcb7800)
// Original: glf::FileStreamImpl::ReadASync
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::ReadASync(glf::FileStreamImpl::Self *self, void *a2, unsigned int a3, unsigned int a4, void (*a5)(int, glf::Stream::Self *, void *), void *a6)
{
  int v6;
  int v7;
  uint16_t *v8;
  unsigned int v9;
  uint16_t *v10;
  int v11;
  int PriorityNorm;
  uint32_t *v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  void *dest;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  uint32_t *v26;
  unsigned int v27;
  unsigned int v28;
  void *v29;
  int v30;
  int v31;
  int v32;

  __sync_add_and_fetch((volatile int32_t *)self + 10, 1u);
  v6 = opNew(0x1Cu);
  v7 = v6;
  v8 = (uint16_t *)v6;
  v9 = 28;
  if ( (v6 & 1) != 0 )
  {
    v8 = (uint16_t *)(v6 + 1);
    *(uint8_t *)v6 = 0;
    LOBYTE(v9) = 27;
    if ( ((v6 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v8 = 0;
  v9 -= 2;
  ++v8;
LABEL_3:
  memset(v8, 0, 4 * (v9 >> 2));
  v10 = &v8[2 * (v9 >> 2)];
  if ( (v9 & 2) != 0 )
    *v10++ = 0;
  if ( (v9 & 1) != 0 )
    *(uint8_t *)v10 = 0;
  *(uint32_t *)v6 = (uint32_t)(uintptr_t)(self);
  *(uint32_t *)(v6 + 12) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)(v6 + 20) = a3;
  *(uint32_t *)(v6 + 16) = a4;
  *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(a5);
  *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(self);
  *(uint32_t *)(v6 + 24) = (uint32_t)(uintptr_t)(a6);
  glf::Mutex::Lock((pthread_mutex_t **)&glf::gDequeMutex);
  if ( (*(uint8_t **)unk_20DF5F8) == (*(uint8_t **)unk_20DF600) - 4 )
  {
    v14 = (uint32_t *)(uintptr_t)(dword_20DF604);
    if ( (unsigned int)(uintptr_t)((*(uintptr_t *)unk_20DF5E4) - (((int)dword_20DF604 - glf::gQueuedReads) >> 2)) <= 1 )
    {
      v32 = (((int)(*(const int *)&dword_20DF604) - (*(const int *)&unk_20DF5F4)) >> 2) + 1;
      v31 = (((int)(*(const int *)&dword_20DF604) - (*(const int *)&unk_20DF5F4)) >> 2) + 2;
      if ( (*(uintptr_t *)unk_20DF5E4) > (unsigned int)(2 * v31) )
      {
        v21 = (int)(*(const int *)&dword_20DF604) - (*(const int *)&unk_20DF5F4) + 4;
        v20 = (uint32_t *)(glf::gQueuedReads + 4 * ((unsigned int)(uintptr_t)((*(uintptr_t *)unk_20DF5E4) - v31) >> 1));
        if ( (*(uint8_t **)unk_20DF5F4) <= (uint8_t *)(intptr_t)((unsigned int)(uintptr_t)(v20)) )
        {
          v23 = v21 >> 2;
          if ( v23 != 0 )
          {
            v28 = glf::gQueuedReads + 4 * ((unsigned int)(uintptr_t)((*(uintptr_t *)unk_20DF5E4) - v31) >> 1);
            memmove(&v20[v32 - v23], (*(uint8_t **)unk_20DF5F4), 4 * v23);
            v20 = (uint32_t *)v28;
          }
        }
        else
        {
          v22 = v21 >> 2;
          if ( v22 != 0 )
          {
            v27 = glf::gQueuedReads + 4 * ((unsigned int)(uintptr_t)((*(uintptr_t *)unk_20DF5E4) - v31) >> 1);
            memmove(v20, (*(uint8_t **)unk_20DF5F4), 4 * v22);
            v20 = (uint32_t *)v27;
          }
        }
      }
      else
      {
        v15 = 3;
        if ( (*(uintptr_t *)unk_20DF5E4) != 0 )
        {
          v15 = 2 * (*(const int *)&unk_20DF5E4) + 2;
          if ( v15 > 0x3FFFFFFF )
            sub_18FFEE0((*(uintptr_t *)unk_20DF5E4), v15);
        }
        v24 = v15;
        v16 = opNew(4 * v15);
        v17 = v24;
        v30 = v16;
        dest = (void *)(v16 + 4 * ((v24 - v31) >> 1));
        v19 = ((int)(*(const int *)&dword_20DF604) - (*(const int *)&unk_20DF5F4) + 4) >> 2;
        if ( v19 != 0 )
        {
          v29 = dest;
          memmove(dest, (*(uint8_t **)unk_20DF5F4), 4 * v19);
          dest = v29;
          v17 = v24;
        }
        v25 = v17;
        v26 = (uint32_t *)(dest);
        opDelete(glf::gQueuedReads);
        glf::gQueuedReads = v30;
        *(uintptr_t *)(unk_20DF5E4) = (uintptr_t)(v25);
        v20 = v26;
      }
      *(uintptr_t *)(unk_20DF5F4) = (uintptr_t)(v20);
      *(uintptr_t *)(unk_20DF5EC) = (uintptr_t)(*v20);
      *(uintptr_t *)(unk_20DF5F0) = (uintptr_t)((*(uint8_t **)unk_20DF5EC) + 512);
      v14 = &v20[v32 - 1];
      dword_20DF604 = (uint32_t)(uintptr_t)(v14);
      *(uintptr_t *)(unk_20DF5FC) = (uintptr_t)(*v14);
      *(uintptr_t *)(unk_20DF600) = (uintptr_t)((*(uint8_t **)unk_20DF5FC) + 512);
    }
    v14[1] = opNew(0x200u);
    if ( (*(uint8_t **)unk_20DF5F8) != 0 )
      **(uint32_t **)unk_20DF5F8 = v7;
    *(uintptr_t *)(unk_20DF5FC) = (uintptr_t)(*(uintptr_t *)(dword_20DF604 += 4));
    *(uintptr_t *)(unk_20DF5F8) = (uintptr_t)((*(uint8_t **)unk_20DF5FC));
    *(uintptr_t *)(unk_20DF600) = (uintptr_t)((*(uint8_t **)unk_20DF5FC) + 512);
  }
  else
  {
    v11 = 0;
    if ( (*(uint8_t **)unk_20DF5F8) != 0 )
    {
      **(uint32_t **)unk_20DF5F8 = v7;
      v11 = (int)(uintptr_t)((*(uint8_t **)unk_20DF5F8));
    }
    *(uintptr_t *)(unk_20DF5F8) = (uintptr_t)(v11 + 4);
  }
  glf::Mutex::Unlock((pthread_mutex_t **)&glf::gDequeMutex);
  if ( glf::Thread::GetStatus((glf::Thread::Self *)&glf::gReadASyncThread) == 3 )
  {
    PriorityNorm = glf::Thread::GetPriorityNorm();
    glf::Thread::Start((glf::Thread::Self *)&glf::gReadASyncThread, PriorityNorm + 1);
  }
  else
  {
    glf::Condition::Signal((glf::Condition::Self *)&glf::gThreadCondition);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::DispatchDoneReads  (binary VA: 0xcb7cc0)
// Original: glf::FileStreamImpl::DispatchDoneReads
// ----------------------------------------------------------------------------
void glf::FileStreamImpl::DispatchDoneReads()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Construct  (binary VA: 0xcb7cd0)
// Original: glf::FileStreamImpl::FileStreamImpl
// ----------------------------------------------------------------------------
glf::FileStreamImpl::Self * glf::FileStreamImpl::Construct(glf::FileStreamImpl::Self *self)
{
  glf::FileStreamImpl::Self *result;

  glf::IOStream::Construct(self);
  *((uint32_t *)self + 10) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E148);
  *((uint8_t *)self + 44) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  result = (glf::FileStreamImpl::Self *)sub_4EBD10(0x30u, 1);
  *((uint32_t *)result + 1) = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(self);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_206E1E8);
  *((uint32_t *)result + 4) = 0;
  *((uint32_t *)result + 2) = ((uint32_t)(uintptr_t)&off_206E228);
  *((uint8_t *)result + 20) = 0;
  *((uint8_t *)result + 21) = 0;
  *((uint32_t *)result + 6) = 0;
  *((uint32_t *)result + 7) = 0;
  *((uint32_t *)result + 8) = 0;
  *((uint8_t *)result + 36) = 0;
  *((uint32_t *)result + 10) = 0;
  *((uint32_t *)result + 11) = 0;
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::CheckCrc  (binary VA: 0xcb7d80)
// Original: glf::FileStreamImpl::CheckCrc
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::CheckCrc(glf::FileStreamImpl::Self *self, glf::CrcChecker::Self *a2)
{
  int v2;
  signed int v4;
  void *s;
  int v6;
  const char *c;
  int v8;
  int v9;
  const void *n;

  v2 = 1;
  if ( (*((uint8_t *)self + 38) & 8) != 0 && (uint8_t)glf::CrcChecker::HasFileEntry(a2, c) != 0 )
  {
    v4 = G4_VCALL<int>(self, 52);
    n = (const void *)v4;
    if ( v4 <= 0 )
    {
      glf::Console::Println((glf::Console::Self *)"Empty file. No crc check to do : %s", (const char *)a2);
      return v2;
    }
    s = (void *)opNew(v4);
    memset(s, 0, (size_t)n);
    v9 = G4_VCALL<int>(self, 64);
    G4_VCALL<void>(self, 60, 0, 0);
    G4_VCALL<void>(self, 12, s, n);
    G4_VCALL<void>(self, 60, v9, 0);
    if ( (uint8_t)glf::CrcChecker::DoCrcCheck(a2, (glf::CrcChecker::Self *)s, n, v8) == 0 )
    {
      glf::Console::Println((glf::Console::Self *)"Corrupted file : %s", (const char *)a2);
      v6 = *(uint32_t *)self;
      *((uint32_t *)self + 1) = 1;
      v2 = 0;
      (*(void (**)(glf::FileStreamImpl::Self *))(v6 + 8))(self);
      if ( s == nullptr )
        return v2;
      goto LABEL_7;
    }
    if ( s != nullptr )
LABEL_7:
      opDelete(s);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Open  (binary VA: 0xcb7ef0)
// Original: glf::FileStreamImpl::_Open
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Open(int a1, int a2, char *a3)
{
  int v3;
  char *v4;
  char *i;
  size_t v7;
  glf::fs::Self *v8;
  char *AlternateDataDir;
  void *v10;
  void *v11;
  glf::fs::Self *v12;
  int v13;
  char v14;
  char v15;
  uint8_t v16;
  void *v17;
  char v18;
  char v19;
  int *v20;
  int v21;
  int *v22;
  int v23;
  char v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32;
  typedef uint8_t _g4_t_v33;
  typedef char *_g4_t_s;
  typedef char *_g4_t_sa;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t _g4_t_v44[4];
  typedef uint32_t _g4_t_v45[3];
  typedef uint32_t _g4_t_v46[3];
  typedef glf::fs::Self *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v32)) > _g4_s7 ? (32u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v33)) > _g4_s8 ? (32u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_s)) > _g4_s9 ? (36u + sizeof(_g4_t_s)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_sa)) > _g4_s10 ? (36u + sizeof(_g4_t_sa)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v36)) > _g4_s11 ? (40u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v37)) > _g4_s12 ? (44u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v38)) > _g4_s13 ? (48u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v39)) > _g4_s14 ? (48u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v40)) > _g4_s15 ? (52u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v41)) > _g4_s16 ? (56u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v42)) > _g4_s17 ? (60u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v43)) > _g4_s18 ? (64u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v44)) > _g4_s19 ? (68u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v45)) > _g4_s20 ? (84u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v46)) > _g4_s21 ? (96u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v47)) > _g4_s22 ? (108u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v48)) > _g4_s23 ? (112u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v49)) > _g4_s24 ? (116u + sizeof(_g4_t_v49)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 36u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 108u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 116u);

  v47 = (glf::fs::Self *)&a1;
  v3 = a1;
  v4 = a3;
  v36 = (char *)(uintptr_t)a2;
  if ( *(uint8_t *)(a1 + 9) != 0 )
  {
    *(uint32_t *)(a1 + 4) = 11;
    return 0;
  }
  else
  {
    G4_VCALL<void>(a1, 8);
    *(uint32_t *)(v3 + 36) = (uint32_t)(uintptr_t)(v4);
    sa = (char *)glf::allocateEphemeralAllocation((glf::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_7F4)->st_info, (unsigned int)(uintptr_t)(v48));
    v39 = glf::fs::ResolvePath(v36, v4, (glf::Self *)sa, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_7F4)->st_info);
    for ( i = sa; ; i += 2 )
    {
      v7 = strlen(i);
      if ( v7 <= 1 )
        break;
      if ( *i != 46 )
        break;
      v18 = i[1];
      if ( v18 != 92 && v18 != 47 )
        break;
    }
    g4_std_compat::string_assign(v3 + 32, i, v7);
    if ( (v39 & 0x40000) != 0 )
      *(uint32_t *)(v3 + 36) |= 0x40000u;
    if ( (v39 & 0x80000) != 0 )
      *(uint32_t *)(v3 + 36) |= 0x80000u;
    v8 = nullptr;
    v44[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    while ( (unsigned int)(uintptr_t)(v8) < glf::fs::GetAlternateDataDirCount(v47) )
    {
      AlternateDataDir = (char *)glf::fs::GetAlternateDataDir(v8, (unsigned int)(uintptr_t)(v48));
      if ( AlternateDataDir != nullptr && *AlternateDataDir != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v45), AlternateDataDir, (int)(uintptr_t)(&v43));
        v48 = (char *)v45;
        v49 = v3 + 32;
        glf::JoinPath((uint32_t *)v46, (uint32_t *)v45, (uint32_t *)(v3 + 32));
        g4_std::string::assign_str(v44, v46);
        v10 = (void *)(v46[0] - 12);
        if ( (uint32_t *)(v46[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v46[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v48 = (char *)&v43 + 1;
          g4_std::string::Rep::M_destroy(v10);
        }
        v11 = (void *)(v45[0] - 12);
        if ( (uint32_t *)(v45[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v48 = (char *)&v43 + 2;
          g4_std::string::Rep::M_destroy(v11);
        }
        v12 = *(glf::fs::Self **)(v3 + 48);
        v13 = *(uint32_t *)v12;
        v49 = v39;
        v47 = v12;
        v48 = (char *)v44[0];
        v14 = (*(int (**)(glf::fs::Self *, uint32_t, int))(v13 + 8))(v12, v44[0], v39);
        *(uint8_t *)(v3 + 8) = v14;
        if ( v14 != 0 )
        {
          v15 = glf::FileStreamImpl::CheckCrc((glf::FileStreamImpl::Self *)v3, (glf::CrcChecker::Self *)v36);
          v16 = 0;
          if ( v15 != 0 )
            v16 = *(uint8_t *)(v3 + 8);
          goto LABEL_20;
        }
      }
      v8 = (glf::fs::Self *)((char *)v8 + 1);
    }
    v19 = (*(int (**)(uint32_t, uint32_t, int))(**(uint32_t **)(v3 + 48) + 8))(
            *(uint32_t *)(v3 + 48),
            *(uint32_t *)(v3 + 32),
            v39);
    *(uint8_t *)(v3 + 8) = v19;
    if ( v19 != 0 )
    {
      v24 = glf::FileStreamImpl::CheckCrc((glf::FileStreamImpl::Self *)v3, (glf::CrcChecker::Self *)v36);
      v16 = 0;
      if ( v24 == 0 )
        goto LABEL_20;
      v16 = *(uint8_t *)(v3 + 8);
      *(uint32_t *)(v3 + 4) = 0;
      if ( v16 != 0 )
        goto LABEL_20;
    }
    else
    {
      *(uint32_t *)(v3 + 4) = 0;
    }
    v20 = *(int **)(v3 + 48);
    v21 = *v20;
    v16 = (*(int (**)(int *, char *, int))(v21 + 8))(v20, v36, v39 | 0x80);
    *(uint8_t *)(v3 + 8) = v16;
    if ( v16 == 0 )
    {
      v22 = *(int **)(v3 + 48);
      v23 = *v22;
      v16 = (*(int (**)(int *, char *, int))(v23 + 8))(v22, *(char **)(v3 + 32), v39 | 0x80);
      *(uint8_t *)(v3 + 8) = v16;
    }
LABEL_20:
    v17 = (void *)(v44[0] - 12);
    if ( (uint32_t *)(v44[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v33 = v16;
      v48 = (char *)&v43 + 3;
      g4_std::string::Rep::M_destroy(v17);
      v16 = v33;
    }
    v32 = v16;
    glf::freeEphemeralAllocation((glf::Self *)sa, v48);
    return v32;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Open  (binary VA: 0xcb8230)
// Original: glf::FileStreamImpl::Open
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Open(int a1, char *a2, char *a3)
{
  glf::ArchiveManager::Self *v3;
  int result;
  int v5;
  unsigned int v6;
  void *v7;
  typedef glf::ArchiveManager::Self *_g4_t_v8;
  typedef uint8_t _g4_t_v9;
  typedef uint8_t _g4_t_v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[3];
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (33u + sizeof(_g4_t_v12)) > _g4_s4 ? (33u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v13)) > _g4_s5 ? (36u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v14)) > _g4_s6 ? (48u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 33u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  v3 = (glf::ArchiveManager::Self *)glf::ArchiveManager::s_instance[0];
  if ( glf::ArchiveManager::s_instance[0] == 0 )
  {
    v3 = (glf::ArchiveManager::Self *)malloc(0x1Cu);
    if ( v3 != nullptr )
    {
      v8 = v3;
      glf::ArchiveManager::ArchiveManager(v3);
      v3 = v8;
    }
    glf::ArchiveManager::s_instance[0] = (uintptr_t)(v3);
  }
  if ( !glf::ArchiveManager::IsUsingArchive(v3, (int16_t)(uintptr_t)(a3)) )
    return glf::FileStreamImpl::Open(a1, (int)(uintptr_t)(a2), a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), a2, (int)(uintptr_t)(&v12));
  v5 = sub_1938190((int)(uintptr_t)(v13), "/\\", -1, 2u);
  if ( v5 == -1 )
  {
    result = 0;
  }
  else
  {
    v6 = v5 + 1;
    if ( v6 > *(uint32_t *)(v13[0] - 12) )
      sub_1900210("basic_string::substr");
    sub_193A6F0(&v14, v13, v6, -1);
    result = glf::FileStreamImpl::Open(a1, v14, a3);
    v11 = (void *)(v14 - 12);
    if ( (uint32_t *)(v14 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    {
      v10 = result;
      g4_std::string::Rep::M_destroy(v11);
      result = v10;
    }
  }
  v7 = (void *)(v13[0] - 12);
  if ( (uint32_t *)(v13[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v9 = result;
    g4_std::string::Rep::M_destroy(v7);
    result = v9;
  }
  if ( (uint8_t)result == 0 )
    return glf::FileStreamImpl::Open(a1, (int)(uintptr_t)(a2), a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Construct  (binary VA: 0xcb8420)
// Original: glf::FileStreamImpl::FileStreamImpl
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Construct(glf::IOStream::Self *a1, char *a2, char *a3)
{
  uint32_t *v3;

  glf::IOStream::Construct(a1);
  *((uint32_t *)a1 + 10) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206E148);
  *((uint32_t *)a1 + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = (uint32_t *)(sub_4EBD10(0x30u, 1));
  v3[1] = (uint32_t)(uintptr_t)(a1);
  v3[3] = (uint32_t)(uintptr_t)(a1);
  *v3 = ((uint32_t)(uintptr_t)&off_206E1E8);
  v3[4] = 0;
  v3[2] = ((uint32_t)(uintptr_t)&off_206E228);
  *((uint8_t *)v3 + 20) = 0;
  *((uint8_t *)v3 + 21) = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  *((uint8_t *)v3 + 36) = 0;
  v3[10] = 0;
  v3[11] = 0;
  *((uint32_t *)a1 + 12) = (uint32_t)(uintptr_t)(v3);
  return glf::FileStreamImpl::Open((int)(uintptr_t)(a1), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::IsEof  (binary VA: 0xcb84f0)
// Original: glf::FileStreamImpl::IsEof
// ----------------------------------------------------------------------------
bool glf::FileStreamImpl::IsEof(glf::FileStreamImpl::Self *self)
{
  int v1;

  v1 = G4_VCALL<int>(self, 64);
  return v1 == glf::IOStream::FilePosition::GetFileSize((glf::FileStreamImpl::Self *)((char *)self + 24));
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::IsMemoryCached  (binary VA: 0xcb8540)
// Original: glf::FileStreamImpl::IsMemoryCached
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::IsMemoryCached(glf::FileStreamImpl::Self *self)
{
  return *((uint8_t *)self + 44);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::CancelAsync  (binary VA: 0xcb8550)
// Original: glf::FileStreamImpl::CancelAsync
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::CancelAsync(glf::FileStreamImpl::Self *self, void (*a2)(int, glf::Stream::Self *, void *), void *a3)
{
  char *v3;
  char *v4;
  int v5;
  char **v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  char **v19;
  int v20;
  int v22;
  int v23;
  char *v24;
  char *dest;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  char *v33;
  char **v34;
  unsigned int v35;
  char **v36;
  char *v37;
  int v38;
  char *v39;
  char *v40;
  int v41;
  int v42;
  int v43;
  char *v44;
  char *src;
  int v46;
  int v47;
  int v48;
  char **v49;
  int v50;
  int v51;
  int v52;
  char *v53;
  signed int v54;

  glf::Mutex::Lock((pthread_mutex_t **)&glf::gDequeMutex);
  v39 = (char *)dword_20DF5EC;
  v41 = (int)(uintptr_t)((*(uint8_t **)unk_20DF5E8));
  v47 = (int)(uintptr_t)((*(uint8_t **)unk_20DF5F0));
  v34 = (char **)dword_20DF5F4;
  v3 = (char *)(*(uint8_t **)unk_20DF5F8);
  v4 = (char *)(*(uint8_t **)unk_20DF5E8);
  v5 = (int)(uintptr_t)((*(uint8_t **)unk_20DF5F0));
  v6 = (char **)dword_20DF5F4;
LABEL_2:
  v36 = v6;
  while ( 1 )
  {
    if ( v4 == (char *)(*(uint8_t **)unk_20DF5F8) )
    {
      v20 = 0;
      goto LABEL_34;
    }
    if ( *(void (**)(int, glf::Stream::Self *, void *))(*(uint32_t *)v4 + 8) == a2 && *(void **)(*(uint32_t *)v4 + 24) == a3 )
      break;
    v4 += 4;
    if ( (char *)v5 == v4 )
    {
      v19 = v34++;
      v6 = v34;
      v4 = v19[1];
      v39 = v4;
      v5 = (int)(uintptr_t)(v4 + 512);
      goto LABEL_2;
    }
  }
  v7 = v4 + 4;
  if ( v4 + 4 == (char *)v5 )
  {
    v49 = v34 + 1;
    v7 = v34[1];
    v40 = v7;
    v52 = (int)(uintptr_t)(v7 + 512);
  }
  else
  {
    v40 = v39;
    v49 = v34;
    v52 = v5;
  }
  v8 = ((*(uint8_t **)unk_20DF5F0) - (*(uint8_t **)unk_20DF5E8)) >> 2;
  v54 = v8 + ((v4 - v39) >> 2) + ((v34 - (char **)dword_20DF5F4 - 1) << 7);
  v53 = (char *)(*(uint8_t **)unk_20DF5FC);
  v50 = ((*(uint8_t **)unk_20DF5F8) - (*(uint8_t **)unk_20DF5FC)) >> 2;
  if ( v54 >= (unsigned int)(v50 + ((dword_20DF604 - dword_20DF5F4 - 1) << 7) + v8) >> 1 )
  {
    if ( v7 == (char *)(*(uint8_t **)unk_20DF5F8)
      || (v22 = (((char **)dword_20DF604 - v49 - 1) << 7) + v50) + ((v52 - (int)(uintptr_t)(v7)) >> 2) <= 0 )
    {
LABEL_63:
      if ( v3 == v53 )
      {
        opDelete(v3);
        *(uintptr_t *)(unk_20DF5FC) = (uintptr_t)(*(uintptr_t *)(dword_20DF604 -= 4));
        *(uintptr_t *)(unk_20DF600) = (uintptr_t)((*(uint8_t **)unk_20DF5FC) + 512);
        *(uintptr_t *)(unk_20DF5F8) = (uintptr_t)((*(uint8_t **)unk_20DF5FC) + 508);
      }
      else
      {
        *(uintptr_t *)(unk_20DF5F8) = (uintptr_t)(v3 - 4);
      }
      goto LABEL_41;
    }
    v23 = v22 + ((v52 - (int)(uintptr_t)(v7)) >> 2);
    v24 = v7;
    v43 = v5;
    dest = v4;
    while ( 1 )
    {
      v29 = (v43 - (int)(uintptr_t)(dest)) >> 2;
      if ( v29 > (v52 - (int)(uintptr_t)(v24)) >> 2 )
        v29 = (v52 - (int)(uintptr_t)(v24)) >> 2;
      if ( v29 > v23 )
        v29 = v23;
      v30 = 4 * v29;
      if ( (4 * v29) >> 2 != 0 )
      {
        v33 = dest;
        memmove(dest, v24, 4 * ((4 * v29) >> 2));
        v30 = 4 * v29;
        dest = v33;
        v46 = v29 + ((v24 - v40) >> 2);
        if ( v46 < 0 )
        {
LABEL_60:
          v35 = ((unsigned int)v46 >> 7) | 0xFE000000;
          v26 = v35;
          goto LABEL_48;
        }
      }
      else
      {
        v46 = v29 + ((v24 - v40) >> 2);
        if ( v46 < 0 )
          goto LABEL_60;
      }
      v24 += 4 * v29;
      if ( v46 > 127 )
      {
        v26 = v46 >> 7;
        v35 = v46 >> 7;
LABEL_48:
        v49 += v26;
        v40 = *v49;
        v52 = (int)(uintptr_t)(*v49 + 512);
        v24 = &(*v49)[4 * (v46 - (v35 << 7))];
      }
      v27 = v29 + ((dest - v39) >> 2);
      if ( v27 < 0 )
      {
        v28 = ((unsigned int)v27 >> 7) | 0xFE000000;
        goto LABEL_52;
      }
      dest += v30;
      if ( v27 > 127 )
      {
        v28 = v27 >> 7;
LABEL_52:
        v36 += v28;
        v39 = *v36;
        v43 = (int)(uintptr_t)(*v36 + 512);
        dest = &(*v36)[4 * (v27 - (v28 << 7))];
      }
      v23 -= v29;
      if ( v23 <= 0 )
      {
        v3 = (char *)(*(uint8_t **)unk_20DF5F8);
        v53 = (char *)(*(uint8_t **)unk_20DF5FC);
        goto LABEL_63;
      }
    }
  }
  if ( (char *)(*(uint8_t **)unk_20DF5E8) != v4 && v54 > 0 )
  {
    v42 = (int)(uintptr_t)(v7);
    v9 = (int)(uintptr_t)(v4);
    v10 = v8 + ((v4 - v39) >> 2) + ((v34 - (char **)dword_20DF5F4 - 1) << 7);
    while ( 1 )
    {
      v11 = (v9 - (int)(uintptr_t)(v39)) >> 2;
      v37 = (char *)v9;
      v12 = (v42 - (int)(uintptr_t)(v40)) >> 2;
      v13 = v11;
      v44 = (char *)v9;
      if ( v11 == 0 )
      {
        v13 = 128;
        v44 = *(v34 - 1) + 512;
        v37 = v44;
      }
      v51 = (v42 - (int)(uintptr_t)(v40)) >> 2;
      v48 = v42;
      if ( v12 == 0 )
      {
        v51 = 128;
        v48 = (int)(uintptr_t)(*(v49 - 1) + 512);
      }
      if ( v13 > v10 )
        v13 = v10;
      if ( v13 > v51 )
        v13 = v51;
      src = &v44[-4 * v13];
      if ( (v37 - src) >> 2 != 0 )
      {
        v32 = v10;
        v31 = v9;
        memmove((void *)(v48 - 4 * ((v37 - src) >> 2)), src, 4 * ((v37 - src) >> 2));
        v9 = v31;
        v14 = -v13;
        v15 = v11 - v13;
        v10 = v32;
        v38 = -v13;
        if ( v15 < 0 )
        {
LABEL_36:
          v16 = ((unsigned int)v15 >> 7) | 0xFE000000;
          goto LABEL_27;
        }
      }
      else
      {
        v14 = -v13;
        v15 = v11 - v13;
        v38 = -v13;
        if ( v15 < 0 )
          goto LABEL_36;
      }
      v9 += 4 * v14;
      if ( v15 > 127 )
      {
        v16 = v15 >> 7;
LABEL_27:
        v34 += v16;
        v39 = *v34;
        v9 = (int)(uintptr_t)(&(*v34)[4 * (v15 - (v16 << 7))]);
      }
      v17 = v12 - v13;
      if ( v17 < 0 )
      {
        v18 = ((unsigned int)v17 >> 7) | 0xFE000000;
        goto LABEL_31;
      }
      if ( v17 > 127 )
      {
        v18 = v17 >> 7;
LABEL_31:
        v49 += v18;
        v40 = *v49;
        v42 = (int)(uintptr_t)(&(*v49)[4 * (v17 - (v18 << 7))]);
        goto LABEL_14;
      }
      v42 += 4 * v38;
LABEL_14:
      v10 -= v13;
      if ( v10 <= 0 )
      {
        v41 = (int)(uintptr_t)((*(uint8_t **)unk_20DF5E8));
        v47 = (int)(uintptr_t)((*(uint8_t **)unk_20DF5F0));
        break;
      }
    }
  }
  if ( v41 == v47 - 4 )
  {
    opDelete(dword_20DF5EC);
    dword_20DF5EC = (uint32_t)(uintptr_t)((void *)*(uintptr_t *)(dword_20DF5F4 += 4));
    *(uintptr_t *)(unk_20DF5E8) = (uintptr_t)(dword_20DF5EC);
    *(uintptr_t *)(unk_20DF5F0) = (uintptr_t)((char *)dword_20DF5EC + 512);
  }
  else
  {
    *(uintptr_t *)(unk_20DF5E8) = (uintptr_t)(v41 + 4);
  }
LABEL_41:
  v20 = 1;
LABEL_34:
  glf::Mutex::Unlock((pthread_mutex_t **)&glf::gDequeMutex);
  return v20;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::WaitASync  (binary VA: 0xcb8b30)
// Original: glf::FileStreamImpl::WaitASync
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::WaitASync(glf::FileStreamImpl::Self *self, glf::FileStreamImpl::Self *a2)
{
  int result;
  int v3;

  result = 1;
  v3 = *((uint32_t *)self + 10);
  _mm_mfence();
  if ( v3 != 0 )
    return (uint8_t)glf::WaitAllDone(self, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Close  (binary VA: 0xcb8b70)
// Original: glf::FileStreamImpl::Close
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Close(glf::FileStreamImpl::Self *self)
{
  int result;

  glf::FileStreamImpl::WaitASync(self, (glf::FileStreamImpl::Self *)0xFFFFFFFF);
  result = (*(int (**)(uint32_t))(**((uint32_t **)self + 12) + 12))(*((uint32_t *)self + 12));
  *((uint8_t *)self + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Destroy  (binary VA: 0xcb8bc0)
// Original: glf::FileStreamImpl::~FileStreamImpl
// ----------------------------------------------------------------------------
void glf::FileStreamImpl::Destroy(glf::FileStreamImpl::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E148);
  glf::FileStreamImpl::Close(self);
  v1 = *((uint32_t *)self + 12);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(*((uint32_t *)self + 12));
  v2 = *((uint32_t *)self + 8);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E488);
  glf::Stream::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Destroy_eacb8c40  (binary VA: 0xcb8c40)
// Original: glf::FileStreamImpl::~FileStreamImpl
// ----------------------------------------------------------------------------
void glf::FileStreamImpl::Destroy_eacb8c40(glf::FileStreamImpl::Self *self)
{
  glf::FileStreamImpl::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::CopyPath  (binary VA: 0xcb8c80)
// Original: glf::FileStreamImpl::CopyPath
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::CopyPath(char **self, glf::Self *a2, char *a3)
{
  glf::Strncpy_s(a2, a3, *(self + 8), *((uint32_t *)*(self + 8) - 3));
  return (unsigned int)(uintptr_t)(*(self + 9)) & 0xF000;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::GetPath  (binary VA: 0xcb8ce0)
// Original: glf::FileStreamImpl::GetPath
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::GetPath(int a1, int *a2)
{
  *a2 = *(uint32_t *)(a1 + 36) & 0xF000;
  return *(uint32_t *)(a1 + 32);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::GetFilename  (binary VA: 0xcb8d00)
// Original: glf::FileStreamImpl::GetFilename
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::GetFilename(glf::FileStreamImpl::Self *self)
{
  return *((uint32_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::Tell  (binary VA: 0xcb9420)
// Original: glf::FileStreamImpl::Impl::Tell
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Impl::Tell(glf::FileStreamImpl::Impl::Self *self)
{
  int v1;

  if ( *((uint8_t *)self + 36) != 0 )
    return (*(int (**)(uint32_t))(**((uint32_t **)self + 10) + 64))(*((uint32_t *)self + 10));
  if ( *((uint8_t *)self + 20) == 0 )
    return glf::IOStream::FilePosition::Tell((glf::IOStream::FilePosition::Self *)(*((uint32_t *)self + 1) + 24));
  v1 = *((uint32_t *)self + 11);
  if ( v1 != 0 )
    return G4_VCALL<int>(v1, 36);
  if ( *((uint8_t *)self + 21) != 0 )
    return ftell(*((FILE **)self + 4));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::GetSize  (binary VA: 0xcb94b0)
// Original: glf::FileStreamImpl::Impl::GetSize
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Impl::GetSize(glf::FileStreamImpl::Impl::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 11);
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 32))(*((uint32_t *)self + 11));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::Write  (binary VA: 0xcb9550)
// Original: glf::FileStreamImpl::Impl::Write
// ----------------------------------------------------------------------------
size_t glf::FileStreamImpl::Impl::Write(glf::FileStreamImpl::Impl::Self *self, const void *ptr, size_t n)
{
  size_t result;

  if ( *((uint8_t *)self + 36) != 0 )
    return (*(int (**)(uint32_t, const void *, size_t))(**((uint32_t **)self + 10) + 20))(
             *((uint32_t *)self + 10),
             ptr,
             n);
  result = 0;
  if ( *((uint8_t *)self + 20) != 0 && *((uint32_t *)self + 11) == 0 && *((uint8_t *)self + 21) != 0 )
    return fwrite(ptr, 1u, n, *((FILE **)self + 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::Seek  (binary VA: 0xcb95e0)
// Original: glf::FileStreamImpl::Impl::Seek
// ----------------------------------------------------------------------------
char glf::FileStreamImpl::Impl::Seek(int a1, int off, int whence)
{
  int v3;
  int v4;
  int v6;
  int v7;

  if ( *(uint8_t *)(a1 + 36) != 0 )
  {
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 40) + 60))(*(uint32_t *)(a1 + 40), off, whence);
    return 0;
  }
  else if ( *(uint8_t *)(a1 + 20) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 44);
    if ( v3 != 0 )
    {
      if ( whence == 1 )
      {
        return G4_VCALL<int>(v3, 24, off, 1);
      }
      else
      {
        v4 = off;
        if ( whence == 2 )
        {
          v4 = G4_VCALL<int>(a1, 36) + off;
          v3 = *(uint32_t *)(a1 + 44);
        }
        return G4_VCALL<int>(v3, 24, v4, 0);
      }
    }
    else
    {
      return *(uint8_t *)(a1 + 21) != 0 && fseek(*(FILE **)(a1 + 16), off, whence) == 0;
    }
  }
  else
  {
    v6 = *(uint32_t *)(a1 + 28);
    v7 = v6 + off;
    if ( whence == 1 )
    {
      v7 += G4_VCALL<int>(a1, 20);
    }
    else if ( whence == 2 )
    {
      v7 = off + v6 + *(uint32_t *)(a1 + 32);
    }
    return (*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)(a1 + 24) + 60))(*(uint32_t *)(a1 + 24), v7, 0);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::Close  (binary VA: 0xcb9720)
// Original: glf::FileStreamImpl::Impl::Close
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Impl::Close(glf::FileStreamImpl::Impl::Self *self)
{
  volatile int32_t *v1;
  int result;

  if ( *((uint8_t *)self + 36) != 0 )
    return (*(int (**)(uint32_t))(**((uint32_t **)self + 10) + 8))(*((uint32_t *)self + 10));
  if ( *((uint8_t *)self + 20) != 0 )
  {
    v1 = *((volatile int32_t **)self + 11);
    if ( v1 != nullptr )
    {
      *((uint32_t *)self + 11) = 0;
      result = __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF);
      if ( result == 1 )
      {
        G4_VCALL<void>(v1, 8);
        return G4_VCALL<int>(v1, 4);
      }
    }
    else
    {
      result = *((uint32_t *)self + 4);
      if ( result != 0 )
      {
        result = fclose(*((FILE **)self + 4));
        *((uint32_t *)self + 4) = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::Read  (binary VA: 0xcb97c0)
// Original: glf::FileStreamImpl::Impl::Read
// ----------------------------------------------------------------------------
size_t glf::FileStreamImpl::Impl::Read(glf::FileStreamImpl::Impl::Self *self, void *ptr, size_t a3)
{
  size_t n;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  int v8;

  n = a3;
  if ( *((uint8_t *)self + 36) != 0 )
  {
    v4 = *((uint32_t *)self + 10);
    return G4_VCALL<int>(v4, 12, ptr, n);
  }
  if ( *((uint8_t *)self + 20) == 0 )
  {
    v6 = G4_VCALL<int>(self, 20);
    if ( *((uint32_t *)self + 8) - v6 <= a3 )
      n = *((uint32_t *)self + 8) - v6;
    (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)self + 6) + 60))(
      *((uint32_t *)self + 6),
      *((uint32_t *)self + 7) + v6,
      0);
    v4 = *((uint32_t *)self + 6);
    return G4_VCALL<int>(v4, 12, ptr, n);
  }
  v4 = *((uint32_t *)self + 11);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 12, ptr, n);
  result = 0;
  if ( *((uint8_t *)self + 21) != 0 )
  {
    v8 = (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 52))(*((uint32_t *)self + 3));
    v7 = v8 - (*(int (**)(char *))(*((uint32_t *)self + 2) + 20))((char *)self + 8);
    if ( v7 <= a3 )
      n = v7;
    return fread(ptr, 1u, n, *((FILE **)self + 4));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::ReadWithOffset  (binary VA: 0xcb98c0)
// Original: glf::FileStreamImpl::Impl::ReadWithOffset
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Impl::ReadWithOffset(glf::FileStreamImpl::Impl::Self *self, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int result;
  int v8;
  unsigned int v9;
  int v10;
  const char **v11;

  v4 = a3;
  if ( *((uint8_t *)self + 36) != 0 )
    return (*(int (**)(uint32_t, void *, unsigned int, unsigned int))(**((uint32_t **)self + 10) + 16))(
             *((uint32_t *)self + 10),
             a2,
             a3,
             a4);
  if ( *((uint8_t *)self + 20) == 0 )
  {
    v8 = G4_VCALL<int>(self, 20);
    if ( *((uint32_t *)self + 8) - v8 <= a3 )
      v4 = *((uint32_t *)self + 8) - v8;
    (*(void (**)(uint32_t, unsigned int, uint32_t))(**((uint32_t **)self + 6) + 60))(
      *((uint32_t *)self + 6),
      a4 + *((uint32_t *)self + 7) + v8,
      0);
    v6 = *((uint32_t *)self + 6);
    return G4_VCALL<int>(v6, 12, a2, v4);
  }
  v5 = *((uint32_t *)self + 11);
  if ( v5 != 0 )
  {
    G4_VCALL<void>(v5, 24, a4, 1);
    v6 = *((uint32_t *)self + 11);
    return G4_VCALL<int>(v6, 12, a2, v4);
  }
  result = 0;
  if ( *((uint8_t *)self + 21) != 0 )
  {
    v9 = (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 52))(*((uint32_t *)self + 3)) - a4;
    if ( v9 <= a3 )
      v4 = v9;
    result = pread(*(int16_t *)(*((uint32_t *)self + 4) + 14), a2, v4, a4);
    v10 = result;
    if ( result < 0 )
    {
      v11 = (const char **)__errno();
      glf::Console::Print((glf::Console::Self *)"ReadWithOffset error: %d\n", *v11);
      return v10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::Destroy  (binary VA: 0xcb9a10)
// Original: glf::FileStreamImpl::Impl::~Impl
// ----------------------------------------------------------------------------
void glf::FileStreamImpl::Impl::Destroy(glf::FileStreamImpl::Self **self)
{
  volatile int32_t *v1;
  volatile int32_t *v2;
  int v3;
  int v4;

  *self = (glf::FileStreamImpl::Self *)((uint32_t)(uintptr_t)&off_206E1E8);
  glf::FileStreamImpl::GetFilename(*(self + 1));
  G4_VCALL<void>(*(self + 1), 52);
  v1 = (volatile int32_t *)*(self + 11);
  if ( v1 != nullptr )
  {
    *(self + 11) = nullptr;
    if ( __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8);
      G4_VCALL<void>(v1, 4);
    }
    v2 = (volatile int32_t *)*(self + 11);
    if ( v2 != nullptr && __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  v3 = (int)(uintptr_t)(*(self + 10));
  if ( v3 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v3 + 4))((uint32_t)(uintptr_t)(*(self + 10)));
  v4 = (int)(uintptr_t)(*(self + 6));
  if ( v4 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v4 + 4))((uint32_t)(uintptr_t)(*(self + 6)));
  *(self + 2) = (glf::FileStreamImpl::Self *)((uint32_t)(uintptr_t)&off_206E1A8);
  *self = (glf::FileStreamImpl::Self *)((uint32_t)(uintptr_t)&off_206E1A8);
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::Open  (binary VA: 0xcb9af0)
// Original: glf::FileStreamImpl::Impl::Open
// ----------------------------------------------------------------------------
int glf::FileStreamImpl::Impl::Open(int a1, char *a2, int16_t a3)
{
  int v3;
  int16_t v4; // di
  glf::ArchiveManager::Self *v5;
  glf::FileStreamImpl::Self *v6;
  char *v7;
  int result;
  bool v9;
  const char *v10;
  FILE *v11;
  unsigned int v12;
  bool v13;
  unsigned int v14;
  glf::IOStream::Self *v15;
  glf::IOStream::Self *v16;
  volatile int32_t *v17;
  volatile int32_t *v18;
  volatile int32_t *v19;
  int v20;
  glf::ArchiveManager::Self *v21;
  FILE *v22;
  int v23;
  glf::MemoryStream::Self *v24;
  glf::MemoryStream::Self *v25;
  size_t v26;
  typedef int _g4_t_v27;
  typedef char *_g4_t_v28;
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
  typedef glf::ArchiveManager::Self *_g4_t_v40;
  typedef glf::ArchiveManager::Self *_g4_t_v41;
  typedef volatile int32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef glf::MemoryStream::Self *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef void *_g4_t_v46;
  typedef char *_g4_t_filename;
  typedef char *_g4_t_filenamea;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef volatile int32_t *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef size_t _g4_t_v55;
  typedef int (**_g4_t_v56)(glf::FileStreamImpl::Self *);
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int *_g4_t_v70;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v30)) > _g4_s3 ? (12u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v31)) > _g4_s4 ? (16u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v32)) > _g4_s5 ? (20u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v33)) > _g4_s6 ? (24u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v34)) > _g4_s7 ? (28u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v35)) > _g4_s8 ? (32u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v36)) > _g4_s9 ? (36u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v37)) > _g4_s10 ? (40u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v38)) > _g4_s11 ? (44u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v39)) > _g4_s12 ? (48u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v40)) > _g4_s13 ? (52u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v41)) > _g4_s14 ? (52u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v42)) > _g4_s15 ? (56u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v43)) > _g4_s16 ? (56u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v44)) > _g4_s17 ? (56u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v45)) > _g4_s18 ? (60u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v46)) > _g4_s19 ? (60u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_filename)) > _g4_s20 ? (64u + sizeof(_g4_t_filename)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_filenamea)) > _g4_s21 ? (64u + sizeof(_g4_t_filenamea)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v49)) > _g4_s22 ? (68u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v50)) > _g4_s23 ? (72u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v51)) > _g4_s24 ? (76u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v52)) > _g4_s25 ? (80u + sizeof(_g4_t_v52)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v53)) > _g4_s26 ? (84u + sizeof(_g4_t_v53)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v54)) > _g4_s27 ? (88u + sizeof(_g4_t_v54)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v55)) > _g4_s28 ? (92u + sizeof(_g4_t_v55)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v56)) > _g4_s29 ? (96u + sizeof(_g4_t_v56)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v57)) > _g4_s30 ? (100u + sizeof(_g4_t_v57)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v58)) > _g4_s31 ? (104u + sizeof(_g4_t_v58)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v59)) > _g4_s32 ? (108u + sizeof(_g4_t_v59)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v60)) > _g4_s33 ? (112u + sizeof(_g4_t_v60)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v61)) > _g4_s34 ? (116u + sizeof(_g4_t_v61)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v62)) > _g4_s35 ? (120u + sizeof(_g4_t_v62)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v63)) > _g4_s36 ? (124u + sizeof(_g4_t_v63)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v64)) > _g4_s37 ? (128u + sizeof(_g4_t_v64)) : _g4_s37,
    _g4_s39 = (132u + sizeof(_g4_t_v65)) > _g4_s38 ? (132u + sizeof(_g4_t_v65)) : _g4_s38,
    _g4_s40 = (136u + sizeof(_g4_t_v66)) > _g4_s39 ? (136u + sizeof(_g4_t_v66)) : _g4_s39,
    _g4_s41 = (140u + sizeof(_g4_t_v67)) > _g4_s40 ? (140u + sizeof(_g4_t_v67)) : _g4_s40,
    _g4_s42 = (144u + sizeof(_g4_t_v68)) > _g4_s41 ? (144u + sizeof(_g4_t_v68)) : _g4_s41,
    _g4_s43 = (148u + sizeof(_g4_t_v69)) > _g4_s42 ? (148u + sizeof(_g4_t_v69)) : _g4_s42,
    _g4_s44 = (156u + sizeof(_g4_t_v70)) > _g4_s43 ? (156u + sizeof(_g4_t_v70)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 64u);
  _g4_t_filenamea &filenamea = *reinterpret_cast<_g4_t_filenamea *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 100u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 104u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 108u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 112u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 116u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 120u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 124u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 128u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 132u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 136u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 140u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 144u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 148u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 156u);

  v70 = &a1;
  v3 = a1;
  v4 = a3;
  filename = a2;
  v5 = (glf::ArchiveManager::Self *)glf::ArchiveManager::s_instance[0];
  if ( glf::ArchiveManager::s_instance[0] == 0 )
  {
    v42 = (volatile int32_t *)(glf::ArchiveManager::s_instance);
    v21 = (glf::ArchiveManager::Self *)malloc(0x1Cu);
    v5 = v21;
    if ( v21 != nullptr )
    {
      v41 = v21;
      glf::ArchiveManager::ArchiveManager(v21);
      v5 = v41;
    }
    glf::ArchiveManager::s_instance[0] = (uintptr_t)(uintptr_t)(v5);
  }
  *(uint8_t *)(v3 + 20) = 1;
  v40 = v5;
  v39 = v4 & 2;
  v45 = (char *)(v4 & 8);
  if ( !glf::ArchiveManager::IsUsingArchive(v5, v4) || (v4 & 2) != 0 || (v4 & 8) != 0 )
    goto LABEL_14;
  v6 = *(glf::FileStreamImpl::Self **)(v3 + 4);
  v54 = nullptr;
  v55 = 0;
  HIBYTE(v52) = 0;
  v7 = (char *)glf::FileStreamImpl::GetFilename(v6);
  if ( (uint8_t)glf::ArchiveManager::GetArchiveForFile(
                          v40,
                          v7,
                          (int *)(v3 + 28),
                          (int *)(v3 + 32),
                          (bool *)&v52 + 3,
                          (int *)&v55,
                          (const char **)&v54) == 0 )
  {
    v28 = filename;
    sub_871960(&v53, filename);
    v17 = v53;
    if ( v53 != nullptr )
      __sync_add_and_fetch(v53 + 1, 1u);
    v18 = *(volatile int32_t **)(v3 + 44);
    *(uint32_t *)(v3 + 44) = (uint32_t)(uintptr_t)(v17);
    if ( v18 != nullptr && __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF) == 1 )
    {
      v42 = v18;
      G4_VCALL<void>(v18, 8, filename);
      G4_VCALL<void>(v42, 4);
    }
    v19 = v53;
    if ( v53 != nullptr && __sync_fetch_and_add(v53 + 1, 0xFFFFFFFF) == 1 )
    {
      v42 = v19;
      G4_VCALL<void>(v19, 8);
      G4_VCALL<void>(v42, 4);
    }
    v20 = *(uint32_t *)(v3 + 44);
    if ( v20 != 0 )
    {
      G4_VCALL<void>(v20, 32);
      return 1;
    }
    v39 = 0;
LABEL_14:
    *(uint8_t *)(v3 + 20) = 1;
    v9 = v39 == 2;
    *(uint32_t *)(v3 + 16) = 0;
    if ( (v4 & 1) == 0 && v39 != 2 )
      goto LABEL_16;
    if ( (v4 & 0x10) != 0 )
    {
      LOBYTE(v40) = v39 == 2;
      v22 = fopen(filename, "a+b");
      if ( v22 == nullptr )
        goto LABEL_16;
      fclose(v22);
      v9 = v39 == 2;
    }
    v10 = "rb";
    if ( v9 )
    {
      v10 = "wb";
      if ( v45 != (char *)(intptr_t)(byte_8) )
        v10 = (const char *)&off_1B152A5;
    }
    v11 = fopen(filename, v10);
    *(uint32_t *)(v3 + 16) = (uint32_t)(uintptr_t)(v11);
    if ( v11 != nullptr )
    {
      fseek(v11, 0, 2);
      v12 = ftell(*(FILE **)(v3 + 16));
      glf::IOStream::FilePosition::SetFileSize((glf::IOStream::FilePosition::Self *)(*(uint32_t *)(v3 + 12) + 24), v12);
      if ( (v4 & 4) == 0 )
        fseek(*(FILE **)(v3 + 16), 0, 0);
      result = 0;
      v13 = *(uint32_t *)(v3 + 16) == 0;
      *(uint8_t *)(v3 + 21) = *(uint32_t *)(v3 + 16) != 0;
      if ( !v13 )
      {
        v14 = (*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, glf::ArchiveManager::Self *, volatile int32_t *, char *, char *, int, int, int, int, volatile int32_t *, char *, size_t, int (**)(glf::FileStreamImpl::Self *), int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(v3 + 12) + 52))(
                *(uint32_t *)(v3 + 12),
                v27,
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
                v42,
                v45,
                filename,
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
                v61,
                v62,
                v63,
                v64,
                v65,
                v66,
                v67,
                v68,
                v69);
        glf::IOStream::FilePosition::SetFileSize((glf::IOStream::FilePosition::Self *)(*(uint32_t *)(v3 + 4) + 24), v14);
        return 1;
      }
      return result;
    }
LABEL_16:
    *(uint8_t *)(v3 + 21) = 0;
    return 0;
  }
  if ( HIBYTE(v52) != 0 )
  {
    glf::FileStreamImpl::Construct((glf::IOStream::Self *)&v56, v54, (uint8_t *)&dword_0 + 1);
    v56 = (int (**)(glf::FileStreamImpl::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2048D28));
    if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)&v56) == 0 )
      glf::FileStreamImpl::GetFilename(*(glf::FileStreamImpl::Self **)(v3 + 4));
    glf::FileStreamImpl::Seek((int)(uintptr_t)(&v56), *(uint32_t *)(v3 + 28), 0);
    filenamea = (char *)opNewArray(*(uint32_t *)(v3 + 32));
    if ( *(uint32_t *)(v3 + 32) != glf::FileStreamImpl::Read(
                                   (glf::FileStreamImpl::Self *)&v56,
                                   (int)(uintptr_t)(filenamea),
                                   *(uint32_t *)(v3 + 32)) )
    {
      glf::FileStreamImpl::GetFilename(*(glf::FileStreamImpl::Self **)(v3 + 4));
      if ( filenamea != nullptr )
        opDeleteArray(filenamea);
LABEL_12:
      v56 = (int (**)(glf::FileStreamImpl::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2048D28));
      glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)&v56);
      return 0;
    }
    v46 = (void *)opNewArray(v55);
    v23 = LZ4_decompress_fast(filenamea, v46, v55);
    if ( filenamea != nullptr )
    {
      v43 = v23;
      opDeleteArray(filenamea);
      v23 = v43;
    }
    if ( v23 < 0 || *(uint32_t *)(v3 + 32) != v23 )
    {
      glf::FileStreamImpl::GetFilename(*(glf::FileStreamImpl::Self **)(v3 + 4));
      if ( v46 != nullptr )
        opDeleteArray(v46);
      goto LABEL_12;
    }
    v44 = (glf::MemoryStream::Self *)opNew(0x28u);
    glf::MemoryStream::Construct(v44, v46, v55, true);
    v24 = *(glf::MemoryStream::Self **)(v3 + 40);
    v25 = v44;
    if ( v44 != v24 )
    {
      if ( v24 != nullptr )
      {
        (*(void (**)(uint32_t))(*(uint32_t *)v24 + 4))(*(uint32_t *)(v3 + 40));
        v25 = v44;
      }
      *(uint32_t *)(v3 + 40) = (uint32_t)(uintptr_t)(v25);
    }
    if ( v25 != nullptr && G4_VCALL<uint8_t>(v25, 48) != 0 )
    {
      v26 = v55;
      *(uint8_t *)(v3 + 36) = 1;
      glf::IOStream::FilePosition::SetFileSize((glf::IOStream::FilePosition::Self *)(*(uint32_t *)(v3 + 4) + 24), v26);
      *(uint8_t *)(*(uint32_t *)(v3 + 4) + 44) = 1;
    }
    v56 = (int (**)(glf::FileStreamImpl::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2048D28));
    glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)&v56);
  }
  else
  {
    glf::IOStream::FilePosition::SetFileSize(
      (glf::IOStream::FilePosition::Self *)(*(uint32_t *)(v3 + 4) + 24),
      *(uint32_t *)(v3 + 32));
    *(uint8_t *)(*(uint32_t *)(v3 + 4) + 44) = 0;
    v15 = (glf::IOStream::Self *)opNew(0x34u);
    glf::FileStreamImpl::Construct(v15, v54, (uint8_t *)&dword_0 + 1);
    *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_2048D28);
    v16 = *(glf::IOStream::Self **)(v3 + 24);
    if ( v15 != v16 )
    {
      if ( v16 != nullptr )
        (*(void (**)(uint32_t))(*(uint32_t *)v16 + 4))(*(uint32_t *)(v3 + 24));
      *(uint32_t *)(v3 + 24) = (uint32_t)(uintptr_t)(v15);
    }
    G4_VCALL<void>(v15, 60, *(uint32_t *)(v3 + 28), 0);
  }
  *(uint8_t *)(v3 + 20) = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::FileStreamImpl::Impl::Destroy_eacba050  (binary VA: 0xcba050)
// Original: glf::FileStreamImpl::Impl::~Impl
// ----------------------------------------------------------------------------
void glf::FileStreamImpl::Impl::Destroy_eacba050(glf::FileStreamImpl::Self **self)
{
  volatile int32_t *v1;
  volatile int32_t *v2;
  int v3;
  int v4;

  *self = (glf::FileStreamImpl::Self *)((uint32_t)(uintptr_t)&off_206E1E8);
  glf::FileStreamImpl::GetFilename(*(self + 1));
  G4_VCALL<void>(*(self + 1), 52);
  v1 = (volatile int32_t *)*(self + 11);
  if ( v1 != nullptr )
  {
    *(self + 11) = nullptr;
    if ( __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8);
      G4_VCALL<void>(v1, 4);
    }
    v2 = (volatile int32_t *)*(self + 11);
    if ( v2 != nullptr && __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  v3 = (int)(uintptr_t)(*(self + 10));
  if ( v3 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v3 + 4))((uint32_t)(uintptr_t)(*(self + 10)));
  v4 = (int)(uintptr_t)(*(self + 6));
  if ( v4 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v4 + 4))((uint32_t)(uintptr_t)(*(self + 6)));
  *(self + 2) = (glf::FileStreamImpl::Self *)((uint32_t)(uintptr_t)&off_206E1A8);
  *self = (glf::FileStreamImpl::Self *)((uint32_t)(uintptr_t)&off_206E1A8);
  opDelete(self);
}


