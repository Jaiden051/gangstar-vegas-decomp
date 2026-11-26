#include "Core/Utils/DecompTypes.h"
#include "cxx_stl_runtime_part01.h"

// ============================================================================
// G4_UP8Shop/lib/boost/decompiled/cxx_stl_runtime_part01.cpp
// Library: boost | Module: cxx_stl_runtime_part01
// Binary Address Span: 0x18f38b0 .. 0x190ec00 (500 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x18f38b0 (size: 7 bytes)
// Symbol:    _ZThn8_N19hkStatisticsProcess13getProcessTagEv
// Demangled: g4_thunk_0x18f38b0_1(void)
// ============================================================================
int g4_thunk_0x18f38b0_2()
{
  return hkStatisticsProcess::getProcessTag();
}


// ============================================================================
// Address:   0x18f39c0 (size: 10 bytes)
// Symbol:    _ZThn8_N19hkStatisticsProcessD1Ev
// Demangled: g4_thunk_0x18f39c0_3()
// ============================================================================
void g4_thunk_0x18f39c0_4(hkStatisticsProcess::Self *self)
{
  hkStatisticsProcess::Destroy((hkStatisticsProcess::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x18f3a30 (size: 10 bytes)
// Symbol:    _ZThn8_N19hkStatisticsProcessD0Ev
// Demangled: g4_thunk_0x18f3a30_5()
// ============================================================================
void g4_thunk_0x18f3a30_6(hkStatisticsProcess::Self *self)
{
  hkStatisticsProcess::Destroy((hkStatisticsProcess::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x18f4480 (size: 10 bytes)
// Symbol:    _ZThn8_N19hkStatisticsProcess4stepEf
// Demangled: g4_thunk_0x18f4480_7(float)
// ============================================================================
static hkStatisticsProcess::Self *g4_thunk_132(hkStatisticsProcess::Self *self)
{
  return hkStatisticsProcess::step((hkStatisticsProcess::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x18f56d0 (size: 7 bytes)
// Symbol:    _ZThn8_N23hkMemorySnapshotProcess13getProcessTagEv
// Demangled: g4_thunk_0x18f56d0_9(void)
// ============================================================================
int g4_thunk_0x18f56d0_10()
{
  return hkMemorySnapshotProcess::getProcessTag();
}


// ============================================================================
// Address:   0x18f5710 (size: 10 bytes)
// Symbol:    _ZThn8_N23hkMemorySnapshotProcessD1Ev
// Demangled: g4_thunk_0x18f5710_11()
// ============================================================================
void g4_thunk_0x18f5710_12(hkMemorySnapshotProcess::Self *self)
{
  hkMemorySnapshotProcess::Destroy((hkMemorySnapshotProcess::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x18f5790 (size: 7 bytes)
// Symbol:    _ZThn8_N23hkMemorySnapshotProcessD0Ev
// Demangled: g4_thunk_0x18f5790_13()
// ============================================================================
void g4_thunk_0x18f5790_14(hkMemorySnapshotProcess::Self *self)
{
  hkMemorySnapshotProcess::Destroy((hkMemorySnapshotProcess::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x18f5980 (size: 10 bytes)
// Symbol:    _ZThn8_N23hkMemorySnapshotProcess4stepEf
// Demangled: g4_thunk_0x18f5980_15(float)
// ============================================================================
int g4_thunk_0x18f5980_16(hkOArchive::Self **self)
{
  return hkMemorySnapshotProcess::step(self - 2);
}


// ============================================================================
// Address:   0x18f5c50 (size: 22 bytes)
// Symbol:    sub_18F5C50
// Demangled: sub_18F5C50
// ============================================================================
const char *sub_18F5C50()
{
  return "generic";
}


// ============================================================================
// Address:   0x18f5c70 (size: 22 bytes)
// Symbol:    sub_18F5C70
// Demangled: sub_18F5C70
// ============================================================================
const char *sub_18F5C70()
{
  return "system";
}


// ============================================================================
// Address:   0x18f5c90 (size: 24 bytes)
// Symbol:    sub_18F5C90
// Demangled: sub_18F5C90
// ============================================================================
uint32_t *sub_18F5C90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20492A8);
  return a1;
}


// ============================================================================
// Address:   0x18f5cb0 (size: 24 bytes)
// Symbol:    sub_18F5CB0
// Demangled: sub_18F5CB0
// ============================================================================
uint32_t *sub_18F5CB0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20492A8);
  return a1;
}


// ============================================================================
// Address:   0x18f5cd0 (size: 42 bytes)
// Symbol:    sub_18F5CD0
// Demangled: sub_18F5CD0
// ============================================================================
void sub_18F5CD0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20492A8);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f5d00 (size: 42 bytes)
// Symbol:    sub_18F5D00
// Demangled: sub_18F5D00
// ============================================================================
void sub_18F5D00(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20492A8);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f5d30 (size: 42 bytes)
// Symbol:    sub_18F5D30
// Demangled: sub_18F5D30
// ============================================================================
void sub_18F5D30(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20492A8);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f5d60 (size: 249 bytes)
// Symbol:    sub_18F5D60
// Demangled: sub_18F5D60
// ============================================================================
int sub_18F5D60(int a1, int a2, int errnum)
{
  char *v3;
  int v5[7];

  if ( byte_2139E98 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E98) != 0 )
  {
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&unk_2139E74), "Unknown error", (int)(uintptr_t)(v5));
    _cxa_guard_release((__guard *)&byte_2139E98);
    __cxa_atexit((void (*)(void *))g4_dtor_thunk<std::string>, &unk_2139E74, &unk_20D1280);
    v3 = strerror(errnum);
    if ( v3 != nullptr )
      goto LABEL_4;
  }
  else
  {
    v3 = strerror(errnum);
    if ( v3 != nullptr )
    {
LABEL_4:
      g4_std_compat::string_construct_from_cstr(a1, v3, (int)(uintptr_t)(v5));
      return a1;
    }
  }
  g4_std_compat::string_construct_copy(a1, &unk_2139E74);
  return a1;
}


// ============================================================================
// Address:   0x18f5e60 (size: 154 bytes)
// Symbol:    sub_18F5E60
// Demangled: sub_18F5E60
// ============================================================================
int sub_18F5E60(int a1)
{
  if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
  {
    dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
    _cxa_guard_release((__guard *)&byte_2139E80);
    __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
  }
  (*(void (**)(int))(dword_2139E78 + 12))(a1);
  return a1;
}


// ============================================================================
// Address:   0x18f5f00 (size: 8928 bytes)
// Symbol:    sub_18F5F00
// Demangled: sub_18F5F00
// ============================================================================
uint32_t *sub_18F5F00(uint32_t *a1, int a2, int a3)
{
  switch ( a3 )
  {
    case 0:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 0;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 1:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 1;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 2:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 2;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 3:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 3;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 4:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 4;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 5:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 5;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 6:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 6;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 7:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 7;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 8:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 8;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 9:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 9;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 10:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 10;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 11:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 11;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 12:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 12;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 13:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 13;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 14:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 14;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 16:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 16;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 17:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 17;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 18:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 18;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 19:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 19;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 20:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 20;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 21:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 21;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 22:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 22;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 23:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 23;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 24:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 24;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 25:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 25;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 26:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 26;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 27:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 27;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 28:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 28;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 29:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 29;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 30:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 30;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 31:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 31;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 32:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 32;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 33:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 33;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 34:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 34;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 35:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 35;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 36:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 36;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 37:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 37;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 38:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 38;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 39:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 39;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 40:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 40;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 42:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 42;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 43:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 43;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 60:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 60;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 61:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 61;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 62:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 62;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 63:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 63;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 67:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 67;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 71:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 71;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 74:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 74;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 75:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 75;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 84:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 84;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 88:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 88;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 89:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 89;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 90:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 90;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 91:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 91;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 92:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 92;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 93:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 93;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 95:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 95;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 97:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 97;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 98:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 98;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 99:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 99;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 100:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 100;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 101:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 101;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 102:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 102;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 103:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 103;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 104:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 104;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 105:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 105;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 106:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 106;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 107:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 107;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 110:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 110;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 111:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 111;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 113:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 113;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 114:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 114;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 115:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 115;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 125:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 125;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 130:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 130;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    case 131:
      if ( byte_2139E80 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E80) != 0 )
      {
        dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
        _cxa_guard_release((__guard *)&byte_2139E80);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
      }
      *a1 = 131;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E78);
      break;
    default:
      if ( byte_2139E88 == 0 && _cxa_guard_acquire((__guard *)&byte_2139E88) != 0 )
      {
        dword_2139E7C = (int)(uintptr_t)(&off_20A9208);
        _cxa_guard_release((__guard *)&byte_2139E88);
        __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5C90), &dword_2139E7C, &unk_20D1280);
      }
      *a1 = a3;
      a1[1] = (uint32_t)(uintptr_t)(&dword_2139E7C);
      break;
  }
  return a1;
}


// ============================================================================
// Address:   0x18f81e0 (size: 130 bytes)
// Symbol:    sub_18F81E0
// Demangled: sub_18F81E0
// ============================================================================
int *sub_18F81E0()
{
  if ( byte_2139E88 != 0 || _cxa_guard_acquire((__guard *)&byte_2139E88) == 0 )
    return (int *)(&dword_2139E7C);
  dword_2139E7C = (int)(uintptr_t)(&off_20A9208);
  _cxa_guard_release((__guard *)&byte_2139E88);
  __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5C90), &dword_2139E7C, &unk_20D1280);
  return (int *)(&dword_2139E7C);
}


// ============================================================================
// Address:   0x18f8270 (size: 130 bytes)
// Symbol:    sub_18F8270
// Demangled: sub_18F8270
// ============================================================================
int *sub_18F8270()
{
  if ( byte_2139E80 != 0 || _cxa_guard_acquire((__guard *)&byte_2139E80) == 0 )
    return (int *)(&dword_2139E78);
  dword_2139E78 = (int)(uintptr_t)(&off_20A91C8);
  _cxa_guard_release((__guard *)&byte_2139E80);
  __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_18F5CB0), &dword_2139E78, &unk_20D1280);
  return (int *)(&dword_2139E78);
}


// ============================================================================
// Address:   0x18f8300 (size: 76 bytes)
// Symbol:    sub_18F8300
// Demangled: sub_18F8300
// ============================================================================
int *sub_18F8300()
{
  int *result;

  dword_2139EA8 = (int)(uintptr_t)(sub_18F8270());
  dword_2139EA4 = (int)(uintptr_t)(sub_18F8270());
  dword_2139EA0 = (int)(uintptr_t)(sub_18F81E0());
  dword_2139E90 = 0;
  result = sub_18F81E0();
  dword_2139E94 = (int)(uintptr_t)(result);
  return result;
}


// ============================================================================
// Address:   0x18f8350 (size: 29 bytes)
// Symbol:    sub_18F8350
// Demangled: sub_18F8350
// ============================================================================
uint32_t *sub_18F8350(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A93D0);
  return a1;
}


// ============================================================================
// Address:   0x18f8370 (size: 9 bytes)
// Symbol:    sub_18F8370
// Demangled: sub_18F8370
// ============================================================================
void sub_18F8370()
{
  ;
}


// ============================================================================
// Address:   0x18f8380 (size: 9 bytes)
// Symbol:    sub_18F8380
// Demangled: sub_18F8380
// ============================================================================
void sub_18F8380()
{
  ;
}


// ============================================================================
// Address:   0x18f8390 (size: 24 bytes)
// Symbol:    sub_18F8390
// Demangled: sub_18F8390
// ============================================================================
uint32_t *sub_18F8390(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2059EC8);
  return a1;
}


// ============================================================================
// Address:   0x18f83b0 (size: 24 bytes)
// Symbol:    sub_18F83B0
// Demangled: sub_18F83B0
// ============================================================================
uint32_t *sub_18F83B0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2059EC8);
  return a1;
}


// ============================================================================
// Address:   0x18f83d0 (size: 24 bytes)
// Symbol:    sub_18F83D0
// Demangled: sub_18F83D0
// ============================================================================
uint32_t *sub_18F83D0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2059EC8);
  return a1;
}


// ============================================================================
// Address:   0x18f83f0 (size: 28 bytes)
// Symbol:    sub_18F83F0
// Demangled: sub_18F83F0
// ============================================================================
int sub_18F83F0(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 12);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*(uint32_t *)(a1 + 12));
  return result;
}


// ============================================================================
// Address:   0x18f8410 (size: 9 bytes)
// Symbol:    sub_18F8410
// Demangled: sub_18F8410
// ============================================================================
int sub_18F8410()
{
  return 0;
}


// ============================================================================
// Address:   0x18f8420 (size: 9 bytes)
// Symbol:    sub_18F8420
// Demangled: sub_18F8420
// ============================================================================
int sub_18F8420()
{
  return 0;
}


// ============================================================================
// Address:   0x18f8430 (size: 28 bytes)
// Symbol:    sub_18F8430
// Demangled: sub_18F8430
// ============================================================================
int sub_18F8430(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 12);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*(uint32_t *)(a1 + 12));
  return result;
}


// ============================================================================
// Address:   0x18f8450 (size: 9 bytes)
// Symbol:    sub_18F8450
// Demangled: sub_18F8450
// ============================================================================
int sub_18F8450()
{
  return 0;
}


// ============================================================================
// Address:   0x18f8460 (size: 9 bytes)
// Symbol:    sub_18F8460
// Demangled: sub_18F8460
// ============================================================================
int sub_18F8460()
{
  return 0;
}


// ============================================================================
// Address:   0x18f8470 (size: 28 bytes)
// Symbol:    sub_18F8470
// Demangled: sub_18F8470
// ============================================================================
int sub_18F8470(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 12);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*(uint32_t *)(a1 + 12));
  return result;
}


// ============================================================================
// Address:   0x18f8490 (size: 9 bytes)
// Symbol:    sub_18F8490
// Demangled: sub_18F8490
// ============================================================================
int sub_18F8490()
{
  return 0;
}


// ============================================================================
// Address:   0x18f84a0 (size: 9 bytes)
// Symbol:    sub_18F84A0
// Demangled: sub_18F84A0
// ============================================================================
int sub_18F84A0()
{
  return 0;
}


// ============================================================================
// Address:   0x18f84b0 (size: 45 bytes)
// Symbol:    sub_18F84B0
// Demangled: sub_18F84B0
// ============================================================================
void sub_18F84B0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A93D0);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f84e0 (size: 42 bytes)
// Symbol:    sub_18F84E0
// Demangled: sub_18F84E0
// ============================================================================
void sub_18F84E0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f8510 (size: 42 bytes)
// Symbol:    sub_18F8510
// Demangled: sub_18F8510
// ============================================================================
void sub_18F8510(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f8540 (size: 42 bytes)
// Symbol:    sub_18F8540
// Demangled: sub_18F8540
// ============================================================================
void sub_18F8540(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f8570 (size: 42 bytes)
// Symbol:    sub_18F8570
// Demangled: sub_18F8570
// ============================================================================
void sub_18F8570(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f85a0 (size: 46 bytes)
// Symbol:    sub_18F85A0
// Demangled: sub_18F85A0
// ============================================================================
int sub_18F85A0()
{
  return pthread_key_create((pthread_key_t *)&dword_2139EF0, (void (*)(void *))sub_18F9950);
}


// ============================================================================
// Address:   0x18f85d0 (size: 101 bytes)
// Symbol:    sub_18F85D0
// Demangled: sub_18F85D0
// ============================================================================
void sub_18F85D0(std::exception *a1)
{
  int v1;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f8640 (size: 101 bytes)
// Symbol:    sub_18F8640
// Demangled: sub_18F8640
// ============================================================================
void sub_18F8640(std::exception *a1)
{
  int v1;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f86b0 (size: 101 bytes)
// Symbol:    sub_18F86B0
// Demangled: sub_18F86B0
// ============================================================================
void sub_18F86B0(std::exception *a1)
{
  int v1;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f8720 (size: 101 bytes)
// Symbol:    sub_18F8720
// Demangled: sub_18F8720
// ============================================================================
void sub_18F8720(std::exception *a1)
{
  int v1;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f8790 (size: 101 bytes)
// Symbol:    sub_18F8790
// Demangled: sub_18F8790
// ============================================================================
void sub_18F8790(std::exception *a1)
{
  int v1;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18f8800 (size: 295 bytes)
// Symbol:    sub_18F8800
// Demangled: sub_18F8800
// ============================================================================
void __noreturn sub_18F8800(uint32_t *a1)
{
  uint32_t *exception;
  int v2;
  int v3;

  exception = (uint32_t *)(_cxa_allocate_exception(0x2Cu));
  exception[10] = ((uint32_t)(uintptr_t)&off_20A93D0);
  *exception = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy(exception + 1, a1 + 1);
  *exception = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = a1[3];
  exception[2] = a1[2];
  exception[3] = v2;
  g4_std_compat::string_construct_copy(exception + 4, a1 + 4);
  *exception = ((uint32_t)(uintptr_t)&off_2093D18);
  exception[5] = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = a1[6];
  exception[6] = v3;
  if ( v3 != 0 )
    (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
  exception[7] = a1[7];
  exception[8] = a1[8];
  exception[9] = a1[9];
  *exception = ((uint32_t)(uintptr_t)&off_20A95EC);
  exception[5] = ((uint32_t)(uintptr_t)&off_20A9608);
  exception[10] = (uint32_t)(uintptr_t)(&off_20A9624);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_0d30eb852d,
    (void (*)(void *))sub_18F92A0);
}
// ----------------------------------------------------------------------------
// Function: sub_18F8930  (binary VA: 0x18f8930)
// Original: sub_18F8930
// ----------------------------------------------------------------------------
void sub_18F8930(uint32_t *a1)
{
  sub_18F8800((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)));
}

// ----------------------------------------------------------------------------
// Function: sub_18F8950  (binary VA: 0x18f8950)
// Original: sub_18F8950
// ----------------------------------------------------------------------------
void sub_18F8950(uint32_t *a1)
{
  uint32_t *exception;
  int v2;
  int v3;

  exception = (uint32_t *)(_cxa_allocate_exception(0x2Cu));
  exception[10] = ((uint32_t)(uintptr_t)&off_20A93D0);
  *exception = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std::string::construct_copy(exception + 1, a1 + 1);
  *exception = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = a1[3];
  exception[2] = a1[2];
  exception[3] = v2;
  g4_std::string::construct_copy(exception + 4, a1 + 4);
  *exception = ((uint32_t)(uintptr_t)&off_20495E0);
  exception[5] = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = a1[6];
  exception[6] = v3;
  if ( v3 != 0 )
    G4_VCALL<void>(v3, 12);
  exception[7] = a1[7];
  exception[8] = a1[8];
  exception[9] = a1[9];
  *exception = ((uint32_t)(uintptr_t)&off_20A954C);
  exception[5] = ((uint32_t)(uintptr_t)&off_20A9568);
  exception[10] = (uint32_t)(uintptr_t)(&off_20A9584);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_a46e2530d2,
    (void (*)(void *))sub_18F9120);
}


// ============================================================================
// Address:   0x18f8a80 (size: 18 bytes)
// Symbol:    sub_18F8A80
// Demangled: sub_18F8A80
// ============================================================================
void __noreturn sub_18F8A80(uint32_t *a1)
{
  sub_18F8950((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)));
}


// ============================================================================
// Address:   0x18f8aa0 (size: 295 bytes)
// Symbol:    sub_18F8AA0
// Demangled: sub_18F8AA0
// ============================================================================
void __noreturn sub_18F8AA0(uint32_t *a1)
{
  uint32_t *exception;
  int v2;
  int v3;

  exception = (uint32_t *)(_cxa_allocate_exception(0x2Cu));
  exception[10] = ((uint32_t)(uintptr_t)&off_20A93D0);
  *exception = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy(exception + 1, a1 + 1);
  *exception = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = a1[3];
  exception[2] = a1[2];
  exception[3] = v2;
  g4_std_compat::string_construct_copy(exception + 4, a1 + 4);
  *exception = ((uint32_t)(uintptr_t)&off_2049568);
  exception[5] = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = a1[6];
  exception[6] = v3;
  if ( v3 != 0 )
    (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
  exception[7] = a1[7];
  exception[8] = a1[8];
  exception[9] = a1[9];
  *exception = ((uint32_t)(uintptr_t)&off_20A94AC);
  exception[5] = ((uint32_t)(uintptr_t)&off_20A94C8);
  exception[10] = (uint32_t)(uintptr_t)(&off_20A94E4);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_5c244f8a6e,
    (void (*)(void *))sub_18F91E0);
}

// ----------------------------------------------------------------------------
// Function: sub_18F8BD0  (binary VA: 0x18f8bd0)
// Original: sub_18F8BD0
// ----------------------------------------------------------------------------
void sub_18F8BD0(uint32_t *a1)
{
  sub_18F8AA0((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)));
}



// ============================================================================
// Address:   0x18f8bf0 (size: 188 bytes)
// Symbol:    sub_18F8BF0
// Demangled: sub_18F8BF0
// ============================================================================
void (**sub_18F8BF0(uint32_t *a1, int a2, char *a3))(boost::condition_error::Self * self)
{
  int *v3;
  void *v4;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (11u + sizeof(_g4_t_v6)) > _g4_s0 ? (11u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 11u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v3 = sub_18F81E0();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), a3, (int)(uintptr_t)(&v6));
  sub_19042E0(a1, v7);
  v4 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  a1[3] = (uint32_t)(uintptr_t)(v3);
  a1[2] = a2;
  a1[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  *a1 = ((uint32_t)(uintptr_t)&off_2093D18);
  return (void (**)(boost::condition_error::Self *))(uintptr_t)((void (**)(int *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2093D18)));
}
// ----------------------------------------------------------------------------
// Function: sub_18F8D10  (binary VA: 0x18f8d10)
// Original: sub_18F8D10
// ----------------------------------------------------------------------------
void sub_18F8D10(boost::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A93E8);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A93F8);
  g4_std::bad_alloc::Destroy((boost::exception *)((char *)a1 + 20));
  g4_noop_dtor(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_18F8D50  (binary VA: 0x18f8d50)
// Original: sub_18F8D50
// ----------------------------------------------------------------------------
void sub_18F8D50(int a1)
{
  sub_18F8D10((boost::exception *)(a1 - 20));
}

// ----------------------------------------------------------------------------
// Function: sub_18F8D60  (binary VA: 0x18f8d60)
// Original: sub_18F8D60
// ----------------------------------------------------------------------------
void sub_18F8D60(boost::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A93E8);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A93F8);
  g4_std::bad_alloc::Destroy((boost::exception *)((char *)a1 + 20));
  g4_noop_dtor(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_18F8DB0  (binary VA: 0x18f8db0)
// Original: sub_18F8DB0
// ----------------------------------------------------------------------------
void sub_18F8DB0(int a1)
{
  sub_18F8D60((boost::exception *)(a1 - 20));
}



// ============================================================================
// Address:   0x18f8dc0 (size: 82 bytes)
// Symbol:    sub_18F8DC0
// Demangled: sub_18F8DC0
// ============================================================================
void ( **sub_18F8DC0(boost::exception *a1))()
{
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20A9684);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A93E8);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A93F8);
  g4_std::bad_alloc::Destroy((boost::exception *)((char *)a1 + 20));
  g4_noop_dtor(a1);
  *((uint32_t *)a1 + 6) = ((uint32_t)(uintptr_t)&off_20A93D0);
  return (void (**)())(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93D0));
}


// ============================================================================
// Address:   0x18f8e20 (size: 15 bytes)
// Symbol:    sub_18F8E20
// Demangled: sub_18F8E20
// ============================================================================
void ( **sub_18F8E20(boost::exception *a1))()
{
  return sub_18F8DC0((boost::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}


// ============================================================================
// Address:   0x18f8e30 (size: 7 bytes)
// Symbol:    sub_18F8E30
// Demangled: sub_18F8E30
// ============================================================================
void ( **sub_18F8E30(int a1))()
{
  return sub_18F8DC0((boost::exception *)(a1 - 20));
}
// ----------------------------------------------------------------------------
// Function: sub_18F8E40  (binary VA: 0x18f8e40)
// Original: sub_18F8E40
// ----------------------------------------------------------------------------
void sub_18F8E40(boost::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9428);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A9438);
  g4_noop_dtor((boost::exception *)((char *)a1 + 20));
  g4_noop_dtor(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_18F8E80  (binary VA: 0x18f8e80)
// Original: sub_18F8E80
// ----------------------------------------------------------------------------
void sub_18F8E80(int a1)
{
  sub_18F8E40((boost::exception *)(a1 - 20));
}

// ----------------------------------------------------------------------------
// Function: sub_18F8E90  (binary VA: 0x18f8e90)
// Original: sub_18F8E90
// ----------------------------------------------------------------------------
void sub_18F8E90(boost::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9428);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A9438);
  g4_noop_dtor((boost::exception *)((char *)a1 + 20));
  g4_noop_dtor(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_18F8EE0  (binary VA: 0x18f8ee0)
// Original: sub_18F8EE0
// ----------------------------------------------------------------------------
void sub_18F8EE0(int a1)
{
  sub_18F8E90((boost::exception *)(a1 - 20));
}



// ============================================================================
// Address:   0x18f8ef0 (size: 82 bytes)
// Symbol:    sub_18F8EF0
// Demangled: sub_18F8EF0
// ============================================================================
void ( **sub_18F8EF0(boost::exception *a1))()
{
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20A96E4);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9428);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A9438);
  g4_noop_dtor((boost::exception *)((char *)a1 + 20));
  g4_noop_dtor(a1);
  *((uint32_t *)a1 + 6) = ((uint32_t)(uintptr_t)&off_20A93D0);
  return (void (**)())(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93D0));
}


// ============================================================================
// Address:   0x18f8f50 (size: 15 bytes)
// Symbol:    sub_18F8F50
// Demangled: sub_18F8F50
// ============================================================================
void ( **sub_18F8F50(boost::exception *a1))()
{
  return sub_18F8EF0((boost::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}


// ============================================================================
// Address:   0x18f8f60 (size: 7 bytes)
// Symbol:    sub_18F8F60
// Demangled: sub_18F8F60
// ============================================================================
void ( **sub_18F8F60(int a1))()
{
  return sub_18F8EF0((boost::exception *)(a1 - 20));
}


// ============================================================================
// Address:   0x18f9120 (size: 144 bytes)
// Symbol:    sub_18F9120
// Demangled: sub_18F9120
// ============================================================================
void ( **sub_18F9120(std::exception *a1))()
{
  int v1;

  *((uint32_t *)a1 + 10) = (uint32_t)(uintptr_t)(&off_20A9584);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A951C);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9508);
  g4_noop_dtor((std::exception *)((char *)a1 + 20));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  *((uint32_t *)a1 + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  return (void (**)())(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93D0));
}


// ============================================================================
// Address:   0x18f91b0 (size: 18 bytes)
// Symbol:    sub_18F91B0
// Demangled: sub_18F91B0
// ============================================================================
void ( **sub_18F91B0(std::exception *a1))()
{
  return sub_18F9120((std::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}


// ============================================================================
// Address:   0x18f91d0 (size: 10 bytes)
// Symbol:    sub_18F91D0
// Demangled: sub_18F91D0
// ============================================================================
void ( **sub_18F91D0(int a1))()
{
  return sub_18F9120((std::exception *)(a1 - 20));
}


// ============================================================================
// Address:   0x18f91e0 (size: 144 bytes)
// Symbol:    sub_18F91E0
// Demangled: sub_18F91E0
// ============================================================================
void ( **sub_18F91E0(std::exception *a1))()
{
  int v1;

  *((uint32_t *)a1 + 10) = (uint32_t)(uintptr_t)(&off_20A94E4);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A947C);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9468);
  g4_noop_dtor((std::exception *)((char *)a1 + 20));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  *((uint32_t *)a1 + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  return (void (**)())(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93D0));
}


// ============================================================================
// Address:   0x18f9270 (size: 18 bytes)
// Symbol:    sub_18F9270
// Demangled: sub_18F9270
// ============================================================================
void ( **sub_18F9270(std::exception *a1))()
{
  return sub_18F91E0((std::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}


// ============================================================================
// Address:   0x18f9290 (size: 10 bytes)
// Symbol:    sub_18F9290
// Demangled: sub_18F9290
// ============================================================================
void ( **sub_18F9290(int a1))()
{
  return sub_18F91E0((std::exception *)(a1 - 20));
}


// ============================================================================
// Address:   0x18f92a0 (size: 144 bytes)
// Symbol:    sub_18F92A0
// Demangled: sub_18F92A0
// ============================================================================
void ( **sub_18F92A0(std::exception *a1))()
{
  int v1;

  *((uint32_t *)a1 + 10) = (uint32_t)(uintptr_t)(&off_20A9624);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A95BC);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A95A8);
  g4_noop_dtor((std::exception *)((char *)a1 + 20));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  *((uint32_t *)a1 + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  return (void (**)())(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93D0));
}


// ============================================================================
// Address:   0x18f9330 (size: 18 bytes)
// Symbol:    sub_18F9330
// Demangled: sub_18F9330
// ============================================================================
void ( **sub_18F9330(std::exception *a1))()
{
  return sub_18F92A0((std::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}


// ============================================================================
// Address:   0x18f9350 (size: 10 bytes)
// Symbol:    sub_18F9350
// Demangled: sub_18F9350
// ============================================================================
void ( **sub_18F9350(int a1))()
{
  return sub_18F92A0((std::exception *)(a1 - 20));
}
// ----------------------------------------------------------------------------
// Function: sub_18F9360  (binary VA: 0x18f9360)
// Original: sub_18F9360
// ----------------------------------------------------------------------------
void sub_18F9360(boost::exception *a1)
{
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20A96E4);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9428);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A9438);
  g4_noop_dtor((boost::exception *)((char *)a1 + 20));
  g4_noop_dtor(a1);
  *((uint32_t *)a1 + 6) = ((uint32_t)(uintptr_t)&off_20A93D0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_18F93C0  (binary VA: 0x18f93c0)
// Original: sub_18F93C0
// ----------------------------------------------------------------------------
void sub_18F93C0(boost::exception *a1)
{
  sub_18F9360((boost::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}

// ----------------------------------------------------------------------------
// Function: sub_18F93D0  (binary VA: 0x18f93d0)
// Original: sub_18F93D0
// ----------------------------------------------------------------------------
void sub_18F93D0(int a1)
{
  sub_18F9360((boost::exception *)(a1 - 20));
}

// ----------------------------------------------------------------------------
// Function: sub_18F93E0  (binary VA: 0x18f93e0)
// Original: sub_18F93E0
// ----------------------------------------------------------------------------
void sub_18F93E0(boost::exception *a1)
{
  *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(&off_20A9684);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A93E8);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A93F8);
  g4_std::bad_alloc::Destroy((boost::exception *)((char *)a1 + 20));
  g4_noop_dtor(a1);
  *((uint32_t *)a1 + 6) = ((uint32_t)(uintptr_t)&off_20A93D0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_18F9440  (binary VA: 0x18f9440)
// Original: sub_18F9440
// ----------------------------------------------------------------------------
void sub_18F9440(boost::exception *a1)
{
  sub_18F93E0((boost::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}

// ----------------------------------------------------------------------------
// Function: sub_18F9450  (binary VA: 0x18f9450)
// Original: sub_18F9450
// ----------------------------------------------------------------------------
void sub_18F9450(int a1)
{
  sub_18F93E0((boost::exception *)(a1 - 20));
}

// ----------------------------------------------------------------------------
// Function: sub_18F9640  (binary VA: 0x18f9640)
// Original: sub_18F9640
// ----------------------------------------------------------------------------
void sub_18F9640(std::exception *a1)
{
  int v1;

  *((uint32_t *)a1 + 10) = (uint32_t)(uintptr_t)(&off_20A9584);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A951C);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9508);
  g4_noop_dtor((std::exception *)((char *)a1 + 20));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  *((uint32_t *)a1 + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_18F96E0  (binary VA: 0x18f96e0)
// Original: sub_18F96E0
// ----------------------------------------------------------------------------
void sub_18F96E0(std::exception *a1)
{
  sub_18F9640((std::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}

// ----------------------------------------------------------------------------
// Function: sub_18F9700  (binary VA: 0x18f9700)
// Original: sub_18F9700
// ----------------------------------------------------------------------------
void sub_18F9700(int a1)
{
  sub_18F9640((std::exception *)(a1 - 20));
}

// ----------------------------------------------------------------------------
// Function: sub_18F9710  (binary VA: 0x18f9710)
// Original: sub_18F9710
// ----------------------------------------------------------------------------
void sub_18F9710(std::exception *a1)
{
  int v1;

  *((uint32_t *)a1 + 10) = (uint32_t)(uintptr_t)(&off_20A94E4);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A947C);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9468);
  g4_noop_dtor((std::exception *)((char *)a1 + 20));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  *((uint32_t *)a1 + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_18F97B0  (binary VA: 0x18f97b0)
// Original: sub_18F97B0
// ----------------------------------------------------------------------------
void sub_18F97B0(std::exception *a1)
{
  sub_18F9710((std::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}

// ----------------------------------------------------------------------------
// Function: sub_18F97D0  (binary VA: 0x18f97d0)
// Original: sub_18F97D0
// ----------------------------------------------------------------------------
void sub_18F97D0(int a1)
{
  sub_18F9710((std::exception *)(a1 - 20));
}

// ----------------------------------------------------------------------------
// Function: sub_18F97E0  (binary VA: 0x18f97e0)
// Original: sub_18F97E0
// ----------------------------------------------------------------------------
void sub_18F97E0(std::exception *a1)
{
  int v1;

  *((uint32_t *)a1 + 10) = (uint32_t)(uintptr_t)(&off_20A9624);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_20A95BC);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A95A8);
  g4_noop_dtor((std::exception *)((char *)a1 + 20));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)a1 + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(a1);
  *((uint32_t *)a1 + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_18F9880  (binary VA: 0x18f9880)
// Original: sub_18F9880
// ----------------------------------------------------------------------------
void sub_18F9880(std::exception *a1)
{
  sub_18F97E0((std::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}

// ----------------------------------------------------------------------------
// Function: sub_18F98A0  (binary VA: 0x18f98a0)
// Original: sub_18F98A0
// ----------------------------------------------------------------------------
void sub_18F98A0(int a1)
{
  sub_18F97E0((std::exception *)(a1 - 20));
}

// ----------------------------------------------------------------------------
// Function: sub_18F98E0  (binary VA: 0x18f98e0)
// Original: sub_18F98E0
// ----------------------------------------------------------------------------
int sub_18F98E0(volatile int32_t *a1)
{
  int result;

  result = __sync_fetch_and_add(a1 + 1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    G4_VCALL<void>(a1, 8);
    result = __sync_fetch_and_add(a1 + 2, 0xFFFFFFFF);
    if ( result == 1 )
      return G4_VCALL<int>(a1, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18F9930  (binary VA: 0x18f9930)
// Original: sub_18F9930
// ----------------------------------------------------------------------------
int sub_18F9930(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
    return sub_18F98E0(*(volatile int32_t **)(a1 + 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18F9950  (binary VA: 0x18f9950)
// Original: sub_18F9950
// ----------------------------------------------------------------------------
void sub_18F9950(uint32_t *a1)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  volatile int32_t *v7;
  int v8;
  volatile int32_t *v9;
  uint32_t *v10;

  if ( a1 != nullptr )
  {
    v1 = a1[19];
    v2 = (uint32_t *)a1[13];
    v10 = a1 + 15;
    while ( 1 )
    {
      if ( v1 != 0 )
        goto LABEL_9;
LABEL_20:
      if ( v2 == nullptr )
        break;
LABEL_5:
      a1[13] = v2[1];
      if ( *v2 != 0 )
      {
        G4_VCALL<void>(*v2, 8);
        if ( *v2 != 0 )
          G4_VCALL<void>(*v2, 4);
      }
      opDelete(v2);
      v2 = (uint32_t *)a1[13];
      while ( 1 )
      {
LABEL_9:
        if ( v2 != nullptr )
          goto LABEL_5;
        v3 = (uint32_t *)a1[17];
        if ( v3 == v10 )
          break;
        while ( 1 )
        {
          v4 = (uint32_t *)sub_1904890(v3);
          v5 = v3[5];
          if ( v5 != 0 && v3[7] != 0 )
            G4_VCALL<void>(v5, 8, v3[7]);
          v6 = (uint32_t *)sub_1904AE0(v3, v10);
          v7 = (volatile int32_t *)v6[6];
          if ( v7 != nullptr )
            sub_18F98E0(v7);
          opDelete(v6);
          v8 = a1[19] - 1;
          a1[19] = v8;
          if ( v10 == v4 )
            break;
          v3 = v4;
        }
        v2 = (uint32_t *)a1[13];
        if ( v8 == 0 )
          goto LABEL_20;
      }
      v1 = a1[19];
    }
    v9 = (volatile int32_t *)a1[4];
    a1[3] = 0;
    a1[4] = 0;
    if ( v9 != nullptr )
      sub_18F98E0(v9);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_18F9A80  (binary VA: 0x18f9a80)
// Original: sub_18F9A80
// ----------------------------------------------------------------------------
volatile int32_t * sub_18F9A80(volatile int32_t **a1)
{
  volatile int32_t *result;

  result = *a1;
  if ( *a1 != nullptr && __sync_fetch_and_add(result + 2, 0xFFFFFFFF) == 1 )
    return (volatile int32_t *)G4_VCALL<int>(result, 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18F9AC0  (binary VA: 0x18f9ac0)
// Original: sub_18F9AC0
// ----------------------------------------------------------------------------
int sub_18F9AC0(int mutex)
{
  int result;

  while ( pthread_mutex_destroy((pthread_mutex_t *)mutex) == 4 )
    ;
  do
    result = pthread_cond_destroy((pthread_cond_t *)(mutex + 4));
  while ( result == 4 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18F9B10  (binary VA: 0x18f9b10)
// Original: sub_18F9B10
// ----------------------------------------------------------------------------
int sub_18F9B10(pthread_mutex_t *mutex)
{
  pthread_mutex_lock(mutex);
  pthread_cond_broadcast((pthread_cond_t *)(&((int32_t *)(mutex))[0] + 1));
  return pthread_mutex_unlock(mutex);
}

// ----------------------------------------------------------------------------
// Function: sub_18F9BE0  (binary VA: 0x18f9be0)
// Original: sub_18F9BE0
// ----------------------------------------------------------------------------
int sub_18F9BE0(void *pointer)
{
  if ( (uint8_t)boost::thread_detail::enter_once_region(&unk_2139EF4) != 0 )
  {
    pthread_key_create((pthread_key_t *)&dword_2139EF0, (void (*)(void *))sub_18F9950);
    boost::thread_detail::commit_once_region(&unk_2139EF4);
  }
  return pthread_setspecific(dword_2139EF0, pointer);
}

// ----------------------------------------------------------------------------
// Function: sub_18F9FC0  (binary VA: 0x18f9fc0)
// Original: sub_18F9FC0
// ----------------------------------------------------------------------------
uint32_t * sub_18F9FC0(unsigned int a1)
{
  uint32_t *current_thread_data;
  uint32_t *v2;
  uint32_t *result;
  uint32_t *v4;
  uint32_t *v5;

  current_thread_data = (uint32_t *)(boost::detail::get_current_thread_data());
  if ( current_thread_data == nullptr )
    return nullptr;
  v2 = current_thread_data;
  result = (uint32_t *)current_thread_data[16];
  v4 = v2 + 15;
  if ( result == nullptr )
    return nullptr;
  v5 = v4;
  do
  {
    while ( result[4] >= a1 )
    {
      v5 = result;
      result = (uint32_t *)result[2];
      if ( result == nullptr )
        goto LABEL_7;
    }
    result = (uint32_t *)result[3];
  }
  while ( result != nullptr );
LABEL_7:
  if ( v4 == v5 )
    return nullptr;
  if ( v5[4] <= a1 )
    return v5 + 5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18FA140  (binary VA: 0x18fa140)
// Original: sub_18FA140
// ----------------------------------------------------------------------------
void sub_18FA140(volatile int32_t ***a1)
{
  volatile int32_t **v1;
  volatile int32_t **v2;
  volatile int32_t **v3;

  v3 = a1[1];
  if ( v3 == *a1 )
  {
    v2 = a1[1];
  }
  else
  {
    v1 = *a1;
    do
    {
      if ( v1[1] != nullptr )
        sub_18F98E0(v1[1]);
      v1 += 2;
    }
    while ( v3 != v1 );
    v2 = *a1;
  }
  if ( v2 != nullptr )
    opDelete(v2);
}



// ============================================================================
// Address:   0x18fa1d0 (size: 95 bytes)
// Symbol:    sub_18FA1D0
// Demangled: sub_18FA1D0
// ============================================================================
int (**sub_18FA1D0(uint32_t *a1, uint32_t *a2))(int)
{
  int v2;

  *a1 = ((uint32_t)(uintptr_t)&off_2093808);
  v2 = a2[1];
  a1[1] = v2;
  if ( v2 != 0 )
    G4_VCALL<void>(v2, 12);
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  *a1 = ((uint32_t)(uintptr_t)&off_20A93E8);
  a1[5] = ((uint32_t)(uintptr_t)&off_20A93F8);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93F8));
}
// ----------------------------------------------------------------------------
// Function: sub_18FA230  (binary VA: 0x18fa230)
// Original: sub_18FA230
// ----------------------------------------------------------------------------
void sub_18FA230(uint32_t *a1)
{
  uint32_t *exception;

  exception = (uint32_t *)(_cxa_allocate_exception(0x1Cu));
  exception[6] = ((uint32_t)(uintptr_t)&off_20A93D0);
  sub_18FA1D0(exception, a1);
  *exception = ((uint32_t)(uintptr_t)&off_20A964C);
  exception[6] = (uint32_t)(uintptr_t)(&off_20A9684);
  exception[5] = ((uint32_t)(uintptr_t)&off_20A9664);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_ff896603b5,
    (void (*)(void *))((void ( ** (*)(boost::exception *a1))())sub_18F8DC0));
}


// ============================================================================
// Address:   0x18fa2c0 (size: 18 bytes)
// Symbol:    sub_18FA2C0
// Demangled: sub_18FA2C0
// ============================================================================
void __noreturn sub_18FA2C0(uint32_t *a1)
{
  sub_18FA230((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)));
}


// ============================================================================
// Address:   0x18fa2e0 (size: 95 bytes)
// Symbol:    sub_18FA2E0
// Demangled: sub_18FA2E0
// ============================================================================
int (**sub_18FA2E0(uint32_t *a1, uint32_t *a2))(int)
{
  int v2;

  *a1 = ((uint32_t)(uintptr_t)&off_2093808);
  v2 = a2[1];
  a1[1] = v2;
  if ( v2 != 0 )
    (*(void (**)(int))(*(uint32_t *)v2 + 12))(v2);
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  *a1 = ((uint32_t)(uintptr_t)&off_20A9428);
  a1[5] = ((uint32_t)(uintptr_t)&off_20A9438);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A9438));
}


// ============================================================================
// Address:   0x18fa340 (size: 135 bytes)
// Symbol:    sub_18FA340
// Demangled: sub_18FA340
// ============================================================================
void __noreturn sub_18FA340(uint32_t *a1)
{
  uint32_t *exception;

  exception = (uint32_t *)(_cxa_allocate_exception(0x1Cu));
  exception[6] = ((uint32_t)(uintptr_t)&off_20A93D0);
  sub_18FA2E0(exception, a1);
  *exception = ((uint32_t)(uintptr_t)&off_20A96AC);
  exception[6] = (uint32_t)(uintptr_t)(&off_20A96E4);
  exception[5] = ((uint32_t)(uintptr_t)&off_20A96C4);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_4b30845cbe,
    (void (*)(void *))((void ( ** (*)(boost::exception *a1))())sub_18F8EF0));
}

// ----------------------------------------------------------------------------
// Function: sub_18FA3D0  (binary VA: 0x18fa3d0)
// Original: sub_18FA3D0
// ----------------------------------------------------------------------------
void sub_18FA3D0(uint32_t *a1)
{
  sub_18FA340((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16)));
}

// ----------------------------------------------------------------------------
// Function: sub_18FA3F0  (binary VA: 0x18fa3f0)
// Original: sub_18FA3F0
// ----------------------------------------------------------------------------
int sub_18FA3F0(int *a1)
{
  int result;

  result = *a1;
  if ( *a1 != 0 )
  {
    result = (*(int (**)(int))(*(uint32_t *)result + 16))(*a1);
    if ( (uint8_t)result != 0 )
      *a1 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18FA420  (binary VA: 0x18fa420)
// Original: sub_18FA420
// ----------------------------------------------------------------------------
int sub_18FA420(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v6 = 0;
  v2 = a2[1];
  if ( v2 != 0 )
  {
    (*(void (**)(int *, int))(*(uint32_t *)v2 + 20))(v7, v2);
    v3 = v7[0];
    v6 = v7[0];
    if ( v7[0] != 0 )
      G4_VCALL<void>(v7[0], 12);
    if ( v7[0] != 0 )
      G4_VCALL<void>(v7[0], 16);
  }
  else
  {
    v3 = 0;
  }
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[2] = a2[2];
  v4 = a1[1];
  if ( v4 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v4 + 16))(a1[1]);
  a1[1] = v3;
  if ( v3 != 0 )
    G4_VCALL<void>(v3, 12);
  result = v6;
  if ( v6 != 0 )
    return G4_VCALL<int>(v6, 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18FA520  (binary VA: 0x18fa520)
// Original: sub_18FA520
// ----------------------------------------------------------------------------
uint32_t * sub_18FA520(uint32_t *a1)
{
  int v1;
  int v3;
  int v4;
  uint32_t *v5;
  void ( **v15)();
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t _g4_t_v8[5];
  typedef int (**_g4_t_v9)(int);
  typedef uint32_t _g4_t_v10[2];
  typedef const char *_g4_t_v11;
  typedef const char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int (**_g4_t_v14)(int);
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v10)) > _g4_s4 ? (52u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v11)) > _g4_s5 ? (60u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v12)) > _g4_s6 ? (64u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v13)) > _g4_s7 ? (68u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v14)) > _g4_s8 ? (72u + sizeof(_g4_t_v14)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);

  v9 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93F8));
  v14 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A9664));
  v15 = (void ( **)())&off_20A9684;
  memset(&v8[1], 0, 12);
  v8[4] = -1;
  v8[0] = ((uint32_t)(uintptr_t)&off_20A93E8);
  v10[1] = 0;
  v11 = nullptr;
  v12 = nullptr;
  v13 = -1;
  v10[0] = ((uint32_t)(uintptr_t)&off_20A964C);
  sub_18FA420(v10, v8);
  v13 = 124;
  v11 = "boost::exception_ptr boost::exception_detail::get_static_exception_object() [with Exception = boost::exception_d"
        "etail::bad_alloc_]";
  v12 = "./boost/exception/detail/exception_ptr.hpp";
  if ( byte_2139EE8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2139EE8) != 0 )
  {
    v6 = (uint32_t *)opNew(0x1Cu);
    v6[6] = ((uint32_t)(uintptr_t)&off_20A93D0);
    sub_18FA1D0(v6, v10);
    *v6 = ((uint32_t)(uintptr_t)&off_20A964C);
    v6[5] = ((uint32_t)(uintptr_t)&off_20A9664);
    v6[6] = (uint32_t)(uintptr_t)(&off_20A9684);
    v3 = (int)(uintptr_t)(v6 + 6);
    v4 = opNew(0x10u);
    *(uint32_t *)(v4 + 4) = 1;
    *(uint32_t *)(v4 + 8) = 1;
    v5 = v6;
    v7 = (void *)v4;
    *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_20A9708);
    *(uint32_t *)(v4 + 12) = (uint32_t)(uintptr_t)(v5);
    dword_2139EB8 = v4;
    dword_2139EB4 = v3;
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2139EE8);
    __cxa_atexit((void (*)(void *))sub_18F9930, &dword_2139EB4, &unk_20D1280);
    sub_18F98E0(v7);
  }
  *a1 = dword_2139EB4;
  v1 = dword_2139EB8;
  a1[1] = dword_2139EB8;
  if ( v1 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
  v15 = (void ( **)())&off_20A9684;
  v10[0] = ((uint32_t)(uintptr_t)&off_20A93E8);
  v14 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93F8));
  g4_std::bad_alloc::Destroy((std::bad_alloc *)&v14);
  g4_noop_dtor((boost::exception *)v10);
  v8[0] = ((uint32_t)(uintptr_t)&off_20A93E8);
  v9 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93F8));
  v15 = (void (**)())(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93D0));
  g4_std::bad_alloc::Destroy((std::bad_alloc *)&v9);
  g4_noop_dtor((boost::exception *)v8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_18FA810  (binary VA: 0x18fa810)
// Original: sub_18FA810
// ----------------------------------------------------------------------------
uint32_t * sub_18FA810(uint32_t *a1)
{
  int v1;
  int v3;
  int v4;
  uint32_t *v5;
  void ( **v15)();
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t _g4_t_v8[5];
  typedef int (**_g4_t_v9)(int);
  typedef uint32_t _g4_t_v10[2];
  typedef const char *_g4_t_v11;
  typedef const char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int (**_g4_t_v14)(int);
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v10)) > _g4_s4 ? (52u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v11)) > _g4_s5 ? (60u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v12)) > _g4_s6 ? (64u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v13)) > _g4_s7 ? (68u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v14)) > _g4_s8 ? (72u + sizeof(_g4_t_v14)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);

  v9 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A9438));
  v14 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A96C4));
  v15 = (void ( **)())&off_20A96E4;
  memset(&v8[1], 0, 12);
  v8[4] = -1;
  v8[0] = ((uint32_t)(uintptr_t)&off_20A9428);
  v10[1] = 0;
  v11 = nullptr;
  v12 = nullptr;
  v13 = -1;
  v10[0] = ((uint32_t)(uintptr_t)&off_20A96AC);
  sub_18FA420(v10, v8);
  v13 = 124;
  v11 = "boost::exception_ptr boost::exception_detail::get_static_exception_object() [with Exception = boost::exception_d"
        "etail::bad_exception_]";
  v12 = "./boost/exception/detail/exception_ptr.hpp";
  if ( byte_2139EE0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2139EE0) != 0 )
  {
    v6 = (uint32_t *)opNew(0x1Cu);
    v6[6] = ((uint32_t)(uintptr_t)&off_20A93D0);
    sub_18FA2E0(v6, v10);
    *v6 = ((uint32_t)(uintptr_t)&off_20A96AC);
    v6[5] = ((uint32_t)(uintptr_t)&off_20A96C4);
    v6[6] = (uint32_t)(uintptr_t)(&off_20A96E4);
    v3 = (int)(uintptr_t)(v6 + 6);
    v4 = opNew(0x10u);
    *(uint32_t *)(v4 + 4) = 1;
    *(uint32_t *)(v4 + 8) = 1;
    v5 = v6;
    v7 = (void *)v4;
    *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_20A9728);
    *(uint32_t *)(v4 + 12) = (uint32_t)(uintptr_t)(v5);
    dword_2139EB0 = v4;
    dword_2139EAC = v3;
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2139EE0);
    __cxa_atexit((void (*)(void *))sub_18F9930, &dword_2139EAC, &unk_20D1280);
    sub_18F98E0(v7);
  }
  *a1 = dword_2139EAC;
  v1 = dword_2139EB0;
  a1[1] = dword_2139EB0;
  if ( v1 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
  v15 = (void ( **)())&off_20A96E4;
  v10[0] = ((uint32_t)(uintptr_t)&off_20A9428);
  v14 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A9438));
  g4_noop_dtor((std::bad_exception *)&v14);
  g4_noop_dtor((boost::exception *)v10);
  v8[0] = ((uint32_t)(uintptr_t)&off_20A9428);
  v9 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A9438));
  v15 = (void (**)())(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93D0));
  g4_noop_dtor((std::bad_exception *)&v9);
  g4_noop_dtor((boost::exception *)v8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_18FAB00  (binary VA: 0x18fab00)
// Original: sub_18FAB00
// ----------------------------------------------------------------------------
void sub_18FAB00(boost::system::system_error::Self *a1)
{
  uint32_t *exception;
  int v2;
  int v3;
  bool v4;
  typedef void (**_g4_t_v5)(boost::exception_detail::error_info_injector<boost::lock_error::Self> *);
  typedef uint8_t _g4_t_v6[4];
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef void (**_g4_t_v10)(boost::exception_detail::error_info_injector<boost::lock_error::Self> *);
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  exception = (uint32_t *)(_cxa_allocate_exception(0x2Cu));
  boost::system::system_error::Construct((boost::system::system_error::Self *)&v5, a1);
  v11 = 0;
  v10 = (void (**)(boost::exception_detail::error_info_injector<boost::lock_error::Self> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A951C));
  exception[10] = ((uint32_t)(uintptr_t)&off_20A93D0);
  v12 = 0;
  v13 = 0;
  v14 = -1;
  v5 = (void (**)(boost::exception_detail::error_info_injector<boost::lock_error::Self> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A9508));
  *exception = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std::string::construct_copy(exception + 1, v6);
  *exception = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = v8;
  exception[2] = v7;
  exception[3] = v2;
  g4_std::string::construct_copy(exception + 4, v9);
  *exception = ((uint32_t)(uintptr_t)&off_20495E0);
  exception[5] = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = v11;
  v4 = v11 == 0;
  exception[6] = v11;
  if ( !v4 )
    G4_VCALL<void>(v3, 12);
  exception[7] = v12;
  exception[8] = v13;
  exception[9] = v14;
  *exception = ((uint32_t)(uintptr_t)&off_20A954C);
  exception[5] = ((uint32_t)(uintptr_t)&off_20A9568);
  exception[10] = (uint32_t)(uintptr_t)(&off_20A9584);
  sub_18FA420(exception + 5, &v10);
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::lock_error::Self> *)&v5);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_a46e2530d2,
    (void (*)(void *))((void ( ** (*)(std::exception *a1))())sub_18F9120));
}


// ============================================================================
// Address:   0x18facb0 (size: 189 bytes)
// Symbol:    sub_18FACB0
// Demangled: sub_18FACB0
// ============================================================================
int sub_18FACB0(int a1)
{
  int result;
  uint32_t v2[8];

  if ( *(uint32_t *)a1 == 0 )
  {
    sub_1235D60(v2, 1, "boost unique_lock has no mutex");
    v2[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    sub_18FAB00((boost::system::system_error::Self *)v2);
  }
  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    sub_1235D60(v2, 35, "boost unique_lock owns already the mutex");
    v2[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    sub_18FAB00((boost::system::system_error::Self *)v2);
  }
  result = sub_1321700(*(pthread_mutex_t **)a1);
  *(uint8_t *)(a1 + 4) = 1;
  return result;
}


// ============================================================================
// Address:   0x18fad70 (size: 102 bytes)
// Symbol:    sub_18FAD70
// Demangled: sub_18FAD70
// ============================================================================
int sub_18FAD70(int a1)
{
  pthread_mutex_t *v2;
  pthread_mutex_t *mutex;

  mutex = *(pthread_mutex_t **)(a1 + 4);
  if ( *(uint8_t *)(a1 + 8) == 0 )
    return pthread_mutex_unlock(mutex);
  pthread_mutex_unlock(mutex);
  v2 = (pthread_mutex_t *)(*(uint32_t *)a1 + 24);
  sub_1321700(v2);
  *(uint32_t *)(*(uint32_t *)a1 + 80) = 0;
  *(uint32_t *)(*(uint32_t *)a1 + 84) = 0;
  return sub_1321760(v2);
}


// ============================================================================
// Address:   0x18fb170 (size: 261 bytes)
// Symbol:    sub_18FB170
// Demangled: sub_18FB170
// ============================================================================
int sub_18FB170(int a1)
{
  volatile int32_t *v1;
  int v2;
  volatile int32_t *v3;

  v1 = *(volatile int32_t **)(a1 + 16);
  v2 = *(uint32_t *)(a1 + 12);
  if ( v1 != nullptr )
    __sync_add_and_fetch(v1 + 1, 1);
  v3 = *(volatile int32_t **)(v2 + 16);
  *(uint32_t *)(v2 + 12) = 0;
  *(uint32_t *)(v2 + 16) = 0;
  if ( v3 != nullptr )
    sub_18F98E0(v3);
  sub_18F9BE0((void *)v2);
  (*(void (**)(int))(*(uint32_t *)v2 + 8))(v2);
  sub_18F9950((uint32_t *)v2);
  sub_18F9BE0(nullptr);
  sub_1321700((pthread_mutex_t *)(v2 + 24));
  *(uint8_t *)(v2 + 48) = 1;
  pthread_mutex_lock((pthread_mutex_t *)(v2 + 28));
  pthread_cond_broadcast((pthread_cond_t *)(v2 + 32));
  pthread_mutex_unlock((pthread_mutex_t *)(v2 + 28));
  sub_1321760((pthread_mutex_t *)(v2 + 24));
  if ( v1 != nullptr )
    sub_18F98E0(v1);
  return 0;
}


// ============================================================================
// Address:   0x18fb280 (size: 189 bytes)
// Symbol:    sub_18FB280
// Demangled: sub_18FB280
// ============================================================================
int sub_18FB280(int a1)
{
  int result;
  uint32_t v2[8];

  if ( *(uint32_t *)a1 == 0 )
  {
    sub_1235D60(v2, 1, "boost unique_lock has no mutex");
    v2[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    sub_18FAB00((boost::system::system_error::Self *)v2);
  }
  if ( *(uint8_t *)(a1 + 4) == 0 )
  {
    sub_1235D60(v2, 1, "boost unique_lock doesn't own the mutex");
    v2[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    sub_18FAB00((boost::system::system_error::Self *)v2);
  }
  result = sub_1321760(*(pthread_mutex_t **)a1);
  *(uint8_t *)(a1 + 4) = 0;
  return result;
}


// ============================================================================
// Address:   0x18fb340 (size: 430 bytes)
// Symbol:    sub_18FB340
// Demangled: sub_18FB340
// ============================================================================
void __noreturn sub_18FB340(boost::system::system_error::Self *a1)
{
  uint32_t *exception;
  int v2;
  int v3;
  bool v4;
  typedef void (**_g4_t_v5)(boost::exception_detail::error_info_injector<boost::thread_resource_error> *__hidden);
  typedef uint8_t _g4_t_v6[4];
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef void (**_g4_t_v10)(boost::exception_detail::error_info_injector<boost::thread_resource_error> *__hidden);
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  exception = (uint32_t *)(_cxa_allocate_exception(0x2Cu));
  boost::system::system_error::Construct((boost::system::system_error::Self *)&v5, a1);
  v11 = 0;
  v10 = (void (**)(boost::exception_detail::error_info_injector<boost::thread_resource_error> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A947C));
  exception[10] = ((uint32_t)(uintptr_t)&off_20A93D0);
  v12 = 0;
  v13 = 0;
  v14 = -1;
  v5 = (void (**)(boost::exception_detail::error_info_injector<boost::thread_resource_error> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A9468));
  *exception = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy(exception + 1, v6);
  *exception = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = v8;
  exception[2] = v7;
  exception[3] = v2;
  g4_std_compat::string_construct_copy(exception + 4, v9);
  *exception = ((uint32_t)(uintptr_t)&off_2049568);
  exception[5] = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = v11;
  v4 = v11 == 0;
  exception[6] = v11;
  if ( !v4 )
    (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
  exception[7] = v12;
  exception[8] = v13;
  exception[9] = v14;
  *exception = ((uint32_t)(uintptr_t)&off_20A94AC);
  exception[5] = ((uint32_t)(uintptr_t)&off_20A94C8);
  exception[10] = (uint32_t)(uintptr_t)(&off_20A94E4);
  sub_18FA420(exception + 5, &v10);
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::thread_resource_error> *)&v5);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_5c244f8a6e,
    (void (*)(void *))((void ( ** (*)(std::exception *a1))())sub_18F91E0));
}


// ============================================================================
// Address:   0x18fb4f0 (size: 210 bytes)
// Symbol:    sub_18FB4F0
// Demangled: sub_18FB4F0
// ============================================================================
int sub_18FB4F0(pthread_mutex_t *mutex)
{
  int v1;
  int result;
  int v3;
  uint32_t v4[8];

  v1 = pthread_mutex_init(mutex, nullptr);
  if ( v1 != 0 )
  {
    sub_1235D60(v4, v1, "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    v4[0] = ((uint32_t)(uintptr_t)&off_2049568);
    sub_18FB340((boost::system::system_error::Self *)v4);
  }
  result = pthread_cond_init((pthread_cond_t *)(&((int32_t *)(mutex))[0] + 1), nullptr);
  v3 = result;
  if ( result != 0 )
  {
    pthread_mutex_destroy(mutex);
    sub_1235D60(v4, v3, "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    v4[0] = ((uint32_t)(uintptr_t)&off_2049568);
    sub_18FB340((boost::system::system_error::Self *)v4);
  }
  return result;
}


// ============================================================================
// Address:   0x18fb5d0 (size: 1009 bytes)
// Symbol:    sub_18FB5D0
// Demangled: sub_18FB5D0
// ============================================================================
char *sub_18FB5D0()
{
  char *v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  bool v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  typedef pthread_mutex_t *_g4_t_v10;
  typedef uint32_t _g4_t_v11[5];
  typedef uint32_t _g4_t_v12[5];
  typedef uint32_t _g4_t_v13[5];
  typedef uint32_t _g4_t_v14[12];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v12)) > _g4_s2 ? (36u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v13)) > _g4_s3 ? (56u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v14)) > _g4_s4 ? (76u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);

  v0 = (char *)operator new(0x74u);
  *((uint32_t *)v0 + 1) = 0;
  *((uint32_t *)v0 + 2) = 0;
  *(uint32_t *)v0 = ((uint32_t)(uintptr_t)&off_20A9450);
  *((uint32_t *)v0 + 3) = 0;
  *((uint32_t *)v0 + 4) = 0;
  *((uint32_t *)v0 + 5) = 0;
  v1 = pthread_mutex_init(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v0) + (24 * (1))), nullptr);
  if ( v1 != 0 )
  {
    sub_1235D60(v11, v1, "boost:: mutex constructor failed in pthread_mutex_init");
    v11[0] = ((uint32_t)(uintptr_t)&off_2049568);
    sub_18FB340((boost::system::system_error::Self *)v11);
  }
  v2 = pthread_mutex_init((pthread_mutex_t *)(v0 + 28), nullptr);
  if ( v2 != 0 )
  {
    sub_1235D60(v12, v2, "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    v12[0] = ((uint32_t)(uintptr_t)&off_2049568);
    sub_18FB340((boost::system::system_error::Self *)v12);
  }
  v10 = (pthread_mutex_t *)pthread_cond_init((pthread_cond_t *)(v0 + 32), nullptr);
  if ( v10 != nullptr )
  {
    pthread_mutex_destroy((pthread_mutex_t *)(v0 + 28));
    sub_1235D60(
      v13,
      (int)(uintptr_t)(v10),
      "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    v13[0] = ((uint32_t)(uintptr_t)&off_2049568);
    sub_18FB340((boost::system::system_error::Self *)v13);
  }
  v3 = pthread_mutex_init((pthread_mutex_t *)(v0 + 36), nullptr);
  if ( v3 != 0 )
  {
    sub_1235D60(v14, v3, "boost:: mutex constructor failed in pthread_mutex_init");
    v14[0] = ((uint32_t)(uintptr_t)&off_2049568);
    sub_18FB340((boost::system::system_error::Self *)v14);
  }
  sub_18FB4F0((pthread_mutex_t *)(v0 + 40));
  v0[48] = 0;
  *((uint32_t *)v0 + 17) = (uint32_t)(uintptr_t)(v0 + 60);
  *((uint32_t *)v0 + 18) = (uint32_t)(uintptr_t)(v0 + 60);
  v0[49] = 0;
  v0[50] = 0;
  *((uint32_t *)v0 + 13) = 0;
  *((uint32_t *)v0 + 15) = 0;
  *((uint32_t *)v0 + 16) = 0;
  *((uint32_t *)v0 + 19) = 0;
  *((uint32_t *)v0 + 20) = 0;
  *((uint32_t *)v0 + 21) = 0;
  *((uint32_t *)v0 + 22) = 0;
  *((uint32_t *)v0 + 23) = 0;
  *((uint32_t *)v0 + 24) = 0;
  *((uint32_t *)v0 + 25) = 0;
  *((uint32_t *)v0 + 26) = 0;
  *((uint32_t *)v0 + 27) = 0;
  v0[113] = 0;
  v0[112] = 0;
  *(uint32_t *)v0 = ((uint32_t)(uintptr_t)&off_203E2A0);
  v4 = (int)(uintptr_t)(operator new(0x10u));
  *(uint32_t *)(v4 + 4) = 1;
  *(uint32_t *)(v4 + 8) = 1;
  *(uint32_t *)(v4 + 12) = (uint32_t)(uintptr_t)(v0);
  *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_20A9748);
  v5 = *((uint32_t *)v0 + 2);
  if ( v5 == 0 || *(uint32_t *)(v5 + 4) == 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v6 = v4 == *((uint32_t *)v0 + 2);
    *((uint32_t *)v0 + 1) = (uint32_t)(uintptr_t)(v0);
    if ( !v6 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v4 + 8), 1);
      v7 = *((volatile int32_t **)v0 + 2);
      if ( v7 != nullptr && __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v7 + 12))(v7);
      *((uint32_t *)v0 + 2) = v4;
    }
    sub_18F98E0((volatile int32_t *)v4);
  }
  v8 = *((volatile int32_t **)v0 + 4);
  *((uint32_t *)v0 + 3) = (uint32_t)(uintptr_t)(v0);
  *((uint32_t *)v0 + 4) = v4;
  if ( v8 != nullptr )
    sub_18F98E0(v8);
  sub_18F9BE0(v0);
  return v0;
}


// ============================================================================
// Address:   0x18fb9d0 (size: 458 bytes)
// Symbol:    sub_18FB9D0
// Demangled: sub_18FB9D0
// ============================================================================
int sub_18FB9D0(unsigned int a1, int *a2, int a3)
{
  volatile int32_t *v3;
  uint32_t *v4;
  int result;
  char v6;
  unsigned int v7;
  char v8; // si
  uint32_t *v9;
  uint32_t *current_thread_data;
  uint32_t *v11;
  int v12;
  uint32_t *v13;

  current_thread_data = (uint32_t *)(boost::detail::get_current_thread_data());
  if ( current_thread_data == nullptr )
    current_thread_data = (uint32_t *)(sub_18FB5D0());
  v3 = (volatile int32_t *)a2[1];
  v12 = *a2;
  if ( v3 != nullptr )
  {
    __sync_add_and_fetch(v3 + 1, 1);
    __sync_add_and_fetch(v3 + 1, 1);
    __sync_add_and_fetch(v3 + 1, 1);
    __sync_add_and_fetch(v3 + 1, 1);
  }
  v4 = (uint32_t *)current_thread_data[16];
  v11 = current_thread_data + 15;
  if ( v4 == nullptr )
  {
    v4 = current_thread_data + 15;
LABEL_15:
    v13 = (uint32_t *)current_thread_data[17];
    if ( v13 == v4 )
      goto LABEL_19;
    result = sub_19048F0(v4);
    if ( a1 > *(uint32_t *)(result + 16) )
      goto LABEL_17;
LABEL_13:
    if ( v3 == nullptr )
      return result;
LABEL_14:
    sub_18F98E0(v3);
    sub_18F98E0(v3);
    sub_18F98E0(v3);
    return sub_18F98E0(v3);
  }
  while ( 1 )
  {
    v7 = v4[4];
    if ( a1 >= v7 )
      break;
    result = v4[2];
    v6 = 1;
    if ( result == 0 )
      goto LABEL_11;
LABEL_8:
    v4 = (uint32_t *)result;
  }
  result = v4[3];
  v6 = 0;
  if ( result != 0 )
    goto LABEL_8;
LABEL_11:
  if ( v6 != 0 )
    goto LABEL_15;
  if ( a1 <= v7 )
    goto LABEL_13;
LABEL_17:
  if ( v4 == nullptr )
    goto LABEL_13;
  v13 = v4;
LABEL_19:
  v8 = v11 == v13 || a1 < v13[4];
  v9 = (uint32_t *)operator new(0x20u);
  if ( v9 != (uint32_t *)-16 )
  {
    v9[4] = a1;
    v9[5] = v12;
    v9[6] = (uint32_t)(uintptr_t)(v3);
    if ( v3 != nullptr )
      __sync_add_and_fetch(v3 + 1, 1);
    v9[7] = a3;
  }
  sub_1904970(v8, v9, v13, v11);
  result = (int)(uintptr_t)(current_thread_data);
  ++current_thread_data[19];
  if ( v3 != nullptr )
    goto LABEL_14;
  return result;
}


// ============================================================================
// Address:   0x18fbbf0 (size: 430 bytes)
// Symbol:    sub_18FBBF0
// Demangled: sub_18FBBF0
// ============================================================================
void __noreturn sub_18FBBF0(boost::system::system_error::Self *a1)
{
  uint32_t *exception;
  int v2;
  int v3;
  bool v4;
  typedef void (**_g4_t_v5)(boost::exception_detail::error_info_injector<boost::condition_error::Self> *__hidden);
  typedef uint8_t _g4_t_v6[4];
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef void (**_g4_t_v10)(boost::exception_detail::error_info_injector<boost::condition_error::Self> *__hidden);
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  exception = (uint32_t *)(_cxa_allocate_exception(0x2Cu));
  boost::system::system_error::Construct((boost::system::system_error::Self *)&v5, a1);
  v11 = 0;
  v10 = (void (**)(boost::exception_detail::error_info_injector<boost::condition_error::Self> *))(uintptr_t)((void (**)(int *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A95BC)));
  exception[10] = ((uint32_t)(uintptr_t)&off_20A93D0);
  v12 = 0;
  v13 = 0;
  v14 = -1;
  v5 = (void (**)(boost::exception_detail::error_info_injector<boost::condition_error::Self> *))(uintptr_t)((void (**)(int *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A95A8)));
  *exception = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy(exception + 1, v6);
  *exception = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = v8;
  exception[2] = v7;
  exception[3] = v2;
  g4_std_compat::string_construct_copy(exception + 4, v9);
  *exception = ((uint32_t)(uintptr_t)&off_2093D18);
  exception[5] = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = v11;
  v4 = v11 == 0;
  exception[6] = v11;
  if ( !v4 )
    (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
  exception[7] = v12;
  exception[8] = v13;
  exception[9] = v14;
  *exception = ((uint32_t)(uintptr_t)&off_20A95EC);
  exception[5] = ((uint32_t)(uintptr_t)&off_20A9608);
  exception[10] = (uint32_t)(uintptr_t)(&off_20A9624);
  sub_18FA420(exception + 5, &v10);
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::condition_error::Self> *)&v5);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_0d30eb852d,
    (void (*)(void *))((void ( ** (*)(std::exception *a1))())sub_18F92A0));
}


// ============================================================================
// Address:   0x18fbda0 (size: 468 bytes)
// Symbol:    sub_18FBDA0
// Demangled: sub_18FBDA0
// ============================================================================
pthread_mutex_t *sub_18FBDA0(pthread_mutex_t *mutex, boost::this_thread::Self *a2)
{
  pthread_mutex_t *current_thread_data;
  pthread_cond_t *v3;
  int v4;
  pthread_mutex_t *result;
  pthread_mutex_t *v6;
  pthread_mutex_t *v7;
  pthread_mutex_t *v8;
  pthread_mutex_t *v9;
  void *exception;
  typedef pthread_mutex_t *_g4_t_v11;
  typedef pthread_mutex_t *_g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);

  current_thread_data = (pthread_mutex_t *)boost::detail::get_current_thread_data();
  v3 = (pthread_cond_t *)(&((int32_t *)(mutex))[0] + 1);
  v11 = current_thread_data;
  v12 = mutex;
  if ( current_thread_data != nullptr && G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (4))))[16] != 0 )
  {
    v6 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (1)));
    v13 = 1;
    sub_1321700(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (1))));
    v7 = v11;
    if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v11) + (24 * (4))))[17] != 0 )
    {
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v11) + (24 * (4))))[17] = 0;
      exception = _cxa_allocate_exception(1u);
      _cxa_throw(exception, (type_info *)&g4_typeinfo_7145e46666, nullptr);
    }
    G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v11) + (24 * (3)))) = (int)(uintptr_t)(mutex);
    G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (3)))) = (int)(uintptr_t)(v3);
    pthread_mutex_lock(v12);
    sub_1321760(v6);
  }
  else
  {
    v13 = 0;
    pthread_mutex_lock(mutex);
  }
  sub_18FB280((int)(uintptr_t)(a2));
  do
    v4 = pthread_cond_wait(v3, mutex);
  while ( v4 == 4 );
  pthread_mutex_unlock(v12);
  if ( v13 != 0 )
  {
    v8 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v11) + (24 * (1)));
    sub_1321700(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v11) + (24 * (1))));
    v9 = v11;
    G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v11) + (24 * (3)))) = 0;
    G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v9) + (24 * (3)))) = 0;
    sub_1321760(v8);
  }
  if ( a2 != nullptr )
    sub_18FACB0((int)(uintptr_t)(a2));
  result = (pthread_mutex_t *)(uintptr_t)(boost::this_thread::interruption_point());
  if ( v4 != 0 )
  {
    sub_18F8BF0(&v11, v4, "boost::condition_variable::wait failed in pthread_cond_wait");
    sub_18FBBF0((boost::system::system_error::Self *)&v11);
  }
  return result;
}


// ============================================================================
// Address:   0x18fc130 (size: 748 bytes)
// Symbol:    sub_18FC130
// Demangled: sub_18FC130
// ============================================================================
int sub_18FC130(pthread_mutex_t *mutex, int a2, struct timespec *abstime)
{
  pthread_mutex_t *current_thread_data;
  int v4;
  int v5;
  pthread_mutex_t *v7;
  pthread_mutex_t *v8;
  pthread_mutex_t *v9;
  void *exception;
  typedef pthread_cond_t *_g4_t_cond;
  typedef pthread_cond_t *_g4_t_conda;
  typedef pthread_mutex_t *_g4_t_v13;
  typedef pthread_mutex_t *_g4_t_v14;
  typedef char _g4_t_v15;
  typedef uint32_t _g4_t_v16[5];
  typedef uint32_t _g4_t_v17[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_cond)) > _g4_s0 ? (12u + sizeof(_g4_t_cond)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_conda)) > _g4_s1 ? (12u + sizeof(_g4_t_conda)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v16)) > _g4_s5 ? (40u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v17)) > _g4_s6 ? (60u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_cond &cond = *reinterpret_cast<_g4_t_cond *>(_g4_sf + 12u);
  _g4_t_conda &conda = *reinterpret_cast<_g4_t_conda *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);

  cond = (pthread_cond_t *)(&((int32_t *)(mutex))[0] + 1);
  current_thread_data = (pthread_mutex_t *)boost::detail::get_current_thread_data();
  v13 = current_thread_data;
  v14 = mutex;
  if ( current_thread_data != nullptr && G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (4))))[16] != 0 )
  {
    v7 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (1)));
    v15 = 1;
    sub_1321700(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (1))));
    v8 = v13;
    if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v13) + (24 * (4))))[17] != 0 )
    {
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v13) + (24 * (4))))[17] = 0;
      exception = _cxa_allocate_exception(1u);
      _cxa_throw(exception, (type_info *)&g4_typeinfo_7145e46666, nullptr);
    }
    G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v13) + (24 * (3)))) = (int)(uintptr_t)(mutex);
    G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v8) + (24 * (3)))) = (int)(uintptr_t)(cond);
    pthread_mutex_lock(v14);
    sub_1321760(v7);
  }
  else
  {
    v15 = 0;
    pthread_mutex_lock(mutex);
  }
  if ( *(uint32_t *)a2 == 0 )
  {
    sub_1235D60(v16, 1, "boost unique_lock has no mutex");
    v16[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    sub_18FAB00((boost::system::system_error::Self *)v16);
  }
  v4 = *(uint8_t *)(a2 + 4);
  if ( *(uint8_t *)(a2 + 4) == 0 )
  {
    sub_1235D60(v17, 1, "boost unique_lock doesn't own the mutex");
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    sub_18FAB00((boost::system::system_error::Self *)v17);
  }
  sub_1321760(*(pthread_mutex_t **)a2);
  *(uint8_t *)(a2 + 4) = 0;
  v5 = pthread_cond_timedwait(cond, mutex, abstime);
  pthread_mutex_unlock(v14);
  if ( v15 != 0 )
  {
    conda = (pthread_cond_t *)reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v13) + (24 * (1)));
    sub_1321700(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v13) + (24 * (1))));
    v9 = v13;
    G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v13) + (24 * (3)))) = 0;
    G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v9) + (24 * (3)))) = 0;
    sub_1321760((pthread_mutex_t *)conda);
  }
  boost::this_thread::interruption_point();
  if ( v5 == 110 )
  {
    v4 = 0;
  }
  else if ( v5 != 0 )
  {
    sub_18F8BF0(&v13, v5, "boost::condition_variable::do_wait_until failed in pthread_cond_timedwait");
    sub_18FBBF0((boost::system::system_error::Self *)&v13);
  }
  sub_18FACB0(a2);
  return v4;
}


// ============================================================================
// Address:   0x18fc9e0 (size: 211 bytes)
// Symbol:    sub_18FC9E0
// Demangled: sub_18FC9E0
// ============================================================================
char *sub_18FC9E0(uint32_t *a1)
{
  uint32_t *v1;
  int v2;

  v1 = (uint32_t *)operator new(0x1Cu);
  v1[6] = ((uint32_t)(uintptr_t)&off_20A93D0);
  *v1 = ((uint32_t)(uintptr_t)&off_2093808);
  v2 = a1[1];
  v1[1] = v2;
  if ( v2 != 0 )
    (*(void (**)(int))(*(uint32_t *)v2 + 12))(v2);
  v1[2] = a1[2];
  v1[3] = a1[3];
  v1[4] = a1[4];
  *v1 = ((uint32_t)(uintptr_t)&off_20A96AC);
  v1[5] = ((uint32_t)(uintptr_t)&off_20A96C4);
  v1[6] = (uint32_t)(uintptr_t)(&off_20A96E4);
  sub_18FA420(v1, a1);
  return (char *)v1 + *(uint32_t *)(*v1 - 12);
}


// ============================================================================
// Address:   0x18fcac0 (size: 18 bytes)
// Symbol:    sub_18FCAC0
// Demangled: sub_18FCAC0
// ============================================================================
char *sub_18FCAC0(uint32_t *a1)
{
  return sub_18FC9E0((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12)));
}


// ============================================================================
// Address:   0x18fcae0 (size: 211 bytes)
// Symbol:    sub_18FCAE0
// Demangled: sub_18FCAE0
// ============================================================================
char *sub_18FCAE0(uint32_t *a1)
{
  uint32_t *v1;
  int v2;

  v1 = (uint32_t *)operator new(0x1Cu);
  v1[6] = ((uint32_t)(uintptr_t)&off_20A93D0);
  *v1 = ((uint32_t)(uintptr_t)&off_2093808);
  v2 = a1[1];
  v1[1] = v2;
  if ( v2 != 0 )
    (*(void (**)(int))(*(uint32_t *)v2 + 12))(v2);
  v1[2] = a1[2];
  v1[3] = a1[3];
  v1[4] = a1[4];
  *v1 = ((uint32_t)(uintptr_t)&off_20A964C);
  v1[5] = ((uint32_t)(uintptr_t)&off_20A9664);
  v1[6] = (uint32_t)(uintptr_t)(&off_20A9684);
  sub_18FA420(v1, a1);
  return (char *)v1 + *(uint32_t *)(*v1 - 12);
}


// ============================================================================
// Address:   0x18fcbc0 (size: 18 bytes)
// Symbol:    sub_18FCBC0
// Demangled: sub_18FCBC0
// ============================================================================
char *sub_18FCBC0(uint32_t *a1)
{
  return sub_18FCAE0((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12)));
}


// ============================================================================
// Address:   0x18fcbe0 (size: 313 bytes)
// Symbol:    sub_18FCBE0
// Demangled: sub_18FCBE0
// ============================================================================
char *sub_18FCBE0(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  int v3;

  v1 = (uint32_t *)operator new(0x2Cu);
  v1[10] = ((uint32_t)(uintptr_t)&off_20A93D0);
  *v1 = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy(v1 + 1, a1 + 1);
  *v1 = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = a1[3];
  v1[2] = a1[2];
  v1[3] = v2;
  g4_std_compat::string_construct_copy(v1 + 4, a1 + 4);
  *v1 = ((uint32_t)(uintptr_t)&off_2093D18);
  v1[5] = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = a1[6];
  v1[6] = v3;
  if ( v3 != 0 )
    (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
  v1[7] = a1[7];
  v1[8] = a1[8];
  v1[9] = a1[9];
  *v1 = ((uint32_t)(uintptr_t)&off_20A95EC);
  v1[5] = ((uint32_t)(uintptr_t)&off_20A9608);
  v1[10] = (uint32_t)(uintptr_t)(&off_20A9624);
  sub_18FA420(v1 + 5, a1 + 5);
  return (char *)v1 + *(uint32_t *)(*v1 - 12);
}


// ============================================================================
// Address:   0x18fcd20 (size: 18 bytes)
// Symbol:    sub_18FCD20
// Demangled: sub_18FCD20
// ============================================================================
char *sub_18FCD20(uint32_t *a1)
{
  return sub_18FCBE0((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12)));
}


// ============================================================================
// Address:   0x18fcd40 (size: 313 bytes)
// Symbol:    sub_18FCD40
// Demangled: sub_18FCD40
// ============================================================================
char *sub_18FCD40(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  int v3;

  v1 = (uint32_t *)operator new(0x2Cu);
  v1[10] = ((uint32_t)(uintptr_t)&off_20A93D0);
  *v1 = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy(v1 + 1, a1 + 1);
  *v1 = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = a1[3];
  v1[2] = a1[2];
  v1[3] = v2;
  g4_std_compat::string_construct_copy(v1 + 4, a1 + 4);
  *v1 = ((uint32_t)(uintptr_t)&off_20495E0);
  v1[5] = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = a1[6];
  v1[6] = v3;
  if ( v3 != 0 )
    (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
  v1[7] = a1[7];
  v1[8] = a1[8];
  v1[9] = a1[9];
  *v1 = ((uint32_t)(uintptr_t)&off_20A954C);
  v1[5] = ((uint32_t)(uintptr_t)&off_20A9568);
  v1[10] = (uint32_t)(uintptr_t)(&off_20A9584);
  sub_18FA420(v1 + 5, a1 + 5);
  return (char *)v1 + *(uint32_t *)(*v1 - 12);
}


// ============================================================================
// Address:   0x18fce80 (size: 18 bytes)
// Symbol:    sub_18FCE80
// Demangled: sub_18FCE80
// ============================================================================
char *sub_18FCE80(uint32_t *a1)
{
  return sub_18FCD40((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12)));
}


// ============================================================================
// Address:   0x18fcea0 (size: 313 bytes)
// Symbol:    sub_18FCEA0
// Demangled: sub_18FCEA0
// ============================================================================
char *sub_18FCEA0(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  int v3;

  v1 = (uint32_t *)operator new(0x2Cu);
  v1[10] = ((uint32_t)(uintptr_t)&off_20A93D0);
  *v1 = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy(v1 + 1, a1 + 1);
  *v1 = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = a1[3];
  v1[2] = a1[2];
  v1[3] = v2;
  g4_std_compat::string_construct_copy(v1 + 4, a1 + 4);
  *v1 = ((uint32_t)(uintptr_t)&off_2049568);
  v1[5] = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = a1[6];
  v1[6] = v3;
  if ( v3 != 0 )
    (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
  v1[7] = a1[7];
  v1[8] = a1[8];
  v1[9] = a1[9];
  *v1 = ((uint32_t)(uintptr_t)&off_20A94AC);
  v1[5] = ((uint32_t)(uintptr_t)&off_20A94C8);
  v1[10] = (uint32_t)(uintptr_t)(&off_20A94E4);
  sub_18FA420(v1 + 5, a1 + 5);
  return (char *)v1 + *(uint32_t *)(*v1 - 12);
}


// ============================================================================
// Address:   0x18fcfe0 (size: 18 bytes)
// Symbol:    sub_18FCFE0
// Demangled: sub_18FCFE0
// ============================================================================
char *sub_18FCFE0(uint32_t *a1)
{
  return sub_18FCEA0((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12)));
}


// ============================================================================
// Address:   0x18fd000 (size: 96 bytes)
// Symbol:    sub_18FD000
// Demangled: sub_18FD000
// ============================================================================
void sub_18FD000(int a1, void *a2)
{
  void *v2;
  void *v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      sub_18FD000(a1, *((void **)v2 + 3));
      v3 = *((void **)v2 + 2);
      if ( *((uint32_t *)v2 + 6) != 0 )
        sub_18F98E0(*((volatile int32_t **)v2 + 6));
      operator delete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}


// ============================================================================
// Address:   0x18fd3b0 (size: 42 bytes)
// Symbol:    sub_18FD3B0
// Demangled: sub_18FD3B0
// ============================================================================
void sub_18FD3B0(boost::detail::thread_data_base::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_203E2A0);
  boost::detail::thread_data_base::Destroy(a1);
}


// ============================================================================
// Address:   0x18fd3e0 (size: 52 bytes)
// Symbol:    sub_18FD3E0
// Demangled: sub_18FD3E0
// ============================================================================
void sub_18FD3E0(boost::detail::thread_data_base::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_203E2A0);
  boost::detail::thread_data_base::Destroy(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18fd420 (size: 372 bytes)
// Symbol:    sub_18FD420
// Demangled: sub_18FD420
// ============================================================================
int sub_18FD420(int a1, unsigned int *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  unsigned int v4;
  int result;
  uint32_t *i;
  uint32_t *v7;
  volatile int32_t **v8;
  volatile int32_t **v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int v15;

  v2 = *(uint32_t **)(a1 + 8);
  v13 = a1 + 4;
  if ( v2 != nullptr )
  {
    v3 = (uint32_t *)(a1 + 4);
    v4 = *a2;
    while ( 1 )
    {
      while ( v2[4] < v4 )
      {
        v2 = (uint32_t *)v2[3];
        if ( v2 == nullptr )
          goto LABEL_7;
      }
      if ( v2[4] <= v4 )
        break;
      v3 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_7;
    }
    v11 = (uint32_t *)v2[2];
    v12 = (uint32_t *)v2[3];
    while ( v12 != nullptr )
    {
      if ( v12[4] <= v4 )
      {
        v12 = (uint32_t *)v12[3];
        continue;
      }
      v3 = v12;
      v12 = (uint32_t *)v12[2];
    }
    while ( v11 != nullptr )
    {
      while ( v11[4] >= v4 )
      {
        v2 = v11;
        v11 = (uint32_t *)v11[2];
        if ( v11 == nullptr )
          goto LABEL_8;
      }
      v11 = (uint32_t *)v11[3];
    }
  }
  else
  {
    v3 = (uint32_t *)(a1 + 4);
LABEL_7:
    v2 = v3;
  }
LABEL_8:
  v15 = *(uint32_t *)(a1 + 20);
  if ( *(uint32_t **)(a1 + 12) == v2 && (uint32_t *)v13 == v3 )
  {
    sub_18FD000(a1, *(void **)(a1 + 8));
    *(uint32_t *)(a1 + 8) = 0;
    *(uint32_t *)(a1 + 12) = v13;
    *(uint32_t *)(a1 + 16) = v13;
    *(uint32_t *)(a1 + 20) = 0;
    return v15;
  }
  else
  {
    result = 0;
    if ( v3 != v2 )
    {
      v14 = v3;
      for ( i = v2; ; i = v7 )
      {
        v7 = (uint32_t *)sub_19048E0(i);
        v8 = (volatile int32_t **)sub_1904AE0(i, v13);
        v9 = v8;
        if ( v8[6] != nullptr )
          sub_18F98E0(v8[6]);
        operator delete(v9);
        v10 = *(uint32_t *)(a1 + 20) - 1;
        *(uint32_t *)(a1 + 20) = v10;
        if ( v7 == v14 )
          break;
      }
      return v15 - v10;
    }
  }
  return result;
}


// ============================================================================
// Address:   0x18fd5a0 (size: 66 bytes)
// Symbol:    sub_18FD5A0
// Demangled: sub_18FD5A0
// ============================================================================
int sub_18FD5A0(unsigned int a1)
{
  void *current_thread_data;

  current_thread_data = boost::detail::get_current_thread_data();
  if ( current_thread_data == nullptr )
    current_thread_data = sub_18FB5D0();
  return sub_18FD420((int)(uintptr_t)(current_thread_data) + 56, &a1);
}


// ============================================================================
// Address:   0x18fd740 (size: 183 bytes)
// Symbol:    sub_18FD740
// Demangled: sub_18FD740
// ============================================================================
int *sub_18FD740()
{
  int *result;

  dword_2139F00 = (int)(uintptr_t)(sub_18F8270());
  dword_2139EFC = (int)(uintptr_t)(sub_18F8270());
  result = sub_18F81E0();
  dword_2139EF8 = (int)(uintptr_t)(result);
  if ( byte_2139EC8 == 0 )
  {
    byte_2139EC8 = 1;
    sub_18FA520((&dword_2139ED8));
    result = (int *)__cxa_atexit((void (*)(void *))sub_18F9930, (&dword_2139ED8), &unk_20D1280);
  }
  if ( byte_2139EC0 == 0 )
  {
    byte_2139EC0 = 1;
    sub_18FA810((&dword_2139ED0));
    return (int *)__cxa_atexit((void (*)(void *))sub_18F9930, (&dword_2139ED0), &unk_20D1280);
  }
  return result;
}


// ============================================================================
// Address:   0x18fd950 (size: 666 bytes)
// Symbol:    sub_18FD950
// Demangled: sub_18FD950
// ============================================================================
char *sub_18FD950(int64_t *a1, uint32_t *a2, char **a3, int16_t a4)
{
  int v5;
  char *v6;
  char v7;
  char v8;
  char *v9;
  uint8_t *v10;
  char *v11;
  typedef char _g4_t_v13;
  typedef double _g4_t_v14;
  typedef char _g4_t_v15;
  typedef double _g4_t_v16;
  typedef double _g4_t_v17;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23[29];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v14)) > _g4_s1 ? (0u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v19)) > _g4_s5 ? (36u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v20)) > _g4_s6 ? (44u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v21)) > _g4_s7 ? (48u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v22)) > _g4_s8 ? (52u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (79u + sizeof(_g4_t_v23)) > _g4_s9 ? (79u + sizeof(_g4_t_v23)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 79u);

  v19 = 9;
  if ( a4 <= 9 )
  {
    v5 = a4;
    if ( a4 < 0 )
      v5 = 6;
    v19 = v5;
  }
  v20 = (char *)a2 + *(uint32_t *)(*a2 - 12);
  v21 = *((uint32_t *)v20 + 3);
  v22 = *((uint32_t *)v20 + 1);
  *((uint32_t *)v20 + 3) = v21 & 0xFFFFFEFB | 4;
  *(uint32_t *)((char *)a2 + *(uint32_t *)(*a2 - 12) + 4) = v19;
  v6 = *a3;
  v7 = **a3;
  v17 = (double)*a1 / 1000000000.0;
  v16 = (double)(a1[1] + a1[2]) / 1000000000.0;
  if ( v7 != 0 )
  {
    if ( v7 == 37 )
      goto LABEL_7;
LABEL_14:
    while ( 1 )
    {
      v23[0] = v7;
      g4_std_compat::ostream_write(a2, v23, 1);
      v7 = v6[1];
      v11 = v6 + 1;
      if ( v7 == 0 )
        break;
      while ( 1 )
      {
        v6 = v11;
        if ( v7 != 37 )
          break;
LABEL_7:
        v8 = v6[1];
        if ( v8 == 0 )
          goto LABEL_14;
        v15 = v7;
        v13 = v6[1];
        v9 = (char *)(strchr("wustp", v8));
        v7 = v15;
        if ( v9 == nullptr )
          goto LABEL_14;
        v10 = (uint8_t *)(v6 + 1);
        switch ( v13 )
        {
          case 'p':
            *(uint32_t *)((char *)a2 + *(uint32_t *)(*a2 - 12) + 4) = 1;
            if ( v17 > 0.001 && v16 > 0.001 )
              sub_192E450(a2, COERCE__INT64(v16 / v17 * 100.0));
            else
              g4_std_compat::ostream_write(a2, "n/a", 3);
            *(uint32_t *)((char *)a2 + *(uint32_t *)(*a2 - 12) + 4) = v19;
            break;
          case 's':
            v14 = (double)a1[2];
            goto LABEL_11;
          case 't':
            sub_192E450(a2, *(int64_t *)&v16);
            break;
          case 'u':
            v14 = (double)a1[1];
            goto LABEL_11;
          case 'w':
            v14 = (double)*a1;
LABEL_11:
            sub_192E450(a2, COERCE__INT64(v14 / 1000000000.0));
            break;
          default:
            break;
        }
        v7 = v10[1];
        v11 = (char *)(v10 + 1);
        if ( v7 == 0 )
          goto LABEL_15;
      }
    }
  }
LABEL_15:
  *((uint32_t *)v20 + 1) = v22;
  *((uint32_t *)v20 + 3) = v21;
  return v20;
}


// ============================================================================
// Address:   0x18fdbf0 (size: 429 bytes)
// Symbol:    sub_18FDBF0
// Demangled: sub_18FDBF0
// ============================================================================
int sub_18FDBF0(int a1)
{
  int64_t v2; // rax
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  typedef unsigned int _g4_t_v13;
  typedef int64_t _g4_t_v14;
  typedef struct tms _g4_t_buffer;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_buffer)) > _g4_s2 ? (16u + sizeof(_g4_t_buffer)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_buffer &buffer = *reinterpret_cast<_g4_t_buffer *>(_g4_sf + 16u);

  sub_1B10790(&v14);
  *(uint64_t *)a1 = v14;
  LODWORD(v2) = times(&buffer);
  if ( (uint32_t)v2 == -1 )
  {
    *(uint32_t *)(a1 + 8) = -1;
    *(uint32_t *)(a1 + 12) = -1;
    *(uint32_t *)(a1 + 16) = -1;
    *(uint32_t *)(a1 + 20) = -1;
    return v2;
  }
  v3 = buffer.tms_cstime + buffer.tms_stime;
  *(uint32_t *)(a1 + 16) = buffer.tms_cstime + buffer.tms_stime;
  HIDWORD(v2) = HIDWORD(qword_2139F10);
  v4 = HIDWORD(qword_2139F10);
  *(uint32_t *)(a1 + 20) = v3 >> 31;
  *(uint64_t *)(a1 + 8) = buffer.tms_cutime + buffer.tms_utime;
  LODWORD(v2) = qword_2139F10;
  if ( ((unsigned int)qword_2139F10 | v4) == 0 )
  {
    LODWORD(v2) = sysconf(6);
    LODWORD(qword_2139F10) = v2;
    HIDWORD(qword_2139F10) = (int)v2 >> 31;
    if ( (int)v2 >> 31 >= 0 && (int)v2 < 0 || (int)v2 >> 31 >= 0 && (uint32_t)v2 != 0 )
    {
      v2 = 1000000000LL / (int)v2;
      v5 = HIDWORD(v2);
      if ( v2 != 0 )
      {
        qword_2139F10 = v2;
        v13 = v2;
        goto LABEL_5;
      }
    }
    qword_2139F10 = -1;
LABEL_9:
    *(uint32_t *)(a1 + 16) = -1;
    *(uint32_t *)(a1 + 20) = -1;
    *(uint32_t *)(a1 + 8) = -1;
    *(uint32_t *)(a1 + 12) = -1;
    return v2;
  }
  if ( (HIDWORD(v2) & (unsigned int)qword_2139F10) == 0xFFFFFFFF )
    goto LABEL_9;
  v13 = qword_2139F10;
  v5 = HIDWORD(v2);
LABEL_5:
  v6 = v5 * *(uint32_t *)(a1 + 8);
  v7 = *(uint32_t *)(a1 + 16) * v5;
  v8 = v6 + v13 * *(uint32_t *)(a1 + 12);
  v9 = *(uint32_t *)(a1 + 20);
  v10 = v8 + ((*(unsigned int *)(a1 + 8) * (uint64_t)v13) >> 32);
  *(uint32_t *)(a1 + 8) *= v13;
  *(uint32_t *)(a1 + 12) = v10;
  v11 = v13 * v9 + v7;
  v2 = *(unsigned int *)(a1 + 16) * (uint64_t)v13;
  HIDWORD(v2) += v11;
  *(uint64_t *)(a1 + 16) = v2;
  return v2;
}


// ============================================================================
// Address:   0x18fdda0 (size: 108 bytes)
// Symbol:    sub_18FDDA0
// Demangled: sub_18FDDA0
// ============================================================================
int sub_18FDDA0(uint32_t *a1)
{
  uint32_t *v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20AADA8);
  v1 = (uint32_t *)(a1[9] - 12);
  if ( v1 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(a1[9] - 4), 0xFFFFFFFF) <= 0 )
    g4_std_compat::string_rep_destroy(v1);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  return sub_1902180(a1 + 7);
}


// ============================================================================
// Address:   0x18fde10 (size: 115 bytes)
// Symbol:    sub_18FDE10
// Demangled: sub_18FDE10
// ============================================================================
void sub_18FDE10(uint32_t *a1)
{
  uint32_t *v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20AADA8);
  v1 = (uint32_t *)(a1[9] - 12);
  if ( v1 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(a1[9] - 4), 0xFFFFFFFF) <= 0 )
    g4_std_compat::string_rep_destroy(v1);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(a1 + 7);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18fde90 (size: 1470 bytes)
// Symbol:    sub_18FDE90
// Demangled: sub_18FDE90
// ============================================================================
uint32_t *sub_18FDE90(uint32_t *a1, int64_t *a2, int16_t a3, char **a4)
{
  uint8_t *src;
  size_t n;
  size_t *v6;
  size_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  size_t v12;
  size_t *v13;
  size_t *v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef size_t *_g4_t_v17;
  typedef size_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef int _g4_t_v21;
  typedef int (**_g4_t_v22)(int);
  typedef uint32_t _g4_t_v23[3];
  typedef uint8_t *_g4_t_v24;
  typedef void *_g4_t_v25;
  typedef uint8_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef char _g4_t_v28[4];
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[29];
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v19)) > _g4_s4 ? (48u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v20)) > _g4_s5 ? (52u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v21)) > _g4_s6 ? (56u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v22)) > _g4_s7 ? (60u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v23)) > _g4_s8 ? (64u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v24)) > _g4_s9 ? (76u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v25)) > _g4_s10 ? (80u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v26)) > _g4_s11 ? (84u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v27)) > _g4_s12 ? (88u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v28)) > _g4_s13 ? (92u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v29)) > _g4_s14 ? (96u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v30)) > _g4_s15 ? (100u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v31)) > _g4_s16 ? (104u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (220u + sizeof(_g4_t_v32)) > _g4_s17 ? (220u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (221u + sizeof(_g4_t_v33)) > _g4_s18 ? (221u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (224u + sizeof(_g4_t_v34)) > _g4_s19 ? (224u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (228u + sizeof(_g4_t_v35)) > _g4_s20 ? (228u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (232u + sizeof(_g4_t_v36)) > _g4_s21 ? (232u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (236u + sizeof(_g4_t_v37)) > _g4_s22 ? (236u + sizeof(_g4_t_v37)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 220u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 221u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 224u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 228u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 232u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 236u);

  sub_1900810(v31);
  v31[28] = 0;
  v32 = 0;
  v31[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v20 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  v37 = 0;
  *(int (***)(int))((char *)&v20 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v21 = 0;
  sub_19119D0((char *)&v20 + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v22 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v23[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v23[-1] + (uint32_t)(uintptr_t)(*(v22 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v20 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v23[1] = 0;
  v20 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v23[2] = 0;
  v31[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v22 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v24 = nullptr;
  v23[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  v25 = nullptr;
  v26 = nullptr;
  v27 = 0;
  sub_1903A70(v28);
  v23[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v29 = 24;
  v30 = &dword_213B814;
  sub_19119D0(v31, v23);
  sub_18FD950(a2, &v22, a4, a3);
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v26 != nullptr )
  {
    src = (uint8_t *)(v25);
    if ( v26 <= v24 )
    {
      if ( v24 == v25 )
      {
        v8 = &dword_213B814;
      }
      else
      {
        if ( v25 == nullptr && v24 != nullptr )
          sub_18FFFD0("basic_string::_S_construct null not valid");
        v12 = v24 - (uint8_t *)v25;
        v13 = (size_t *)sub_1938930(v24 - (uint8_t *)v25, 0);
        v14 = v13;
        v8 = (uint32_t *)(v13 + 3);
        if ( v12 == 1 )
        {
          *((uint8_t *)v13 + 12) = *src;
        }
        else
        {
          v18 = v13;
          v16 = (uint32_t *)(v13 + 3);
          memcpy(v13 + 3, src, v12);
          v14 = v18;
          v8 = v16;
        }
        if ( v14 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v14[2] = 0;
          *v14 = v12;
          *((uint8_t *)v14 + v12 + 12) = 0;
        }
      }
    }
    else if ( v26 == v25 )
    {
      v8 = &dword_213B814;
    }
    else
    {
      if ( v25 == nullptr )
        sub_18FFFD0("basic_string::_S_construct null not valid");
      n = v26 - (uint8_t *)v25;
      v6 = (size_t *)sub_1938930(v26 - (uint8_t *)v25, 0);
      v7 = v6;
      v8 = (uint32_t *)(v6 + 3);
      if ( n == 1 )
      {
        *((uint8_t *)v6 + 12) = *src;
      }
      else
      {
        v17 = v6;
        v15 = (uint32_t *)(v6 + 3);
        memcpy(v6 + 3, src, n);
        v7 = v17;
        v8 = v15;
      }
      if ( v7 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        v7[2] = 0;
        *v7 = n;
        *((uint8_t *)v7 + n + 12) = 0;
      }
    }
    v19 = v8;
    g4_std::string::assign_str(a1, &v19);
    v9 = v19 - 3;
    if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
      g4_std_compat::string_rep_destroy(v9);
  }
  else
  {
    g4_std::string::assign_str(a1, &v30);
  }
  v20 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v31[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v22 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v23[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v10 = v30 - 3;
  if ( v30 - 3 != dword_213B808 && __sync_fetch_and_add(v30 - 1, 0xFFFFFFFF) <= 0 )
    g4_std_compat::string_rep_destroy(v10);
  v23[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v28);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v20 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v22 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v23[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v20 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v21 = 0;
  v31[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v31);
  return a1;
}


// ============================================================================
// Address:   0x18fe450 (size: 70 bytes)
// Symbol:    sub_18FE450
// Demangled: sub_18FE450
// ============================================================================
uint32_t *sub_18FE450(uint32_t *a1, int64_t *a2, int16_t a3)
{
  sub_18FDE90(a1, a2, a3, &dword_2139F18);
  return a1;
}


// ============================================================================
// Address:   0x18fe4a0 (size: 445 bytes)
// Symbol:    sub_18FE4A0
// Demangled: sub_18FE4A0
// ============================================================================
int sub_18FE4A0(int a1)
{
  int v1;
  int64_t v2; // rax
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  typedef unsigned int _g4_t_v13;
  typedef uint32_t _g4_t_v14[2];
  typedef struct tms _g4_t_buffer;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_buffer)) > _g4_s2 ? (16u + sizeof(_g4_t_buffer)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_buffer &buffer = *reinterpret_cast<_g4_t_buffer *>(_g4_sf + 16u);

  *(uint8_t *)(a1 + 24) = 0;
  sub_1B10790(v14);
  v1 = v14[0];
  *(uint32_t *)(a1 + 4) = v14[1];
  *(uint32_t *)a1 = v1;
  LODWORD(v2) = times(&buffer);
  if ( (uint32_t)v2 == -1 )
  {
    *(uint32_t *)(a1 + 8) = -1;
    *(uint32_t *)(a1 + 12) = -1;
    *(uint32_t *)(a1 + 16) = -1;
    *(uint32_t *)(a1 + 20) = -1;
    return v2;
  }
  v3 = buffer.tms_cstime + buffer.tms_stime;
  *(uint32_t *)(a1 + 16) = buffer.tms_cstime + buffer.tms_stime;
  HIDWORD(v2) = HIDWORD(qword_2139F10);
  v4 = HIDWORD(qword_2139F10);
  *(uint32_t *)(a1 + 20) = v3 >> 31;
  *(uint64_t *)(a1 + 8) = buffer.tms_cutime + buffer.tms_utime;
  LODWORD(v2) = qword_2139F10;
  if ( ((unsigned int)qword_2139F10 | v4) == 0 )
  {
    LODWORD(v2) = sysconf(6);
    qword_2139F10 = (int)v2;
    if ( (int)v2 >> 31 >= 0 && (int)v2 < 0 || (int)v2 >> 31 >= 0 && (uint32_t)v2 != 0 )
    {
      v2 = 1000000000LL / (int)v2;
      v5 = HIDWORD(v2);
      if ( v2 != 0 )
      {
        qword_2139F10 = v2;
        v13 = v2;
        goto LABEL_5;
      }
    }
    qword_2139F10 = -1;
LABEL_9:
    *(uint32_t *)(a1 + 16) = -1;
    *(uint32_t *)(a1 + 20) = -1;
    *(uint32_t *)(a1 + 8) = -1;
    *(uint32_t *)(a1 + 12) = -1;
    return v2;
  }
  if ( (HIDWORD(v2) & (unsigned int)qword_2139F10) == 0xFFFFFFFF )
    goto LABEL_9;
  v13 = qword_2139F10;
  v5 = HIDWORD(v2);
LABEL_5:
  v6 = v5 * *(uint32_t *)(a1 + 8);
  v7 = *(uint32_t *)(a1 + 16) * v5;
  v8 = v6 + v13 * *(uint32_t *)(a1 + 12);
  v9 = *(uint32_t *)(a1 + 20);
  v10 = v8 + ((*(unsigned int *)(a1 + 8) * (uint64_t)v13) >> 32);
  *(uint32_t *)(a1 + 8) *= v13;
  *(uint32_t *)(a1 + 12) = v10;
  v11 = v13 * v9 + v7;
  v2 = *(unsigned int *)(a1 + 16) * (uint64_t)v13;
  HIDWORD(v2) += v11;
  *(uint64_t *)(a1 + 16) = v2;
  return v2;
}


// ============================================================================
// Address:   0x18fe660 (size: 481 bytes)
// Symbol:    sub_18FE660
// Demangled: sub_18FE660
// ============================================================================
void sub_18FE660(int a1)
{
  clock_t tms_utime;
  clock_t tms_cutime;
  int v3;
  int v4;
  uint64_t v5; // rax
  int64_t v6; // rax
  int v7;
  int64_t v8; // rax
  uint64_t v16; // 0:ecx.4,4:^30.4
  typedef unsigned int _g4_t_v9;
  typedef uint64_t _g4_t_v10;
  typedef int64_t _g4_t_v11;
  typedef clock_t _g4_t_tms_stime;
  typedef clock_t _g4_t_tms_cstime;
  typedef int64_t _g4_t_v14;
  typedef struct tms _g4_t_buffer;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_tms_stime)) > _g4_s3 ? (28u + sizeof(_g4_t_tms_stime)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_tms_cstime)) > _g4_s4 ? (36u + sizeof(_g4_t_tms_cstime)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v14)) > _g4_s5 ? (40u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_buffer)) > _g4_s6 ? (48u + sizeof(_g4_t_buffer)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_tms_stime &tms_stime = *reinterpret_cast<_g4_t_tms_stime *>(_g4_sf + 28u);
  _g4_t_tms_cstime &tms_cstime = *reinterpret_cast<_g4_t_tms_cstime *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_buffer &buffer = *reinterpret_cast<_g4_t_buffer *>(_g4_sf + 48u);

  if ( *(uint8_t *)(a1 + 24) == 0 )
  {
    *(uint8_t *)(a1 + 24) = 1;
    sub_1B10790(&v14);
    v11 = v14;
    if ( times(&buffer) != -1 )
    {
      tms_stime = buffer.tms_stime;
      tms_cstime = buffer.tms_cstime;
      tms_utime = buffer.tms_utime;
      tms_cutime = buffer.tms_cutime;
      if ( qword_2139F10 != 0 )
      {
        if ( (HIDWORD(qword_2139F10) & (unsigned int)qword_2139F10) != 0xFFFFFFFF )
        {
          HIDWORD(v16) = HIDWORD(qword_2139F10);
          v9 = qword_2139F10;
LABEL_6:
          v3 = tms_cutime + tms_utime;
          LODWORD(v16) = v9;
          v4 = v3 * HIDWORD(v16) + v9 * (v3 >> 31);
          v10 = v9 * (uint64_t)(unsigned int)v3;
          HIDWORD(v10) += v4;
          v5 = v16 * (tms_cstime + tms_stime);
LABEL_7:
          *(uint64_t *)a1 = v11 - *(uint64_t *)a1;
          v6 = v5 - *(uint64_t *)(a1 + 16);
          *(uint64_t *)(a1 + 8) = v10 - *(uint64_t *)(a1 + 8);
          *(uint64_t *)(a1 + 16) = v6;
          return;
        }
      }
      else
      {
        v7 = sysconf(6);
        qword_2139F10 = v7;
        if ( v7 >> 31 >= 0 && v7 < 0 || v7 >> 31 >= 0 && v7 != 0 )
        {
          v8 = 1000000000LL / v7;
          if ( v8 != 0 )
          {
            qword_2139F10 = v8;
            HIDWORD(v16) = HIDWORD(v8);
            v9 = v8;
            goto LABEL_6;
          }
        }
        qword_2139F10 = -1;
      }
    }
    v5 = -1;
    v10 = -1;
    goto LABEL_7;
  }
}


// ============================================================================
// Address:   0x18fe850 (size: 597 bytes)
// Symbol:    sub_18FE850
// Demangled: sub_18FE850
// ============================================================================
uint32_t *sub_18FE850(uint32_t *a1, int a2)
{
  clock_t tms_cutime;
  int64_t v4; // rax
  int v5;
  uint64_t v6; // rax
  int v7;
  int64_t v8; // rax
  int64_t v9; // rax
  bool v10;
  int v11; // ett
  int64_t v24; // 0:edi.4,4:^2C.4
  typedef clock_t _g4_t_tms_stime;
  typedef int64_t _g4_t_v13;
  typedef clock_t _g4_t_tms_utime;
  typedef int64_t _g4_t_v15;
  typedef int64_t _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef clock_t _g4_t_v20;
  typedef clock_t _g4_t_tms_cstime;
  typedef uint32_t _g4_t_v22[2];
  typedef struct tms _g4_t_buffer;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_tms_stime)) > _g4_s0 ? (0u + sizeof(_g4_t_tms_stime)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v13)) > _g4_s1 ? (0u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_tms_utime)) > _g4_s2 ? (8u + sizeof(_g4_t_tms_utime)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v16)) > _g4_s4 ? (8u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v17)) > _g4_s5 ? (16u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v18)) > _g4_s6 ? (20u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v20)) > _g4_s7 ? (28u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_tms_cstime)) > _g4_s8 ? (32u + sizeof(_g4_t_tms_cstime)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v22)) > _g4_s9 ? (40u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_buffer)) > _g4_s10 ? (48u + sizeof(_g4_t_buffer)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_tms_stime &tms_stime = *reinterpret_cast<_g4_t_tms_stime *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_tms_utime &tms_utime = *reinterpret_cast<_g4_t_tms_utime *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_tms_cstime &tms_cstime = *reinterpret_cast<_g4_t_tms_cstime *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_buffer &buffer = *reinterpret_cast<_g4_t_buffer *>(_g4_sf + 48u);

  if ( *(uint8_t *)(a2 + 24) != 0 )
  {
    *a1 = *(uint32_t *)a2;
    a1[1] = *(uint32_t *)(a2 + 4);
    a1[2] = *(uint32_t *)(a2 + 8);
    a1[3] = *(uint32_t *)(a2 + 12);
    a1[4] = *(uint32_t *)(a2 + 16);
    a1[5] = *(uint32_t *)(a2 + 20);
    return a1;
  }
  sub_1B10790(v22);
  v17 = v22[0];
  v18 = v22[1];
  if ( times(&buffer) == -1 )
    goto LABEL_11;
  tms_stime = buffer.tms_stime;
  tms_cstime = buffer.tms_cstime;
  tms_utime = buffer.tms_utime;
  LODWORD(v24) = qword_2139F10;
  tms_cutime = buffer.tms_cutime;
  if ( qword_2139F10 == 0 )
  {
    v20 = buffer.tms_cutime;
    v7 = sysconf(6);
    tms_cutime = v20;
    qword_2139F10 = v7;
    if ( v7 >> 31 >= 0 && v7 < 0 || v7 >> 31 >= 0 && v7 != 0 )
    {
      v8 = 1000000000LL / v7;
      if ( v8 != 0 )
      {
        qword_2139F10 = v8;
        v24 = v8;
        goto LABEL_7;
      }
    }
    qword_2139F10 = -1;
LABEL_11:
    v13 = -1;
    v15 = -1;
    goto LABEL_12;
  }
  if ( (HIDWORD(qword_2139F10) & (unsigned int)qword_2139F10) == 0xFFFFFFFF )
    goto LABEL_11;
  HIDWORD(v24) = HIDWORD(qword_2139F10);
LABEL_7:
  v15 = v24 * (tms_utime + tms_cutime);
  v4 = tms_cstime + tms_stime;
  v5 = v24 * HIDWORD(v4) + v4 * HIDWORD(v24);
  v6 = (unsigned int)v24 * (uint64_t)(unsigned int)v4;
  LODWORD(v13) = v6;
  HIDWORD(v13) = v5 + HIDWORD(v6);
LABEL_12:
  v16 = v15 - *(uint64_t *)(a2 + 8);
  v9 = v13 - *(uint64_t *)(a2 + 16);
  v10 = v17 < *(uint32_t *)a2;
  *a1 = v17 - *(uint32_t *)a2;
  v11 = v10 + *(uint32_t *)(a2 + 4);
  a1[4] = v9;
  a1[1] = v18 - v11;
  *((uint64_t *)a1 + 1) = v16;
  a1[5] = HIDWORD(v9);
  return a1;
}


// ============================================================================
// Address:   0x18feab0 (size: 613 bytes)
// Symbol:    sub_18FEAB0
// Demangled: sub_18FEAB0
// ============================================================================
void sub_18FEAB0(int64_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint64_t v8; // rax
  unsigned int v9;
  unsigned int v10;
  uint64_t v11; // rax
  uint64_t v12; // rax
  int v13;
  int64_t v14; // rax
  typedef int64_t _g4_t_v15;
  typedef int64_t _g4_t_v16;
  typedef int64_t _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int64_t _g4_t_v19;
  typedef uint32_t _g4_t_v20[2];
  typedef struct tms _g4_t_buffer;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v18)) > _g4_s3 ? (32u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v20)) > _g4_s5 ? (40u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_buffer)) > _g4_s6 ? (48u + sizeof(_g4_t_buffer)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_buffer &buffer = *reinterpret_cast<_g4_t_buffer *>(_g4_sf + 48u);

  if ( *((uint8_t *)a1 + 24) != 0 )
  {
    v16 = *a1;
    v15 = a1[1];
    LODWORD(v17) = *((uint32_t *)a1 + 4);
    v1 = *((uint32_t *)a1 + 5);
    *((uint8_t *)a1 + 24) = 0;
    HIDWORD(v17) = v1;
    sub_1B10790(v20);
    v2 = v20[0];
    *((uint32_t *)a1 + 1) = v20[1];
    *(uint32_t *)a1 = v2;
    if ( times(&buffer) == -1 )
    {
      *((uint32_t *)a1 + 2) = -1;
      *((uint32_t *)a1 + 3) = -1;
      *((uint32_t *)a1 + 4) = -1;
      *((uint32_t *)a1 + 5) = -1;
      v19 = -1;
      v12 = -1;
      goto LABEL_7;
    }
    v3 = buffer.tms_cstime + buffer.tms_stime;
    *((uint32_t *)a1 + 4) = buffer.tms_cstime + buffer.tms_stime;
    v4 = HIDWORD(qword_2139F10);
    v5 = HIDWORD(qword_2139F10);
    *((uint32_t *)a1 + 5) = v3 >> 31;
    a1[1] = buffer.tms_cutime + buffer.tms_utime;
    if ( ((unsigned int)qword_2139F10 | v5) != 0 )
    {
      if ( (v4 & (unsigned int)qword_2139F10) != 0xFFFFFFFF )
      {
        v18 = qword_2139F10;
LABEL_6:
        v6 = v4 * *((uint32_t *)a1 + 2);
        v7 = *((uint32_t *)a1 + 4) * v4;
        v8 = *((unsigned int *)a1 + 2) * (uint64_t)v18;
        HIDWORD(v8) += v18 * *((uint32_t *)a1 + 3) + v6;
        a1[1] = v8;
        v9 = HIDWORD(v8);
        v10 = v8;
        v11 = *((unsigned int *)a1 + 4) * (uint64_t)v18;
        HIDWORD(v11) += *((uint32_t *)a1 + 5) * v18 + v7;
        a1[2] = v11;
        v19 = v11;
        v12 = __PAIR64__(v9, v10);
LABEL_7:
        *a1 -= v16;
        a1[1] = v12 - v15;
        a1[2] = v19 - v17;
        return;
      }
    }
    else
    {
      v13 = sysconf(6);
      qword_2139F10 = v13;
      if ( v13 >> 31 >= 0 && v13 < 0 || v13 >> 31 >= 0 && v13 != 0 )
      {
        v14 = 1000000000LL / v13;
        v4 = HIDWORD(v14);
        if ( v14 != 0 )
        {
          qword_2139F10 = v14;
          v18 = v14;
          goto LABEL_6;
        }
      }
      qword_2139F10 = -1;
    }
    *((uint32_t *)a1 + 4) = -1;
    *((uint32_t *)a1 + 5) = -1;
    *((uint32_t *)a1 + 2) = -1;
    *((uint32_t *)a1 + 3) = -1;
    v19 = -1;
    v12 = -1;
    goto LABEL_7;
  }
}


// ============================================================================
// Address:   0x18fed20 (size: 939 bytes)
// Symbol:    sub_18FED20
// Demangled: sub_18FED20
// ============================================================================
int sub_18FED20(int a1, int a2, int16_t a3)
{
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  uint64_t v9; // rax
  int v10;
  uint64_t v11; // rax
  int v12;
  int64_t v13; // rax
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
  int64_t v24; // rax
  typedef unsigned int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef struct tms _g4_t_buffer;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v27)) > _g4_s1 ? (20u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v28)) > _g4_s2 ? (24u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v29)) > _g4_s3 ? (28u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_buffer)) > _g4_s4 ? (48u + sizeof(_g4_t_buffer)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_buffer &buffer = *reinterpret_cast<_g4_t_buffer *>(_g4_sf + 48u);

  *(uint8_t *)(a1 + 24) = 0;
  sub_1B10790(&v28);
  v3 = v28;
  *(uint32_t *)(a1 + 4) = v29;
  *(uint32_t *)a1 = v3;
  if ( times(&buffer) == -1 )
  {
    *(uint32_t *)(a1 + 8) = -1;
    *(uint32_t *)(a1 + 12) = -1;
    *(uint32_t *)(a1 + 16) = -1;
    *(uint32_t *)(a1 + 20) = -1;
  }
  else
  {
    v4 = buffer.tms_cstime + buffer.tms_stime;
    *(uint32_t *)(a1 + 16) = buffer.tms_cstime + buffer.tms_stime;
    v5 = HIDWORD(qword_2139F10);
    v6 = qword_2139F10;
    *(uint32_t *)(a1 + 20) = v4 >> 31;
    *(uint64_t *)(a1 + 8) = buffer.tms_cutime + buffer.tms_utime;
    if ( (v6 | v5) != 0 )
    {
      if ( (v5 & v6) != 0xFFFFFFFF )
      {
LABEL_4:
        v7 = v5 * *(uint32_t *)(a1 + 8);
        v8 = *(uint32_t *)(a1 + 16) * v5;
        v27 = v6 * *(uint32_t *)(a1 + 12) + v7;
        v9 = *(unsigned int *)(a1 + 8) * (uint64_t)v6;
        *(uint32_t *)(a1 + 8) = v9;
        LODWORD(v9) = v6 * *(uint32_t *)(a1 + 20);
        *(uint32_t *)(a1 + 12) = v27 + HIDWORD(v9);
        v10 = v9 + v8;
        v11 = *(unsigned int *)(a1 + 16) * (uint64_t)v6;
        HIDWORD(v11) += v10;
        *(uint64_t *)(a1 + 16) = v11;
        goto LABEL_5;
      }
    }
    else
    {
      v23 = sysconf(6);
      qword_2139F10 = v23;
      if ( v23 >> 31 >= 0 && v23 < 0 || v23 >> 31 >= 0 && v23 != 0 )
      {
        v24 = 1000000000LL / v23;
        v5 = HIDWORD(v24);
        if ( v24 != 0 )
        {
          qword_2139F10 = v24;
          v6 = v24;
          goto LABEL_4;
        }
      }
      qword_2139F10 = -1;
    }
    *(uint32_t *)(a1 + 16) = -1;
    *(uint32_t *)(a1 + 20) = -1;
    *(uint32_t *)(a1 + 8) = -1;
    *(uint32_t *)(a1 + 12) = -1;
  }
LABEL_5:
  *(uint16_t *)(a1 + 26) = a3;
  *(uint32_t *)(a1 + 28) = a2;
  g4_std_compat::string_construct_copy(a1 + 32, &dword_2139F18);
  *(uint8_t *)(a1 + 24) = 0;
  sub_1B10790(&v28);
  v12 = v28;
  *(uint32_t *)(a1 + 4) = v29;
  *(uint32_t *)a1 = v12;
  LODWORD(v13) = times(&buffer);
  if ( (uint32_t)v13 == -1 )
  {
    *(uint32_t *)(a1 + 8) = -1;
    *(uint32_t *)(a1 + 12) = -1;
    *(uint32_t *)(a1 + 16) = -1;
    *(uint32_t *)(a1 + 20) = -1;
    return v13;
  }
  v14 = buffer.tms_cstime + buffer.tms_stime;
  *(uint32_t *)(a1 + 16) = buffer.tms_cstime + buffer.tms_stime;
  HIDWORD(v13) = HIDWORD(qword_2139F10);
  v15 = HIDWORD(qword_2139F10);
  *(uint32_t *)(a1 + 20) = v14 >> 31;
  *(uint64_t *)(a1 + 8) = buffer.tms_cutime + buffer.tms_utime;
  LODWORD(v13) = qword_2139F10;
  if ( ((unsigned int)qword_2139F10 | v15) == 0 )
  {
    LODWORD(v13) = sysconf(6);
    qword_2139F10 = (int)v13;
    if ( (int)v13 >> 31 >= 0 && (int)v13 < 0 || (int)v13 >> 31 >= 0 && (uint32_t)v13 != 0 )
    {
      v13 = 1000000000LL / (int)v13;
      v16 = HIDWORD(v13);
      if ( v13 != 0 )
      {
        qword_2139F10 = v13;
        v26 = v13;
        goto LABEL_9;
      }
    }
    qword_2139F10 = -1;
LABEL_19:
    *(uint32_t *)(a1 + 16) = -1;
    *(uint32_t *)(a1 + 20) = -1;
    *(uint32_t *)(a1 + 8) = -1;
    *(uint32_t *)(a1 + 12) = -1;
    return v13;
  }
  if ( (HIDWORD(v13) & (unsigned int)qword_2139F10) == 0xFFFFFFFF )
    goto LABEL_19;
  v26 = qword_2139F10;
  v16 = HIDWORD(v13);
LABEL_9:
  v17 = v16 * *(uint32_t *)(a1 + 8);
  v18 = *(uint32_t *)(a1 + 16) * v16;
  v19 = v17 + v26 * *(uint32_t *)(a1 + 12);
  v20 = *(uint32_t *)(a1 + 20);
  v21 = v19 + ((*(unsigned int *)(a1 + 8) * (uint64_t)v26) >> 32);
  *(uint32_t *)(a1 + 8) *= v26;
  *(uint32_t *)(a1 + 12) = v21;
  v22 = v26 * v20 + v18;
  v13 = *(unsigned int *)(a1 + 16) * (uint64_t)v26;
  HIDWORD(v13) += v22;
  *(uint64_t *)(a1 + 16) = v13;
  return v13;
}


// ============================================================================
// Address:   0x18ff0d0 (size: 597 bytes)
// Symbol:    sub_18FF0D0
// Demangled: sub_18FF0D0
// ============================================================================
char *sub_18FF0D0(int a1)
{
  clock_t tms_utime;
  int64_t v3;
  int64_t v4; // rax
  int v5;
  int64_t v6; // rax
  int64_t v7; // rax
  int64_t v8; // kr08_8
  typedef int16_t _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef clock_t _g4_t_tms_cutime;
  typedef int64_t _g4_t_v12;
  typedef int64_t _g4_t_v13;
  typedef int64_t _g4_t_v14;
  typedef clock_t _g4_t_tms_stime;
  typedef clock_t _g4_t_tms_cstime;
  typedef int64_t _g4_t_v17;
  typedef struct tms _g4_t_buffer;
  typedef int64_t _g4_t_v19;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_tms_cutime)) > _g4_s2 ? (24u + sizeof(_g4_t_tms_cutime)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v14)) > _g4_s5 ? (40u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_tms_stime)) > _g4_s6 ? (48u + sizeof(_g4_t_tms_stime)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_tms_cstime)) > _g4_s7 ? (52u + sizeof(_g4_t_tms_cstime)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v17)) > _g4_s8 ? (56u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_buffer)) > _g4_s9 ? (72u + sizeof(_g4_t_buffer)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v19)) > _g4_s10 ? (88u + sizeof(_g4_t_v19)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_tms_cutime &tms_cutime = *reinterpret_cast<_g4_t_tms_cutime *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_tms_stime &tms_stime = *reinterpret_cast<_g4_t_tms_stime *>(_g4_sf + 48u);
  _g4_t_tms_cstime &tms_cstime = *reinterpret_cast<_g4_t_tms_cstime *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_buffer &buffer = *reinterpret_cast<_g4_t_buffer *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);

  v9 = *(uint16_t *)(a1 + 26);
  v10 = *(uint32_t **)(a1 + 28);
  if ( *(uint8_t *)(a1 + 24) == 0 )
  {
    sub_1B10790(&v17);
    v14 = v17;
    if ( times(&buffer) != -1 )
    {
      tms_stime = buffer.tms_stime;
      tms_cstime = buffer.tms_cstime;
      tms_utime = buffer.tms_utime;
      tms_cutime = buffer.tms_cutime;
      if ( qword_2139F10 != 0 )
      {
        if ( (HIDWORD(qword_2139F10) & (unsigned int)qword_2139F10) != 0xFFFFFFFF )
        {
          v3 = qword_2139F10;
LABEL_8:
          v12 = (tms_utime + tms_cutime) * v3;
          v4 = v3 * (tms_cstime + tms_stime);
LABEL_13:
          v13 = v12 - *(uint64_t *)(a1 + 8);
          v7 = v4 - *(uint64_t *)(a1 + 16);
          v8 = v14 - *(uint64_t *)a1;
          *(uint64_t *)&buffer.tms_utime = v8;
          *(uint64_t *)&buffer.tms_cutime = v13;
          v19 = v7;
          return sub_18FD950((int64_t *)&buffer.tms_utime, v10, (char **)(a1 + 32), v9);
        }
      }
      else
      {
        v5 = sysconf(6);
        qword_2139F10 = v5;
        if ( v5 >> 31 >= 0 && v5 < 0 || v5 >> 31 >= 0 && v5 != 0 )
        {
          v6 = 1000000000LL / v5;
          if ( v6 != 0 )
          {
            qword_2139F10 = v6;
            v3 = v6;
            goto LABEL_8;
          }
        }
        qword_2139F10 = -1;
      }
    }
    v4 = -1;
    v12 = -1;
    goto LABEL_13;
  }
  buffer.tms_utime = *(uint32_t *)a1;
  buffer.tms_stime = *(uint32_t *)(a1 + 4);
  buffer.tms_cutime = *(uint32_t *)(a1 + 8);
  buffer.tms_cstime = *(uint32_t *)(a1 + 12);
  v19 = *(uint64_t *)(a1 + 16);
  return sub_18FD950((int64_t *)&buffer.tms_utime, v10, (char **)(a1 + 32), v9);
}


// ============================================================================
// Address:   0x18ff330 (size: 402 bytes)
// Symbol:    sub_18FF330
// Demangled: sub_18FF330
// ============================================================================
int sub_18FF330(int a1)
{
  bool v1;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  uint32_t *v7;
  bool v8;
  int16_t v9; // bp
  int result;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t _g4_t_v16[2];
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int64_t _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int64_t _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v16)) > _g4_s1 ? (24u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v22)) > _g4_s7 ? (56u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v23)) > _g4_s8 ? (60u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v24)) > _g4_s9 ? (64u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v25)) > _g4_s10 ? (68u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v26)) > _g4_s11 ? (72u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v27)) > _g4_s12 ? (80u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v28)) > _g4_s13 ? (84u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v29)) > _g4_s14 ? (88u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v30)) > _g4_s15 ? (92u + sizeof(_g4_t_v30)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);

  if ( *(uint8_t *)(a1 + 24) == 0 )
  {
    *(uint8_t *)(a1 + 24) = 1;
    sub_18FDBF0((int)(uintptr_t)(v16));
    v1 = v16[0] < *(uint32_t *)a1;
    v2 = v16[1];
    *(uint32_t *)a1 = v16[0] - *(uint32_t *)a1;
    v3 = v2 - (v1 + *(uint32_t *)(a1 + 4));
    v1 = v17 < *(uint32_t *)(a1 + 8);
    v4 = v17 - *(uint32_t *)(a1 + 8);
    *(uint32_t *)(a1 + 4) = v3;
    *(uint32_t *)(a1 + 8) = v4;
    v5 = v18 - (v1 + *(uint32_t *)(a1 + 12));
    v1 = v19 < *(uint32_t *)(a1 + 16);
    v6 = v19 - *(uint32_t *)(a1 + 16);
    *(uint32_t *)(a1 + 12) = v5;
    *(uint32_t *)(a1 + 16) = v6;
    v7 = *(uint32_t **)(a1 + 28);
    v8 = *(uint8_t *)(a1 + 24) == 0;
    *(uint32_t *)(a1 + 20) = v20 - (v1 + *(uint32_t *)(a1 + 20));
    v9 = *(uint16_t *)(a1 + 26);
    v15 = v7;
    if ( v8 )
    {
      sub_18FDBF0((int)(uintptr_t)(&v26));
      v11 = *(uint32_t *)(a1 + 4);
      v1 = (unsigned int)v26 < *(uint32_t *)a1;
      LODWORD(v26) = v26 - *(uint32_t *)a1;
      v12 = *(uint32_t *)(a1 + 8);
      HIDWORD(v26) -= v1 + v11;
      v1 = v27 < v12;
      v27 -= v12;
      v13 = *(uint32_t *)(a1 + 16);
      v28 -= v1 + *(uint32_t *)(a1 + 12);
      v1 = v29 < v13;
      v29 -= v13;
      v14 = *(uint32_t *)(a1 + 20);
      v21 = v26;
      v22 = v27;
      v23 = v28;
      v30 -= v1 + v14;
      v24 = v29;
      v25 = v30;
    }
    else
    {
      v21 = *(uint64_t *)a1;
      v22 = *(uint32_t *)(a1 + 8);
      v23 = *(uint32_t *)(a1 + 12);
      v24 = *(uint32_t *)(a1 + 16);
      v25 = *(uint32_t *)(a1 + 20);
    }
    sub_18FD950(&v21, v15, (char **)(a1 + 32), v9);
  }
  result = *(uint32_t *)(a1 + 32);
  if ( (uint32_t *)(result - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(result - 4), 0xFFFFFFFF) <= 0 )
  {
    return g4_std_compat::string_rep_destroy((void *)(result - 12));
  }
  return result;
}


// ============================================================================
// Address:   0x18ff4d0 (size: 122 bytes)
// Symbol:    sub_18FF4D0
// Demangled: sub_18FF4D0
// ============================================================================
int sub_18FF4D0()
{
  int v1[3];

  sub_1900D70(&unk_2139F1C);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2139F1C, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&dword_2139F18), " %ws wall, %us user + %ss system = %ts CPU (%p%)\n", (int)(uintptr_t)(v1));
  return __cxa_atexit((void (*)(void *))g4_noop_dtor, &dword_2139F18, &unk_20D1280);
}


// ============================================================================
// Address:   0x18ff550 (size: 12 bytes)
// Symbol:    sub_18FF550
// Demangled: sub_18FF550
// ============================================================================
int sub_18FF550(int a1, uint8_t a2)
{
  return a2;
}


// ============================================================================
// Address:   0x18ff560 (size: 12 bytes)
// Symbol:    sub_18FF560
// Demangled: sub_18FF560
// ============================================================================
int sub_18FF560(int a1, uint8_t a2)
{
  return a2;
}


// ============================================================================
// Address:   0x18ff570 (size: 28 bytes)
// Symbol:    sub_18FF570
// Demangled: sub_18FF570
// ============================================================================
int sub_18FF570(int a1, uint8_t a2)
{
  int result;

  result = a2;
  if ( (*(uint8_t *)(*(uint32_t *)(a1 + 24) + a2) & 2) != 0 )
    return a2 - 32;
  return result;
}


// ============================================================================
// Address:   0x18ff590 (size: 58 bytes)
// Symbol:    sub_18FF590
// Demangled: sub_18FF590
// ============================================================================
uint8_t *sub_18FF590(int a1, uint8_t *a2, uint8_t *a3)
{
  uint8_t *v3;

  v3 = a2;
  if ( a2 < a3 )
  {
    do
    {
      *v3 = (*(int (**)(int, uint32_t))(*(uint32_t *)a1 + 8))(a1, (char)*v3);
      ++v3;
    }
    while ( v3 != a3 );
  }
  return a3;
}


// ============================================================================
// Address:   0x18ff5d0 (size: 28 bytes)
// Symbol:    sub_18FF5D0
// Demangled: sub_18FF5D0
// ============================================================================
int sub_18FF5D0(int a1, uint8_t a2)
{
  int result;

  result = a2;
  if ( (*(uint8_t *)(*(uint32_t *)(a1 + 24) + a2) & 1) != 0 )
    return a2 + 32;
  return result;
}


// ============================================================================
// Address:   0x18ff5f0 (size: 58 bytes)
// Symbol:    sub_18FF5F0
// Demangled: sub_18FF5F0
// ============================================================================
uint8_t *sub_18FF5F0(int a1, uint8_t *a2, uint8_t *a3)
{
  uint8_t *v3;

  v3 = a2;
  if ( a2 < a3 )
  {
    do
    {
      *v3 = (*(int (**)(int, uint32_t))(*(uint32_t *)a1 + 16))(a1, (char)*v3);
      ++v3;
    }
    while ( v3 != a3 );
  }
  return a3;
}


// ============================================================================
// Address:   0x18ff630 (size: 113 bytes)
// Symbol:    sub_18FF630
// Demangled: sub_18FF630
// ============================================================================
int sub_18FF630(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A97E8);
  sub_1908860(a1 + 2);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB568);
  return sub_1901990(a1);
}


// ============================================================================
// Address:   0x18ff6b0 (size: 28 bytes)
// Symbol:    sub_18FF6B0
// Demangled: sub_18FF6B0
// ============================================================================
int sub_18FF6B0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9828);
  return sub_18FF630(a1);
}


// ============================================================================
// Address:   0x18ff6d0 (size: 56 bytes)
// Symbol:    sub_18FF6D0
// Demangled: sub_18FF6D0
// ============================================================================
void sub_18FF6D0(uint32_t *a1)
{
  sub_18FF6B0(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18ff710 (size: 56 bytes)
// Symbol:    sub_18FF710
// Demangled: sub_18FF710
// ============================================================================
void sub_18FF710(uint32_t *a1)
{
  sub_18FF630(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x18ff750 (size: 112 bytes)
// Symbol:    sub_18FF750
// Demangled: sub_18FF750
// ============================================================================
int sub_18FF750(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A97A8);
  sub_1908860(a1 + 8);
  if ( *(uint8_t *)(a1 + 12) != 0 && *(uint32_t *)(a1 + 24) != 0 )
    operator delete[](*(void **)(a1 + 24));
  return sub_1901990(a1);
}


// ============================================================================
// Address:   0x18ff7c0 (size: 56 bytes)
// Symbol:    sub_18FF7C0
// Demangled: sub_18FF7C0
// ============================================================================
void sub_18FF7C0(void *a1)
{
  sub_18FF750((int)(uintptr_t)(a1));
  operator delete(a1);
}


// ============================================================================
// Address:   0x18ff800 (size: 70 bytes)
// Symbol:    sub_18FF800
// Demangled: sub_18FF800
// ============================================================================
int sub_18FF800(int a1, void *src, int a3, int a4, void *dest)
{
  memcpy(dest, src, a3 - (uint32_t)(uintptr_t)(src));
  return a3;
}


// ============================================================================
// Address:   0x18ff850 (size: 70 bytes)
// Symbol:    sub_18FF850
// Demangled: sub_18FF850
// ============================================================================
int sub_18FF850(int a1, void *src, int a3, void *dest)
{
  memcpy(dest, src, a3 - (uint32_t)(uintptr_t)(src));
  return a3;
}


// ============================================================================
// Address:   0x18ff8a0 (size: 23 bytes)
// Symbol:    sub_18FF8A0
// Demangled: sub_18FF8A0
// ============================================================================
int sub_18FF8A0()
{
  return (int)(uintptr_t)(ctype_ + 1);
}


// ============================================================================
// Address:   0x18ff8c0 (size: 368 bytes)
// Symbol:    sub_18FF8C0
// Demangled: sub_18FF8C0
// ============================================================================
int sub_18FF8C0(int a1, int a2, int a3, char a4, int a5)
{
  int v5;
  uint16_t *v6;
  unsigned int v7;
  uint16_t *v8;
  uint16_t *v9;
  unsigned int v10;
  int result;
  uint16_t *v12;

  v5 = a3;
  *(uint32_t *)(a1 + 4) = a5 != 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A97A8);
  if ( a3 != 0 )
  {
    *(uint8_t *)(a1 + 12) = a4 != 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 20) = 0;
  }
  else
  {
    *(uint8_t *)(a1 + 12) = 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 20) = 0;
    v5 = (int)(uintptr_t)(ctype_ + 1);
  }
  v6 = (uint16_t *)(a1 + 29);
  *(uint32_t *)(a1 + 24) = v5;
  v7 = 256;
  if ( ((a1 + 29) & 1) != 0 )
  {
    *(uint8_t *)(a1 + 29) = 0;
    v6 = (uint16_t *)(a1 + 30);
    LOWORD(v7) = 255;
  }
  if ( ((uint8_t)(uintptr_t)(v6) & 2) != 0 )
  {
    *v6 = 0;
    v7 -= 2;
    ++v6;
  }
  memset(v6, 0, 4 * (v7 >> 2));
  v8 = &v6[2 * (v7 >> 2)];
  if ( (v7 & 2) != 0 )
    *v8++ = 0;
  if ( (v7 & 1) != 0 )
    *(uint8_t *)v8 = 0;
  v9 = (uint16_t *)(a1 + 285);
  *(uint8_t *)(a1 + 28) = 0;
  v10 = 256;
  if ( ((a1 + 285) & 1) != 0 )
  {
    *(uint8_t *)(a1 + 285) = 0;
    v9 = (uint16_t *)(a1 + 286);
    LOWORD(v10) = 255;
  }
  if ( ((uint8_t)(uintptr_t)(v9) & 2) != 0 )
  {
    *v9 = 0;
    v10 -= 2;
    ++v9;
  }
  result = 0;
  memset(v9, 0, 4 * (v10 >> 2));
  v12 = &v9[2 * (v10 >> 2)];
  if ( (v10 & 2) != 0 )
    *v12++ = 0;
  if ( (v10 & 1) != 0 )
    *(uint8_t *)v12 = 0;
  *(uint8_t *)(a1 + 541) = 0;
  return result;
}


// ============================================================================
// Address:   0x18ffa30 (size: 368 bytes)
// Symbol:    sub_18FFA30
// Demangled: sub_18FFA30
// ============================================================================
int sub_18FFA30(int a1, int a2, char a3, int a4)
{
  int v4;
  uint16_t *v5;
  unsigned int v6;
  uint16_t *v7;
  uint16_t *v8;
  unsigned int v9;
  int result;
  uint16_t *v11;

  v4 = a2;
  *(uint32_t *)(a1 + 4) = a4 != 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A97A8);
  if ( a2 != 0 )
  {
    *(uint8_t *)(a1 + 12) = a3 != 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 20) = 0;
  }
  else
  {
    *(uint8_t *)(a1 + 12) = 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 20) = 0;
    v4 = (int)(uintptr_t)(ctype_ + 1);
  }
  v5 = (uint16_t *)(a1 + 29);
  *(uint32_t *)(a1 + 24) = v4;
  v6 = 256;
  if ( ((a1 + 29) & 1) != 0 )
  {
    *(uint8_t *)(a1 + 29) = 0;
    v5 = (uint16_t *)(a1 + 30);
    LOWORD(v6) = 255;
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
  v8 = (uint16_t *)(a1 + 285);
  *(uint8_t *)(a1 + 28) = 0;
  v9 = 256;
  if ( ((a1 + 285) & 1) != 0 )
  {
    *(uint8_t *)(a1 + 285) = 0;
    v8 = (uint16_t *)(a1 + 286);
    LOWORD(v9) = 255;
  }
  if ( ((uint8_t)(uintptr_t)(v8) & 2) != 0 )
  {
    *v8 = 0;
    v9 -= 2;
    ++v8;
  }
  result = 0;
  memset(v8, 0, 4 * (v9 >> 2));
  v11 = &v8[2 * (v9 >> 2)];
  if ( (v9 & 2) != 0 )
    *v11++ = 0;
  if ( (v9 & 1) != 0 )
    *(uint8_t *)v11 = 0;
  *(uint8_t *)(a1 + 541) = 0;
  return result;
}


// ============================================================================
// Address:   0x18ffba0 (size: 199 bytes)
// Symbol:    sub_18FFBA0
// Demangled: sub_18FFBA0
// ============================================================================
int sub_18FFBA0(uint8_t *a1)
{
  int i;
  int result;
  typedef char _g4_t_v3;
  typedef char _g4_t_s1;
  typedef uint8_t _g4_t_v5[255];
  typedef uint8_t _g4_t_v6[28];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (15u + sizeof(_g4_t_v3)) > _g4_s0 ? (15u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s1)) > _g4_s1 ? (16u + sizeof(_g4_t_s1)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v5)) > _g4_s2 ? (17u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (272u + sizeof(_g4_t_v6)) > _g4_s3 ? (272u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 15u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 17u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 272u);

  for ( i = 0; i != 256; ++i )
    v5[i - 1] = i;
  (*(void (**)(uint8_t *, char *, uint8_t *, uint32_t, uint8_t *))(*(uint32_t *)a1 + 36))(a1, &s1, v6, 0, a1 + 285);
  a1[541] = 1;
  result = memcmp(&s1, a1 + 285, 0x100u);
  if ( result != 0
    || (result = (*(int (**)(uint8_t *, char *, uint8_t *, int, char *))(*(uint32_t *)a1 + 36))(a1, &s1, v5, 1, &v3),
        v3 == 1) )
  {
    a1[541] = 2;
  }
  return result;
}


// ============================================================================
// Address:   0x18ffc70 (size: 127 bytes)
// Symbol:    sub_18FFC70
// Demangled: sub_18FFC70
// ============================================================================
int sub_18FFC70(uint8_t *a1)
{
  int i;
  int result;
  typedef uint8_t _g4_t_s1[256];
  typedef uint8_t _g4_t_v4[28];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (256u + sizeof(_g4_t_v4)) > _g4_s1 ? (256u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 256u);

  for ( i = 0; i != 256; ++i )
    s1[i] = i;
  (*(void (**)(uint8_t *, uint8_t *, uint8_t *, uint8_t *))(*(uint32_t *)a1 + 28))(a1, s1, v4, a1 + 29);
  a1[28] = 1;
  result = memcmp(s1, a1 + 29, 0x100u);
  if ( result != 0 )
    a1[28] = 2;
  return result;
}


// ============================================================================
// Address:   0x18ffcf0 (size: 117 bytes)
// Symbol:    sub_18FFCF0
// Demangled: sub_18FFCF0
// ============================================================================
int sub_18FFCF0(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2 != 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A97E8);
  *(uint32_t *)(a1 + 8) = sub_1901FF0();
  *(uint8_t *)(a1 + 12) = 0;
  return sub_1907130(a1);
}


// ============================================================================
// Address:   0x18ffd70 (size: 89 bytes)
// Symbol:    sub_18FFD70
// Demangled: sub_18FFD70
// ============================================================================
int sub_18FFD70(int a1, char a2, int a3)
{
  *(uint32_t *)(a1 + 4) = a3 != 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A97E8);
  *(uint32_t *)(a1 + 8) = sub_1908870(&a2);
  *(uint8_t *)(a1 + 12) = 0;
  return sub_1907130(a1);
}


// ============================================================================
// Address:   0x18ffdd0 (size: 183 bytes)
// Symbol:    sub_18FFDD0
// Demangled: sub_18FFDD0
// ============================================================================
int (**sub_18FFDD0(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);

  sub_18FFCF0((int)(uintptr_t)(a1), a3);
  result = (int (**)(int))(uintptr_t)(&off_20A9828);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9828);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908860(a1 + 2);
    sub_1908800(a1 + 2, a2);
    return (int (**)(int))sub_1907130(a1);
  }
  return result;
}


// ============================================================================
// Address:   0x18ffe90 (size: 70 bytes)
// Symbol:    sub_18FFE90
// Demangled: sub_18FFE90
// ============================================================================
void __noreturn sub_18FFE90()
{
  uint32_t *exception;

  exception = (uint32_t *)(_cxa_allocate_exception(4u));
  *exception = ((uint32_t)(uintptr_t)&off_20ABA48);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_8b32da1110,
    (void (*)(void *))g4_dtor_thunk<std::bad_exception>);
}

// ----------------------------------------------------------------------------
// Function: sub_18FFEE0  (binary VA: 0x18ffee0)
// Original: sub_18FFEE0
// ----------------------------------------------------------------------------
void sub_18FFEE0()
{
  uint32_t *exception;

  exception = (uint32_t *)(_cxa_allocate_exception(4u));
  *exception = ((uint32_t)(uintptr_t)&off_20AB980);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_0099e892b2, (void (*)(void *))g4_dtor_thunk<std::bad_alloc>);
}


// ============================================================================
// Address:   0x18fff30 (size: 70 bytes)
// Symbol:    sub_18FFF30
// Demangled: sub_18FFF30
// ============================================================================
void __noreturn sub_18FFF30()
{
  uint32_t *exception;

  exception = (uint32_t *)(_cxa_allocate_exception(4u));
  *exception = ((uint32_t)(uintptr_t)&off_20AB9A0);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_6c89069634, (void (*)(void *))g4_std::bad_cast::Destroy);
}

// ----------------------------------------------------------------------------
// Function: sub_18FFF80  (binary VA: 0x18fff80)
// Original: sub_18FFF80
// ----------------------------------------------------------------------------
void sub_18FFF80()
{
  uint32_t *exception;

  exception = (uint32_t *)(_cxa_allocate_exception(4u));
  *exception = ((uint32_t)(uintptr_t)&off_20AB9C0);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_d3c50a7471, (void (*)(void *))g4_dtor_thunk<std::bad_typeid>);
}


// ============================================================================
// Address:   0x18fffd0 (size: 144 bytes)
// Symbol:    sub_18FFFD0
// Demangled: sub_18FFFD0
// ============================================================================
void __noreturn sub_18FFFD0(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_1904180(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_500291d7af, (void (*)(void *))sub_1903F50);
}

// ----------------------------------------------------------------------------
// Function: sub_1900060  (binary VA: 0x1900060)
// Original: sub_1900060
// ----------------------------------------------------------------------------
void sub_1900060(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_19041E0(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_b634991938, (void (*)(void *))sub_19040E0);
}


// ============================================================================
// Address:   0x19000f0 (size: 144 bytes)
// Symbol:    sub_19000F0
// Demangled: sub_19000F0
// ============================================================================
void __noreturn sub_19000F0(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_1904220(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_8fb72ec4b7, (void (*)(void *))sub_1904080);
}

// ----------------------------------------------------------------------------
// Function: sub_1900180  (binary VA: 0x1900180)
// Original: sub_1900180
// ----------------------------------------------------------------------------
void sub_1900180(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_1904260(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_dc595ee538, (void (*)(void *))sub_1904020);
}


// ============================================================================
// Address:   0x1900210 (size: 144 bytes)
// Symbol:    sub_1900210
// Demangled: sub_1900210
// ============================================================================
void __noreturn sub_1900210(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_19042A0(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_39729006d5, (void (*)(void *))sub_1903FC0);
}

// ----------------------------------------------------------------------------
// Function: sub_19002A0  (binary VA: 0x19002a0)
// Original: sub_19002A0
// ----------------------------------------------------------------------------
void sub_19002A0(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_19042E0(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_187fac61d0, (void (*)(void *))sub_1903D80);
}


// ============================================================================
// Address:   0x1900330 (size: 144 bytes)
// Symbol:    sub_1900330
// Demangled: sub_1900330
// ============================================================================
void __noreturn sub_1900330(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_1904340(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_f31b44d391, (void (*)(void *))sub_1903EB0);
}

// ----------------------------------------------------------------------------
// Function: sub_19003C0  (binary VA: 0x19003c0)
// Original: sub_19003C0
// ----------------------------------------------------------------------------
void sub_19003C0(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_1904380(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_93f23df5a9, (void (*)(void *))sub_1903E50);
}


// ============================================================================
// Address:   0x1900450 (size: 144 bytes)
// Symbol:    sub_1900450
// Demangled: sub_1900450
// ============================================================================
void __noreturn sub_1900450(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_19043C0(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_e7350caea2, (void (*)(void *))sub_1903DF0);
}

// ----------------------------------------------------------------------------
// Function: sub_19004E0  (binary VA: 0x19004e0)
// Original: sub_19004E0
// ----------------------------------------------------------------------------
void sub_19004E0(char *a1)
{
  void *exception;
  int v2[7];

  exception = _cxa_allocate_exception(8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v2) + 1, a1, (int)(uintptr_t)(v2));
  sub_1900D00(exception, (char *)v2 + 1);
  g4_std::string::Destroy((char *)v2 + 1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_0ce70bf960, (void (*)(void *))sub_1900C50);
}


// ============================================================================
// Address:   0x1900560 (size: 179 bytes)
// Symbol:    sub_1900560
// Demangled: sub_1900560
// ============================================================================
void __noreturn sub_1900560(int a1)
{
  uint32_t *exception;
  typedef int _g4_t_v2;
  typedef uint8_t _g4_t_v3[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v2)) > _g4_s0 ? (4u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v3)) > _g4_s1 ? (20u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 20u);

  exception = (uint32_t *)(_cxa_allocate_exception(0x10u));
  v2 = sub_1904730();
  (*(void (**)(uint8_t *, int, int))(*(uint32_t *)v2 + 12))(v3, v2, a1);
  sub_19042E0(exception, v3);
  g4_std::string::Destroy(v3);
  *exception = ((uint32_t)(uintptr_t)&off_20A9B50);
  exception[2] = a1;
  exception[3] = v2;
  _cxa_throw(exception, (type_info *)&g4_typeinfo_9789677335, (void (*)(void *))sub_1904680);
}

// ----------------------------------------------------------------------------
// Function: sub_1900620  (binary VA: 0x1900620)
// Original: sub_1900620
// ----------------------------------------------------------------------------
void sub_1900620(int a1)
{
  uint32_t *exception;
  typedef int _g4_t_v2;
  typedef int _g4_t_v3[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v2)) > _g4_s0 ? (4u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v3)) > _g4_s1 ? (19u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 19u);

  exception = (uint32_t *)(_cxa_allocate_exception(0x10u));
  v2 = sub_19069E0();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v3) + 1, "std::future_error", (int)(uintptr_t)(v3));
  sub_1904180(exception, (char *)v3 + 1);
  g4_std::string::Destroy((char *)v3 + 1);
  *exception = ((uint32_t)(uintptr_t)&off_20A9C10);
  exception[2] = a1;
  exception[3] = v2;
  _cxa_throw(exception, (type_info *)&g4_typeinfo_0cbab4c4d2, (void (*)(void *))sub_1906740);
}


// ============================================================================
// Address:   0x19006e0 (size: 70 bytes)
// Symbol:    sub_19006E0
// Demangled: sub_19006E0
// ============================================================================
void __noreturn sub_19006E0()
{
  uint32_t *exception;

  exception = (uint32_t *)(_cxa_allocate_exception(4u));
  *exception = ((uint32_t)(uintptr_t)&off_20A9880);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_4899c72f1e, (void (*)(void *))sub_19007A0);
}

// ----------------------------------------------------------------------------
// Function: sub_1900730  (binary VA: 0x1900730)
// Original: sub_1900730
// ----------------------------------------------------------------------------
void sub_1900730(int a1)
{
  void *exception;

  exception = _cxa_allocate_exception(0xCu);
  sub_1906670(exception, a1);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_188b3f5a87, (void (*)(void *))sub_1906600);
}


// ============================================================================
// Address:   0x19007a0 (size: 42 bytes)
// Symbol:    sub_19007A0
// Demangled: sub_19007A0
// ============================================================================
void sub_19007A0(std::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9880);
  g4_noop_dtor(a1);
}


// ============================================================================
// Address:   0x19007d0 (size: 56 bytes)
// Symbol:    sub_19007D0
// Demangled: sub_19007D0
// ============================================================================
void sub_19007D0(std::exception *a1)
{
  sub_19007A0(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1900810 (size: 144 bytes)
// Symbol:    sub_1900810
// Demangled: sub_1900810
// ============================================================================
int sub_1900810(uint32_t *a1)
{
  uint32_t *v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20A98A0);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  v1 = a1 + 9;
  do
  {
    *v1 = 0;
    v1[1] = 0;
    v1 += 2;
  }
  while ( v1 != a1 + 25 );
  a1[26] = (uint32_t)(uintptr_t)(a1 + 9);
  a1[25] = 8;
  return sub_1903A70(a1 + 27);
}


// ============================================================================
// Address:   0x19008a0 (size: 28 bytes)
// Symbol:    sub_19008A0
// Demangled: sub_19008A0
// ============================================================================
int32_t sub_19008A0()
{
  return __sync_fetch_and_add(&dword_213A8B4, 1u) + 4;
}


// ============================================================================
// Address:   0x19008c0 (size: 81 bytes)
// Symbol:    sub_19008C0
// Demangled: sub_19008C0
// ============================================================================
uint32_t *sub_19008C0(int a1, int a2, int a3)
{
  uint32_t *result;
  int v4;

  result = (uint32_t *)operator new(0x10u);
  v4 = *(uint32_t *)(a1 + 24);
  result[3] = 0;
  *result = v4;
  result[1] = a2;
  result[2] = a3;
  *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(result);
  return result;
}


// ============================================================================
// Address:   0x1900920 (size: 418 bytes)
// Symbol:    sub_1900920
// Demangled: sub_1900920
// ============================================================================
uint32_t *sub_1900920(int a1, int a2, char a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int i;
  int v9;
  int v10;
  uint32_t *v11;
  int v13;
  bool v14;
  int v15;

  v3 = (uint32_t *)(a1 + 36);
  v15 = 8;
  if ( a2 <= 7 )
  {
LABEL_12:
    *(uint32_t *)(a1 + 104) = (uint32_t)(uintptr_t)(v3);
    *(uint32_t *)(a1 + 100) = v15;
    return &v3[2 * a2];
  }
  if ( a2 != 0x7FFFFFFF )
  {
    v15 = a2 + 1;
    v4 = (uint32_t *)operator new[](8 * (a2 + 1));
    v5 = v4;
    v6 = a2;
    do
    {
      --v6;
      *v4 = 0;
      v4[1] = 0;
      v4 += 2;
    }
    while ( v6 != -1 );
    v7 = *(uint32_t *)(a1 + 100);
    if ( v7 > 0 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = *(uint32_t *)(a1 + 104);
        v10 = *(uint32_t *)(v9 + 8 * i + 4);
        v5[2 * i] = *(uint32_t *)(v9 + 8 * i);
        v5[2 * i + 1] = v10;
      }
      v3 = (uint32_t *)(a1 + 36);
    }
    v11 = *(uint32_t **)(a1 + 104);
    if ( v11 == nullptr || v3 == v11 )
    {
      v3 = v5;
    }
    else
    {
      v3 = v5;
      operator delete[](*(void **)(a1 + 104));
    }
    goto LABEL_12;
  }
  v13 = *(uint32_t *)(a1 + 20) | 1;
  v14 = (v13 & *(uint32_t *)(a1 + 16)) == 0;
  *(uint32_t *)(a1 + 20) = v13;
  if ( !v14 )
    sub_19004E0("ios_base::_M_grow_words is not valid");
  if ( a3 != 0 )
    *(uint32_t *)(a1 + 32) = 0;
  else
    *(uint32_t *)(a1 + 28) = 0;
  return (uint32_t *)(a1 + 28);
}


// ============================================================================
// Address:   0x1900ad0 (size: 106 bytes)
// Symbol:    sub_1900AD0
// Demangled: sub_1900AD0
// ============================================================================
void sub_1900AD0(int a1, int a2)
{
  int **i;

  for ( i = *(int ***)(a1 + 24); i != nullptr; i = (int **)*i )
    ((void (*)(int, int, int *))i[1])(a2, a1, i[2]);
}


// ============================================================================
// Address:   0x1900b40 (size: 79 bytes)
// Symbol:    sub_1900B40
// Demangled: sub_1900B40
// ============================================================================
void sub_1900B40(int a1)
{
  volatile int32_t *v1;
  volatile int32_t *v2;

  v1 = *(volatile int32_t **)(a1 + 24);
  if ( v1 != nullptr )
  {
    while ( __sync_fetch_and_add(v1 + 3, 0xFFFFFFFF) == 0 )
    {
      v2 = (volatile int32_t *)*v1;
      operator delete((void *)v1);
      if ( v2 == nullptr )
        break;
      v1 = v2;
    }
  }
  *(uint32_t *)(a1 + 24) = 0;
}


// ============================================================================
// Address:   0x1900b90 (size: 112 bytes)
// Symbol:    sub_1900B90
// Demangled: sub_1900B90
// ============================================================================
int sub_1900B90(uint32_t *a1)
{
  uint32_t *v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20A98A0);
  sub_1900AD0((int)(uintptr_t)(a1), 0);
  sub_1900B40((int)(uintptr_t)(a1));
  v1 = (uint32_t *)a1[26];
  if ( v1 != a1 + 9 )
  {
    if ( v1 != nullptr )
      operator delete[](v1);
    a1[26] = 0;
  }
  return sub_1902180(a1 + 27);
}


// ============================================================================
// Address:   0x1900c00 (size: 56 bytes)
// Symbol:    sub_1900C00
// Demangled: sub_1900C00
// ============================================================================
void sub_1900C00(uint32_t *a1)
{
  sub_1900B90(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1900c40 (size: 12 bytes)
// Symbol:    sub_1900C40
// Demangled: sub_1900C40
// ============================================================================
int sub_1900C40(int a1)
{
  return *(uint32_t *)(a1 + 4);
}


// ============================================================================
// Address:   0x1900c50 (size: 100 bytes)
// Symbol:    sub_1900C50
// Demangled: sub_1900C50
// ============================================================================
void sub_1900C50(std::exception *a1)
{
  int v1;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A98B0);
  v1 = *((uint32_t *)a1 + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v1 - 12));
  }
  g4_noop_dtor(a1);
}


// ============================================================================
// Address:   0x1900cc0 (size: 56 bytes)
// Symbol:    sub_1900CC0
// Demangled: sub_1900CC0
// ============================================================================
void sub_1900CC0(std::exception *a1)
{
  sub_1900C50(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1900d00 (size: 109 bytes)
// Symbol:    sub_1900D00
// Demangled: sub_1900D00
// ============================================================================
int sub_1900D00(uint32_t *a1, int a2)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A98B0);
  return g4_std_compat::string_construct_copy(a1 + 1, a2);
}


// ============================================================================
// Address:   0x1900d70 (size: 1876 bytes)
// Symbol:    sub_1900D70
// Demangled: sub_1900D70
// ============================================================================
int32_t sub_1900D70()
{
  int32_t result;

  result = __sync_fetch_and_add(&dword_213A8B0, 1u);
  if ( result == 0 )
  {
    *(uintptr_t *)(unk_20CB474) = (uintptr_t)(1);
    dword_213A380[1] = 0;
    dword_213A380[2] = 0;
    dword_213A380[3] = 0;
    dword_213A380[4] = 0;
    dword_213A380[5] = 0;
    dword_213A380[6] = 0;
    dword_213A380[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(&dword_213A380[7]);
    dword_213A380[0] = (uint32_t)(uintptr_t)(&off_20AAC08);
    dword_213A380[9] = -1;
    dword_213A380[8] = (uint32_t)(uintptr_t)(((char *)stdout));
    dword_213A340[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    dword_213A340[1] = 0;
    dword_213A340[2] = 0;
    dword_213A340[3] = 0;
    dword_213A340[4] = 0;
    dword_213A340[5] = 0;
    dword_213A340[6] = 0;
    sub_1903A70(&dword_213A340[7]);
    dword_213A340[0] = (uint32_t)(uintptr_t)(&off_20AAC08);
    dword_213A340[8] = (uint32_t)(uintptr_t)(stdin);
    dword_213A340[9] = -1;
    dword_213A300[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    dword_213A300[1] = 0;
    dword_213A300[2] = 0;
    dword_213A300[3] = 0;
    dword_213A300[4] = 0;
    dword_213A300[5] = 0;
    dword_213A300[6] = 0;
    sub_1903A70(&dword_213A300[7]);
    dword_213A300[9] = -1;
    dword_213A300[0] = (uint32_t)(uintptr_t)(&off_20AAC08);
    dword_213A300[8] = (uint32_t)(uintptr_t)(((char *)stderr));
    sub_1900810(&dword_213A780[1]);
    LOBYTE(dword_213A780[30]) = 0;
    dword_213A780[29] = 0;
    BYTE1(dword_213A780[30]) = 0;
    dword_213A780[31] = 0;
    dword_213A780[32] = 0;
    dword_213A780[33] = 0;
    dword_213A780[34] = 0;
    dword_213A780[0] = (uint32_t)(uintptr_t)(&off_20AACCC);
    dword_213A780[1] = (uint32_t)(uintptr_t)(&off_20AACE0);
    sub_19119D0(&dword_213A780[1], dword_213A380);
    sub_1900810(dword_213A828);
    LOBYTE(dword_213A828[29]) = 0;
    dword_213A828[28] = 0;
    BYTE1(dword_213A828[29]) = 0;
    dword_213A828[30] = 0;
    dword_213A828[31] = 0;
    dword_213A828[32] = 0;
    dword_213A828[33] = 0;
    *(uintptr_t *)(unk_213A820) = (uintptr_t)(&off_20AA52C);
    dword_213A828[0] = (uint32_t)(uintptr_t)(&off_20AA540);
    *(uintptr_t *)(unk_213A824) = (uintptr_t)(0);
    sub_19119D0(dword_213A828, dword_213A340);
    sub_1900810(dword_213A6E4);
    LOBYTE(dword_213A6E4[29]) = 0;
    dword_213A6E4[28] = 0;
    BYTE1(dword_213A6E4[29]) = 0;
    dword_213A6E4[30] = 0;
    dword_213A6E4[31] = 0;
    dword_213A6E4[32] = 0;
    dword_213A6E4[33] = 0;
    *(uintptr_t *)(unk_213A6E0) = (uintptr_t)(&off_20AACCC);
    dword_213A6E4[0] = (uint32_t)(uintptr_t)(&off_20AACE0);
    sub_19119D0(dword_213A6E4, dword_213A300);
    sub_1900810(dword_213A644);
    LOBYTE(dword_213A644[29]) = 0;
    dword_213A644[28] = 0;
    BYTE1(dword_213A644[29]) = 0;
    dword_213A644[30] = 0;
    dword_213A644[31] = 0;
    dword_213A644[32] = 0;
    dword_213A644[33] = 0;
    *(uintptr_t *)(unk_213A640) = (uintptr_t)(&off_20AACCC);
    dword_213A644[0] = (uint32_t)(uintptr_t)(&off_20AACE0);
    sub_19119D0(dword_213A644, dword_213A300);
    dword_213A828[28] = (uint32_t)(uintptr_t)(dword_213A780);
    dword_213A6E4[28] = (uint32_t)(uintptr_t)(dword_213A780);
    dword_213A6E4[3] |= 0x2000u;
    dword_213A140[1] = 0;
    dword_213A140[0] = (uint32_t)(uintptr_t)(&off_20AB308);
    dword_213A140[2] = 0;
    dword_213A140[3] = 0;
    dword_213A140[4] = 0;
    dword_213A140[5] = 0;
    dword_213A140[6] = 0;
    sub_1903A70(&dword_213A140[7]);
    dword_213A140[0] = (uint32_t)(uintptr_t)(&off_20AAC48);
    dword_213A140[9] = -1;
    dword_213A140[8] = (uint32_t)(uintptr_t)(((char *)stdout));
    dword_213A100[0] = (uint32_t)(uintptr_t)(&off_20AB308);
    dword_213A100[1] = 0;
    dword_213A100[2] = 0;
    dword_213A100[3] = 0;
    dword_213A100[4] = 0;
    dword_213A100[5] = 0;
    dword_213A100[6] = 0;
    sub_1903A70(&dword_213A100[7]);
    dword_213A100[0] = (uint32_t)(uintptr_t)(&off_20AAC48);
    dword_213A100[8] = (uint32_t)(uintptr_t)(stdin);
    dword_213A100[9] = -1;
    dword_213A0C0[0] = (uint32_t)(uintptr_t)(&off_20AB308);
    dword_213A0C0[1] = 0;
    dword_213A0C0[2] = 0;
    dword_213A0C0[3] = 0;
    dword_213A0C0[4] = 0;
    dword_213A0C0[5] = 0;
    dword_213A0C0[6] = 0;
    sub_1903A70(&dword_213A0C0[7]);
    dword_213A0C0[9] = -1;
    dword_213A0C0[0] = (uint32_t)(uintptr_t)(&off_20AAC48);
    dword_213A0C0[8] = (uint32_t)(uintptr_t)(((char *)stderr));
    sub_1900810(&dword_213A500[1]);
    dword_213A500[29] = 0;
    dword_213A500[30] = 0;
    LOBYTE(dword_213A500[31]) = 0;
    dword_213A500[32] = 0;
    dword_213A500[33] = 0;
    dword_213A500[34] = 0;
    dword_213A500[35] = 0;
    dword_213A500[0] = (uint32_t)(uintptr_t)(&off_20AAD0C);
    dword_213A500[1] = (uint32_t)(uintptr_t)(&off_20AAD20);
    sub_1912230(&dword_213A500[1], dword_213A140);
    sub_1900810(dword_213A5A8);
    dword_213A5A8[28] = 0;
    dword_213A5A8[29] = 0;
    LOBYTE(dword_213A5A8[30]) = 0;
    dword_213A5A8[31] = 0;
    dword_213A5A8[32] = 0;
    dword_213A5A8[33] = 0;
    dword_213A5A8[34] = 0;
    *(uintptr_t *)(unk_213A5A0) = (uintptr_t)(&off_20AA56C);
    dword_213A5A8[0] = (uint32_t)(uintptr_t)(&off_20AA580);
    *(uintptr_t *)(unk_213A5A4) = (uintptr_t)(0);
    sub_1912230(dword_213A5A8, dword_213A100);
    sub_1900810(dword_213A464);
    dword_213A464[28] = 0;
    dword_213A464[29] = 0;
    LOBYTE(dword_213A464[30]) = 0;
    dword_213A464[31] = 0;
    dword_213A464[32] = 0;
    dword_213A464[33] = 0;
    dword_213A464[34] = 0;
    *(uintptr_t *)(unk_213A460) = (uintptr_t)(&off_20AAD0C);
    dword_213A464[0] = (uint32_t)(uintptr_t)(&off_20AAD20);
    sub_1912230(dword_213A464, dword_213A0C0);
    sub_1900810(dword_213A3C4);
    dword_213A3C4[28] = 0;
    dword_213A3C4[29] = 0;
    LOBYTE(dword_213A3C4[30]) = 0;
    dword_213A3C4[31] = 0;
    dword_213A3C4[32] = 0;
    dword_213A3C4[33] = 0;
    dword_213A3C4[34] = 0;
    *(uintptr_t *)(unk_213A3C0) = (uintptr_t)(&off_20AAD0C);
    dword_213A3C4[0] = (uint32_t)(uintptr_t)(&off_20AAD20);
    result = sub_1912230(dword_213A3C4, dword_213A0C0);
    dword_213A464[3] |= 0x2000u;
    dword_213A464[28] = (uint32_t)(uintptr_t)(dword_213A500);
    dword_213A5A8[28] = (uint32_t)(uintptr_t)(dword_213A500);
    __sync_add_and_fetch(&dword_213A8B0, 1u);
  }
  return result;
}


// ============================================================================
// Address:   0x19014d0 (size: 153 bytes)
// Symbol:    sub_19014D0
// Demangled: sub_19014D0
// ============================================================================
int32_t *sub_19014D0()
{
  int32_t *result;

  result = (int32_t *)(&dword_213A8B0);
  if ( __sync_fetch_and_add(&dword_213A8B0, 0xFFFFFFFF) == 2 )
  {
    g4_std_compat::ostream_flush(dword_213A780);
    g4_std_compat::ostream_flush(&unk_213A6E0);
    g4_std_compat::ostream_flush(&unk_213A640);
    sub_192EAA0(dword_213A500);
    sub_192EAA0(&unk_213A460);
    return (int32_t *)sub_192EAA0(&unk_213A3C0);
  }
  return result;
}


// ============================================================================
// Address:   0x1901570 (size: 680 bytes)
// Symbol:    sub_1901570
// Demangled: sub_1901570
// ============================================================================
int sub_1901570(char a1)
{
  int v1;

  v1 = byte_20CB474[0];
  if ( a1 == 0 && byte_20CB474[0] != 0 )
  {
    sub_1900D70();
    byte_20CB474[0] = 0;
    dword_213A380[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(&dword_213A380[7]);
    dword_213A340[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(&dword_213A340[7]);
    dword_213A300[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(&dword_213A300[7]);
    dword_213A140[0] = (uint32_t)(uintptr_t)(&off_20AB308);
    sub_1902180(&dword_213A140[7]);
    dword_213A100[0] = (uint32_t)(uintptr_t)(&off_20AB308);
    sub_1902180(&dword_213A100[7]);
    dword_213A0C0[0] = (uint32_t)(uintptr_t)(&off_20AB308);
    sub_1902180(&dword_213A0C0[7]);
    sub_1908BB0(&unk_213A280, ((char *)stdout), 16, 1024);
    sub_1908BB0(&unk_213A200, stdin, 8, 1024);
    sub_1908BB0(&unk_213A180, ((char *)stderr), 16, 1024);
    sub_1911670(&dword_213A780[1], &unk_213A280);
    sub_1911670(dword_213A828, &unk_213A200);
    sub_1911670(dword_213A6E4, &unk_213A180);
    sub_1911670(dword_213A644, &unk_213A180);
    sub_1908E50(&unk_213A040, ((char *)stdout), 16, 1024);
    sub_1908E50(&unk_2139FC0, stdin, 8, 1024);
    sub_1908E50(&unk_2139F40, ((char *)stderr), 16, 1024);
    sub_1911F80(&dword_213A500[1], &unk_213A040);
    sub_1911F80(dword_213A5A8, &unk_2139FC0);
    sub_1911F80(dword_213A464, &unk_2139F40);
    sub_1911F80(dword_213A3C4, &unk_2139F40);
    sub_19014D0();
  }
  return v1;
}


// ============================================================================
// Address:   0x1901820 (size: 116 bytes)
// Symbol:    sub_1901820
// Demangled: sub_1901820
// ============================================================================
uint32_t *sub_1901820(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = a2;
  v3 = (uint32_t *)*a1;
  if ( (uint32_t *)*a1 == a1 )
  {
    v8 = *a2;
    if ( (uint32_t *)*a2 != a2 )
    {
      v9 = (uint32_t *)a2[1];
      *v3 = v8;
      v3[1] = (uint32_t)(uintptr_t)(v9);
      *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v3);
      a2[1] = (uint32_t)(uintptr_t)(a2);
      *v9 = (uint32_t)(uintptr_t)(v3);
      *a2 = (uint32_t)(uintptr_t)(a2);
    }
  }
  else
  {
    v4 = (uint32_t *)*a2;
    if ( (uint32_t *)*a2 == a2 )
    {
      result = (uint32_t *)a1[1];
      *v4 = (uint32_t)(uintptr_t)(v3);
      v4[1] = (uint32_t)(uintptr_t)(result);
      v3[1] = (uint32_t)(uintptr_t)(v4);
      a1[1] = (uint32_t)(uintptr_t)(a1);
      *result = (uint32_t)(uintptr_t)(v4);
      *a1 = (uint32_t)(uintptr_t)(a1);
    }
    else
    {
      *a1 = (uint32_t)(uintptr_t)(v4);
      *a2 = (uint32_t)(uintptr_t)(v3);
      v5 = a1[1];
      a1[1] = a2[1];
      a2[1] = v5;
      v6 = (uint32_t *)a1[1];
      *(uint32_t *)(*a1 + 4) = (uint32_t)(uintptr_t)(a1);
      *v6 = (uint32_t)(uintptr_t)(a1);
      v7 = *a2;
      *(uint32_t *)a2[1] = (uint32_t)(uintptr_t)(a2);
      *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(a2);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x19018a0 (size: 66 bytes)
// Symbol:    sub_19018A0
// Demangled: sub_19018A0
// ============================================================================
int sub_19018A0(int a1, int a2, int a3)
{
  int result;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  result = a3;
  if ( a1 != a3 )
  {
    v4 = *(uint32_t **)(a2 + 4);
    v5 = *(uint32_t **)(a3 + 4);
    *v5 = a1;
    *v4 = a3;
    v6 = *(uint32_t **)(a1 + 4);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v5);
    *(uint32_t *)(a3 + 4) = *(uint32_t *)(a2 + 4);
    *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v6);
    *v6 = a2;
  }
  return result;
}


// ============================================================================
// Address:   0x1901920 (size: 25 bytes)
// Symbol:    sub_1901920
// Demangled: sub_1901920
// ============================================================================
int sub_1901920(uint32_t *a1, int a2)
{
  int v3;
  uint32_t *v4;

  v3 = *(uint32_t *)(a2 + 4);
  *a1 = a2;
  a1[1] = v3;
  v4 = *(uint32_t **)(a2 + 4);
  *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(a1);
  *v4 = (uint32_t)(uintptr_t)(a1);
  return a2;
}


// ============================================================================
// Address:   0x1901940 (size: 15 bytes)
// Symbol:    sub_1901940
// Demangled: sub_1901940
// ============================================================================
int sub_1901940(int *a1)
{
  int result;
  uint32_t *v2;

  result = *a1;
  v2 = (uint32_t *)a1[1];
  *(uint32_t *)(result + 4) = (uint32_t)(uintptr_t)(v2);
  *v2 = result;
  return result;
}


// ============================================================================
// Address:   0x1901950 (size: 22 bytes)
// Symbol:    sub_1901950
// Demangled: sub_1901950
// ============================================================================
const char *sub_1901950()
{
  return "__gnu_cxx::__concurrence_lock_error";
}


// ============================================================================
// Address:   0x1901970 (size: 22 bytes)
// Symbol:    sub_1901970
// Demangled: sub_1901970
// ============================================================================
const char *sub_1901970()
{
  return "__gnu_cxx::__concurrence_unlock_error";
}


// ============================================================================
// Address:   0x1901990 (size: 24 bytes)
// Symbol:    sub_1901990
// Demangled: sub_1901990
// ============================================================================
uint32_t *sub_1901990(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A98D0);
  return a1;
}


// ============================================================================
// Address:   0x19019b0 (size: 42 bytes)
// Symbol:    sub_19019B0
// Demangled: sub_19019B0
// ============================================================================
void sub_19019B0(std::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A98E0);
  g4_noop_dtor(a1);
}


// ============================================================================
// Address:   0x19019e0 (size: 42 bytes)
// Symbol:    sub_19019E0
// Demangled: sub_19019E0
// ============================================================================
void sub_19019E0(std::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9900);
  g4_noop_dtor(a1);
}


// ============================================================================
// Address:   0x1901a10 (size: 42 bytes)
// Symbol:    sub_1901A10
// Demangled: sub_1901A10
// ============================================================================
void sub_1901A10(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A98D0);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1901a40 (size: 64 bytes)
// Symbol:    sub_1901A40
// Demangled: sub_1901A40
// ============================================================================
void sub_1901A40(std::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A98E0);
  g4_noop_dtor(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1901a80 (size: 64 bytes)
// Symbol:    sub_1901A80
// Demangled: sub_1901A80
// ============================================================================
void sub_1901A80(std::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9900);
  g4_noop_dtor(a1);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1901ac0 (size: 17 bytes)
// Symbol:    sub_1901AC0
// Demangled: sub_1901AC0
// ============================================================================
volatile int32_t *sub_1901AC0(volatile int32_t **a1, volatile int32_t **a2)
{
  volatile int32_t *result;

  result = *a2;
  *a1 = *a2;
  __sync_add_and_fetch(result, 1u);
  return result;
}


// ============================================================================
// Address:   0x1901ae0 (size: 13 bytes)
// Symbol:    sub_1901AE0
// Demangled: sub_1901AE0
// ============================================================================
uint32_t *sub_1901AE0(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}


// ============================================================================
// Address:   0x1901af0 (size: 670 bytes)
// Symbol:    sub_1901AF0
// Demangled: sub_1901AF0
// ============================================================================
int sub_1901AF0(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  const char *s1;
  int v6;
  const char *s2;
  void *v8;
  size_t v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  size_t v15;
  int i;
  char *v17;
  size_t v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char *v23;
  size_t v24;
  int v25;
  int v26;
  int v27;
  int v28;
  size_t v29;
  char *s;
  char *sa;

  v2 = (int)(uintptr_t)(a1);
  *a1 = (int)(uintptr_t)(&dword_213B814);
  v3 = *(uint32_t *)(*(uint32_t *)a2 + 16);
  s = *(char **)v3;
  if ( *(uint32_t *)v3 != 0 )
  {
    v4 = 0;
    s1 = *(const char **)v3;
    if ( *(uint32_t *)(v3 + 4) != 0 )
    {
      v6 = *(uint32_t *)(*(uint32_t *)a2 + 16);
      while ( 1 )
      {
        ++v4;
        s2 = *(const char **)(v6 + 4 * v4);
        if ( strcmp(s1, s2) != 0 )
          break;
        if ( v4 == 5 )
        {
          v2 = (int)(uintptr_t)(a1);
          goto LABEL_24;
        }
        s1 = s2;
      }
      v2 = (int)(uintptr_t)(a1);
      sub_1939B80(a1, 128);
      sa = (char *)(uintptr_t)(off_203E2B0[0]);
      v8 = *(void **)off_203E2B0[0];
      v9 = strlen(*(const char **)off_203E2B0[0]);
      g4_std::string::append((int)(uintptr_t)(a1), v8, v9);
      v10 = *a1;
      v11 = *(uint32_t *)(*a1 - 12);
      v12 = v11 + 1;
      if ( (unsigned int)(v11 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v10 - 4) > 0 )
      {
        sub_1939B80(a1, v11 + 1);
        v10 = *a1;
        v11 = *(uint32_t *)(*a1 - 12);
      }
      *(uint8_t *)(v10 + v11) = 61;
      v13 = *a1;
      if ( (uint32_t *)(*a1 - 12) != dword_213B808 )
      {
        *(uint32_t *)(v13 - 4) = 0;
        *(uint32_t *)(v13 - 12) = v12;
        *(uint8_t *)(v13 + v12) = 0;
      }
      v14 = **(char ***)(*(uint32_t *)a2 + 16);
      v15 = strlen(v14);
      g4_std::string::append((int)(uintptr_t)(a1), v14, v15);
      for ( i = 4; i != 24; i += 4 )
      {
        v25 = *a1;
        v26 = *(uint32_t *)(*a1 - 12);
        v27 = v26 + 1;
        if ( (unsigned int)(v26 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v25 - 4) > 0 )
        {
          sub_1939B80(a1, v26 + 1);
          v25 = *a1;
          v26 = *(uint32_t *)(*a1 - 12);
        }
        *(uint8_t *)(v25 + v26) = 59;
        v28 = *a1;
        if ( (uint32_t *)(*a1 - 12) != dword_213B808 )
        {
          *(uint32_t *)(v28 - 4) = 0;
          *(uint32_t *)(v28 - 12) = v27;
          *(uint8_t *)(v28 + v27) = 0;
        }
        v17 = *(char **)&sa[i];
        v18 = strlen(v17);
        g4_std::string::append((int)(uintptr_t)(a1), v17, v18);
        v19 = *a1;
        v20 = *(uint32_t *)(*a1 - 12);
        v21 = v20 + 1;
        if ( (unsigned int)(v20 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v19 - 4) > 0 )
        {
          sub_1939B80(a1, v20 + 1);
          v19 = *a1;
          v20 = *(uint32_t *)(*a1 - 12);
        }
        *(uint8_t *)(v19 + v20) = 61;
        v22 = *a1;
        if ( (uint32_t *)(*a1 - 12) != dword_213B808 )
        {
          *(uint32_t *)(v22 - 4) = 0;
          *(uint32_t *)(v22 - 12) = v21;
          *(uint8_t *)(v22 + v21) = 0;
        }
        v23 = *(char **)(*(uint32_t *)(*(uint32_t *)a2 + 16) + i);
        v24 = strlen(v23);
        g4_std::string::append((int)(uintptr_t)(a1), v23, v24);
      }
    }
    else
    {
LABEL_24:
      v29 = strlen(s);
      g4_std_compat::string_assign(v2, s, v29);
    }
  }
  else
  {
    sub_1939050((int)(uintptr_t)(a1), 0, dword_213B808[0], 1u, 42);
  }
  return v2;
}


// ============================================================================
// Address:   0x1901d90 (size: 385 bytes)
// Symbol:    sub_1901D90
// Demangled: sub_1901D90
// ============================================================================
bool sub_1901D90(int a1, int a2)
{
  int v2;
  const char **v3;
  bool result;
  volatile int32_t *v5;
  volatile int32_t *v6;
  typedef int _g4_t_v7;
  typedef bool _g4_t_v8;
  typedef bool _g4_t_v9;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_s2;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_s1)) > _g4_s3 ? (24u + sizeof(_g4_t_s1)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_s2)) > _g4_s4 ? (28u + sizeof(_g4_t_s2)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 28u);

  if ( *(uint32_t *)a1 == *(uint32_t *)a2 )
    return true;
  v2 = *(uint32_t *)(*(uint32_t *)a1 + 16);
  if ( *(uint32_t *)v2 == 0 )
    return false;
  v3 = *(const char ***)(*(uint32_t *)a2 + 16);
  if ( *v3 == nullptr )
    return false;
  v7 = *(uint32_t *)(*(uint32_t *)a2 + 16);
  if ( strcmp(*(const char **)v2, *v3) != 0 )
    return false;
  if ( *(uint32_t *)(v2 + 4) == 0 && *(uint32_t *)(v7 + 4) == 0 )
    return true;
  sub_1901AF0((int *)&s2, a2);
  sub_1901AF0((int *)&s1, a1);
  result = false;
  v5 = (volatile int32_t *)s1;
  v6 = (volatile int32_t *)s2;
  if ( *((uint32_t *)s1 - 3) == *((uint32_t *)s2 - 3) )
    result = memcmp(s1, s2, *((uint32_t *)s1 - 3)) == 0;
  if ( v5 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) )
  {
    if ( __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
    {
      v9 = result;
      g4_std_compat::string_rep_destroy((void *)(v5 - 3));
      v6 = (volatile int32_t *)s2;
      result = v9;
    }
    else
    {
      v6 = (volatile int32_t *)s2;
    }
  }
  if ( v6 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v6 - 1, 0xFFFFFFFF) <= 0 )
  {
    v8 = result;
    g4_std_compat::string_rep_destroy((void *)(v6 - 3));
    return v8;
  }
  return result;
}


// ============================================================================
// Address:   0x1901f20 (size: 143 bytes)
// Symbol:    sub_1901F20
// Demangled: sub_1901F20
// ============================================================================
int sub_1901F20(int a1)
{
  int result;

  result = a1;
  if ( a1 == 0 )
    return 0;
  if ( (a1 & 0x3F) == 0 || (a1 & 0xFFFFFFC0) != 0 )
  {
    switch ( a1 )
    {
      case 1:
        result = 2;
        break;
      case 2:
        result = 8;
        break;
      case 3:
        result = 4;
        break;
      case 4:
        result = 16;
        break;
      case 5:
        result = 32;
        break;
      case 6:
        result = 63;
        break;
      default:
        sub_19002A0("locale::_S_normalize_category category not found");
    }
  }
  return result;
}


// ============================================================================
// Address:   0x1901fb0 (size: 54 bytes)
// Symbol:    sub_1901FB0
// Demangled: sub_1901FB0
// ============================================================================
int sub_1901FB0()
{
  return sub_1908800(&dword_213A8C0, "C");
}


// ============================================================================
// Address:   0x1901ff0 (size: 49 bytes)
// Symbol:    sub_1901FF0
// Demangled: sub_1901FF0
// ============================================================================
int sub_1901FF0()
{
  int result;

  result = dword_213A8C0;
  if ( dword_213A8C0 == 0 )
  {
    sub_1901FB0();
    return dword_213A8C0;
  }
  return result;
}


// ============================================================================
// Address:   0x1902030 (size: 22 bytes)
// Symbol:    sub_1902030
// Demangled: sub_1902030
// ============================================================================
const char *sub_1902030()
{
  return "C";
}


// ============================================================================
// Address:   0x1902050 (size: 295 bytes)
// Symbol:    sub_1902050
// Demangled: sub_1902050
// ============================================================================
void sub_1902050(uint32_t *a1)
{
  uint32_t *v1;
  unsigned int v2;
  volatile int32_t *v3;
  uint32_t *v4;
  unsigned int v5;
  volatile int32_t *v6;
  char *v7;
  int i;

  v1 = (uint32_t *)a1[1];
  if ( v1 != nullptr )
  {
    if ( a1[2] == 0 )
      goto LABEL_10;
    v2 = 0;
    do
    {
      v3 = (volatile int32_t *)v1[v2];
      if ( v3 != nullptr )
      {
        if ( __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v3 + 4))(v3);
        v1 = (uint32_t *)a1[1];
      }
      ++v2;
    }
    while ( a1[2] > v2 );
    if ( v1 != nullptr )
LABEL_10:
      operator delete[](v1);
  }
  v4 = (uint32_t *)a1[3];
  if ( v4 != nullptr )
  {
    if ( a1[2] == 0 )
      goto LABEL_20;
    v5 = 0;
    do
    {
      v6 = (volatile int32_t *)v4[v5];
      if ( v6 != nullptr )
      {
        if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v6 + 4))(v6);
        v4 = (uint32_t *)a1[3];
      }
      ++v5;
    }
    while ( a1[2] > v5 );
    if ( v4 != nullptr )
LABEL_20:
      operator delete[](v4);
  }
  v7 = (char *)a1[4];
  if ( v7 != nullptr )
  {
    for ( i = 0; i != 24; i += 4 )
    {
      if ( *(uint32_t *)&v7[i] != 0 )
      {
        operator delete[](*(void **)&v7[i]);
        v7 = (char *)a1[4];
      }
    }
    if ( v7 != nullptr )
      operator delete[](v7);
  }
}


// ============================================================================
// Address:   0x1902180 (size: 89 bytes)
// Symbol:    sub_1902180
// Demangled: sub_1902180
// ============================================================================
void sub_1902180(volatile int32_t **a1)
{
  volatile int32_t *v1;

  v1 = *a1;
  if ( __sync_fetch_and_add(*a1, 0xFFFFFFFF) == 1 && v1 != nullptr )
  {
    sub_1902050(v1);
    operator delete((void *)v1);
  }
}


// ============================================================================
// Address:   0x19021e0 (size: 110 bytes)
// Symbol:    sub_19021E0
// Demangled: sub_19021E0
// ============================================================================
volatile int32_t **sub_19021E0(volatile int32_t **a1, volatile int32_t **a2)
{
  volatile int32_t **result;
  volatile int32_t *v3;

  result = a1;
  __sync_add_and_fetch(*a2, 1u);
  v3 = *a1;
  if ( __sync_fetch_and_add(*a1, 0xFFFFFFFF) == 1 && v3 != nullptr )
  {
    sub_1902050(v3);
    operator delete((void *)v3);
    result = a1;
  }
  *result = *a2;
  return result;
}


// ============================================================================
// Address:   0x1902250 (size: 380 bytes)
// Symbol:    sub_1902250
// Demangled: sub_1902250
// ============================================================================
void *sub_1902250(uint32_t *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int i;
  size_t v15;
  int v16;
  void *v17;
  const void *src;
  void *result;
  size_t n;

  *a1 = a3;
  v3 = a2[2];
  a1[2] = v3;
  a1[1] = 0;
  a1[3] = 0;
  a1[4] = 0;
  v4 = (int)(uintptr_t)(operator new[](4 * v3));
  v5 = a1[2];
  a1[1] = v4;
  if ( v5 != 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      *(uint32_t *)(v4 + 4 * v6) = *(uint32_t *)(a2[1] + 4 * v6);
      v7 = *(uint32_t *)(a1[1] + 4 * v6);
      if ( v7 != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
        v5 = a1[2];
      }
      if ( v5 <= ++v6 )
        break;
      v4 = a1[1];
    }
  }
  v8 = (int)(uintptr_t)(operator new[](4 * v5));
  v9 = a1[2];
  a1[3] = v8;
  if ( v9 != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      *(uint32_t *)(v8 + 4 * v10) = *(uint32_t *)(a2[3] + 4 * v10);
      v11 = *(uint32_t *)(a1[3] + 4 * v10);
      if ( v11 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v11 + 4), 1u);
      if ( a1[2] <= (unsigned int)++v10 )
        break;
      v8 = a1[3];
    }
  }
  v12 = (int)(uintptr_t)(operator new[](0x18u));
  a1[4] = v12;
  v13 = 0;
  while ( 1 )
  {
    *(uint32_t *)(v12 + v13) = 0;
    v13 += 4;
    if ( v13 == 24 )
      break;
    v12 = a1[4];
  }
  for ( i = 0; i != 24; i += 4 )
  {
    result = *(void **)(a2[4] + i);
    if ( result == nullptr )
      break;
    v15 = strlen(*(const char **)(a2[4] + i));
    v16 = a1[4];
    n = v15 + 1;
    *(uint32_t *)(v16 + i) = (uint32_t)(uintptr_t)(operator new[](v15 + 1));
    v17 = *(void **)(a1[4] + i);
    src = *(const void **)(a2[4] + i);
    result = memcpy(v17, src, n);
  }
  return result;
}


// ============================================================================
// Address:   0x19023d0 (size: 379 bytes)
// Symbol:    sub_19023D0
// Demangled: sub_19023D0
// ============================================================================
int sub_19023D0(int a1, volatile int32_t *a2, int a3)
{
  int result;
  uint32_t *v4;
  uint32_t *exception;

  if ( byte_213A8D0 == 0 && _cxa_guard_acquire((__guard *)&byte_213A8D0) != 0 )
  {
    dword_213A8D8 = 0;
    _cxa_guard_release((__guard *)&byte_213A8D0);
  }
  if ( pthread_mutex_lock((pthread_mutex_t *)&dword_213A8D8) != 0 )
  {
    exception = (uint32_t *)(_cxa_allocate_exception(4u));
    *exception = ((uint32_t)(uintptr_t)&off_20A98E0);
    _cxa_throw(
      exception,
      (type_info *)&g4_typeinfo_0648ac1823,
      (void (*)(void *))((void (*)(std::exception *))sub_19019B0));
  }

// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * a3) != 0)
{
    if ( a2 != nullptr )
      G4_VCALL<void>(a2, 4);
  }

  else
  {
    __sync_add_and_fetch(a2 + 1, 1u);
    *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * a3) = (uint32_t)(uintptr_t)(a2);
  }
  result = pthread_mutex_unlock((pthread_mutex_t *)&dword_213A8D8);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (result != 0)
{
    v4 = (uint32_t *)(_cxa_allocate_exception(4u));
    *v4 = ((uint32_t)(uintptr_t)&off_20A9900);
    _cxa_throw(v4, (type_info *)&g4_typeinfo_1137b0f633, (void (*)(void *))((void (*)(std::exception *))sub_19019E0));
  }
  return result;
}


// ============================================================================
// Address:   0x1902550 (size: 40 bytes)
// Symbol:    sub_1902550
// Demangled: sub_1902550
// ============================================================================
int32_t sub_1902550(int32_t *a1)
{
  int32_t v1;

  v1 = *a1;
  if ( *a1 == 0 )
  {
    v1 = __sync_add_and_fetch(&dword_213A8B8, 1);
    *a1 = v1;
  }
  return v1 - 1;
}


// ============================================================================
// Address:   0x1902580 (size: 536 bytes)
// Symbol:    sub_1902580
// Demangled: sub_1902580
// ============================================================================
volatile int32_t *sub_1902580(uint32_t *a1, int32_t *a2, volatile int32_t *a3)
{
  volatile int32_t *result;
  int v4;
  uint32_t v5;
  int i;
  int v7;
  uint32_t v8;
  int j;
  volatile int32_t **v10;
  unsigned int v11;
  uint32_t v12;
  uint32_t v13;
  void *v14;
  void *v15;

  result = a3;
  if ( a3 != nullptr )
  {
    v12 = sub_1902550(a2);
    if ( v12 > a1[2] - 1 )
    {
      v14 = (void *)a1[1];
      v13 = v12 + 4;
      v4 = (int)(uintptr_t)(operator new[](4 * (v12 + 4)));
      v5 = a1[2];
      if ( v5 != 0 )
      {
        for ( i = 0; i != v5; ++i )
          *(uint32_t *)(v4 + 4 * i) = *(uint32_t *)(a1[1] + 4 * i);
      }
      for ( ; v13 > v5; ++v5 )
        *(uint32_t *)(v4 + 4 * v5) = 0;
      v15 = (void *)a1[3];
      v7 = (int)(uintptr_t)(operator new[](4 * (v12 + 4)));
      v8 = a1[2];
      if ( v8 != 0 )
      {
        for ( j = 0; j != v8; ++j )
          *(uint32_t *)(v7 + 4 * j) = *(uint32_t *)(a1[3] + 4 * j);
      }
      for ( ; v13 > v8; ++v8 )
        *(uint32_t *)(v7 + 4 * v8) = 0;
      a1[3] = v7;
      a1[2] = v13;
      a1[1] = v4;
      if ( v14 != nullptr )
        operator delete[](v14);
      if ( v15 != nullptr )
        operator delete[](v15);
    }
    __sync_add_and_fetch(a3 + 1, 1u);
    v10 = (volatile int32_t **)(a1[1] + 4 * v12);
    result = *v10;
    if ( *v10 != nullptr )
    {
      if ( __sync_fetch_and_add(result + 1, 0xFFFFFFFF) == 1 )
        result = (volatile int32_t *)(*(int (**)(volatile int32_t *))(*result + 4))(result);
      *v10 = a3;
    }
    else
    {
      result = a3;
      *v10 = a3;
    }
    if ( a1[2] != 0 )
    {
      v11 = 0;
      do
      {
        result = *(volatile int32_t **)(a1[3] + 4 * v11);
        if ( result != nullptr )
        {
          if ( __sync_fetch_and_add(result + 1, 0xFFFFFFFF) == 1 )
            (*(void (**)(volatile int32_t *))(*result + 4))(result);
          result = (volatile int32_t *)a1[3];
          result[v11] = 0;
        }
        ++v11;
      }
      while ( a1[2] > v11 );
    }
  }
  return result;
}


// ============================================================================
// Address:   0x19027a0 (size: 122 bytes)
// Symbol:    sub_19027A0
// Demangled: sub_19027A0
// ============================================================================
volatile int32_t *sub_19027A0(uint32_t *a1, int a2, int32_t *a3)
{
  uint32_t v3;
  volatile int32_t *v4;

  v3 = sub_1902550(a3);
  if ( v3 > *(uint32_t *)(a2 + 8) - 1 || (v4 = *(volatile int32_t **)(*(uint32_t *)(a2 + 4) + 4 * v3)) == nullptr )
    sub_19002A0("locale::_Impl::_M_replace_facet");
  return sub_1902580(a1, a3, v4);
}


// ============================================================================
// Address:   0x1902820 (size: 65 bytes)
// Symbol:    sub_1902820
// Demangled: sub_1902820
// ============================================================================
int32_t *sub_1902820(uint32_t *a1, int a2, int32_t **a3)
{
  int32_t **v3;
  int32_t *result;

  v3 = a3;
  for ( result = *a3; *v3 != nullptr; result = *v3 )
  {
    ++v3;
    sub_19027A0(a1, a2, result);
  }
  return result;
}


// ============================================================================
// Address:   0x1902864 (size: 64 bytes)
// Symbol:    sub_1902864
// Demangled: sub_1902864
// ============================================================================
void __noreturn sub_1902864()
{
  uint32_t *exception;

  exception = (uint32_t *)(_cxa_allocate_exception(4u));
  *exception = ((uint32_t)(uintptr_t)&off_20A98E0);
  _cxa_throw(exception, (type_info *)&g4_typeinfo_0648ac1823, (void (*)(void *))((void (*)(std::exception *))sub_19019B0));
}

// ----------------------------------------------------------------------------
// Function: sub_19028B0  (binary VA: 0x19028b0)
// Original: sub_19028B0
// ----------------------------------------------------------------------------
int32_t sub_19028B0(uint32_t *a1, int a2)
{
  char *v2;
  char *v3;
  int v4;
  int i;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int32_t result;

  v2 = (char *)&unk_213A920;
  v3 = (char *)&unk_213A9A0;
  *a1 = a2;
  a1[2] = 28;
  a1[4] = 0;
  a1[1] = (uint32_t)(uintptr_t)(&unk_213A920);
  a1[3] = (uint32_t)(uintptr_t)(&unk_213A9A0);
  v4 = 0;
  while ( 1 )
  {
    *(uint32_t *)&v3[v4] = 0;
    *(uint32_t *)&v2[v4] = 0;
    v4 += 4;
    if ( v4 == 112 )
      break;
    v2 = (char *)a1[1];
    v3 = (char *)a1[3];
  }
  a1[4] = (uint32_t)(uintptr_t)(&dword_213AA10);
  dword_213AA10 = (int)(uintptr_t)(&word_213AA28);
  word_213AA28 = *(uint16_t *)sub_1902030();
  *(uintptr_t *)(unk_213AA14) = (uintptr_t)(0);
  for ( i = 8; i != 24; i += 4 )
    *(uint32_t *)(a1[4] + i) = 0;
  sub_18FFA30((int)(&dword_213AA40), 0, 0, 1);
  sub_1902580(a1, (&dword_2139F24), (&dword_213AA40));
  sub_19536E0((&dword_213AC60), 1);
  sub_1902580(a1, &dword_21402F8, (&dword_213AC60));
  dword_213AC84 = 1;
  dword_213AC80 = (int)(uintptr_t)(&off_20AAB70);
  dword_213AC88 = 0;
  dword_213ACE8 = (int)(uintptr_t)(&off_20AA7A8);
  dword_213AC8C = 0;
  byte_213AC90 = 0;
  dword_213AC94 = 0;
  dword_213AC98 = 0;
  dword_213AC9C = 0;
  dword_213ACA0 = 0;
  byte_213ACA4 = 0;
  byte_213ACA5 = 0;
  byte_213ACE4 = 0;
  dword_213ACEC = 1;
  dword_213ACF0 = (int)(uintptr_t)(&dword_213AC80);
  sub_19079A0(&dword_213ACE8);
  sub_1902580(a1, &dword_213B790, &dword_213ACE8);
  dword_213ACF8 = 1;
  dword_213ACF4 = (int)(uintptr_t)(&off_20AA828);
  sub_1902580(a1, &dword_213B78C, &dword_213ACF4);
  dword_213AD00 = 1;
  dword_213ACFC = (int)(uintptr_t)(&off_20AA868);
  sub_1902580(a1, &dword_213B788, &dword_213ACFC);
  dword_213AD08 = 1;
  dword_213AD04 = (int)(uintptr_t)(&off_20AA768);
  dword_213AD0C = sub_1901FF0();
  sub_1902580(a1, &dword_213B774, &dword_213AD04);
  dword_213AD24 = 1;
  dword_213AD20 = (int)(uintptr_t)(&off_20AAB50);
  dword_213AD28 = 0;
  dword_213AD64 = (int)(uintptr_t)(&off_20AA908);
  dword_213AD2C = 0;
  byte_213AD30 = 0;
  byte_213AD31 = 0;
  byte_213AD32 = 0;
  dword_213AD34 = 0;
  dword_213AD38 = 0;
  dword_213AD3C = 0;
  dword_213AD40 = 0;
  dword_213AD44 = 0;
  dword_213AD48 = 0;
  dword_213AD4C = 0;
  byte_213AD50 = 0;
  byte_213AD51 = 0;
  byte_213AD52 = 0;
  byte_213AD53 = 0;
  byte_213AD54 = 0;
  byte_213AD55 = 0;
  byte_213AD56 = 0;
  byte_213AD57 = 0;
  byte_213AD63 = 0;
  dword_213AD68 = 1;
  dword_213AD6C = (int)(uintptr_t)(&dword_213AD20);
  sub_1907330(&dword_213AD64);
  sub_1902580(a1, (int32_t *)&unk_213B7A0, &dword_213AD64);
  dword_213AD84 = 1;
  dword_213AD80 = (int)(uintptr_t)(&off_20AAB60);
  dword_213AD88 = 0;
  dword_213ADC4 = (int)(uintptr_t)(&off_20AA8C8);
  dword_213AD8C = 0;
  byte_213AD90 = 0;
  byte_213AD91 = 0;
  byte_213AD92 = 0;
  dword_213AD94 = 0;
  dword_213AD98 = 0;
  dword_213AD9C = 0;
  dword_213ADA0 = 0;
  dword_213ADA4 = 0;
  dword_213ADA8 = 0;
  dword_213ADAC = 0;
  byte_213ADB0 = 0;
  byte_213ADB1 = 0;
  byte_213ADB2 = 0;
  byte_213ADB3 = 0;
  byte_213ADB4 = 0;
  byte_213ADB5 = 0;
  byte_213ADB6 = 0;
  byte_213ADB7 = 0;
  byte_213ADC3 = 0;
  dword_213ADC8 = 1;
  dword_213ADCC = (int)(uintptr_t)(&dword_213AD80);
  sub_1907200(&dword_213ADC4);
  sub_1902580(a1, &dword_213B79C, &dword_213ADC4);
  dword_213ADD4 = 1;
  dword_213ADD0 = (int)(uintptr_t)(&off_20AAA60);
  sub_1902580(a1, &dword_213B798, &dword_213ADD0);
  dword_213ADDC = 1;
  dword_213ADD8 = (int)(uintptr_t)(&off_20AAA78);
  sub_1902580(a1, &dword_213B794, &dword_213ADD8);
  dword_213ADE4 = 1;
  dword_213ADE8 = 0;
  dword_213ADE0 = (int)(uintptr_t)(&off_20AA898);
  dword_213ADEC = 0;
  dword_213ADF0 = 0;
  dword_213ADF4 = 0;
  dword_213ADF8 = 0;
  dword_213ADFC = 0;
  dword_213AE00 = 0;
  dword_213AE04 = 0;
  dword_213AE08 = 0;
  dword_213AE0C = 0;
  dword_213AE10 = 0;
  dword_213AE14 = 0;
  dword_213AE18 = 0;
  dword_213AE1C = 0;
  dword_213AE20 = 0;
  dword_213AE24 = 0;
  dword_213AE28 = 0;
  dword_213AE2C = 0;
  dword_213AE30 = 0;
  dword_213AE34 = 0;
  dword_213AE38 = 0;
  dword_213AE3C = 0;
  dword_213AE40 = 0;
  dword_213AE44 = 0;
  dword_213AE48 = 0;
  dword_213AE4C = 0;
  dword_213AE50 = 0;
  dword_213AE54 = 0;
  dword_213AE58 = 0;
  dword_213AE5C = 0;
  dword_213AE60 = 0;
  dword_213AE64 = 0;
  dword_213AE68 = 0;
  dword_213AE6C = 0;
  dword_213AE70 = 0;
  dword_213AE74 = 0;
  dword_213AE78 = 0;
  dword_213AE7C = 0;
  dword_213AE80 = 0;
  dword_213AE84 = 0;
  dword_213AE88 = 0;
  dword_213AE8C = 0;
  dword_213AE90 = 0;
  dword_213AE94 = 0;
  dword_213AE98 = 0;
  dword_213AE9C = 0;
  dword_213AEA0 = 0;
  byte_213AEA4 = 0;
  sub_191C0A0((&dword_213AEA8), &dword_213ADE0, 1);
  sub_1902580(a1, &dword_213B784, (&dword_213AEA8));
  dword_213AEC0 = 1;
  dword_213AEBC = (int)(uintptr_t)(&off_20AAAC8);
  sub_1902580(a1, &dword_213B77C, &dword_213AEBC);
  dword_213AEC8 = 1;
  dword_213AEC4 = (int)(uintptr_t)(&off_20AAA90);
  sub_1902580(a1, &dword_213B780, &dword_213AEC4);
  sub_191CA40((&dword_213AECC), 1);
  sub_1902580(a1, &dword_213B778, (&dword_213AECC));
  sub_18FFCF0((int)(&dword_213AEE0), 1);
  sub_1902580(a1, &dword_2139F20, (&dword_213AEE0));
  sub_19537A0((&dword_213B3C0), 1);
  sub_1902580(a1, &dword_21402F4, (&dword_213B3C0));
  dword_213B3E4 = 1;
  dword_213B3E0 = (int)(uintptr_t)(&off_20AB970);
  dword_213B3E8 = 0;
  dword_213B508 = (int)(uintptr_t)(&off_20AB5A8);
  dword_213B3EC = 0;
  byte_213B3F0 = 0;
  dword_213B3F4 = 0;
  dword_213B3F8 = 0;
  dword_213B3FC = 0;
  dword_213B400 = 0;
  dword_213B404 = 0;
  dword_213B408 = 0;
  byte_213B504 = 0;
  dword_213B50C = 1;
  dword_213B510 = (int)(uintptr_t)(&dword_213B3E0);
  sub_1907B60(&dword_213B508);
  sub_1902580(a1, &dword_213B834, &dword_213B508);
  dword_213B518 = 1;
  dword_213B514 = (int)(uintptr_t)(&off_20AB628);
  sub_1902580(a1, &dword_213B830, &dword_213B514);
  dword_213B520 = 1;
  dword_213B51C = (int)(uintptr_t)(&off_20AB668);
  sub_1902580(a1, &dword_213B82C, &dword_213B51C);
  dword_213B528 = 1;
  dword_213B524 = (int)(uintptr_t)(&off_20AB528);
  dword_213B52C = sub_1901FF0();
  sub_1902580(a1, &dword_213B818, &dword_213B524);
  dword_213B544 = 1;
  dword_213B540 = (int)(uintptr_t)(&off_20AB950);
  dword_213B548 = 0;
  dword_213B5B0 = (int)(uintptr_t)(&off_20AB708);
  dword_213B54C = 0;
  byte_213B550 = 0;
  dword_213B554 = 0;
  dword_213B558 = 0;
  dword_213B55C = 0;
  dword_213B560 = 0;
  dword_213B564 = 0;
  dword_213B568 = 0;
  dword_213B56C = 0;
  dword_213B570 = 0;
  dword_213B574 = 0;
  byte_213B578 = 0;
  byte_213B579 = 0;
  byte_213B57A = 0;
  byte_213B57B = 0;
  byte_213B57C = 0;
  byte_213B57D = 0;
  byte_213B57E = 0;
  byte_213B57F = 0;
  byte_213B5AC = 0;
  dword_213B5B4 = 1;
  dword_213B5B8 = (int)(uintptr_t)(&dword_213B540);
  sub_1907700(&dword_213B5B0);
  sub_1902580(a1, &dword_213B844, &dword_213B5B0);
  dword_213B5C4 = 1;
  dword_213B5C0 = (int)(uintptr_t)(&off_20AB960);
  dword_213B5C8 = 0;
  dword_213B630 = (int)(uintptr_t)(&off_20AB6C8);
  dword_213B5CC = 0;
  byte_213B5D0 = 0;
  dword_213B5D4 = 0;
  dword_213B5D8 = 0;
  dword_213B5DC = 0;
  dword_213B5E0 = 0;
  dword_213B5E4 = 0;
  dword_213B5E8 = 0;
  dword_213B5EC = 0;
  dword_213B5F0 = 0;
  dword_213B5F4 = 0;
  byte_213B5F8 = 0;
  byte_213B5F9 = 0;
  byte_213B5FA = 0;
  byte_213B5FB = 0;
  byte_213B5FC = 0;
  byte_213B5FD = 0;
  byte_213B5FE = 0;
  byte_213B5FF = 0;
  byte_213B62C = 0;
  dword_213B634 = 1;
  dword_213B638 = (int)(uintptr_t)(&dword_213B5C0);
  sub_19075C0(&dword_213B630);
  sub_1902580(a1, &dword_213B840, &dword_213B630);
  dword_213B640 = 1;
  dword_213B63C = (int)(uintptr_t)(&off_20AB860);
  sub_1902580(a1, &dword_213B83C, &dword_213B63C);
  dword_213B648 = 1;
  dword_213B644 = (int)(uintptr_t)(&off_20AB878);
  sub_1902580(a1, &dword_213B838, &dword_213B644);
  dword_213B664 = 1;
  dword_213B668 = 0;
  dword_213B660 = (int)(uintptr_t)(&off_20AB698);
  dword_213B66C = 0;
  dword_213B670 = 0;
  dword_213B674 = 0;
  dword_213B678 = 0;
  dword_213B67C = 0;
  dword_213B680 = 0;
  dword_213B684 = 0;
  dword_213B688 = 0;
  dword_213B68C = 0;
  dword_213B690 = 0;
  dword_213B694 = 0;
  dword_213B698 = 0;
  dword_213B69C = 0;
  dword_213B6A0 = 0;
  dword_213B6A4 = 0;
  dword_213B6A8 = 0;
  dword_213B6AC = 0;
  dword_213B6B0 = 0;
  dword_213B6B4 = 0;
  dword_213B6B8 = 0;
  dword_213B6BC = 0;
  dword_213B6C0 = 0;
  dword_213B6C4 = 0;
  dword_213B6C8 = 0;
  dword_213B6CC = 0;
  dword_213B6D0 = 0;
  dword_213B6D4 = 0;
  dword_213B6D8 = 0;
  dword_213B6DC = 0;
  dword_213B6E0 = 0;
  dword_213B6E4 = 0;
  dword_213B6E8 = 0;
  dword_213B6EC = 0;
  dword_213B6F0 = 0;
  dword_213B6F4 = 0;
  dword_213B6F8 = 0;
  dword_213B6FC = 0;
  dword_213B700 = 0;
  dword_213B704 = 0;
  dword_213B708 = 0;
  dword_213B70C = 0;
  dword_213B710 = 0;
  dword_213B714 = 0;
  dword_213B718 = 0;
  dword_213B71C = 0;
  dword_213B720 = 0;
  byte_213B724 = 0;
  sub_193DC50((&dword_213B728), &dword_213B660, 1);
  sub_1902580(a1, &dword_213B828, (&dword_213B728));
  dword_213B740 = 1;
  dword_213B73C = (int)(uintptr_t)(&off_20AB8C8);
  sub_1902580(a1, &dword_213B820, &dword_213B73C);
  dword_213B748 = 1;
  dword_213B744 = (int)(uintptr_t)(&off_20AB890);
  sub_1902580(a1, &dword_213B824, &dword_213B744);
  sub_193E5F0((&dword_213B74C), 1);
  sub_1902580(a1, &dword_213B81C, (&dword_213B74C));
  v6 = a1[3];
  *(uint32_t *)(v6 + 4 * sub_1902550(&dword_213B790)) = (uint32_t)(uintptr_t)(&dword_213AC80);
  v7 = a1[3];
  *(uint32_t *)(v7 + 4 * sub_1902550((int32_t *)&unk_213B7A0)) = (uint32_t)(uintptr_t)(&dword_213AD20);
  v8 = a1[3];
  *(uint32_t *)(v8 + 4 * sub_1902550(&dword_213B79C)) = (uint32_t)(uintptr_t)(&dword_213AD80);
  v9 = a1[3];
  *(uint32_t *)(v9 + 4 * sub_1902550(&dword_213B784)) = (uint32_t)(uintptr_t)(&dword_213ADE0);
  v10 = a1[3];
  *(uint32_t *)(v10 + 4 * sub_1902550(&dword_213B834)) = (uint32_t)(uintptr_t)(&dword_213B3E0);
  v11 = a1[3];
  *(uint32_t *)(v11 + 4 * sub_1902550(&dword_213B844)) = (uint32_t)(uintptr_t)(&dword_213B540);
  v12 = a1[3];
  *(uint32_t *)(v12 + 4 * sub_1902550(&dword_213B840)) = (uint32_t)(uintptr_t)(&dword_213B5C0);
  v13 = a1[3];
  result = sub_1902550(&dword_213B828);
  *(uint32_t *)(v13 + 4 * result) = (uint32_t)(uintptr_t)(&dword_213B660);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1903980  (binary VA: 0x1903980)
// Original: sub_1903980
// ----------------------------------------------------------------------------
uint32_t * sub_1903980()
{
  sub_19028B0((&dword_213A8F0), 2);
  *(uintptr_t *)(unk_213A8CC) = (uintptr_t)((&dword_213A8F0));
  dword_213A8C8 = (uint32_t)(uintptr_t)(&dword_213A8F0);
  return &dword_213A8C8;
}

// ----------------------------------------------------------------------------
// Function: sub_19039D0  (binary VA: 0x19039d0)
// Original: sub_19039D0
// ----------------------------------------------------------------------------
uint32_t * sub_19039D0()
{
  uint32_t *result;

  g4_pthread_once(&dword_213A8C4, (void (*)(void))sub_1903980);
  result = (uint32_t *)(*(uint8_t **)unk_213A8CC);
  if ( (*(uint8_t **)unk_213A8CC) == 0 )
    return sub_1903980();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1903A20  (binary VA: 0x1903a20)
// Original: sub_1903A20
// ----------------------------------------------------------------------------
uint32_t * sub_1903A20()
{
  sub_19039D0();
  sub_1901AE0(&dword_213A8EC, (*(uint8_t **)unk_213A8CC));
  return &dword_213A8EC;
}



// ============================================================================
// Address:   0x1903a70 (size: 255 bytes)
// Symbol:    sub_1903A70
// Demangled: sub_1903A70
// ============================================================================
volatile int32_t *sub_1903A70(uint32_t *a1)
{
  volatile int32_t *result;
  uint32_t *exception;

  *a1 = 0;
  sub_19039D0();
  result = (volatile int32_t *)dword_213A8C8;
  *a1 = dword_213A8C8;
  if ( result == (volatile int32_t *)(*(uint8_t **)unk_213A8CC) )
  {
    __sync_add_and_fetch(result, 1u);
  }
  else
  {
    if ( byte_213A8E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_213A8E0) != 0 )
    {
      dword_213A8E8 = 0;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_213A8E0);
    }
    if ( pthread_mutex_lock((pthread_mutex_t *)&dword_213A8E8) != 0 )
      sub_1902864();
    __sync_add_and_fetch((volatile int32_t *)dword_213A8C8, 1u);
    *a1 = dword_213A8C8;
    result = (volatile int32_t *)pthread_mutex_unlock((pthread_mutex_t *)&dword_213A8E8);
    if ( result != nullptr )
    {
      exception = (uint32_t *)(_cxa_allocate_exception(4u));
      *exception = ((uint32_t)(uintptr_t)&off_20A9900);
      _cxa_throw(
        exception,
        (type_info *)&g4_typeinfo_1137b0f633,
        (void (*)(void *))((void (*)(std::exception *))sub_19019E0));
    }
  }
  return result;
}


// ============================================================================
// Address:   0x1903b70 (size: 488 bytes)
// Symbol:    sub_1903B70
// Demangled: sub_1903B70
// ============================================================================
uint32_t *sub_1903B70(uint32_t *a1, volatile int32_t **a2)
{
  volatile int32_t **v2;
  int v3;
  char *v4;
  int v6;
  uint32_t *exception;
  typedef volatile int32_t **_g4_t_v8;
  typedef char *_g4_t_locale[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_locale)) > _g4_s1 ? (28u + sizeof(_g4_t_locale)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_locale &locale = *reinterpret_cast<_g4_t_locale *>(_g4_sf + 28u);

  sub_19039D0();
  v2 = a2;
  if ( byte_213A8E0 == 0 )
  {
    v6 = _cxa_guard_acquire((__guard *)&byte_213A8E0);
    v2 = a2;
    if ( v6 != 0 )
    {
      dword_213A8E8 = 0;
      _cxa_guard_release((__guard *)&byte_213A8E0);
      v2 = a2;
    }
  }
  v8 = v2;
  if ( pthread_mutex_lock((pthread_mutex_t *)&dword_213A8E8) != 0 )
    sub_1902864();
  v3 = dword_213A8C8;
  __sync_add_and_fetch(*v8, 1u);
  dword_213A8C8 = (uint32_t)(uintptr_t)(*v8);
  sub_1901AF0((int *)locale, (int)(uintptr_t)(v8));
  if ( g4_std_compat::string_compare((int)(uintptr_t)(locale), "*") != 0 )
    setlocale(6, locale[0]);
  v4 = locale[0] - 12;
  if ( (uint32_t *)locale[0] - 3 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)locale[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v4);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)&dword_213A8E8) != 0 )
  {
    exception = (uint32_t *)(_cxa_allocate_exception(4u));
    *exception = ((uint32_t)(uintptr_t)&off_20A9900);
    _cxa_throw(
      exception,
      (type_info *)&g4_typeinfo_1137b0f633,
      (void (*)(void *))((void (*)(std::exception *))sub_19019E0));
  }
  sub_1901AE0(a1, v3);
  return a1;
}


// ============================================================================
// Address:   0x1903d60 (size: 12 bytes)
// Symbol:    sub_1903D60
// Demangled: sub_1903D60
// ============================================================================
int sub_1903D60(int a1)
{
  return *(uint32_t *)(a1 + 4);
}


// ============================================================================
// Address:   0x1903d70 (size: 12 bytes)
// Symbol:    sub_1903D70
// Demangled: sub_1903D70
// ============================================================================
int sub_1903D70(int a1)
{
  return *(uint32_t *)(a1 + 4);
}


// ============================================================================
// Address:   0x1903d80 (size: 100 bytes)
// Symbol:    sub_1903D80
// Demangled: sub_1903D80
// ============================================================================
void sub_1903D80(std::exception *a1)
{
  int v1;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9AA8);
  v1 = *((uint32_t *)a1 + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  g4_noop_dtor(a1);
}


// ============================================================================
// Address:   0x1903df0 (size: 28 bytes)
// Symbol:    sub_1903DF0
// Demangled: sub_1903DF0
// ============================================================================
void sub_1903DF0(std::exception *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9AF0);
  sub_1903D80(a1);
}


// ============================================================================
// Address:   0x1903e10 (size: 56 bytes)
// Symbol:    sub_1903E10
// Demangled: sub_1903E10
// ============================================================================
void sub_1903E10(std::exception *a1)
{
  sub_1903DF0(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1903e50 (size: 28 bytes)
// Symbol:    sub_1903E50
// Demangled: sub_1903E50
// ============================================================================
void sub_1903E50(std::exception *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9AD8);
  sub_1903D80(a1);
}


// ============================================================================
// Address:   0x1903e70 (size: 56 bytes)
// Symbol:    sub_1903E70
// Demangled: sub_1903E70
// ============================================================================
void sub_1903E70(std::exception *a1)
{
  sub_1903E50(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1903eb0 (size: 28 bytes)
// Symbol:    sub_1903EB0
// Demangled: sub_1903EB0
// ============================================================================
void sub_1903EB0(std::exception *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9AC0);
  sub_1903D80(a1);
}


// ============================================================================
// Address:   0x1903ed0 (size: 56 bytes)
// Symbol:    sub_1903ED0
// Demangled: sub_1903ED0
// ============================================================================
void sub_1903ED0(std::exception *a1)
{
  sub_1903EB0(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1903f10 (size: 56 bytes)
// Symbol:    sub_1903F10
// Demangled: sub_1903F10
// ============================================================================
void sub_1903F10(std::exception *a1)
{
  sub_1903D80(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1903f50 (size: 100 bytes)
// Symbol:    sub_1903F50
// Demangled: sub_1903F50
// ============================================================================
void sub_1903F50(std::exception *a1)
{
  int v1;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9A30);
  v1 = *((uint32_t *)a1 + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  g4_noop_dtor(a1);
}


// ============================================================================
// Address:   0x1903fc0 (size: 28 bytes)
// Symbol:    sub_1903FC0
// Demangled: sub_1903FC0
// ============================================================================
void sub_1903FC0(std::exception *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9A90);
  sub_1903F50(a1);
}


// ============================================================================
// Address:   0x1903fe0 (size: 56 bytes)
// Symbol:    sub_1903FE0
// Demangled: sub_1903FE0
// ============================================================================
void sub_1903FE0(std::exception *a1)
{
  sub_1903FC0(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1904020 (size: 28 bytes)
// Symbol:    sub_1904020
// Demangled: sub_1904020
// ============================================================================
void sub_1904020(std::exception *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9A78);
  sub_1903F50(a1);
}


// ============================================================================
// Address:   0x1904040 (size: 56 bytes)
// Symbol:    sub_1904040
// Demangled: sub_1904040
// ============================================================================
void sub_1904040(std::exception *a1)
{
  sub_1904020(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1904080 (size: 28 bytes)
// Symbol:    sub_1904080
// Demangled: sub_1904080
// ============================================================================
void sub_1904080(std::exception *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9A60);
  sub_1903F50(a1);
}


// ============================================================================
// Address:   0x19040a0 (size: 56 bytes)
// Symbol:    sub_19040A0
// Demangled: sub_19040A0
// ============================================================================
void sub_19040A0(std::exception *a1)
{
  sub_1904080(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x19040e0 (size: 28 bytes)
// Symbol:    sub_19040E0
// Demangled: sub_19040E0
// ============================================================================
void sub_19040E0(std::exception *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9A48);
  sub_1903F50(a1);
}


// ============================================================================
// Address:   0x1904100 (size: 56 bytes)
// Symbol:    sub_1904100
// Demangled: sub_1904100
// ============================================================================
void sub_1904100(std::exception *a1)
{
  sub_19040E0(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1904140 (size: 56 bytes)
// Symbol:    sub_1904140
// Demangled: sub_1904140
// ============================================================================
void sub_1904140(std::exception *a1)
{
  sub_1903F50(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1904180 (size: 91 bytes)
// Symbol:    sub_1904180
// Demangled: sub_1904180
// ============================================================================
int sub_1904180(uint32_t *a1, int a2)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A9A30);
  return (int)(uintptr_t)(g4_std::string::construct_copy(a1 + 1, a2));
}


// ============================================================================
// Address:   0x19041e0 (size: 64 bytes)
// Symbol:    sub_19041E0
// Demangled: sub_19041E0
// ============================================================================
int (**sub_19041E0(uint32_t *a1, int a2))(int)
{
  sub_1904180(a1, a2);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9A48);
  return (int (**)(int))(uintptr_t)(&off_20A9A48);
}


// ============================================================================
// Address:   0x1904220 (size: 64 bytes)
// Symbol:    sub_1904220
// Demangled: sub_1904220
// ============================================================================
int (**sub_1904220(uint32_t *a1, int a2))(int)
{
  sub_1904180(a1, a2);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9A60);
  return (int (**)(int))(uintptr_t)(&off_20A9A60);
}


// ============================================================================
// Address:   0x1904260 (size: 64 bytes)
// Symbol:    sub_1904260
// Demangled: sub_1904260
// ============================================================================
int (**sub_1904260(uint32_t *a1, int a2))(int)
{
  sub_1904180(a1, a2);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9A78);
  return (int (**)(int))(uintptr_t)(&off_20A9A78);
}


// ============================================================================
// Address:   0x19042a0 (size: 64 bytes)
// Symbol:    sub_19042A0
// Demangled: sub_19042A0
// ============================================================================
int (**sub_19042A0(uint32_t *a1, int a2))(int)
{
  sub_1904180(a1, a2);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9A90);
  return (int (**)(int))(uintptr_t)(&off_20A9A90);
}


// ============================================================================
// Address:   0x19042e0 (size: 91 bytes)
// Symbol:    sub_19042E0
// Demangled: sub_19042E0
// ============================================================================
int sub_19042E0(uint32_t *a1, int a2)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A9AA8);
  return (int)(uintptr_t)(g4_std::string::construct_copy(a1 + 1, a2));
}


// ============================================================================
// Address:   0x1904340 (size: 64 bytes)
// Symbol:    sub_1904340
// Demangled: sub_1904340
// ============================================================================
int (**sub_1904340(uint32_t *a1, int a2))(int)
{
  sub_19042E0(a1, a2);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9AC0);
  return (int (**)(int))(uintptr_t)(&off_20A9AC0);
}


// ============================================================================
// Address:   0x1904380 (size: 64 bytes)
// Symbol:    sub_1904380
// Demangled: sub_1904380
// ============================================================================
int (**sub_1904380(uint32_t *a1, int a2))(int)
{
  sub_19042E0(a1, a2);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9AD8);
  return (int (**)(int))(uintptr_t)(&off_20A9AD8);
}


// ============================================================================
// Address:   0x19043c0 (size: 64 bytes)
// Symbol:    sub_19043C0
// Demangled: sub_19043C0
// ============================================================================
int (**sub_19043C0(uint32_t *a1, int a2))(int)
{
  sub_19042E0(a1, a2);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9AF0);
  return (int (**)(int))(uintptr_t)(&off_20A9AF0);
}


// ============================================================================
// Address:   0x1904400 (size: 22 bytes)
// Symbol:    sub_1904400
// Demangled: sub_1904400
// ============================================================================
const char *sub_1904400()
{
  return "generic";
}


// ============================================================================
// Address:   0x1904420 (size: 22 bytes)
// Symbol:    sub_1904420
// Demangled: sub_1904420
// ============================================================================
const char *sub_1904420()
{
  return "system";
}


// ============================================================================
// Address:   0x1904440 (size: 24 bytes)
// Symbol:    sub_1904440
// Demangled: sub_1904440
// ============================================================================
uint32_t *sub_1904440(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9B28);
  return a1;
}


// ============================================================================
// Address:   0x1904460 (size: 20 bytes)
// Symbol:    sub_1904460
// Demangled: sub_1904460
// ============================================================================
uint32_t *sub_1904460(uint32_t *a1, int a2, int a3)
{
  *a1 = a3;
  a1[1] = a2;
  return a1;
}


// ============================================================================
// Address:   0x1904480 (size: 98 bytes)
// Symbol:    sub_1904480
// Demangled: sub_1904480
// ============================================================================
bool sub_1904480(int a1, int a2, uint32_t *a3)
{
  bool result;
  uint32_t v4[3];

  (*(void (**)(uint32_t *, int, int))(*(uint32_t *)a1 + 16))(v4, a1, a2);
  result = false;
  if ( a3[1] == v4[1] )
    return *a3 == v4[0];
  return result;
}


// ============================================================================
// Address:   0x19044f0 (size: 26 bytes)
// Symbol:    sub_19044F0
// Demangled: sub_19044F0
// ============================================================================
bool sub_19044F0(int a1, uint32_t *a2, int a3)
{
  bool result;

  result = false;
  if ( a2[1] == a1 )
    return *a2 == a3;
  return result;
}


// ============================================================================
// Address:   0x1904510 (size: 24 bytes)
// Symbol:    sub_1904510
// Demangled: sub_1904510
// ============================================================================
uint32_t *sub_1904510(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9B28);
  return a1;
}


// ============================================================================
// Address:   0x1904530 (size: 24 bytes)
// Symbol:    sub_1904530
// Demangled: sub_1904530
// ============================================================================
uint32_t *sub_1904530(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9B28);
  return a1;
}


// ============================================================================
// Address:   0x1904550 (size: 76 bytes)
// Symbol:    sub_1904550
// Demangled: sub_1904550
// ============================================================================
int sub_1904550(int a1, int a2, int errnum)
{
  char *v3;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v3 = strerror(errnum);
  g4_std::string::construct_from_cstr(a1, v3, (int)(uintptr_t)(&v5));
  return a1;
}


// ============================================================================
// Address:   0x19045a0 (size: 76 bytes)
// Symbol:    sub_19045A0
// Demangled: sub_19045A0
// ============================================================================
int sub_19045A0(int a1, int a2, int errnum)
{
  char *v3;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v3 = strerror(errnum);
  g4_std::string::construct_from_cstr(a1, v3, (int)(uintptr_t)(&v5));
  return a1;
}


// ============================================================================
// Address:   0x19045f0 (size: 42 bytes)
// Symbol:    sub_19045F0
// Demangled: sub_19045F0
// ============================================================================
void sub_19045F0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9B28);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1904620 (size: 42 bytes)
// Symbol:    sub_1904620
// Demangled: sub_1904620
// ============================================================================
void sub_1904620(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9B28);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1904650 (size: 42 bytes)
// Symbol:    sub_1904650
// Demangled: sub_1904650
// ============================================================================
void sub_1904650(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9B28);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1904680 (size: 42 bytes)
// Symbol:    sub_1904680
// Demangled: sub_1904680
// ============================================================================
void sub_1904680(std::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9B50);
  sub_1903D80(a1);
}


// ============================================================================
// Address:   0x19046b0 (size: 56 bytes)
// Symbol:    sub_19046B0
// Demangled: sub_19046B0
// ============================================================================
void sub_19046B0(std::exception *a1)
{
  sub_1904680(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x19046f0 (size: 24 bytes)
// Symbol:    sub_19046F0
// Demangled: sub_19046F0
// ============================================================================
uint32_t *sub_19046F0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9B28);
  return a1;
}


// ============================================================================
// Address:   0x1904710 (size: 22 bytes)
// Symbol:    sub_1904710
// Demangled: sub_1904710
// ============================================================================
int *sub_1904710()
{
  return (int *)(&dword_213B75C);
}


// ============================================================================
// Address:   0x1904730 (size: 22 bytes)
// Symbol:    sub_1904730
// Demangled: sub_1904730
// ============================================================================
int *sub_1904730()
{
  return (int *)(&dword_213B760);
}


// ============================================================================
// Address:   0x1904750 (size: 47 bytes)
// Symbol:    sub_1904750
// Demangled: sub_1904750
// ============================================================================
int sub_1904750(int a1, int a2)
{
  (*(void (**)(int, uint32_t, uint32_t))(**(uint32_t **)(a2 + 4) + 16))(a1, *(uint32_t *)(a2 + 4), *(uint32_t *)a2);
  return a1;
}


// ============================================================================
// Address:   0x1904780 (size: 110 bytes)
// Symbol:    sub_1904780
// Demangled: sub_1904780
// ============================================================================
int sub_1904780()
{
  dword_213B760 = (int)(uintptr_t)(&off_20A9B68);
  __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_1904530), &dword_213B760, &unk_20D1280);
  dword_213B75C = (int)(uintptr_t)(&off_20A9BA8);
  return __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_1904510), &dword_213B75C, &unk_20D1280);
}


// ============================================================================
// Address:   0x19047f0 (size: 69 bytes)
// Symbol:    sub_19047F0
// Demangled: sub_19047F0
// ============================================================================
int sub_19047F0(int result, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = *(uint32_t *)(result + 12);
  v3 = *(uint32_t *)(v2 + 8);
  *(uint32_t *)(result + 12) = v3;
  if ( v3 != 0 )
    *(uint32_t *)(v3 + 4) = result;
  *(uint32_t *)(v2 + 4) = *(uint32_t *)(result + 4);
  if ( *a2 == result )
  {
    *a2 = v2;
    *(uint32_t *)(v2 + 8) = result;
    *(uint32_t *)(result + 4) = v2;
  }
  else
  {
    v4 = *(uint32_t *)(result + 4);
    if ( *(uint32_t *)(v4 + 8) == result )
      *(uint32_t *)(v4 + 8) = v2;
    else
      *(uint32_t *)(v4 + 12) = v2;
    *(uint32_t *)(v2 + 8) = result;
    *(uint32_t *)(result + 4) = v2;
  }
  return result;
}


// ============================================================================
// Address:   0x1904840 (size: 69 bytes)
// Symbol:    sub_1904840
// Demangled: sub_1904840
// ============================================================================
int sub_1904840(int result, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = *(uint32_t *)(result + 8);
  v3 = *(uint32_t *)(v2 + 12);
  *(uint32_t *)(result + 8) = v3;
  if ( v3 != 0 )
    *(uint32_t *)(v3 + 4) = result;
  *(uint32_t *)(v2 + 4) = *(uint32_t *)(result + 4);
  if ( *a2 == result )
  {
    *a2 = v2;
    *(uint32_t *)(v2 + 12) = result;
    *(uint32_t *)(result + 4) = v2;
  }
  else
  {
    v4 = *(uint32_t *)(result + 4);
    if ( *(uint32_t *)(v4 + 12) == result )
      *(uint32_t *)(v4 + 12) = v2;
    else
      *(uint32_t *)(v4 + 8) = v2;
    *(uint32_t *)(v2 + 12) = result;
    *(uint32_t *)(result + 4) = v2;
  }
  return result;
}


// ============================================================================
// Address:   0x1904890 (size: 70 bytes)
// Symbol:    sub_1904890
// Demangled: sub_1904890
// ============================================================================
int sub_1904890(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = *(uint32_t *)(a1 + 12);
  if ( result != 0 )
  {
    while ( *(uint32_t *)(result + 8) != 0 )
      result = *(uint32_t *)(result + 8);
  }
  else
  {
    v3 = *(uint32_t *)(a1 + 4);
    v4 = 0;
    result = v3;
    if ( a1 == *(uint32_t *)(v3 + 12) )
    {
      while ( 1 )
      {
        result = *(uint32_t *)(v3 + 4);
        if ( *(uint32_t *)(result + 12) != v3 )
          break;
        v3 = *(uint32_t *)(v3 + 4);
      }
      v4 = *(uint32_t *)(v3 + 12);
      v1 = v3;
    }
    if ( result == v4 )
      return v1;
  }
  return result;
}


// ============================================================================
// Address:   0x19048f0 (size: 76 bytes)
// Symbol:    sub_19048F0
// Demangled: sub_19048F0
// ============================================================================
int sub_19048F0(uint32_t *a1)
{
  uint32_t *v1;
  int result;
  int v3;

  if ( *a1 == 0 )
  {
    v1 = *(uint32_t **)(a1[1] + 4);
    if ( v1 == a1 )
      return v1[3];
  }
  result = a1[2];
  if ( result != 0 )
  {
    while ( *(uint32_t *)(result + 12) != 0 )
      result = *(uint32_t *)(result + 12);
  }
  else
  {
    v3 = a1[1];
    result = v3;
    if ( a1 == *(uint32_t **)(v3 + 8) )
    {
      while ( 1 )
      {
        result = *(uint32_t *)(v3 + 4);
        if ( *(uint32_t *)(result + 8) != v3 )
          break;
        v3 = *(uint32_t *)(v3 + 4);
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0x1904970 (size: 353 bytes)
// Symbol:    sub_1904970
// Demangled: sub_1904970
// ============================================================================
uint32_t *sub_1904970(char a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  uint32_t *v4;
  uint32_t *result;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;

  v4 = a2;
  v9 = a4 + 1;
  a2[1] = (uint32_t)(uintptr_t)(a3);
  a2[2] = 0;
  a2[3] = 0;
  *a2 = 0;
  if ( a1 != 0 )
  {
    a3[2] = (uint32_t)(uintptr_t)(a2);
    if ( a3 == a4 )
    {
      a4[1] = (uint32_t)(uintptr_t)(a2);
      a4[3] = (uint32_t)(uintptr_t)(a2);
    }
    else if ( (uint32_t *)a4[2] == a3 )
    {
      a4[2] = (uint32_t)(uintptr_t)(a2);
    }
  }
  else
  {
    a3[3] = (uint32_t)(uintptr_t)(a2);
    if ( (uint32_t *)a4[3] == a3 )
      a4[3] = (uint32_t)(uintptr_t)(a2);
  }
LABEL_5:
  result = a4;
  v6 = (uint32_t *)a4[1];
  while ( v4 != v6 )
  {
    v7 = (uint32_t *)v4[1];
    if ( *v7 != 0 )
      break;
    v8 = (uint32_t *)v7[1];
    result = (uint32_t *)v8[2];
    if ( v7 == result )
    {
      result = (uint32_t *)v8[3];
      if ( result != nullptr && *result == 0 )
        goto LABEL_14;
      if ( (uint32_t *)v7[3] == v4 )
      {
        sub_19047F0(v4[1], v9);
        v4 = v7;
        v7 = (uint32_t *)v7[1];
      }
      *v7 = 1;
      *v8 = 0;
      sub_1904840((int)(uintptr_t)(v8), v9);
      result = a4;
      v6 = (uint32_t *)a4[1];
    }
    else
    {
      if ( result == nullptr || *result != 0 )
      {
        if ( (uint32_t *)v7[2] == v4 )
        {
          sub_1904840(v4[1], v9);
          v4 = v7;
          v7 = (uint32_t *)v7[1];
        }
        *v7 = 1;
        *v8 = 0;
        sub_19047F0((int)(uintptr_t)(v8), v9);
        goto LABEL_5;
      }
LABEL_14:
      *v7 = 1;
      v4 = v8;
      *result = 1;
      *v8 = 0;
    }
  }
  *v6 = 1;
  return result;
}


// ============================================================================
// Address:   0x1904ae0 (size: 767 bytes)
// Symbol:    sub_1904AE0
// Demangled: sub_1904AE0
// ============================================================================
uint32_t *sub_1904AE0(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;

  v22 = a2 + 1;
  v2 = (uint32_t *)a1[2];
  if ( v2 == nullptr )
  {
    v2 = (uint32_t *)a1[3];
LABEL_48:
    v4 = a1;
    goto LABEL_49;
  }
  v3 = (uint32_t *)a1[3];
  v4 = v3;
  if ( v3 == nullptr )
    goto LABEL_48;
  while ( v4[2] != 0 )
    v4 = (uint32_t *)v4[2];
  v5 = (uint32_t *)v4[3];
  if ( v4 != a1 )
  {
    v2[1] = (uint32_t)(uintptr_t)(v4);
    v4[2] = (uint32_t)(uintptr_t)(v2);
    v6 = v4;
    if ( v3 != v4 )
    {
      v6 = (uint32_t *)v4[1];
      v7 = v6;
      if ( v5 != nullptr )
      {
        v5[1] = (uint32_t)(uintptr_t)(v6);
        v7 = (uint32_t *)v4[1];
      }
      v7[2] = (uint32_t)(uintptr_t)(v5);
      v4[3] = (uint32_t)(uintptr_t)(v3);
      *(uint32_t *)(a1[3] + 4) = (uint32_t)(uintptr_t)(v4);
    }
    if ( (uint32_t *)a2[1] == a1 )
    {
      a2[1] = (uint32_t)(uintptr_t)(v4);
      v8 = a1[1];
    }
    else
    {
      v8 = a1[1];
      if ( *(uint32_t **)(v8 + 8) == a1 )
        *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(v4);
      else
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v4);
    }
    v4[1] = v8;
    v9 = *v4;
    *v4 = *a1;
    *a1 = v9;
    v4 = a1;
    goto LABEL_15;
  }
  v2 = (uint32_t *)v4[3];
LABEL_49:
  v6 = (uint32_t *)v4[1];
  if ( v2 != nullptr )
    v2[1] = (uint32_t)(uintptr_t)(v6);
  if ( (uint32_t *)a2[1] == a1 )
  {
    a2[1] = (uint32_t)(uintptr_t)(v2);
  }
  else
  {
    v17 = a1[1];
    if ( *(uint32_t **)(v17 + 8) == a1 )
      *(uint32_t *)(v17 + 8) = (uint32_t)(uintptr_t)(v2);
    else
      *(uint32_t *)(v17 + 12) = (uint32_t)(uintptr_t)(v2);
  }
  if ( (uint32_t *)a2[2] == a1 )
  {
    v19 = v2;
    if ( a1[3] != 0 )
    {
      while ( v19[2] != 0 )
        v19 = (uint32_t *)v19[2];
      a2[2] = (uint32_t)(uintptr_t)(v19);
    }
    else
    {
      a2[2] = a1[1];
    }
  }
  if ( (uint32_t *)a2[3] != a1 )
    goto LABEL_56;
  v18 = v2;
  if ( a1[2] != 0 )
  {
    while ( v18[3] != 0 )
      v18 = (uint32_t *)v18[3];
    a2[3] = (uint32_t)(uintptr_t)(v18);
LABEL_56:
    v9 = *v4;
    v5 = v2;
    goto LABEL_15;
  }
  v5 = v2;
  a2[3] = a1[1];
  v9 = *v4;
LABEL_15:
  if ( v9 != 0 )
  {
    v10 = a2;
    while ( (uint32_t *)v10[1] != v5 )
    {
      if ( v5 != nullptr && *v5 != 1 )
        goto LABEL_20;
      v12 = (uint32_t *)v6[2];
      if ( v12 == v5 )
      {
        v12 = (uint32_t *)v6[3];
        if ( *v12 == 0 )
        {
          *v12 = 1;
          *v6 = 0;
          v21 = v10;
          sub_19047F0((int)(uintptr_t)(v6), v22);
          v12 = (uint32_t *)v6[3];
          v10 = v21;
        }
        v15 = (uint32_t *)v12[2];
        if ( v15 != nullptr && *v15 != 1 )
        {
          v16 = (uint32_t *)v12[3];
          if ( v16 == nullptr || *v16 == 1 )
          {
            *(uint32_t *)v12[2] = 1;
            *v12 = 0;
            sub_1904840((int)(uintptr_t)(v12), v22);
            v12 = (uint32_t *)v6[3];
            v16 = (uint32_t *)v12[3];
          }
LABEL_36:
          *v12 = *v6;
          *v6 = 1;
          if ( v16 != nullptr )
            *v16 = 1;
          sub_19047F0((int)(uintptr_t)(v6), v22);
          break;
        }
        v16 = (uint32_t *)v12[3];
        if ( v16 != nullptr && *v16 != 1 )
          goto LABEL_36;
      }
      else
      {
        if ( *v12 == 0 )
        {
          *v12 = 1;
          *v6 = 0;
          v20 = v10;
          sub_1904840((int)(uintptr_t)(v6), v22);
          v12 = (uint32_t *)v6[2];
          v10 = v20;
        }
        v13 = (uint32_t *)v12[3];
        if ( v13 != nullptr && *v13 != 1 )
        {
          v14 = (uint32_t *)v12[2];
          if ( v14 == nullptr || *v14 == 1 )
          {
            *(uint32_t *)v12[3] = 1;
            *v12 = 0;
            sub_19047F0((int)(uintptr_t)(v12), v22);
            v12 = (uint32_t *)v6[2];
            v14 = (uint32_t *)v12[2];
          }
LABEL_42:
          *v12 = *v6;
          *v6 = 1;
          if ( v14 != nullptr )
            *v14 = 1;
          sub_1904840((int)(uintptr_t)(v6), v22);
          break;
        }
        v14 = (uint32_t *)v12[2];
        if ( v14 != nullptr && *v14 != 1 )
          goto LABEL_42;
      }
      *v12 = 0;
      v5 = v6;
      v6 = (uint32_t *)v6[1];
    }
    if ( v5 != nullptr )
LABEL_20:
      *v5 = 1;
  }
  return v4;
}


// ============================================================================
// Address:   0x1904de0 (size: 43 bytes)
// Symbol:    sub_1904DE0
// Demangled: sub_1904DE0
// ============================================================================
int sub_1904DE0(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  int result;

  v2 = a1;
  result = 0;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      result += *v2 == 1;
      if ( v2 == a2 )
        break;
      v2 = (uint32_t *)v2[1];
    }
  }
  return result;
}


// ============================================================================
// Address:   0x1904e10 (size: 637 bytes)
// Symbol:    sub_1904E10
// Demangled: sub_1904E10
// ============================================================================
uint32_t *sub_1904E10(uint32_t *a1, char *dest, int a3, uint8_t a4)
{
  int v4;
  uint32_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  unsigned int v10;
  bool v11;
  const void *s;
  int v13;
  signed int n;
  uint8_t *v15;
  uint8_t *v16;
  unsigned int v17;
  unsigned int v18;
  uint8_t *v19;
  int v20;
  typedef uint8_t *_g4_t_src;
  typedef char _g4_t_v22[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_src)) > _g4_s0 ? (4u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v22)) > _g4_s1 ? (31u + sizeof(_g4_t_v22)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_1913480(v22, a1, 1);
  v4 = 0;
  if ( v22[0] == 0 )
    goto LABEL_2;
  v6 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v7 = (uint8_t *)v6[2];
  if ( (unsigned int)(uintptr_t)(v7) >= v6[3] )
    v8 = G4_VCALL<int>(v6, 36);
  else
    v8 = *v7;
  v9 = a1[1];
  while ( v9 + 1 < a3 )
  {
    if ( v8 == -1 )
      goto LABEL_26;
    if ( v8 == a4 )
      goto LABEL_15;
    s = (const void *)v6[2];
    v13 = a3 - v9 - 1;
    n = v6[3] - (uint32_t)(uintptr_t)(s);
    if ( v13 <= n )
      n = v13;
    if ( n <= 1 )
    {
      *dest++ = v8;
      v17 = v6[2];
      v18 = v6[3];
      ++a1[1];
      if ( v17 < v18 )
      {
        v19 = (uint8_t *)(v17 + 1);
        v6[2] = (uint32_t)(uintptr_t)(v19);
        goto LABEL_29;
      }
      v20 = G4_VCALL<int>(v6, 40);
      v8 = -1;
      if ( v20 != -1 )
      {
        v19 = (uint8_t *)v6[2];
        v18 = v6[3];
LABEL_29:
        if ( v18 > (unsigned int)(uintptr_t)(v19) )
        {
          v8 = *v19;
          goto LABEL_31;
        }
LABEL_32:
        v8 = G4_VCALL<int>(v6, 36);
      }
LABEL_31:
      v9 = a1[1];
    }
    else
    {
      src = (uint8_t *)v6[2];
      v15 = (uint8_t *)(memchr(s, (char)a4, n));
      if ( v15 != nullptr )
        n = v15 - src;
      memcpy(dest, src, n);
      dest += n;
      v16 = (uint8_t *)(n + v6[2]);
      v9 = a1[1] + n;
      v11 = (unsigned int)(uintptr_t)(v16) < v6[3];
      v6[2] = (uint32_t)(uintptr_t)(v16);
      a1[1] = v9;
      if ( !v11 )
        goto LABEL_32;
      v8 = *v16;
    }
  }
  if ( v8 == -1 )
  {
LABEL_26:
    v4 = 2;
    goto LABEL_2;
  }
  v4 = 4;
  if ( a4 == v8 )
  {
LABEL_15:
    v10 = v6[2];
    v11 = v10 < v6[3];
    a1[1] = v9 + 1;
    if ( v11 )
    {
      v4 = 0;
      v6[2] = v10 + 1;
    }
    else
    {
      G4_VCALL<void>(v6, 40);
      v4 = 0;
    }
  }
LABEL_2:
  if ( a3 > 0 )
    *dest = 0;
  if ( a1[1] == 0 )
  {
    v4 |= 4u;
    goto LABEL_6;
  }
  if ( v4 == 0 )
    return a1;
LABEL_6:
  sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | v4);
  return a1;
}


// ============================================================================
// Address:   0x1905090 (size: 814 bytes)
// Symbol:    sub_1905090
// Demangled: sub_1905090
// ============================================================================
uint32_t *sub_1905090(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;
  uint8_t *v4;
  int v5;
  signed int v6;
  signed int n;
  uint8_t *s;
  void *v9;
  uint8_t *v10;
  int v11;
  unsigned int v12;
  typedef int _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint8_t _g4_t_v17[29];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v16)) > _g4_s3 ? (31u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (47u + sizeof(_g4_t_v17)) > _g4_s4 ? (47u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 31u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 47u);

  if ( a3 == -1 )
    return (uint32_t *)sub_1953860(a1, a2);
  a1[1] = 0;
  sub_1913480(v17, a1, 1);
  result = a1;
  if ( a2 > 0 && v17[0] != 0 )
  {
    v15 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
    v4 = (uint8_t *)v15[2];
    if ( (unsigned int)(uintptr_t)(v4) >= v15[3] )
      v5 = G4_VCALL<int>(v15, 36);
    else
      v5 = *v4;
    v16 = 0;
    v6 = a1[1];
LABEL_7:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( a2 > v6 )
        {
          while ( 1 )
          {
            if ( v5 == -1 || a3 == v5 )
              goto LABEL_17;
            n = a2 - v6;
            v14 = v15[3];
            s = (uint8_t *)v15[2];
            if ( a2 - v6 > (int)(v14 - (uint32_t)(uintptr_t)(s)) )
              n = v14 - (uint32_t)(uintptr_t)(s);
            if ( n <= 1 )
              break;
            v13 = v15[2];
            v9 = memchr(s, (char)a3, n);
            if ( v9 != nullptr )
              n = (signed int)(uintptr_t)(v9) - v13;
            v6 += n;
            v15[2] = n + v13;
            a1[1] = v6;
            if ( v14 <= n + v13 )
            {
              v5 = G4_VCALL<int>(v15, 36);
              v6 = a1[1];
              goto LABEL_7;
            }
            v5 = *(uint8_t *)(n + v13);
            if ( a2 <= v6 )
              goto LABEL_17;
          }
          a1[1] = v6 + 1;
          if ( v14 <= (unsigned int)(uintptr_t)(s) )
          {
            if ( G4_VCALL<int>(v15, 40) == -1 )
            {
              v5 = -1;
LABEL_30:
              v6 = a1[1];
              continue;
            }
            v10 = (uint8_t *)v15[2];
            v14 = v15[3];
          }
          else
          {
            v10 = s + 1;
            v15[2] = (uint32_t)(uintptr_t)(v10);
          }
          if ( (unsigned int)(uintptr_t)(v10) >= v14 )
            v5 = G4_VCALL<int>(v15, 36);
          else
            v5 = *v10;
          goto LABEL_30;
        }
        break;
      }
LABEL_17:
      if ( a2 == 0x7FFFFFFF && v5 != -1 && a3 != v5 )
      {
        v6 = 0x80000000;
        v16 = 1;
        a1[1] = 0x80000000;
        continue;
      }
      break;
    }
    if ( v16 != 0 )
      a1[1] = 0x7FFFFFFF;
    if ( v5 == -1 )
    {
      sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 2);
    }
    else
    {
      result = a1;
      if ( v5 != a3 )
        return result;
      v11 = a1[1];
      if ( v11 != 0x7FFFFFFF )
        a1[1] = v11 + 1;
      v12 = v15[2];
      if ( v12 < v15[3] )
      {
        v15[2] = v12 + 1;
        return a1;
      }
      G4_VCALL<void>(v15, 40);
    }
    return a1;
  }
  return result;
}


// ============================================================================
// Address:   0x19053c0 (size: 781 bytes)
// Symbol:    sub_19053C0
// Demangled: sub_19053C0
// ============================================================================
uint32_t *sub_19053C0(uint32_t *a1, char *dest)
{
  int v2;
  char *v4;
  int v5;
  uint32_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  uint8_t *src;
  int v11;
  unsigned int v12;
  uint8_t *v13;
  size_t n;
  uint8_t *v15;
  bool v16;
  unsigned int v17;
  unsigned int v18;
  uint8_t *v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef volatile int32_t *_g4_t_v24[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v23)) > _g4_s3 ? (27u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 27u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);

  sub_1913480(&v23, a1, 0);
  v2 = 4;
  if ( v23 == 0 )
    goto LABEL_2;
  v4 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  v5 = 0x7FFFFFFF;
  if ( *((int *)v4 + 2) > 0 )
    v5 = *((uint32_t *)v4 + 2);
  v22 = v5;
  sub_1901AC0(v24, (volatile int32_t **)v4 + 27);
  v21 = (int)(uintptr_t)(sub_191CFA0(v24));
  sub_1902180(v24);
  v6 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v7 = (uint8_t *)v6[2];
  if ( (unsigned int)(uintptr_t)(v7) >= v6[3] )
    v8 = (*(int (**)(uint32_t))(*v6 + 36))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120));
  else
    v8 = *v7;
  v20 = 0;
  while ( v20 < v22 - 1 )
  {
    if ( v8 == -1 )
      goto LABEL_32;
    v9 = *(uint32_t *)(v21 + 24);
    if ( (*(uint8_t *)(v9 + (uint8_t)v8) & 8) != 0 )
      goto LABEL_20;
    src = (uint8_t *)v6[2];
    v11 = v6[3] - (uint32_t)(uintptr_t)(src);
    if ( v22 - v20 - 1 <= v11 )
      v11 = v22 - v20 - 1;
    if ( v11 <= 1 )
    {
      ++v20;
      *dest = v8;
      v17 = v6[2];
      v18 = v6[3];
      if ( v17 >= v18 )
      {
        if ( G4_VCALL<int>(v6, 40) == -1 )
        {
          v8 = -1;
          goto LABEL_31;
        }
        v19 = (uint8_t *)v6[2];
        v18 = v6[3];
      }
      else
      {
        v19 = (uint8_t *)(v17 + 1);
        v6[2] = (uint32_t)(uintptr_t)(v19);
      }
      if ( v18 <= (unsigned int)(uintptr_t)(v19) )
        v8 = G4_VCALL<int>(v6, 36);
      else
        v8 = *v19;
LABEL_31:
      ++dest;
    }
    else
    {
      v12 = (unsigned int)(uintptr_t)(&src[v11]);
      v13 = src + 1;
      if ( v12 > (unsigned int)(uintptr_t)(src + 1) && (*(uint8_t *)(v9 + src[1]) & 8) == 0 )
      {
        do
          ++v13;
        while ( v13 != (uint8_t *)v12 && (*(uint8_t *)(v9 + *v13) & 8) == 0 );
      }
      n = v13 - src;
      memcpy(dest, src, n);
      v20 += n;
      v15 = (uint8_t *)(n + v6[2]);
      v16 = (unsigned int)(uintptr_t)(v15) < v6[3];
      v6[2] = (uint32_t)(uintptr_t)(v15);
      if ( v16 )
        v8 = *v15;
      else
        v8 = G4_VCALL<int>(v6, 36);
      dest += n;
    }
  }
  if ( v8 != -1 )
  {
LABEL_20:
    v2 = 0;
    goto LABEL_21;
  }
LABEL_32:
  v2 = 2;
LABEL_21:
  *dest = 0;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 8) = 0;
  if ( v20 == 0 )
  {
    v2 |= 4u;
    goto LABEL_2;
  }
  if ( v2 != 0 )
  {
LABEL_2:
    sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | v2);
    return a1;
  }
  return a1;
}


// ============================================================================
// Address:   0x19056d0 (size: 853 bytes)
// Symbol:    sub_19056D0
// Demangled: sub_19056D0
// ============================================================================
uint32_t *sub_19056D0(uint32_t *a1, int *a2)
{
  int v2;
  char *v4;
  int v5;
  uint32_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  uint8_t *v10;
  int v11;
  unsigned int v12;
  uint8_t *v13;
  size_t v14;
  uint8_t *v15;
  bool v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  typedef unsigned int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef volatile int32_t *_g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v26)) > _g4_s3 ? (27u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v27)) > _g4_s4 ? (28u + sizeof(_g4_t_v27)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 27u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);

  sub_1913480(&v26, a1, 0);
  v2 = 4;
  if ( v26 == 0 )
    goto LABEL_2;
  g4_std::string::clear(a2, 0, *(uint32_t *)(*a2 - 12), 0);
  v4 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  v5 = *((uint32_t *)v4 + 2);
  if ( v5 <= 0 )
    v5 = 1073741820;
  v24 = v5;
  sub_1901AC0(v27, (volatile int32_t **)v4 + 27);
  v25 = (int)(uintptr_t)(sub_191CFA0(v27));
  sub_1902180(v27);
  v6 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v7 = (uint8_t *)v6[2];
  if ( (unsigned int)(uintptr_t)(v7) >= v6[3] )
  {
    v8 = (*(int (**)(uint32_t))(*v6 + 36))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120));
    if ( v8 == -1 )
    {
      v23 = 0;
LABEL_23:
      v2 = 2;
      goto LABEL_9;
    }
  }
  else
  {
    LOBYTE(v8) = *v7;
  }
  v23 = 0;
  v9 = *(uint32_t *)(v25 + 24);
  if ( (*(uint8_t *)(v9 + (uint8_t)v8) & 8) != 0 )
    goto LABEL_8;
  while ( 1 )
  {
    v10 = (uint8_t *)v6[2];
    v11 = v6[3] - (uint32_t)(uintptr_t)(v10);
    if ( (int)(v24 - v23) <= v11 )
      v11 = v24 - v23;
    if ( v11 > 1 )
    {
      v12 = (unsigned int)(uintptr_t)(&v10[v11]);
      v13 = v10 + 1;
      if ( v12 > (unsigned int)(uintptr_t)(v10 + 1) && (*(uint8_t *)(v9 + v10[1]) & 8) == 0 )
      {
        do
          ++v13;
        while ( v13 != (uint8_t *)v12 && (*(uint8_t *)(v9 + *v13) & 8) == 0 );
      }
      v14 = v13 - v10;
      g4_std::string::append((int)(uintptr_t)(a2), v10, v14);
      v23 += v14;
      v15 = (uint8_t *)(v14 + v6[2]);
      v16 = (unsigned int)(uintptr_t)(v15) < v6[3];
      v6[2] = (uint32_t)(uintptr_t)(v15);
      if ( v16 )
      {
LABEL_20:
        v8 = *v15;
        goto LABEL_21;
      }
      goto LABEL_35;
    }
    v17 = *a2;
    v18 = *(uint32_t *)(*a2 - 12);
    v19 = v18 + 1;
    if ( (unsigned int)(v18 + 1) > *(uint32_t *)(*a2 - 8) || *(int *)(v17 - 4) > 0 )
    {
      sub_1939B80(a2, v18 + 1);
      v17 = *a2;
      v18 = *(uint32_t *)(*a2 - 12);
    }
    *(uint8_t *)(v17 + v18) = v8;
    v20 = *a2;
    if ( (uint32_t *)(*a2 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v20 - 4) = 0;
      *(uint32_t *)(v20 - 12) = v19;
      *(uint8_t *)(v20 + v19) = 0;
    }
    v21 = v6[2];
    v22 = v6[3];
    ++v23;
    if ( v21 < v22 )
    {
      v15 = (uint8_t *)(v21 + 1);
      v6[2] = (uint32_t)(uintptr_t)(v15);
      goto LABEL_34;
    }
    if ( G4_VCALL<int>(v6, 40) != -1 )
    {
      v15 = (uint8_t *)v6[2];
      v22 = v6[3];
LABEL_34:
      if ( (unsigned int)(uintptr_t)(v15) < v22 )
        goto LABEL_20;
LABEL_35:
      v8 = G4_VCALL<int>(v6, 36);
      goto LABEL_21;
    }
    v8 = -1;
LABEL_21:
    if ( v24 <= v23 )
      break;
    if ( v8 == -1 )
      goto LABEL_23;
    v9 = *(uint32_t *)(v25 + 24);
    if ( (*(uint8_t *)(v9 + (uint8_t)v8) & 8) != 0 )
      goto LABEL_8;
  }
  if ( v8 == -1 )
    goto LABEL_23;
LABEL_8:
  v2 = 0;
LABEL_9:
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 8) = 0;
  if ( v23 == 0 )
  {
    v2 |= 4u;
    goto LABEL_2;
  }
  if ( v2 != 0 )
  {
LABEL_2:
    sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | v2);
    return a1;
  }
  return a1;
}


// ============================================================================
// Address:   0x1905a30 (size: 805 bytes)
// Symbol:    sub_1905A30
// Demangled: sub_1905A30
// ============================================================================
uint32_t *sub_1905A30(uint32_t *a1, int *a2, uint8_t a3)
{
  int v3;
  uint32_t *v5;
  uint8_t *s;
  unsigned int v7;
  signed int n;
  uint8_t *v9;
  uint8_t *v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  typedef uint8_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v20)) > _g4_s2 ? (31u + sizeof(_g4_t_v20)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 31u);

  sub_1913480(v20, a1, 1);
  v3 = 4;
  if ( v20[0] == 0 )
    goto LABEL_2;
  g4_std::string::clear(a2, 0, *(uint32_t *)(*a2 - 12), 0);
  v5 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  s = (uint8_t *)v5[2];
  if ( (unsigned int)(uintptr_t)(s) >= v5[3] )
  {
    v19 = G4_VCALL<int>(v5, 36);
    if ( v19 == -1 )
    {
      v7 = 0;
      goto LABEL_23;
    }
    s = (uint8_t *)v5[2];
  }
  else
  {
    v19 = *s;
  }
  v7 = 0;
  if ( a3 == v19 )
    goto LABEL_6;
  while ( 1 )
  {
    n = 1073741820 - v7;
    if ( (int)(1073741820 - v7) > v5[3] - (int)(uintptr_t)(s) )
      n = v5[3] - (uint32_t)(uintptr_t)(s);
    if ( n > 1 )
    {
      v18 = s;
      v9 = (uint8_t *)(memchr(s, (char)a3, n));
      if ( v9 != nullptr )
        n = v9 - v18;
      g4_std::string::append((int)(uintptr_t)(a2), v18, n);
      v7 += n;
      v10 = (uint8_t *)(n + v5[2]);
      v11 = (unsigned int)(uintptr_t)(v10) < v5[3];
      v5[2] = (uint32_t)(uintptr_t)(v10);
      if ( v11 )
      {
LABEL_16:
        v19 = *v10;
        goto LABEL_17;
      }
      goto LABEL_35;
    }
    v12 = *a2;
    v13 = *(uint32_t *)(*a2 - 12);
    v14 = v13 + 1;
    if ( (unsigned int)(v13 + 1) > *(uint32_t *)(*a2 - 8) || *(int *)(v12 - 4) > 0 )
    {
      sub_1939B80(a2, v13 + 1);
      v12 = *a2;
      v13 = *(uint32_t *)(*a2 - 12);
    }
    *(uint8_t *)(v12 + v13) = v19;
    v15 = *a2;
    if ( (uint32_t *)(*a2 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v15 - 4) = 0;
      *(uint32_t *)(v15 - 12) = v14;
      *(uint8_t *)(v15 + v14) = 0;
    }
    v16 = v5[2];
    v17 = v5[3];
    ++v7;
    if ( v16 < v17 )
    {
      v10 = (uint8_t *)(v16 + 1);
      v5[2] = (uint32_t)(uintptr_t)(v10);
LABEL_34:
      if ( v17 > (unsigned int)(uintptr_t)(v10) )
        goto LABEL_16;
LABEL_35:
      v19 = G4_VCALL<int>(v5, 36);
      goto LABEL_17;
    }
    v19 = -1;
    if ( G4_VCALL<int>(v5, 40) != -1 )
    {
      v10 = (uint8_t *)v5[2];
      v17 = v5[3];
      goto LABEL_34;
    }
LABEL_17:
    if ( v7 > 0x3FFFFFFB )
      break;
    if ( v19 == -1 )
      goto LABEL_23;
    s = (uint8_t *)v5[2];
    if ( v19 == a3 )
      goto LABEL_6;
  }
  if ( v19 == -1 )
  {
LABEL_23:
    v3 = 2;
    goto LABEL_24;
  }
  if ( a3 != v19 )
  {
    v3 = 4;
    goto LABEL_24;
  }
  s = (uint8_t *)v5[2];
LABEL_6:
  ++v7;
  if ( (unsigned int)(uintptr_t)(s) >= v5[3] )
  {
    G4_VCALL<void>(v5, 40);
    v3 = 0;
  }
  else
  {
    v3 = 0;
    v5[2] = (uint32_t)(uintptr_t)(s + 1);
  }
LABEL_24:
  if ( v7 == 0 )
  {
    v3 |= 4u;
    goto LABEL_2;
  }
  if ( v3 != 0 )
  {
LABEL_2:
    sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | v3);
    return a1;
  }
  return a1;
}


// ============================================================================
// Address:   0x1905d60 (size: 614 bytes)
// Symbol:    sub_1905D60
// Demangled: sub_1905D60
// ============================================================================
uint32_t *sub_1905D60(uint32_t *a1, wchar_t *s1, int a3, wchar_t c)
{
  int v4;
  int v5;
  uint32_t *v7;
  wchar_t *v8;
  wchar_t v9;
  int v10;
  unsigned int v11;
  bool v12;
  const wchar_t *s;
  signed int n;
  wchar_t *v15;
  const wchar_t *v16;
  wchar_t *v17;
  int v18;
  typedef size_t _g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef signed int _g4_t_v21;
  typedef char _g4_t_v22[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v22)) > _g4_s3 ? (31u + sizeof(_g4_t_v22)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_19163C0(v22, a1, 1);
  if ( v22[0] != 0 )
  {
    v7 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
    v8 = (wchar_t *)v7[2];
    if ( (unsigned int)(uintptr_t)(v8) >= v7[3] )
LABEL_31:
      v9 = G4_VCALL<int>(v7, 36);
    else
LABEL_11:
      v9 = *v8;
LABEL_12:
    v4 = a1[1];
    while ( 1 )
    {
      v10 = v4 + 1;
      if ( v4 + 1 >= a3 )
        break;
      if ( v9 == -1 )
        goto LABEL_32;
      if ( v9 == c )
        goto LABEL_16;
      s = (const wchar_t *)v7[2];
      v21 = a3 - v4 - 1;
      v19 = v7[3];
      n = (int)(v19 - (uint32_t)(uintptr_t)(s)) >> 2;
      if ( v21 <= n )
        n = v21;
      if ( n <= 1 )
      {
        *s1++ = v9;
        a1[1] = v10;
        if ( v19 <= (unsigned int)(uintptr_t)(s) )
        {
          v18 = G4_VCALL<int>(v7, 40);
        }
        else
        {
          v18 = *s;
          v7[2] = (uint32_t)(uintptr_t)(s + 1);
        }
        if ( v18 == -1 )
        {
          v9 = -1;
          goto LABEL_12;
        }
        v8 = (wchar_t *)v7[2];
        if ( (unsigned int)(uintptr_t)(v8) < v7[3] )
          goto LABEL_11;
        goto LABEL_31;
      }
      v20 = n;
      v15 = (wchar_t *)(wmemchr(s, c, n));
      v16 = (const wchar_t *)v7[2];
      if ( v15 != nullptr )
      {
        n = v15 - v16;
        v20 = n;
      }
      wmemcpy(s1, v16, v20);
      v4 = a1[1] + n;
      s1 += v20;
      v17 = (wchar_t *)(v7[2] + 4 * v20);
      v12 = (unsigned int)(uintptr_t)(v17) < v7[3];
      v7[2] = (uint32_t)(uintptr_t)(v17);
      a1[1] = v4;
      if ( !v12 )
        goto LABEL_31;
      v9 = *v17;
    }
    if ( v9 == -1 )
    {
LABEL_32:
      v5 = 2;
      goto LABEL_3;
    }
    v5 = 4;
    if ( c != v9 )
      goto LABEL_3;
LABEL_16:
    v11 = v7[2];
    v12 = v11 < v7[3];
    a1[1] = v10;
    if ( v12 )
    {
      ++v4;
      v7[2] = v11 + 4;
      v5 = 0;
      goto LABEL_3;
    }
    G4_VCALL<void>(v7, 40);
  }
  v4 = a1[1];
  v5 = 0;
LABEL_3:
  if ( a3 > 0 )
    *s1 = 0;
  if ( v4 == 0 )
  {
    v5 |= 4u;
LABEL_7:
    sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | v5);
    return a1;
  }
  if ( v5 != 0 )
    goto LABEL_7;
  return a1;
}


// ============================================================================
// Address:   0x1905fd0 (size: 770 bytes)
// Symbol:    sub_1905FD0
// Demangled: sub_1905FD0
// ============================================================================
uint32_t *sub_1905FD0(uint32_t *a1, int a2, wchar_t c)
{
  uint32_t *result;
  int v4;
  int *v5;
  int v6;
  signed int i;
  int *v8;
  signed int n;
  wchar_t *v10;
  int v11;
  signed int v12;
  int *v13;
  bool v14;
  int v15;
  int *v16;
  int v17;
  unsigned int v18;
  typedef unsigned int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef uint8_t _g4_t_v21[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (5u + sizeof(_g4_t_v19)) > _g4_s0 ? (5u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v21)) > _g4_s2 ? (28u + sizeof(_g4_t_v21)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 5u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);

  if ( c == -1 )
    return (uint32_t *)sub_1953AA0(a1, a2);
  a1[1] = 0;
  sub_19163C0(v21, a1, 1);
  result = a1;
  if ( a2 > 0 && v21[0] != 0 )
  {
    v4 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
    v5 = *(int **)(v4 + 8);
    if ( (unsigned int)(uintptr_t)(v5) >= *(uint32_t *)(v4 + 12) )
      v6 = G4_VCALL<int>(v4, 36);
    else
      v6 = *v5;
    v20 = 0;
    for ( i = a1[1]; ; i = 0x80000000 )
    {
LABEL_7:
      if ( i < a2 )
      {
        while ( v6 != -1 && c != v6 )
        {
          v19 = *(uint32_t *)(v4 + 12);
          v8 = *(int **)(v4 + 8);
          n = (int)(v19 - (uint32_t)(uintptr_t)(v8)) >> 2;
          if ( a2 - i <= n )
            n = a2 - i;
          if ( n <= 1 )
          {
            a1[1] = i + 1;
            if ( v19 <= (unsigned int)(uintptr_t)(v8) )
            {
              v15 = G4_VCALL<int>(v4, 40);
            }
            else
            {
              v15 = *v8;
              *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(v8 + 1);
            }
            if ( v15 == -1 )
            {
              v6 = -1;
            }
            else
            {
              v16 = *(int **)(v4 + 8);
              if ( (unsigned int)(uintptr_t)(v16) >= *(uint32_t *)(v4 + 12) )
                v6 = G4_VCALL<int>(v4, 36);
              else
                v6 = *v16;
            }
            i = a1[1];
            goto LABEL_7;
          }
          v10 = (wchar_t *)(wmemchr(*(const wchar_t **)(v4 + 8), c, n));
          v11 = *(uint32_t *)(v4 + 8);
          v12 = n;
          if ( v10 != nullptr )
          {
            n = ((int)(uintptr_t)(v10) - v11) >> 2;
            v12 = n;
          }
          v13 = (int *)(v11 + 4 * v12);
          *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(v13);
          i = a1[1] + n;
          v14 = (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(v4 + 12);
          a1[1] = i;
          if ( !v14 )
          {
            v6 = G4_VCALL<int>(v4, 36);
            i = a1[1];
            goto LABEL_7;
          }
          v6 = *v13;
          if ( i >= a2 )
            break;
        }
      }
      if ( a2 != 0x7FFFFFFF || v6 == -1 || c == v6 )
        break;
      v20 = 1;
      a1[1] = 0x80000000;
    }
    if ( v20 != 0 )
      a1[1] = 0x7FFFFFFF;
    if ( v6 == -1 )
    {
      sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 2);
    }
    else
    {
      result = a1;
      if ( c != v6 )
        return result;
      v17 = a1[1];
      if ( v17 != 0x7FFFFFFF )
        a1[1] = v17 + 1;
      v18 = *(uint32_t *)(v4 + 8);
      if ( v18 < *(uint32_t *)(v4 + 12) )
      {
        *(uint32_t *)(v4 + 8) = v18 + 4;
        return a1;
      }
      G4_VCALL<void>(v4, 40);
    }
    return a1;
  }
  return result;
}


// ============================================================================
// Address:   0x19062e0 (size: 795 bytes)
// Symbol:    sub_19062E0
// Demangled: sub_19062E0
// ============================================================================
uint32_t *sub_19062E0(uint32_t *a1, int *a2, wchar_t c)
{
  int v3;
  uint32_t *v5;
  int *v6;
  int v7;
  const wchar_t *s;
  signed int n;
  wchar_t *v10;
  wchar_t *v11;
  int *v12;
  bool v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef uint8_t _g4_t_v21[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v21)) > _g4_s3 ? (31u + sizeof(_g4_t_v21)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 31u);

  sub_19163C0(v21, a1, 1);
  v3 = 4;
  if ( v21[0] == 0 )
    goto LABEL_2;
  sub_194E130(a2, 0, *(uint32_t *)(*a2 - 12), 0);
  v5 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
  v6 = (int *)v5[2];
  if ( (unsigned int)(uintptr_t)(v6) >= v5[3] )
    v7 = (*(int (**)(uint32_t))(*v5 + 36))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124));
  else
    v7 = *v6;
  v19 = 0;
  if ( v7 == -1 )
  {
LABEL_33:
    v3 = 2;
    goto LABEL_34;
  }
  if ( c == v7 )
    goto LABEL_17;
  while ( 1 )
  {
    s = (const wchar_t *)v5[2];
    v20 = v5[3];
    n = 268435454 - v19;
    if ( (int)(268435454 - v19) > (int)(v20 - (uint32_t)(uintptr_t)(s)) >> 2 )
      n = (int)(v20 - (uint32_t)(uintptr_t)(s)) >> 2;
    if ( n > 1 )
    {
      v10 = (wchar_t *)(wmemchr(s, c, n));
      v11 = (wchar_t *)v5[2];
      if ( v10 != nullptr )
        n = v10 - v11;
      sub_194F410((int)(uintptr_t)(a2), v11, n);
      v19 += n;
      v12 = (int *)(v5[2] + 4 * n);
      v13 = (unsigned int)(uintptr_t)(v12) < v5[3];
      v5[2] = (uint32_t)(uintptr_t)(v12);
      if ( v13 )
      {
LABEL_13:
        v7 = *v12;
        goto LABEL_14;
      }
      goto LABEL_32;
    }
    v15 = *a2;
    v16 = *(uint32_t *)(*a2 - 12);
    v18 = v16 + 1;
    if ( (unsigned int)(v16 + 1) > *(uint32_t *)(*a2 - 8) || *(int *)(v15 - 4) > 0 )
    {
      sub_194F140(a2, v18);
      v15 = *a2;
      s = (const wchar_t *)v5[2];
      v20 = v5[3];
      v16 = *(uint32_t *)(*a2 - 12);
    }
    *(uint32_t *)(v15 + 4 * v16) = v7;
    if ( (void *)(v15 - 12) != &unk_213B8A8 )
    {
      *(uint32_t *)(v15 - 4) = 0;
      *(uint32_t *)(v15 - 12) = v18;
      *(uint32_t *)(v15 + 4 * v18) = 0;
    }
    ++v19;
    if ( (unsigned int)(uintptr_t)(s) >= v20 )
    {
      v17 = G4_VCALL<int>(v5, 40);
    }
    else
    {
      v17 = *s;
      v5[2] = (uint32_t)(uintptr_t)(s + 1);
    }
    if ( v17 != -1 )
    {
      v12 = (int *)v5[2];
      if ( (unsigned int)(uintptr_t)(v12) < v5[3] )
        goto LABEL_13;
LABEL_32:
      v7 = G4_VCALL<int>(v5, 36);
      goto LABEL_14;
    }
    v7 = -1;
LABEL_14:
    if ( v19 > 0xFFFFFFD )
      break;
    if ( v7 == -1 )
      goto LABEL_33;
    if ( v7 == c )
      goto LABEL_17;
  }
  if ( v7 == -1 )
    goto LABEL_33;
  if ( c != v7 )
  {
    v3 = 4;
    goto LABEL_34;
  }
LABEL_17:
  ++v19;
  v14 = v5[2];
  if ( v14 >= v5[3] )
    G4_VCALL<void>(v5, 40);
  else
    v5[2] = v14 + 4;
  v3 = 0;
LABEL_34:
  if ( v19 == 0 )
  {
    v3 |= 4u;
    goto LABEL_2;
  }
  if ( v3 != 0 )
  {
LABEL_2:
    sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | v3);
    return a1;
  }
  return a1;
}


// ============================================================================
// Address:   0x1906600 (size: 42 bytes)
// Symbol:    sub_1906600
// Demangled: sub_1906600
// ============================================================================
void sub_1906600(std::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9BF0);
  sub_1903D80(a1);
}


// ============================================================================
// Address:   0x1906630 (size: 56 bytes)
// Symbol:    sub_1906630
// Demangled: sub_1906630
// ============================================================================
void sub_1906630(std::exception *a1)
{
  sub_1906600(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1906670 (size: 168 bytes)
// Symbol:    sub_1906670
// Demangled: sub_1906670
// ============================================================================
int sub_1906670(uint32_t *a1, int a2)
{
  void *v2;
  uint16_t v4[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "regex_error", (int)(uintptr_t)(v4));
  sub_19042E0(a1, (int)(uintptr_t)(&v4[1]));
  v2 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  *a1 = ((uint32_t)(uintptr_t)&off_20A9BF0);
  a1[2] = a2;
  return a2;
}


// ============================================================================
// Address:   0x1906720 (size: 22 bytes)
// Symbol:    sub_1906720
// Demangled: sub_1906720
// ============================================================================
const char *sub_1906720()
{
  return "future";
}


// ============================================================================
// Address:   0x1906740 (size: 42 bytes)
// Symbol:    sub_1906740
// Demangled: sub_1906740
// ============================================================================
void sub_1906740(std::exception *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9C10);
  sub_1903F50(a1);
}


// ============================================================================
// Address:   0x1906770 (size: 56 bytes)
// Symbol:    sub_1906770
// Demangled: sub_1906770
// ============================================================================
void sub_1906770(std::exception *a1)
{
  sub_1906740(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x19067b0 (size: 42 bytes)
// Symbol:    sub_19067B0
// Demangled: sub_19067B0
// ============================================================================
uint32_t *sub_19067B0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9C28);
  return sub_1904440(a1);
}


// ============================================================================
// Address:   0x19067e0 (size: 64 bytes)
// Symbol:    sub_19067E0
// Demangled: sub_19067E0
// ============================================================================
void sub_19067E0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9C28);
  sub_1904440(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1906820 (size: 141 bytes)
// Symbol:    sub_1906820
// Demangled: sub_1906820
// ============================================================================
int sub_1906820(int a1)
{
  int result;
  void *v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);

  (*(void (**)(int *, uint32_t, uint32_t))(**(uint32_t **)(a1 + 12) + 12))(&v4, *(uint32_t *)(a1 + 12), *(uint32_t *)(a1 + 8));
  result = v4;
  v2 = (void *)(v4 - 12);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    v3 = result;
    g4_std::string::Rep::M_destroy(v2);
    return v3;
  }
  return result;
}


// ============================================================================
// Address:   0x19068b0 (size: 293 bytes)
// Symbol:    sub_19068B0
// Demangled: sub_19068B0
// ============================================================================
uint32_t *sub_19068B0(uint32_t *a1, int a2, int a3)
{
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  switch ( a3 )
  {
    case 0:
      g4_std_compat::string_assign((int)(uintptr_t)(a1), "Broken promise", 0xEu);
      return a1;
    case 1:
      g4_std_compat::string_assign((int)(uintptr_t)(a1), "Future already retrieved", 0x18u);
      return a1;
    case 2:
      g4_std_compat::string_assign((int)(uintptr_t)(a1), "Promise already satisfied", 0x19u);
      return a1;
    case 3:
      g4_std_compat::string_assign((int)(uintptr_t)(a1), "No associated state", 0x13u);
      return a1;
    default:
      g4_std_compat::string_assign((int)(uintptr_t)(a1), "Unknown error", 0xDu);
      return a1;
  }
}


// ============================================================================
// Address:   0x19069e0 (size: 158 bytes)
// Symbol:    sub_19069E0
// Demangled: sub_19069E0
// ============================================================================
int *sub_19069E0()
{
  if ( byte_213B768 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_213B768) != 0 )
  {
    sub_19046F0(&dword_213B770);
    dword_213B770 = (int)(uintptr_t)(&off_20A9C28);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_213B768);
    __cxa_atexit((void (*)(void *))((uint32_t * (*)(uint32_t *))sub_19067B0), &dword_213B770, &unk_20D1280);
  }
  return (int *)(&dword_213B770);
}


// ============================================================================
// Address:   0x1906a80 (size: 42 bytes)
// Symbol:    sub_1906A80
// Demangled: sub_1906A80
// ============================================================================
int sub_1906A80(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20A9C68);
  return sub_18FF750((int)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1906ab0 (size: 56 bytes)
// Symbol:    sub_1906AB0
// Demangled: sub_1906AB0
// ============================================================================
void sub_1906AB0(uint32_t *a1)
{
  sub_1906A80(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1906af0 (size: 191 bytes)
// Symbol:    sub_1906AF0
// Demangled: sub_1906AF0
// ============================================================================
int (**sub_1906AF0(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);

  sub_18FFA30((int)(uintptr_t)(a1), 0, 0, a3);
  result = (int (**)(int))(uintptr_t)(&off_20A9C68);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9C68);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908860(a1 + 2);
    return (int (**)(int))sub_1908800(a1 + 2, a2);
  }
  return result;
}


// ============================================================================
// Address:   0x1906bb0 (size: 363 bytes)
// Symbol:    sub_1906BB0
// Demangled: sub_1906BB0
// ============================================================================
wctype_t sub_1906BB0(int a1, char a2)
{
  switch ( a2 )
  {
    case 1:
      return wctype("upper");
    case 2:
      return wctype("lower");
    case 3:
      return wctype("alpha");
    case 4:
      return wctype("digit");
    case 7:
      return wctype("alnum");
    case 8:
      return wctype("space");
    case 16:
      return wctype("punct");
    case 23:
      return wctype("graph");
    case 32:
      return wctype("cntrl");
    case 68:
      return wctype("xdigit");
    case -105:
      return wctype("print");
    default:
      return 0;
  }
}


// ============================================================================
// Address:   0x1906d20 (size: 34 bytes)
// Symbol:    sub_1906D20
// Demangled: sub_1906D20
// ============================================================================
wint_t sub_1906D20(int a1, wint_t wc)
{
  return towupper(wc);
}


// ============================================================================
// Address:   0x1906d50 (size: 61 bytes)
// Symbol:    sub_1906D50
// Demangled: sub_1906D50
// ============================================================================
unsigned int sub_1906D50(int a1, wint_t *a2, unsigned int a3)
{
  wint_t *i;

  for ( i = a2; a3 > (unsigned int)(uintptr_t)(i); ++i )
    *i = towupper(*i);
  return a3;
}


// ============================================================================
// Address:   0x1906d90 (size: 34 bytes)
// Symbol:    sub_1906D90
// Demangled: sub_1906D90
// ============================================================================
wint_t sub_1906D90(int a1, wint_t wc)
{
  return towlower(wc);
}


// ============================================================================
// Address:   0x1906dc0 (size: 61 bytes)
// Symbol:    sub_1906DC0
// Demangled: sub_1906DC0
// ============================================================================
unsigned int sub_1906DC0(int a1, wint_t *a2, unsigned int a3)
{
  wint_t *i;

  for ( i = a2; a3 > (unsigned int)(uintptr_t)(i); ++i )
    *i = towlower(*i);
  return a3;
}


// ============================================================================
// Address:   0x1906e00 (size: 118 bytes)
// Symbol:    sub_1906E00
// Demangled: sub_1906E00
// ============================================================================
int sub_1906E00(int a1, uint8_t a2, wint_t wc)
{
  int v3;
  int v6;
  uint8_t v7;

  v3 = 0;
  while ( 1 )
  {
    if ( (a2 & *(uint8_t *)(a1 + v3 + 1168)) != 0 )
    {
      v7 = a2;
      v6 = iswctype(wc, *(uint32_t *)(a1 + 4 * v3 + 1184));
      a2 = v7;
      if ( v6 != 0 )
        break;
    }
    if ( ++v3 == 16 )
      return 0;
  }
  return 1;
}


// ============================================================================
// Address:   0x1906e80 (size: 134 bytes)
// Symbol:    sub_1906E80
// Demangled: sub_1906E80
// ============================================================================
unsigned int sub_1906E80(int a1, wint_t *a2, unsigned int a3, uint8_t *a4)
{
  wint_t *i;
  int v5;
  char v7;

  for ( i = a2; a3 > (unsigned int)(uintptr_t)(i); ++a4 )
  {
    v5 = 0;
    v7 = 0;
    do
    {
      if ( iswctype(*i, *(uint32_t *)(a1 + 4 * v5 + 1184)) != 0 )
        v7 |= *(uint8_t *)(a1 + v5 + 1168);
      ++v5;
    }
    while ( v5 != 16 );
    ++i;
    *a4 = v7;
  }
  return a3;
}


// ============================================================================
// Address:   0x1906f10 (size: 74 bytes)
// Symbol:    sub_1906F10
// Demangled: sub_1906F10
// ============================================================================
uint32_t *sub_1906F10(int a1, char a2, uint32_t *a3, unsigned int a4)
{
  uint32_t *i;

  for ( i = a3; a4 > (unsigned int)(uintptr_t)(i); ++i )
  {
    if ( G4_VCALL<uint8_t>(a1, 8, a2, *i) != 0 )
      break;
  }
  return i;
}


// ============================================================================
// Address:   0x1906f60 (size: 74 bytes)
// Symbol:    sub_1906F60
// Demangled: sub_1906F60
// ============================================================================
uint32_t *sub_1906F60(int a1, char a2, uint32_t *a3, unsigned int a4)
{
  uint32_t *i;

  for ( i = a3; a4 > (unsigned int)(uintptr_t)(i); ++i )
  {
    if ( G4_VCALL<uint8_t>(a1, 8, a2, *i) == 0 )
      break;
  }
  return i;
}


// ============================================================================
// Address:   0x1906fb0 (size: 19 bytes)
// Symbol:    sub_1906FB0
// Demangled: sub_1906FB0
// ============================================================================
int sub_1906FB0(int a1, uint8_t a2)
{
  return *(uint32_t *)(a1 + 4 * a2 + 144);
}


// ============================================================================
// Address:   0x1906fd0 (size: 49 bytes)
// Symbol:    sub_1906FD0
// Demangled: sub_1906FD0
// ============================================================================
uint8_t *sub_1906FD0(int a1, uint8_t *a2, uint8_t *a3, uint32_t *a4)
{
  uint8_t *v4;
  uint8_t *result;
  int v7;

  v4 = a2;
  result = a3;
  if ( a2 < a3 )
  {
    do
    {
      v7 = *v4++;
      *a4++ = *(uint32_t *)(a1 + 4 * v7 + 144);
    }
    while ( v4 != a3 );
  }
  return result;
}


// ============================================================================
// Address:   0x1907010 (size: 100 bytes)
// Symbol:    sub_1907010
// Demangled: sub_1907010
// ============================================================================
int sub_1907010(int a1, wint_t c, uint8_t a3)
{
  int v3;
  int v4;

  v3 = a3;
  if ( c <= 0x7F && *(uint8_t *)(a1 + 12) != 0 )
    return *(uint8_t *)(a1 + c + 13);
  v4 = wctob(c);
  if ( v4 != -1 )
    return v4;
  return v3;
}


// ============================================================================
// Address:   0x1907080 (size: 175 bytes)
// Symbol:    sub_1907080
// Demangled: sub_1907080
// ============================================================================
unsigned int sub_1907080(int a1, wint_t *a2, unsigned int a3, char a4, uint8_t *a5)
{
  int v5;
  wint_t *v6;
  wint_t c;
  int v9;
  wint_t v11;
  int v12;
  int v13;

  v5 = a1;
  v6 = a2;
  if ( *(uint8_t *)(a1 + 12) != 0 )
  {
    if ( (unsigned int)(uintptr_t)(a2) < a3 )
    {
      v11 = *a2;
      if ( *a2 > 0x7F )
        goto LABEL_12;
LABEL_9:
      *a5 = *(uint8_t *)(v5 + v11 + 13);
      while ( 1 )
      {
        ++v6;
        ++a5;
        if ( a3 <= (unsigned int)(uintptr_t)(v6) )
          break;
        v11 = *v6;
        if ( *v6 <= 0x7F )
          goto LABEL_9;
LABEL_12:
        v13 = v5;
        v12 = wctob(v11);
        if ( v12 == -1 )
          LOBYTE(v12) = a4;
        *a5 = v12;
        v5 = v13;
      }
    }
  }
  else if ( (unsigned int)(uintptr_t)(a2) < a3 )
  {
    do
    {
      c = *v6++;
      v9 = wctob(c);
      if ( v9 == -1 )
        LOBYTE(v9) = a4;
      *a5++ = v9;
    }
    while ( a3 > (unsigned int)(uintptr_t)(v6) );
  }
  return a3;
}


// ============================================================================
// Address:   0x1907130 (size: 162 bytes)
// Symbol:    sub_1907130
// Demangled: sub_1907130
// ============================================================================
wctype_t sub_1907130(int a1)
{
  wint_t c;
  int v2;
  int i;
  int v4;
  wctype_t result;

  for ( c = 0; c != 128; ++c )
  {
    v2 = wctob(c);
    if ( v2 == -1 )
    {
      *(uint8_t *)(a1 + 12) = 0;
      goto LABEL_5;
    }
    *(uint8_t *)(a1 + c + 13) = v2;
  }
  *(uint8_t *)(a1 + 12) = 1;
LABEL_5:
  for ( i = 0; i != 256; ++i )
    *(uint32_t *)(a1 + 4 * i + 144) = btowc(i);
  v4 = 0;
  LOWORD(i) = 1;
  do
  {
    *(uint8_t *)(a1 + v4 + 1168) = i << v4;
    result = sub_1906BB0(a1, i << v4);
    *(uint32_t *)(a1 + 4 * v4++ + 1184) = result;
  }
  while ( v4 != 16 );
  return result;
}


// ============================================================================
// Address:   0x19071e0 (size: 28 bytes)
// Symbol:    sub_19071E0
// Demangled: sub_19071E0
// ============================================================================
uint32_t *sub_19071E0(uint32_t *a1)
{
  *a1 = 67109634;
  return a1;
}


// ============================================================================
// Address:   0x1907200 (size: 304 bytes)
// Symbol:    sub_1907200
// Demangled: sub_1907200
// ============================================================================
int sub_1907200(int a1)
{
  int v1;
  uint32_t *v2;
  char *v3;
  int result;

  v1 = *(uint32_t *)(a1 + 8);
  if ( v1 == 0 )
  {
    v1 = opNew(0x44u);
    *(uint32_t *)(v1 + 4) = 0;
    *(uint32_t *)(v1 + 8) = 0;
    *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&off_20AAB60);
    *(uint32_t *)(v1 + 12) = 0;
    *(uint8_t *)(v1 + 16) = 0;
    *(uint8_t *)(v1 + 17) = 0;
    *(uint8_t *)(v1 + 18) = 0;
    *(uint32_t *)(v1 + 20) = 0;
    *(uint32_t *)(v1 + 24) = 0;
    *(uint32_t *)(v1 + 28) = 0;
    *(uint32_t *)(v1 + 32) = 0;
    *(uint32_t *)(v1 + 36) = 0;
    *(uint32_t *)(v1 + 40) = 0;
    *(uint32_t *)(v1 + 44) = 0;
    *(uint8_t *)(v1 + 48) = 0;
    *(uint8_t *)(v1 + 49) = 0;
    *(uint8_t *)(v1 + 50) = 0;
    *(uint8_t *)(v1 + 51) = 0;
    *(uint8_t *)(v1 + 52) = 0;
    *(uint8_t *)(v1 + 53) = 0;
    *(uint8_t *)(v1 + 54) = 0;
    *(uint8_t *)(v1 + 55) = 0;
    *(uint8_t *)(v1 + 67) = 0;
    *(uint32_t *)(a1 + 8) = v1;
  }
  *(uint8_t *)(v1 + 17) = 46;
  *(uint8_t *)(*(uint32_t *)(a1 + 8) + 18) = 44;
  v2 = *(uint32_t **)(a1 + 8);
  v2[2] = (uint32_t)(uintptr_t)(&unk_1B15112);
  v2[5] = (uint32_t)(uintptr_t)(&unk_1B15112);
  v2[7] = (uint32_t)(uintptr_t)(&unk_1B15112);
  v2[9] = (uint32_t)(uintptr_t)(&unk_1B15112);
  v2[3] = 0;
  v2[6] = 0;
  v2[8] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 67109634;
  *(uint32_t *)(*(uint32_t *)(a1 + 8) + 52) = 67109634;
  v3 = (char *)(off_20CB488);
  for ( result = 0; result != 11; ++result )
    *(uint8_t *)(*(uint32_t *)(a1 + 8) + result + 56) = v3[result];
  return result;
}


// ============================================================================
// Address:   0x1907330 (size: 304 bytes)
// Symbol:    sub_1907330
// Demangled: sub_1907330
// ============================================================================
int sub_1907330(int a1)
{
  int v1;
  uint32_t *v2;
  char *v3;
  int result;

  v1 = *(uint32_t *)(a1 + 8);
  if ( v1 == 0 )
  {
    v1 = opNew(0x44u);
    *(uint32_t *)(v1 + 4) = 0;
    *(uint32_t *)(v1 + 8) = 0;
    *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&off_20AAB50);
    *(uint32_t *)(v1 + 12) = 0;
    *(uint8_t *)(v1 + 16) = 0;
    *(uint8_t *)(v1 + 17) = 0;
    *(uint8_t *)(v1 + 18) = 0;
    *(uint32_t *)(v1 + 20) = 0;
    *(uint32_t *)(v1 + 24) = 0;
    *(uint32_t *)(v1 + 28) = 0;
    *(uint32_t *)(v1 + 32) = 0;
    *(uint32_t *)(v1 + 36) = 0;
    *(uint32_t *)(v1 + 40) = 0;
    *(uint32_t *)(v1 + 44) = 0;
    *(uint8_t *)(v1 + 48) = 0;
    *(uint8_t *)(v1 + 49) = 0;
    *(uint8_t *)(v1 + 50) = 0;
    *(uint8_t *)(v1 + 51) = 0;
    *(uint8_t *)(v1 + 52) = 0;
    *(uint8_t *)(v1 + 53) = 0;
    *(uint8_t *)(v1 + 54) = 0;
    *(uint8_t *)(v1 + 55) = 0;
    *(uint8_t *)(v1 + 67) = 0;
    *(uint32_t *)(a1 + 8) = v1;
  }
  *(uint8_t *)(v1 + 17) = 46;
  *(uint8_t *)(*(uint32_t *)(a1 + 8) + 18) = 44;
  v2 = *(uint32_t **)(a1 + 8);
  v2[2] = (uint32_t)(uintptr_t)(&unk_1B15112);
  v2[5] = (uint32_t)(uintptr_t)(&unk_1B15112);
  v2[7] = (uint32_t)(uintptr_t)(&unk_1B15112);
  v2[9] = (uint32_t)(uintptr_t)(&unk_1B15112);
  v2[3] = 0;
  v2[6] = 0;
  v2[8] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 67109634;
  *(uint32_t *)(*(uint32_t *)(a1 + 8) + 52) = 67109634;
  v3 = (char *)(off_20CB488);
  for ( result = 0; result != 11; ++result )
    *(uint8_t *)(*(uint32_t *)(a1 + 8) + result + 56) = v3[result];
  return result;
}


// ============================================================================
// Address:   0x1907460 (size: 98 bytes)
// Symbol:    sub_1907460
// Demangled: sub_1907460
// ============================================================================
uint32_t *sub_1907460(uint32_t *a1)
{
  int v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20AA8C8);
  v1 = a1[2];
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(a1[2]);
  return sub_1901990(a1);
}


// ============================================================================
// Address:   0x19074d0 (size: 56 bytes)
// Symbol:    sub_19074D0
// Demangled: sub_19074D0
// ============================================================================
void sub_19074D0(uint32_t *a1)
{
  sub_1907460(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1907510 (size: 98 bytes)
// Symbol:    sub_1907510
// Demangled: sub_1907510
// ============================================================================
uint32_t *sub_1907510(uint32_t *a1)
{
  int v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20AA908);
  v1 = a1[2];
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(a1[2]);
  return sub_1901990(a1);
}


// ============================================================================
// Address:   0x1907580 (size: 56 bytes)
// Symbol:    sub_1907580
// Demangled: sub_1907580
// ============================================================================
void sub_1907580(uint32_t *a1)
{
  sub_1907510(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x19075c0 (size: 314 bytes)
// Symbol:    sub_19075C0
// Demangled: sub_19075C0
// ============================================================================
int sub_19075C0(int a1)
{
  int v1;
  int v2;
  char *v3;
  int result;

  v1 = *(uint32_t *)(a1 + 8);
  if ( v1 == 0 )
  {
    v1 = opNew(0x70u);
    *(uint32_t *)(v1 + 4) = 0;
    *(uint32_t *)(v1 + 8) = 0;
    *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&off_20AB960);
    *(uint32_t *)(v1 + 12) = 0;
    *(uint8_t *)(v1 + 16) = 0;
    *(uint32_t *)(v1 + 20) = 0;
    *(uint32_t *)(v1 + 24) = 0;
    *(uint32_t *)(v1 + 28) = 0;
    *(uint32_t *)(v1 + 32) = 0;
    *(uint32_t *)(v1 + 36) = 0;
    *(uint32_t *)(v1 + 40) = 0;
    *(uint32_t *)(v1 + 44) = 0;
    *(uint32_t *)(v1 + 48) = 0;
    *(uint32_t *)(v1 + 52) = 0;
    *(uint8_t *)(v1 + 56) = 0;
    *(uint8_t *)(v1 + 57) = 0;
    *(uint8_t *)(v1 + 58) = 0;
    *(uint8_t *)(v1 + 59) = 0;
    *(uint8_t *)(v1 + 60) = 0;
    *(uint8_t *)(v1 + 61) = 0;
    *(uint8_t *)(v1 + 62) = 0;
    *(uint8_t *)(v1 + 63) = 0;
    *(uint8_t *)(v1 + 108) = 0;
    *(uint32_t *)(a1 + 8) = v1;
  }
  *(uint32_t *)(v1 + 8) = (uint32_t)(uintptr_t)(&unk_1B15112);
  *(uint32_t *)(v1 + 28) = (uint32_t)(uintptr_t)(&unk_1CB9ED0);
  *(uint32_t *)(v1 + 36) = (uint32_t)(uintptr_t)(&unk_1CB9ED0);
  *(uint32_t *)(v1 + 44) = (uint32_t)(uintptr_t)(&unk_1CB9ED0);
  *(uint32_t *)(v1 + 20) = 46;
  *(uint32_t *)(v1 + 24) = 44;
  *(uint32_t *)(v1 + 12) = 0;
  *(uint32_t *)(v1 + 32) = 0;
  *(uint32_t *)(v1 + 40) = 0;
  *(uint32_t *)(v1 + 48) = 0;
  *(uint32_t *)(v1 + 52) = 0;
  *(uint32_t *)(v1 + 56) = 67109634;
  *(uint32_t *)(*(uint32_t *)(a1 + 8) + 60) = 67109634;
  v2 = *(uint32_t *)(a1 + 8);
  v3 = (char *)(off_20CB488);
  for ( result = 0; result != 11; ++result )
    *(uint32_t *)(v2 + 4 * result + 64) = v3[result];
  return result;
}


// ============================================================================
// Address:   0x1907700 (size: 314 bytes)
// Symbol:    sub_1907700
// Demangled: sub_1907700
// ============================================================================
int sub_1907700(int a1)
{
  int v1;
  int v2;
  char *v3;
  int result;

  v1 = *(uint32_t *)(a1 + 8);
  if ( v1 == 0 )
  {
    v1 = opNew(0x70u);
    *(uint32_t *)(v1 + 4) = 0;
    *(uint32_t *)(v1 + 8) = 0;
    *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&off_20AB950);
    *(uint32_t *)(v1 + 12) = 0;
    *(uint8_t *)(v1 + 16) = 0;
    *(uint32_t *)(v1 + 20) = 0;
    *(uint32_t *)(v1 + 24) = 0;
    *(uint32_t *)(v1 + 28) = 0;
    *(uint32_t *)(v1 + 32) = 0;
    *(uint32_t *)(v1 + 36) = 0;
    *(uint32_t *)(v1 + 40) = 0;
    *(uint32_t *)(v1 + 44) = 0;
    *(uint32_t *)(v1 + 48) = 0;
    *(uint32_t *)(v1 + 52) = 0;
    *(uint8_t *)(v1 + 56) = 0;
    *(uint8_t *)(v1 + 57) = 0;
    *(uint8_t *)(v1 + 58) = 0;
    *(uint8_t *)(v1 + 59) = 0;
    *(uint8_t *)(v1 + 60) = 0;
    *(uint8_t *)(v1 + 61) = 0;
    *(uint8_t *)(v1 + 62) = 0;
    *(uint8_t *)(v1 + 63) = 0;
    *(uint8_t *)(v1 + 108) = 0;
    *(uint32_t *)(a1 + 8) = v1;
  }
  *(uint32_t *)(v1 + 8) = (uint32_t)(uintptr_t)(&unk_1B15112);
  *(uint32_t *)(v1 + 28) = (uint32_t)(uintptr_t)(&unk_1CB9ED0);
  *(uint32_t *)(v1 + 36) = (uint32_t)(uintptr_t)(&unk_1CB9ED0);
  *(uint32_t *)(v1 + 44) = (uint32_t)(uintptr_t)(&unk_1CB9ED0);
  *(uint32_t *)(v1 + 20) = 46;
  *(uint32_t *)(v1 + 24) = 44;
  *(uint32_t *)(v1 + 12) = 0;
  *(uint32_t *)(v1 + 32) = 0;
  *(uint32_t *)(v1 + 40) = 0;
  *(uint32_t *)(v1 + 48) = 0;
  *(uint32_t *)(v1 + 52) = 0;
  *(uint32_t *)(v1 + 56) = 67109634;
  *(uint32_t *)(*(uint32_t *)(a1 + 8) + 60) = 67109634;
  v2 = *(uint32_t *)(a1 + 8);
  v3 = (char *)(off_20CB488);
  for ( result = 0; result != 11; ++result )
    *(uint32_t *)(v2 + 4 * result + 64) = v3[result];
  return result;
}


// ============================================================================
// Address:   0x1907840 (size: 98 bytes)
// Symbol:    sub_1907840
// Demangled: sub_1907840
// ============================================================================
uint32_t *sub_1907840(uint32_t *a1)
{
  int v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20AB6C8);
  v1 = a1[2];
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(a1[2]);
  return sub_1901990(a1);
}


// ============================================================================
// Address:   0x19078b0 (size: 56 bytes)
// Symbol:    sub_19078B0
// Demangled: sub_19078B0
// ============================================================================
void sub_19078B0(uint32_t *a1)
{
  sub_1907840(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x19078f0 (size: 98 bytes)
// Symbol:    sub_19078F0
// Demangled: sub_19078F0
// ============================================================================
uint32_t *sub_19078F0(uint32_t *a1)
{
  int v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20AB708);
  v1 = a1[2];
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(a1[2]);
  return sub_1901990(a1);
}


// ============================================================================
// Address:   0x1907960 (size: 56 bytes)
// Symbol:    sub_1907960
// Demangled: sub_1907960
// ============================================================================
void sub_1907960(uint32_t *a1)
{
  sub_19078F0(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x19079a0 (size: 270 bytes)
// Symbol:    sub_19079A0
// Demangled: sub_19079A0
// ============================================================================
uint32_t *sub_19079A0(int a1)
{
  int v1;
  char *v2;
  int i;
  char *v4;
  int j;
  uint32_t *result;

  v1 = *(uint32_t *)(a1 + 8);
  if ( v1 == 0 )
  {
    v1 = opNew(0x68u);
    *(uint32_t *)(v1 + 4) = 0;
    *(uint32_t *)(v1 + 8) = 0;
    *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v1 + 12) = 0;
    *(uint8_t *)(v1 + 16) = 0;
    *(uint32_t *)(v1 + 20) = 0;
    *(uint32_t *)(v1 + 24) = 0;
    *(uint32_t *)(v1 + 28) = 0;
    *(uint32_t *)(v1 + 32) = 0;
    *(uint8_t *)(v1 + 36) = 0;
    *(uint8_t *)(v1 + 37) = 0;
    *(uint8_t *)(v1 + 100) = 0;
    *(uint32_t *)(a1 + 8) = v1;
  }
  *(uint32_t *)(v1 + 12) = 0;
  *(uint32_t *)(v1 + 8) = (uint32_t)(uintptr_t)(&unk_1B15112);
  *(uint8_t *)(v1 + 16) = 0;
  *(uint8_t *)(v1 + 36) = 46;
  *(uint8_t *)(*(uint32_t *)(a1 + 8) + 37) = 44;
  v2 = (char *)(uintptr_t)(off_20CB480[0]);
  for ( i = 0; i != 36; ++i )
    *(uint8_t *)(*(uint32_t *)(a1 + 8) + i + 38) = v2[i];
  v4 = (char *)(uintptr_t)(off_20CB484[0]);
  for ( j = 0; j != 26; ++j )
    *(uint8_t *)(*(uint32_t *)(a1 + 8) + j + 74) = v4[j];
  result = *(uint32_t **)(a1 + 8);
  result[6] = 4;
  result[5] = (uint32_t)(uintptr_t)("true");
  result[8] = 5;
  result[7] = (uint32_t)(uintptr_t)("false");
  return result;
}


// ============================================================================
// Address:   0x1907ab0 (size: 98 bytes)
// Symbol:    sub_1907AB0
// Demangled: sub_1907AB0
// ============================================================================
uint32_t *sub_1907AB0(uint32_t *a1)
{
  int v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20AA7A8);
  v1 = a1[2];
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(a1[2]);
  return sub_1901990(a1);
}


// ============================================================================
// Address:   0x1907b20 (size: 56 bytes)
// Symbol:    sub_1907B20
// Demangled: sub_1907B20
// ============================================================================
void sub_1907B20(uint32_t *a1)
{
  sub_1907AB0(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1907b60 (size: 275 bytes)
// Symbol:    sub_1907B60
// Demangled: sub_1907B60
// ============================================================================
int sub_1907B60(int a1)
{
  int result;
  char *v2;
  int i;
  char *v4;
  int j;

  result = *(uint32_t *)(a1 + 8);
  if ( result == 0 )
  {
    result = opNew(0x128u);
    *(uint32_t *)(result + 4) = 0;
    *(uint32_t *)(result + 8) = 0;
    *(uint32_t *)result = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(result + 12) = 0;
    *(uint8_t *)(result + 16) = 0;
    *(uint32_t *)(result + 20) = 0;
    *(uint32_t *)(result + 24) = 0;
    *(uint32_t *)(result + 28) = 0;
    *(uint32_t *)(result + 32) = 0;
    *(uint32_t *)(result + 36) = 0;
    *(uint32_t *)(result + 40) = 0;
    *(uint8_t *)(result + 292) = 0;
    *(uint32_t *)(a1 + 8) = result;
  }
  *(uint32_t *)(result + 8) = (uint32_t)(uintptr_t)(&unk_1B15112);
  *(uint32_t *)(result + 12) = 0;
  *(uint8_t *)(result + 16) = 0;
  *(uint32_t *)(result + 36) = 46;
  *(uint32_t *)(result + 40) = 44;
  v2 = (char *)(uintptr_t)(off_20CB480[0]);
  for ( i = 0; i != 36; ++i )
    *(uint32_t *)(result + 4 * i + 44) = v2[i];
  v4 = (char *)(uintptr_t)(off_20CB484[0]);
  for ( j = 0; j != 26; ++j )
    *(uint32_t *)(result + 4 * j + 188) = v4[j];
  *(uint32_t *)(result + 24) = 4;
  *(uint32_t *)(result + 20) = (uint32_t)(uintptr_t)(&unk_1CB9E3C);
  *(uint32_t *)(result + 32) = 5;
  *(uint32_t *)(result + 28) = (uint32_t)(uintptr_t)(&unk_1CB9E50);
  return result;
}


// ============================================================================
// Address:   0x1907c80 (size: 98 bytes)
// Symbol:    sub_1907C80
// Demangled: sub_1907C80
// ============================================================================
uint32_t *sub_1907C80(uint32_t *a1)
{
  int v1;

  *a1 = (uint32_t)(uintptr_t)(&off_20AB5A8);
  v1 = a1[2];
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(a1[2]);
  return sub_1901990(a1);
}


// ============================================================================
// Address:   0x1907cf0 (size: 56 bytes)
// Symbol:    sub_1907CF0
// Demangled: sub_1907CF0
// ============================================================================
void sub_1907CF0(uint32_t *a1)
{
  sub_1907C80(a1);
  opDelete(a1);
}


// ============================================================================
// Address:   0x1907d30 (size: 135 bytes)
// Symbol:    sub_1907D30
// Demangled: sub_1907D30
// ============================================================================
const char *sub_1907D30(char a1)
{
  const char *result;

  switch ( a1 & 0x3D )
  {
    case 1:
    case 0x11:
      result = "a";
      break;
    case 5:
    case 0x15:
      result = "ab";
      break;
    case 8:
      result = "r";
      break;
    case 9:
    case 0x19:
      result = "a+";
      break;
    case 0xC:
      result = "rb";
      break;
    case 0xD:
    case 0x1D:
      result = "a+b";
      break;
    case 0x10:
    case 0x30:
      result = "w";
      break;
    case 0x14:
    case 0x34:
      result = "wb";
      break;
    case 0x18:
      result = "r+";
      break;
    case 0x1C:
      result = (const char *)&off_1B152A5;
      break;
    case 0x38:
      result = "w+";
      break;
    case 0x3C:
      result = (const char *)&off_1B1ABE3;
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}


// ============================================================================
// Address:   0x1907dc0 (size: 91 bytes)
// Symbol:    sub_1907DC0
// Demangled: sub_1907DC0
// ============================================================================
size_t sub_1907DC0(int a1, char *a2, size_t a3)
{
  size_t n;
  ssize_t v6;
  int v7;
  int v8;

  n = a3;
  do
  {
    while ( 1 )
    {
      v6 = write(a1, a2, n);
      if ( v6 == -1 )
        break;
      n -= v6;
      if ( n == 0 )
        return a3 - n;
      a2 += v6;
    }
  }
  while ( *(uint32_t *)__errno(v8, v7) == 4 );
  return a3 - n;
}


// ============================================================================
// Address:   0x1907e20 (size: 17 bytes)
// Symbol:    sub_1907E20
// Demangled: sub_1907E20
// ============================================================================
int sub_1907E20(int a1)
{
  *(uint32_t *)a1 = 0;
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}


// ============================================================================
// Address:   0x1907e40 (size: 102 bytes)
// Symbol:    sub_1907E40
// Demangled: sub_1907E40
// ============================================================================
int sub_1907E40(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  result = 0;
  if ( *(uint32_t *)a1 == 0 && a2 != 0 )
  {
    *(uint32_t *)__errno(v2, 0) = 0;
    do
    {
      if ( fflush(*(FILE **)a1) == 0 )
      {
        *(uint32_t *)a1 = a2;
        *(uint8_t *)(a1 + 4) = 0;
        return a1;
      }
    }
    while ( *(uint32_t *)__errno(v5, v4) == 4 );
    return 0;
  }
  return result;
}


// ============================================================================
// Address:   0x1907eb0 (size: 170 bytes)
// Symbol:    sub_1907EB0
// Demangled: sub_1907EB0
// ============================================================================
int sub_1907EB0(int a1, int fd, char a3)
{
  int v3;
  const char *modes;
  FILE *v6;

  v3 = 0;
  modes = sub_1907D30(a3);
  if ( modes != nullptr && *(uint32_t *)a1 == 0 )
  {
    v6 = fdopen(fd, modes);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v6);
    if ( v6 != nullptr )
    {
      *(uint8_t *)(a1 + 4) = 1;
      v3 = a1;
      if ( fd == 0 )
        setvbuf(v6, nullptr, 2, 0);
    }
  }
  return v3;
}


// ============================================================================
// Address:   0x1907f60 (size: 102 bytes)
// Symbol:    sub_1907F60
// Demangled: sub_1907F60
// ============================================================================
int sub_1907F60(int a1, char *filename, char a3)
{
  const char *modes;
  int v4;
  FILE *v6;

  modes = sub_1907D30(a3);
  v4 = 0;
  if ( modes != nullptr && *(uint32_t *)a1 == 0 )
  {
    v6 = fopen(filename, modes);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v6);
    if ( v6 != nullptr )
    {
      *(uint8_t *)(a1 + 4) = 1;
      return a1;
    }
  }
  return v4;
}


// ============================================================================
// Address:   0x1907fd0 (size: 12 bytes)
// Symbol:    sub_1907FD0
// Demangled: sub_1907FD0
// ============================================================================
bool sub_1907FD0(uint32_t *a1)
{
  return *a1 != 0;
}


// ============================================================================
// Address:   0x1907fe0 (size: 13 bytes)
// Symbol:    sub_1907FE0
// Demangled: sub_1907FE0
// ============================================================================
int sub_1907FE0(int a1)
{
  return *(int16_t *)(*(uint32_t *)a1 + 14);
}


// ============================================================================
// Address:   0x1907ff0 (size: 11 bytes)
// Symbol:    sub_1907FF0
// Demangled: sub_1907FF0
// ============================================================================
int sub_1907FF0(int a1)
{
  return *(uint32_t *)a1;
}


// ============================================================================
// Address:   0x1908000 (size: 106 bytes)
// Symbol:    sub_1908000
// Demangled: sub_1908000
// ============================================================================
int sub_1908000(int a1, int a2, int a3)
{
  int v3;
  int v5;
  int v6;

  v3 = a3;
  if ( *(uint32_t *)a3 == 0 )
    return 0;
  if ( *(uint8_t *)(a3 + 4) != 0 )
  {
    *(uint32_t *)__errno(a1, a2) = 0;
    while ( fclose(*(FILE **)a3) != 0 )
    {
      if ( *(uint32_t *)__errno(v6, v5) != 4 )
      {
        *(uint32_t *)a3 = 0;
        return 0;
      }
    }
  }
  *(uint32_t *)a3 = 0;
  return v3;
}


// ============================================================================
// Address:   0x1908080 (size: 95 bytes)
// Symbol:    sub_1908080
// Demangled: sub_1908080
// ============================================================================
ssize_t sub_1908080(int a1, void *buf, size_t nbytes)
{
  ssize_t result;
  int v4;
  int v5;

  while ( 1 )
  {
    result = read(*(int16_t *)(*(uint32_t *)a1 + 14), buf, nbytes);
    if ( result != -1 )
      break;
    if ( *(uint32_t *)__errno(v5, v4) != 4 )
      return -1;
  }
  return result;
}


// ============================================================================
// Address:   0x19080e0 (size: 27 bytes)
// Symbol:    sub_19080E0
// Demangled: sub_19080E0
// ============================================================================
size_t sub_19080E0(int a1, char *a2, size_t a3)
{
  return sub_1907DC0(*(int16_t *)(*(uint32_t *)a1 + 14), a2, a3);
}


// ============================================================================
// Address:   0x1908100 (size: 209 bytes)
// Symbol:    sub_1908100
// Demangled: sub_1908100
// ============================================================================
size_t sub_1908100(int a1, char *a2, size_t a3, int a4, int a5)
{
  size_t v5;
  size_t v7;
  ssize_t v8;
  int v9;
  int v10;
  typedef int _g4_t_fd;
  typedef size_t _g4_t_v13;
  typedef struct iovec _g4_t_iovec;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_fd)) > _g4_s0 ? (8u + sizeof(_g4_t_fd)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_iovec)) > _g4_s2 ? (16u + sizeof(_g4_t_iovec)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_iovec &iovec = *reinterpret_cast<_g4_t_iovec *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v5 = a3;
  fd = *(int16_t *)(*(uint32_t *)a1 + 14);
  v13 = a3 + a5;
  v15 = a4;
  v16 = a5;
  v7 = a3 + a5;
  while ( 1 )
  {
    while ( 1 )
    {
      iovec.iov_base = a2;
      iovec.iov_len = v5;
      v8 = writev(fd, &iovec, 2);
      if ( v8 != -1 )
        break;
      if ( *(uint32_t *)__errno(v10, v9) != 4 )
        return v13 - v7;
    }
    v7 -= v8;
    if ( v7 == 0 )
      return v13 - v7;
    if ( (int)(v8 - v5) >= 0 )
      break;
    a2 += v8;
    v5 -= v8;
  }
  return v13 - (v7 - sub_1907DC0(fd, (char *)(v8 - v5 + a4), a5 - (v8 - v5)));
}


// ============================================================================
// Address:   0x19081e0 (size: 140 bytes)
// Symbol:    sub_19081E0
// Demangled: sub_19081E0
// ============================================================================
int64_t sub_19081E0(int a1, int64_t offset, int whence)
{
  if ( offset > 0x7FFFFFFF || offset < (int64_t)0xFFFFFFFF80000000LL )
    return -1;
  else
    return lseek(*(int16_t *)(*(uint32_t *)a1 + 14), offset, whence);
}


// ============================================================================
// Address:   0x1908270 (size: 36 bytes)
// Symbol:    sub_1908270
// Demangled: sub_1908270
// ============================================================================
int sub_1908270(FILE **a1)
{
  return fflush(*a1);
}


// ============================================================================
// Address:   0x19082a0 (size: 262 bytes)
// Symbol:    sub_19082A0
// Demangled: sub_19082A0
// ============================================================================
int sub_19082A0(int *a1)
{
  int v1;
  int v3;
  __off_t st_size;
  struct stat buf;
  typedef int _g4_t_v5;
  typedef struct pollfd _g4_t_fds;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_fds)) > _g4_s1 ? (8u + sizeof(_g4_t_fds)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_fds &fds = *reinterpret_cast<_g4_t_fds *>(_g4_sf + 8u);

  v5 = 0;
  if ( ioctl(*(int16_t *)(*a1 + 14), 0x541Bu, &v5) != 0 || (v1 = v5, v5 < 0) )
  {
    v3 = *a1;
    fds.events = 1;
    v1 = 0;
    fds.fd = *(int16_t *)(v3 + 14);
    if ( poll(&fds, 1u, 0) > 0 && fstat(*(int16_t *)(*a1 + 14), &buf) == 0 && (buf.st_mode & 0xF000) == 0x8000 )
    {
      st_size = buf.st_size;
      return st_size - lseek(*(int16_t *)(*a1 + 14), 0, 1);
    }
  }
  return v1;
}


// ============================================================================
// Address:   0x19083b0 (size: 367 bytes)
// Symbol:    _ZSt14__convert_to_vIfEvPKcRT_RSt12_Ios_IostateRKPi
// Demangled: void std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
// ============================================================================
static void g4_compat_def_23(char *nptr, float *a2, uint32_t *a3)
{
  char *v3;
  char *v4;
  size_t v5;
  float v6; // xmm0_4
  char *v7;
  bool v8;
  int v9;
  typedef void *_g4_t_v10;
  typedef char *_g4_t_endptr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_endptr)) > _g4_s1 ? (16u + sizeof(_g4_t_endptr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 16u);

  v3 = setlocale(6, nullptr);
  v4 = v3;
  if ( v3 != nullptr )
  {
    v5 = strlen(v3) + 1;
    v10 = (void *)opNewArray(v5);
    memcpy(v10, v4, v5);
    setlocale(6, "C");
  }
  else
  {
    v10 = nullptr;
  }
  v6 = strtod(nptr, &endptr);
  v7 = endptr;
  v8 = endptr == nptr;
  *a2 = v6;
  if ( v8 || *v7 != 0 )
  {
    *a2 = 0.0;
    *a3 = 4;
    goto LABEL_6;
  }
  if ( fabs(v6) > 3.4028235e38f )
  {
    v9 = _mm_cvtsi128_si32(g4_to_m128i(0x7F7FFFFFu));
    if ( v6 <= 0.0 )
      v9 = -8388609;
    goto LABEL_12;
  }
  if ( !__builtin_isnan(v6) && (v9 = _mm_cvtsi128_si32(g4_to_m128i(0x7F7FFFFFu)), v6 == INFINITY)
    || !__builtin_isnan(v6) && (v9 = -8388609, v6 == -INFINITY) )
  {
LABEL_12:
    *(uint32_t *)a2 = v9;
    *a3 = 4;
  }
LABEL_6:
  setlocale(6, (const char *)v10);
  if ( v10 != nullptr )
    opDeleteArray(v10);
}


// ============================================================================
// Address:   0x1908520 (size: 383 bytes)
// Symbol:    _ZSt14__convert_to_vIdEvPKcRT_RSt12_Ios_IostateRKPi
// Demangled: void std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
// ============================================================================
static void g4_compat_def_24(char *nptr, double *a2, uint32_t *a3)
{
  char *v3;
  char *v4;
  size_t n;
  long double v6; // fst7
  char *v7;
  bool v8;
  int64_t v9; // xmm0_8
  typedef char *_g4_t_locale;
  typedef char *_g4_t_endptr;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_locale)) > _g4_s0 ? (12u + sizeof(_g4_t_locale)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_endptr)) > _g4_s1 ? (28u + sizeof(_g4_t_endptr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_locale &locale = *reinterpret_cast<_g4_t_locale *>(_g4_sf + 12u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 28u);

  v3 = setlocale(6, nullptr);
  v4 = v3;
  if ( v3 != nullptr )
  {
    n = strlen(v3) + 1;
    locale = (char *)opNewArray(n);
    memcpy(locale, v4, n);
    setlocale(6, "C");
  }
  else
  {
    locale = nullptr;
  }
  v6 = strtod(nptr, &endptr);
  v7 = endptr;
  v8 = endptr == nptr;
  *a2 = v6;
  if ( v8 || *v7 != 0 )
  {
    *a2 = 0.0;
    *a3 = 4;
  }
  else if ( !__builtin_isnan(v6) && (v9 = 0x7FEFFFFFFFFFFFFFLL, (double)v6 == INFINITY)
         || !__builtin_isnan(v6) && (v9 = 0xFFEFFFFFFFFFFFFFLL, (double)v6 == -INFINITY) )
  {
    *(uint64_t *)a2 = v9;
    *a3 = 4;
  }
  setlocale(6, locale);
  if ( locale != nullptr )
    opDeleteArray(locale);
}


// ============================================================================
// Address:   0x19086a0 (size: 351 bytes)
// Symbol:    _ZSt14__convert_to_vIeEvPKcRT_RSt12_Ios_IostateRKPi
// Demangled: void std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
// ============================================================================
static void g4_compat_def_25(char *s, int64_t *a2, uint32_t *a3)
{
  char *v3;
  char *v4;
  size_t n;
  int v6;
  double v7; // xmm0_8
  int64_t v8; // xmm1_8
  char *locale;

  v3 = setlocale(6, nullptr);
  v4 = v3;
  if ( v3 != nullptr )
  {
    n = strlen(v3) + 1;
    locale = (char *)opNewArray(n);
    memcpy(locale, v4, n);
    setlocale(6, "C");
  }
  else
  {
    locale = nullptr;
  }
  v6 = sscanf(s, "%Lf", a2);
  if ( v6 == 0 || v6 == -1 )
  {
    *a2 = 0;
    *a3 = 4;
  }
  else
  {
    v7 = *(double *)a2;
    if ( !__builtin_isnan(v7) && (v8 = 0x7FEFFFFFFFFFFFFFLL, v7 == INFINITY)
      || !__builtin_isnan(v7) && (v8 = 0xFFEFFFFFFFFFFFFFLL, v7 == -INFINITY) )
    {
      *a2 = v8;
      *a3 = 4;
    }
  }
  setlocale(6, locale);
  if ( locale != nullptr )
    opDeleteArray(locale);
}


// ============================================================================
// Address:   0x1908800 (size: 87 bytes)
// Symbol:    sub_1908800
// Demangled: sub_1908800
// ============================================================================
uint32_t *sub_1908800(uint32_t *a1, const char *a2)
{
  uint32_t *result;

  result = a1;
  *a1 = 0;
  if ( strcmp(a2, "C") != 0 )
    sub_19002A0("locale::facet::_S_create_c_locale name not valid");
  return result;
}


// ============================================================================
// Address:   0x1908860 (size: 15 bytes)
// Symbol:    sub_1908860
// Demangled: sub_1908860
// ============================================================================
uint32_t *sub_1908860(uint32_t *a1)
{
  *a1 = 0;
  return a1;
}


// ============================================================================
// Address:   0x1908870 (size: 9 bytes)
// Symbol:    sub_1908870
// Demangled: sub_1908870
// ============================================================================
int sub_1908870()
{
  return 0;
}


// ============================================================================
// Address:   0x1908890 (size: 137 bytes)
// Symbol:    sub_1908890
// Demangled: sub_1908890
// ============================================================================
void sub_1908890(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(a1);
  sub_1908070(a1 + 36);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 28));
}


// ============================================================================
// Address:   0x1908920 (size: 56 bytes)
// Symbol:    sub_1908920
// Demangled: sub_1908920
// ============================================================================
void sub_1908920(void *a1)
{
  sub_1908890((int)(uintptr_t)(a1));
  opDelete(a1);
}


// ============================================================================
// Address:   0x1908960 (size: 137 bytes)
// Symbol:    sub_1908960
// Demangled: sub_1908960
// ============================================================================
void sub_1908960(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330(a1);
  sub_1908070(a1 + 36);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 28));
}


// ============================================================================
// Address:   0x19089f0 (size: 56 bytes)
// Symbol:    sub_19089F0
// Demangled: sub_19089F0
// ============================================================================
void sub_19089F0(void *a1)
{
  sub_1908960((int)(uintptr_t)(a1));
  opDelete(a1);
}


// ============================================================================
// Address:   0x1908a30 (size: 119 bytes)
// Symbol:    sub_1908A30
// Demangled: sub_1908A30
// ============================================================================
int sub_1908A30(int a1, unsigned int a2)
{
  int v2;
  int v4;
  unsigned int v6;
  uint8_t v7;
  uint8_t v8[13];

  v2 = a1;
  v4 = *(uint32_t *)(a1 + 16);
  if ( v4 == 0 )
  {
LABEL_5:
    v7 = *(uint8_t *)(v2 + 12);
    while ( 1 )
    {
      if ( v7 == 1 )
      {
        v6 = **(uint32_t **)(v2 + 24);
        if ( v6 <= a2 )
        {
          a2 -= v6;
          v2 = *(uint32_t *)(v2 + 28);
        }
        else
        {
          v2 = *(uint32_t *)(v2 + 24);
        }
        goto LABEL_5;
      }
      if ( v7 == 0 )
        break;
      if ( v7 <= 3u )
      {
        (*(void (**)(uint32_t, unsigned int, int, uint8_t *))(**(uint32_t **)(v2 + 24) + 8))(
          *(uint32_t *)(v2 + 24),
          a2,
          1,
          v8);
        return v8[0];
      }
    }
    v4 = *(uint32_t *)(v2 + 24);
  }
  return *(uint8_t *)(v4 + a2);
}


// ============================================================================
// Address:   0x1908ab0 (size: 56 bytes)
// Symbol:    sub_1908AB0
// Demangled: sub_1908AB0
// ============================================================================
int (**sub_1908AB0(uint32_t *a1))(int)
{
  sub_190A6D0(a1);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9CC8);
  return (int (**)(int))(uintptr_t)(&off_20A9CC8);
}


// ============================================================================
// Address:   0x1908af0 (size: 191 bytes)
// Symbol:    sub_1908AF0
// Demangled: sub_1908AF0
// ============================================================================
char sub_1908AF0(int a1, int a2, int a3, int a4)
{
  int v4;

  sub_190A6D0(a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9CC8);
  sub_1907EB0(a1 + 36, a2, a3);
  LOBYTE(v4) = sub_1907FD0((uint32_t *)(a1 + 36));
  if ( (uint8_t)v4 != 0 )
  {
    *(uint32_t *)(a1 + 44) = a3;
    *(uint32_t *)(a1 + 64) = a4;
    sub_190A840(a1);
    v4 = *(uint32_t *)(a1 + 60);
    *(uint8_t *)(a1 + 69) = 0;
    *(uint8_t *)(a1 + 70) = 0;
    *(uint32_t *)(a1 + 4) = v4;
    *(uint32_t *)(a1 + 8) = v4;
    *(uint32_t *)(a1 + 12) = v4;
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
  }
  return v4;
}


// ============================================================================
// Address:   0x1908bb0 (size: 191 bytes)
// Symbol:    sub_1908BB0
// Demangled: sub_1908BB0
// ============================================================================
char sub_1908BB0(int a1, int a2, int a3, int a4)
{
  int v4;

  sub_190A6D0(a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9CC8);
  sub_1907E40(a1 + 36, a2);
  LOBYTE(v4) = sub_1907FD0((uint32_t *)(a1 + 36));
  if ( (uint8_t)v4 != 0 )
  {
    *(uint32_t *)(a1 + 44) = a3;
    *(uint32_t *)(a1 + 64) = a4;
    sub_190A840(a1);
    v4 = *(uint32_t *)(a1 + 60);
    *(uint8_t *)(a1 + 69) = 0;
    *(uint8_t *)(a1 + 70) = 0;
    *(uint32_t *)(a1 + 4) = v4;
    *(uint32_t *)(a1 + 8) = v4;
    *(uint32_t *)(a1 + 12) = v4;
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
  }
  return v4;
}


// ============================================================================
// Address:   0x1908c70 (size: 37 bytes)
// Symbol:    sub_1908C70
// Demangled: sub_1908C70
// ============================================================================
int sub_1908C70(int a1)
{
  return sub_1907FE0(a1 + 36);
}


// ============================================================================
// Address:   0x1908ca0 (size: 37 bytes)
// Symbol:    sub_1908CA0
// Demangled: sub_1908CA0
// ============================================================================
int sub_1908CA0(int a1)
{
  return sub_1907FF0(a1 + 36);
}


// ============================================================================
// Address:   0x1908cd0 (size: 119 bytes)
// Symbol:    sub_1908CD0
// Demangled: sub_1908CD0
// ============================================================================
int sub_1908CD0(int a1, unsigned int a2)
{
  int v2;
  int v4;
  unsigned int v6;
  uint8_t v7;
  uint32_t v8[4];

  v2 = a1;
  v4 = *(uint32_t *)(a1 + 16);
  if ( v4 == 0 )
  {
LABEL_5:
    v7 = *(uint8_t *)(v2 + 12);
    while ( 1 )
    {
      if ( v7 == 1 )
      {
        v6 = **(uint32_t **)(v2 + 24);
        if ( v6 <= a2 )
        {
          a2 -= v6;
          v2 = *(uint32_t *)(v2 + 28);
        }
        else
        {
          v2 = *(uint32_t *)(v2 + 24);
        }
        goto LABEL_5;
      }
      if ( v7 == 0 )
        break;
      if ( v7 <= 3u )
      {
        (*(void (**)(uint32_t, unsigned int, int, uint32_t *))(**(uint32_t **)(v2 + 24) + 8))(
          *(uint32_t *)(v2 + 24),
          a2,
          1,
          v8);
        return v8[0];
      }
    }
    v4 = *(uint32_t *)(v2 + 24);
  }
  return *(uint32_t *)(v4 + 4 * a2);
}


// ============================================================================
// Address:   0x1908d50 (size: 56 bytes)
// Symbol:    sub_1908D50
// Demangled: sub_1908D50
// ============================================================================
int (**sub_1908D50(uint32_t *a1))(int)
{
  sub_190DD80(a1);
  *a1 = (uint32_t)(uintptr_t)(&off_20A9D08);
  return (int (**)(int))(uintptr_t)(&off_20A9D08);
}


// ============================================================================
// Address:   0x1908d90 (size: 191 bytes)
// Symbol:    sub_1908D90
// Demangled: sub_1908D90
// ============================================================================
char sub_1908D90(int a1, int a2, int a3, int a4)
{
  int v4;

  sub_190DD80(a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9D08);
  sub_1907EB0(a1 + 36, a2, a3);
  LOBYTE(v4) = sub_1907FD0((uint32_t *)(a1 + 36));
  if ( (uint8_t)v4 != 0 )
  {
    *(uint32_t *)(a1 + 44) = a3;
    *(uint32_t *)(a1 + 64) = a4;
    sub_190DEF0(a1);
    v4 = *(uint32_t *)(a1 + 60);
    *(uint8_t *)(a1 + 69) = 0;
    *(uint8_t *)(a1 + 70) = 0;
    *(uint32_t *)(a1 + 4) = v4;
    *(uint32_t *)(a1 + 8) = v4;
    *(uint32_t *)(a1 + 12) = v4;
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
  }
  return v4;
}


// ============================================================================
// Address:   0x1908e50 (size: 191 bytes)
// Symbol:    sub_1908E50
// Demangled: sub_1908E50
// ============================================================================
char sub_1908E50(int a1, int a2, int a3, int a4)
{
  int v4;

  sub_190DD80(a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9D08);
  sub_1907E40(a1 + 36, a2);
  LOBYTE(v4) = sub_1907FD0((uint32_t *)(a1 + 36));
  if ( (uint8_t)v4 != 0 )
  {
    *(uint32_t *)(a1 + 44) = a3;
    *(uint32_t *)(a1 + 64) = a4;
    sub_190DEF0(a1);
    v4 = *(uint32_t *)(a1 + 60);
    *(uint8_t *)(a1 + 69) = 0;
    *(uint8_t *)(a1 + 70) = 0;
    *(uint32_t *)(a1 + 4) = v4;
    *(uint32_t *)(a1 + 8) = v4;
    *(uint32_t *)(a1 + 12) = v4;
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
  }
  return v4;
}


// ============================================================================
// Address:   0x1908f10 (size: 37 bytes)
// Symbol:    sub_1908F10
// Demangled: sub_1908F10
// ============================================================================
int sub_1908F10(int a1)
{
  return sub_1907FE0(a1 + 36);
}


// ============================================================================
// Address:   0x1908f40 (size: 37 bytes)
// Symbol:    sub_1908F40
// Demangled: sub_1908F40
// ============================================================================
int sub_1908F40(int a1)
{
  return sub_1907FF0(a1 + 36);
}


// ============================================================================
// Address:   0x1908f70 (size: 117 bytes)
// Symbol:    sub_1908F70
// Demangled: sub_1908F70
// ============================================================================
uint32_t *sub_1908F70(uint32_t *a1, int a2, int a3)
{
  if ( !sub_1907FD0(a1 + 9) )
  {
    if ( a3 != 0 || a2 != 0 )
    {
      if ( a3 > 0 && a2 != 0 )
      {
        a1[15] = a2;
        a1[16] = a3;
      }
    }
    else
    {
      a1[16] = 1;
    }
  }
  return a1;
}


// ============================================================================
// Address:   0x1908ff0 (size: 117 bytes)
// Symbol:    sub_1908FF0
// Demangled: sub_1908FF0
// ============================================================================
uint32_t *sub_1908FF0(uint32_t *a1, int a2, int a3)
{
  if ( !sub_1907FD0(a1 + 9) )
  {
    if ( a3 != 0 || a2 != 0 )
    {
      if ( a3 > 0 && a2 != 0 )
      {
        a1[15] = a2;
        a1[16] = a3;
      }
    }
    else
    {
      a1[16] = 1;
    }
  }
  return a1;
}


// ============================================================================
// Address:   0x1909070 (size: 150 bytes)
// Symbol:    sub_1909070
// Demangled: sub_1909070
// ============================================================================
int sub_1909070(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = -1;
  if ( (*(uint8_t *)(a1 + 44) & 8) != 0 && sub_1907FD0((uint32_t *)(a1 + 36)) )
  {
    v2 = *(uint32_t *)(a1 + 84);
    if ( v2 == 0 )
      sub_18FFF30();
    v1 = *(uint32_t *)(a1 + 12) - *(uint32_t *)(a1 + 8);
    if ( (*(int (**)(uint32_t))(*(uint32_t *)v2 + 20))(*(uint32_t *)(a1 + 84)) >= 0 )
    {
      v3 = sub_19082A0((int *)(a1 + 36));
      v1 += v3 / (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 84) + 32))(*(uint32_t *)(a1 + 84));
    }
  }
  return v1;
}


// ============================================================================
// Address:   0x1909110 (size: 153 bytes)
// Symbol:    sub_1909110
// Demangled: sub_1909110
// ============================================================================
int sub_1909110(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = -1;
  if ( (*(uint8_t *)(a1 + 44) & 8) != 0 && sub_1907FD0((uint32_t *)(a1 + 36)) )
  {
    v2 = *(uint32_t *)(a1 + 88);
    if ( v2 == 0 )
      sub_18FFF30();
    v1 = (*(uint32_t *)(a1 + 12) - *(uint32_t *)(a1 + 8)) >> 2;
    if ( (*(int (**)(uint32_t))(*(uint32_t *)v2 + 20))(*(uint32_t *)(a1 + 88)) >= 0 )
    {
      v3 = sub_19082A0((int *)(a1 + 36));
      v1 += v3 / (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 88) + 32))(*(uint32_t *)(a1 + 88));
    }
  }
  return v1;
}


// ============================================================================
// Address:   0x19091b0 (size: 51 bytes)
// Symbol:    sub_19091B0
// Demangled: sub_19091B0
// ============================================================================
int sub_19091B0(uint32_t *a1)
{
  int result;

  result = 0;
  if ( a1[4] < a1[5] )
    return (G4_VCALL<int>(a1, 52, -1) != -1) - 1;
  return result;
}


// ============================================================================
// Address:   0x19091f0 (size: 51 bytes)
// Symbol:    sub_19091F0
// Demangled: sub_19091F0
// ============================================================================
int sub_19091F0(uint32_t *a1)
{
  int result;

  result = 0;
  if ( a1[4] < a1[5] )
    return (G4_VCALL<int>(a1, 52, -1) != -1) - 1;
  return result;
}


// ============================================================================
// Address:   0x1909230 (size: 335 bytes)
// Symbol:    sub_1909230
// Demangled: sub_1909230
// ============================================================================
int sub_1909230(int a1, int a2)
{
  int v2;
  unsigned int v3;
  char v4;
  int v5;
  int v6;
  uint8_t *v7;
  int v9;
  typedef char _g4_t_v10;
  typedef uint32_t _g4_t_v11[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);

  v2 = -1;
  if ( (*(uint8_t *)(a1 + 44) & 8) == 0 )
    return v2;
  if ( *(uint8_t *)(a1 + 70) != 0 )
  {
    if ( G4_VCALL<int>(a1, 52, -1) == -1 )
      return v2;
    v9 = *(uint32_t *)(a1 + 60);
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 4) = v9;
    *(uint32_t *)(a1 + 8) = v9;
    *(uint32_t *)(a1 + 12) = v9;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
    *(uint8_t *)(a1 + 70) = 0;
    v4 = *(uint8_t *)(a1 + 80);
LABEL_14:
    v10 = v4;
    v2 = -1;
    (*(void (**)(uint32_t *, int, int64_t, int, int))(*(uint32_t *)a1 + 16))(v11, a1, (int64_t)-1, 1, 24);
    if ( (v11[1] & v11[0]) == -1 )
      return v2;
    v5 = G4_VCALL<int>(a1, 36);
    v4 = v10;
    if ( v5 == -1 )
      return v2;
    goto LABEL_5;
  }
  v3 = *(uint32_t *)(a1 + 8);
  v4 = *(uint8_t *)(a1 + 80);
  if ( v3 <= *(uint32_t *)(a1 + 4) )
    goto LABEL_14;
  *(uint32_t *)(a1 + 8) = v3 - 1;
  v5 = *(uint8_t *)(v3 - 1);
LABEL_5:
  v2 = 0;
  if ( a2 != -1 )
  {
    v2 = a2;
    if ( a2 != v5 )
    {
      v2 = -1;
      if ( v4 == 0 )
      {
        if ( *(uint8_t *)(a1 + 80) == 0 )
        {
          v6 = *(uint32_t *)(a1 + 8);
          *(uint8_t *)(a1 + 80) = 1;
          *(uint32_t *)(a1 + 72) = v6;
          *(uint32_t *)(a1 + 76) = *(uint32_t *)(a1 + 12);
          *(uint32_t *)(a1 + 4) = a1 + 71;
          *(uint32_t *)(a1 + 8) = a1 + 71;
          *(uint32_t *)(a1 + 12) = a1 + 72;
        }
        v7 = *(uint8_t **)(a1 + 8);
        *(uint8_t *)(a1 + 69) = 1;
        v2 = a2;
        *v7 = a2;
      }
    }
  }
  return v2;
}


// ============================================================================
// Address:   0x1909380 (size: 678 bytes)
// Symbol:    sub_1909380
// Demangled: sub_1909380
// ============================================================================
int sub_1909380(int a1, char *a2, signed int a3)
{
  char *dest;
  signed int v4;
  char *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  const void *src;
  size_t n;
  ssize_t v15;
  int v16;
  int v18;
  int v19;
  bool v20;
  int v21;
  int v22;
  int v23;
  int v24;

  dest = a2;
  v4 = a3;
  if ( *(uint8_t *)(a1 + 80) != 0 )
  {
    if ( a3 <= 0 )
    {
      v7 = 0;
    }
    else
    {
      v5 = *(char **)(a1 + 8);
      v6 = *(char **)(a1 + 4);
      v7 = 0;
      if ( v5 != v6 )
      {
LABEL_4:
        v8 = *(uint32_t *)(a1 + 72) + (v5 != v6);
        v22 = *(uint32_t *)(a1 + 76);
        *(uint32_t *)(a1 + 72) = v8;
        v9 = *(uint32_t *)(a1 + 60);
        *(uint32_t *)(a1 + 8) = v8;
        *(uint32_t *)(a1 + 4) = v9;
        *(uint32_t *)(a1 + 12) = v22;
        *(uint8_t *)(a1 + 80) = 0;
        goto LABEL_5;
      }
      v4 = a3 - 1;
      *a2 = *v5;
      dest = a2 + 1;
      ++*(uint32_t *)(a1 + 8);
      if ( *(uint8_t *)(a1 + 80) == 0 )
      {
        v7 = 1;
        goto LABEL_5;
      }
      LOWORD(v7) = 1;
    }
    v5 = *(char **)(a1 + 8);
    v6 = *(char **)(a1 + 4);
    goto LABEL_4;
  }
  v7 = 0;
  if ( *(uint8_t *)(a1 + 70) != 0 )
  {
    if ( G4_VCALL<int>(a1, 52, -1) == -1 )
      return v7;
    v18 = *(uint32_t *)(a1 + 60);
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 4) = v18;
    *(uint32_t *)(a1 + 8) = v18;
    *(uint32_t *)(a1 + 12) = v18;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
    *(uint8_t *)(a1 + 70) = 0;
  }
LABEL_5:
  v10 = 1;
  v24 = *(uint32_t *)(a1 + 44);
  v11 = *(uint32_t *)(a1 + 64);
  if ( v11 >= 2 )
    v10 = v11 - 1;
  if ( v4 > v10 )
  {
    v12 = *(uint32_t *)(a1 + 84);
    if ( v12 == 0 )
      sub_18FFF30();
    if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v12 + 24))(*(uint32_t *)(a1 + 84)) != 0 && (v24 & 8) != 0 )
    {
      src = *(const void **)(a1 + 8);
      n = *(uint32_t *)(a1 + 12) - (uint32_t)(uintptr_t)(src);
      if ( n != 0 )
      {
        v23 = *(uint32_t *)(a1 + 12) - (uint32_t)(uintptr_t)(src);
        memcpy(dest, src, n);
        dest += v23;
        v7 += v23;
        v4 -= v23;
        *(uint32_t *)(a1 + 8) += v23;
      }
      while ( 1 )
      {
        v15 = sub_1908080(a1 + 36, dest, v4);
        if ( v15 == -1 )
          sub_19004E0("basic_filebuf::xsgetn error reading the file");
        if ( v15 == 0 )
          break;
        v7 += v15;
        v4 -= v15;
        if ( v4 == 0 )
          goto LABEL_26;
        dest += v15;
      }
      if ( v4 != 0 )
      {
        v16 = *(uint32_t *)(a1 + 60);
        *(uint32_t *)(a1 + 20) = 0;
        *(uint32_t *)(a1 + 4) = v16;
        *(uint32_t *)(a1 + 8) = v16;
        *(uint32_t *)(a1 + 12) = v16;
        *(uint32_t *)(a1 + 16) = 0;
        *(uint32_t *)(a1 + 24) = 0;
        *(uint8_t *)(a1 + 69) = 0;
        return v7;
      }
LABEL_26:
      v19 = *(uint32_t *)(a1 + 60);
      v20 = (*(uint32_t *)(a1 + 44) & 0x10) == 0;
      *(uint32_t *)(a1 + 4) = v19;
      *(uint32_t *)(a1 + 8) = v19;
      *(uint32_t *)(a1 + 12) = v19;
      if ( v20 || (unsigned int)(v21 = *(uint32_t *)(a1 + 64)) <= 1 )
      {
        *(uint32_t *)(a1 + 20) = 0;
        *(uint32_t *)(a1 + 16) = 0;
        *(uint32_t *)(a1 + 24) = 0;
      }
      else
      {
        *(uint32_t *)(a1 + 20) = v19;
        *(uint32_t *)(a1 + 16) = v19;
        *(uint32_t *)(a1 + 24) = v19 + v21 - 1;
      }
      *(uint8_t *)(a1 + 69) = 1;
      return v7;
    }
  }
  v7 += sub_1936980(a1, dest, v4);
  return v7;
}


// ============================================================================
// Address:   0x1909630 (size: 696 bytes)
// Symbol:    sub_1909630
// Demangled: sub_1909630
// ============================================================================
int sub_1909630(int a1, wchar_t *a2, signed int a3)
{
  wchar_t *s1;
  signed int v4;
  wchar_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  const wchar_t *s2;
  size_t n;
  ssize_t v17;
  int v18;
  int v20;
  int v21;
  bool v22;
  int v23;
  int v24;
  int v25;
  int v26;

  s1 = a2;
  v4 = a3;
  if ( *(uint8_t *)(a1 + 84) != 0 )
  {
    if ( a3 <= 0 )
    {
      v5 = *(wchar_t **)(a1 + 4);
      v26 = *(uint32_t *)(a1 + 8);
      v6 = 0;
    }
    else
    {
      v5 = *(wchar_t **)(a1 + 8);
      if ( v5 != *(wchar_t **)(a1 + 4) )
      {
        v6 = 0;
        v7 = 4;
        v8 = *(uint32_t *)(a1 + 76);
LABEL_5:
        v9 = v7 + v8;
        v10 = *(uint32_t *)(a1 + 80);
        *(uint32_t *)(a1 + 76) = v9;
        v11 = *(uint32_t *)(a1 + 60);
        *(uint32_t *)(a1 + 8) = v9;
        *(uint32_t *)(a1 + 4) = v11;
        *(uint32_t *)(a1 + 12) = v10;
        *(uint8_t *)(a1 + 84) = 0;
        goto LABEL_6;
      }
      *a2 = *v5;
      s1 = a2 + 1;
      v26 = (int)(uintptr_t)(v5 + 1);
      v4 = a3 - 1;
      v6 = 1;
      *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v5 + 1);
    }
    v7 = 4 * (v26 != (uint32_t)(uintptr_t)(v5));
    v8 = *(uint32_t *)(a1 + 76);
    goto LABEL_5;
  }
  v6 = 0;
  if ( *(uint8_t *)(a1 + 70) != 0 )
  {
    if ( G4_VCALL<int>(a1, 52, -1) == -1 )
      return v6;
    v20 = *(uint32_t *)(a1 + 60);
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 4) = v20;
    *(uint32_t *)(a1 + 8) = v20;
    *(uint32_t *)(a1 + 12) = v20;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
    *(uint8_t *)(a1 + 70) = 0;
  }
LABEL_6:
  v12 = 1;
  v25 = *(uint32_t *)(a1 + 44);
  v13 = *(uint32_t *)(a1 + 64);
  if ( v13 >= 2 )
    v12 = v13 - 1;
  if ( v4 > v12 )
  {
    v14 = *(uint32_t *)(a1 + 88);
    if ( v14 == 0 )
      sub_18FFF30();
    if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v14 + 24))(*(uint32_t *)(a1 + 88)) != 0 && (v25 & 8) != 0 )
    {
      s2 = *(const wchar_t **)(a1 + 8);
      n = (*(uint32_t *)(a1 + 12) - (int)(uintptr_t)(s2)) >> 2;
      if ( n != 0 )
      {
        v24 = (*(uint32_t *)(a1 + 12) - (int)(uintptr_t)(s2)) >> 2;
        wmemcpy(s1, s2, n);
        v6 += v24;
        v4 -= v24;
        s1 += v24;
        *(uint32_t *)(a1 + 8) += 4 * v24;
      }
      while ( 1 )
      {
        v17 = sub_1908080(a1 + 36, s1, v4);
        if ( v17 == -1 )
          sub_19004E0("basic_filebuf::xsgetn error reading the file");
        if ( v17 == 0 )
          break;
        v6 += v17;
        v4 -= v17;
        if ( v4 == 0 )
          goto LABEL_27;
        s1 += v17;
      }
      if ( v4 != 0 )
      {
        v18 = *(uint32_t *)(a1 + 60);
        *(uint32_t *)(a1 + 20) = 0;
        *(uint32_t *)(a1 + 4) = v18;
        *(uint32_t *)(a1 + 8) = v18;
        *(uint32_t *)(a1 + 12) = v18;
        *(uint32_t *)(a1 + 16) = 0;
        *(uint32_t *)(a1 + 24) = 0;
        *(uint8_t *)(a1 + 69) = 0;
        return v6;
      }
LABEL_27:
      v21 = *(uint32_t *)(a1 + 60);
      v22 = (*(uint32_t *)(a1 + 44) & 0x10) == 0;
      *(uint32_t *)(a1 + 4) = v21;
      *(uint32_t *)(a1 + 8) = v21;
      *(uint32_t *)(a1 + 12) = v21;
      if ( v22 || (unsigned int)(v23 = *(uint32_t *)(a1 + 64)) <= 1 )
      {
        *(uint32_t *)(a1 + 20) = 0;
        *(uint32_t *)(a1 + 16) = 0;
        *(uint32_t *)(a1 + 24) = 0;
      }
      else
      {
        *(uint32_t *)(a1 + 20) = v21;
        *(uint32_t *)(a1 + 16) = v21;
        *(uint32_t *)(a1 + 24) = v21 + 4 * v23 - 4;
      }
      *(uint8_t *)(a1 + 69) = 1;
      return v6;
    }
  }
  v6 += sub_19367F0(a1, s1, v4);
  return v6;
}


// ============================================================================
// Address:   0x19098f0 (size: 320 bytes)
// Symbol:    sub_19098F0
// Demangled: sub_19098F0
// ============================================================================
int sub_19098F0(int a1, void *a2, int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  signed int v7;
  int result;
  int v9;
  bool v10;
  int v11;
  signed int v12;
  int v13;
  int v14;

  v13 = *(uint32_t *)(a1 + 44);
  v3 = *(uint32_t *)(a1 + 84);
  if ( v3 == 0 )
    sub_18FFF30();
  if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v3 + 24))(*(uint32_t *)(a1 + 84)) == 0
    || (v13 & 0x10) == 0
    || *(uint8_t *)(a1 + 69) != 0 )
  {
    return sub_19368F0(a1, a2, a3);
  }
  v14 = *(uint32_t *)(a1 + 20);
  v4 = *(uint32_t *)(a1 + 24) - v14;
  if ( *(uint8_t *)(a1 + 70) == 0 )
  {
    v5 = *(uint32_t *)(a1 + 64);
    if ( v5 >= 2 )
      v4 = v5 - 1;
  }
  v6 = 1024;
  if ( v4 <= 1024 )
    v6 = v4;
  if ( a3 < v6 )
    return sub_19368F0(a1, a2, a3);
  v12 = v14 - *(uint32_t *)(a1 + 16);
  v7 = sub_1908100(a1 + 36, *(char **)(a1 + 16), v12, (int)(uintptr_t)(a2), a3);
  if ( v7 == v12 + a3 )
  {
    v9 = *(uint32_t *)(a1 + 60);
    v10 = (*(uint32_t *)(a1 + 44) & 0x10) == 0;
    *(uint32_t *)(a1 + 4) = v9;
    *(uint32_t *)(a1 + 8) = v9;
    *(uint32_t *)(a1 + 12) = v9;
    if ( v10 || (unsigned int)(v11 = *(uint32_t *)(a1 + 64)) <= 1 )
    {
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
    }
    else
    {
      *(uint32_t *)(a1 + 20) = v9;
      *(uint32_t *)(a1 + 16) = v9;
      *(uint32_t *)(a1 + 24) = v9 + v11 - 1;
    }
    *(uint8_t *)(a1 + 70) = 1;
  }
  result = 0;
  if ( v12 < v7 )
    return v7 - v12;
  return result;
}


// ============================================================================
// Address:   0x1909a30 (size: 1197 bytes)
// Symbol:    sub_1909A30
// Demangled: sub_1909A30
// ============================================================================
int sub_1909A30(int a1)
{
  int v1;
  uint8_t *v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v10;
  signed int v11;
  signed int v12;
  ssize_t n;
  char *v14;
  char *v15;
  int v16;
  int v17;
  ssize_t v18;
  unsigned int v19;
  uint8_t *dest;
  bool v21;
  int v23;
  int v24;
  char *v25;
  signed int v26;
  char *v27;
  void *v28;
  typedef signed int _g4_t_v29;
  typedef signed int _g4_t_v30;
  typedef signed int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef char _g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef void *_g4_t_src;
  typedef uint8_t *_g4_t_v38;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v30)) > _g4_s1 ? (12u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v31)) > _g4_s2 ? (12u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v32)) > _g4_s3 ? (16u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v33)) > _g4_s4 ? (16u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v34)) > _g4_s5 ? (20u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v35)) > _g4_s6 ? (20u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v36)) > _g4_s7 ? (24u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_src)) > _g4_s8 ? (28u + sizeof(_g4_t_src)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v38)) > _g4_s9 ? (44u + sizeof(_g4_t_v38)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);

  v1 = -1;
  if ( (*(uint8_t *)(a1 + 44) & 8) == 0 )
    return v1;
  if ( *(uint8_t *)(a1 + 70) != 0 )
  {
    if ( G4_VCALL<int>(a1, 52, -1) == -1 )
      return v1;
    v2 = *(uint8_t **)(a1 + 60);
    v21 = *(uint8_t *)(a1 + 80) == 0;
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v2);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v2);
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v2);
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
    *(uint8_t *)(a1 + 70) = 0;
    if ( !v21 )
      goto LABEL_4;
LABEL_37:
    v3 = *(uint32_t *)(a1 + 12);
    goto LABEL_5;
  }
  v2 = *(uint8_t **)(a1 + 8);
  if ( *(uint8_t *)(a1 + 80) == 0 )
    goto LABEL_37;
LABEL_4:
  v3 = *(uint32_t *)(a1 + 76);
  v4 = *(uint32_t *)(a1 + 60);
  v2 = (uint8_t *)(*(uint32_t *)(a1 + 72) + (v2 != *(uint8_t **)(a1 + 4)));
  *(uint32_t *)(a1 + 72) = (uint32_t)(uintptr_t)(v2);
  *(uint32_t *)(a1 + 4) = v4;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v2);
  *(uint32_t *)(a1 + 12) = v3;
  *(uint8_t *)(a1 + 80) = 0;
LABEL_5:
  if ( v3 > (unsigned int)(uintptr_t)(v2) )
    return *v2;
  v5 = *(uint32_t *)(a1 + 64);
  v6 = v5 < 2;
  v7 = v5 - 1;
  v8 = *(uint32_t *)(a1 + 84);
  if ( v6 )
    v7 = 1;
  v36 = v7;
  if ( v8 == 0 )
    sub_18FFF30();
  if ( G4_VCALL<uint8_t>(v8, 24) == 0 )
  {
    v9 = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 84) + 20))(*(uint32_t *)(a1 + 84));
    if ( v9 <= 0 )
    {
      v11 = v36 + (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 84) + 32))(*(uint32_t *)(a1 + 84)) - 1;
      v10 = v36;
    }
    else
    {
      v10 = v36 * v9;
      v11 = v10;
    }
    src = *(void **)(a1 + 96);
    v12 = *(uint32_t *)(a1 + 100) - (uint32_t)(uintptr_t)(src);
    n = v10 - v12;
    if ( v10 <= v12 )
      n = 0;
    if ( *(uint8_t *)(a1 + 69) != 0 && *(uint32_t *)(a1 + 12) == *(uint32_t *)(a1 + 4) && v12 != 0 )
      n = 0;
    if ( v11 > *(uint32_t *)(a1 + 92) )
    {
      v29 = v11;
      v25 = (char *)opNewArray(v11);
      v26 = v29;
      v14 = v25;
      if ( v29 != 0 )
      {
        v27 = &v25[v29];
        do
          *v25++ = 0;
        while ( v25 != v27 );
        v26 = v29;
      }
      v34 = 0;
      if ( v12 != 0 )
      {
        v34 = v12;
        v33 = v14;
        v31 = v26;
        memcpy(v14, *(const void **)(a1 + 96), v12);
        v26 = v31;
        v14 = v33;
      }
      v28 = *(void **)(a1 + 88);
      if ( v28 != nullptr )
      {
        v32 = v14;
        v30 = v26;
        opDeleteArray(v28);
        v26 = v30;
        v14 = v32;
      }
      *(uint32_t *)(a1 + 88) = (uint32_t)(uintptr_t)(v14);
      *(uint32_t *)(a1 + 92) = v26;
    }
    else if ( v12 != 0 )
    {
      v34 = *(uint32_t *)(a1 + 100) - (uint32_t)(uintptr_t)(src);
      memmove(*(void **)(a1 + 88), src, v34);
      v14 = *(char **)(a1 + 88);
    }
    else
    {
      v14 = *(char **)(a1 + 88);
      v34 = 0;
    }
    *(uint32_t *)(a1 + 96) = (uint32_t)(uintptr_t)(v14);
    v15 = &v14[v34];
    v16 = 0;
    v17 = *(uint32_t *)(a1 + 52);
    *(uint32_t *)(a1 + 100) = (uint32_t)(uintptr_t)(v15);
    *(uint32_t *)(a1 + 56) = v17;
    if ( n <= 0 )
    {
      v35 = 0;
      goto LABEL_25;
    }
    while ( 1 )
    {
      if ( (int)(uintptr_t)(&v15[n - *(uint32_t *)(a1 + 88)]) > *(uint32_t *)(a1 + 92) )
        sub_19004E0("basic_filebuf::underflow codecvt::max_length() is not valid");
      v18 = sub_1908080(a1 + 36, v15, n);
      v35 = 1;
      if ( v18 != 0 )
      {
        if ( v18 == -1 )
          goto LABEL_50;
        v35 = 0;
      }
      v15 = (char *)(*(uint32_t *)(a1 + 100) + v18);
      *(uint32_t *)(a1 + 100) = (uint32_t)(uintptr_t)(v15);
LABEL_25:
      v19 = *(uint32_t *)(a1 + 96);
      dest = *(uint8_t **)(a1 + 4);
      v38 = dest;
      if ( v19 < (unsigned int)(uintptr_t)(v15) )
      {
        v16 = (*(int (**)(uint32_t, int, unsigned int, char *, int, uint8_t *, uint8_t *, uint8_t **))(**(uint32_t **)(a1 + 84) + 16))(
                *(uint32_t *)(a1 + 84),
                a1 + 52,
                v19,
                v15,
                a1 + 96,
                dest,
                &dest[v36],
                &v38);
        dest = *(uint8_t **)(a1 + 4);
        if ( v16 == 3 )
        {
LABEL_44:
          n = *(uint32_t *)(a1 + 100) - *(uint32_t *)(a1 + 88);
          if ( v36 <= n )
            n = v36;
          memcpy(dest, *(const void **)(a1 + 88), n);
          *(uint32_t *)(a1 + 96) = n + *(uint32_t *)(a1 + 88);
          goto LABEL_28;
        }
      }
      else if ( v16 == 3 )
      {
        goto LABEL_44;
      }
      n = v38 - dest;
      if ( v16 == 2 )
        goto LABEL_29;
LABEL_28:
      if ( n != 0 )
        goto LABEL_29;
      if ( v35 != 0 )
        goto LABEL_41;
      v15 = *(char **)(a1 + 100);
      LOWORD(n) = 1;
    }
  }
  n = sub_1908080(a1 + 36, *(void **)(a1 + 4), v36);
  if ( n == 0 )
  {
    v24 = *(uint32_t *)(a1 + 60);
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 4) = v24;
    *(uint32_t *)(a1 + 8) = v24;
    *(uint32_t *)(a1 + 12) = v24;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
    *(uint8_t *)(a1 + 69) = 0;
    return -1;
  }
  v16 = 0;
  v35 = 0;
LABEL_29:
  if ( n > 0 )
  {
    v2 = *(uint8_t **)(a1 + 60);
    v21 = (*(uint8_t *)(a1 + 44) & 8) == 0;
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v2);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v2);
    if ( v21 )
      *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v2);
    else
      *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&v2[n]);
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
    *(uint8_t *)(a1 + 69) = 1;
    return *v2;
  }
  if ( v35 == 0 )
  {
LABEL_50:
    if ( v16 != 2 )
      sub_19004E0("basic_filebuf::underflow error reading the file");
    sub_19004E0("basic_filebuf::underflow invalid byte sequence in file");
  }
LABEL_41:
  v23 = *(uint32_t *)(a1 + 60);
  *(uint32_t *)(a1 + 4) = v23;
  *(uint32_t *)(a1 + 8) = v23;
  *(uint32_t *)(a1 + 12) = v23;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint8_t *)(a1 + 69) = 0;
  if ( v16 == 1 )
    sub_19004E0("basic_filebuf::underflow incomplete character in file");
  return -1;
}


// ============================================================================
// Address:   0x1909ee0 (size: 339 bytes)
// Symbol:    sub_1909EE0
// Demangled: sub_1909EE0
// ============================================================================
int sub_1909EE0(int a1, wchar_t *a2, int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  signed int v7;
  int result;
  int v9;
  bool v10;
  int v11;
  signed int v12;
  int v13;
  int v14;

  v13 = *(uint32_t *)(a1 + 44);
  v3 = *(uint32_t *)(a1 + 88);
  if ( v3 == 0 )
    sub_18FFF30();
  if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v3 + 24))(*(uint32_t *)(a1 + 88)) == 0
    || (v13 & 0x10) == 0
    || *(uint8_t *)(a1 + 69) != 0 )
  {
    return sub_1936750(a1, a2, a3);
  }
  v14 = *(uint32_t *)(a1 + 20);
  v4 = (*(uint32_t *)(a1 + 24) - v14) >> 2;
  if ( *(uint8_t *)(a1 + 70) == 0 )
  {
    v5 = *(uint32_t *)(a1 + 64);
    if ( v5 >= 2 )
      v4 = v5 - 1;
  }
  v6 = 1024;
  if ( v4 <= 1024 )
    v6 = v4;
  if ( a3 < v6 )
    return sub_1936750(a1, a2, a3);
  v12 = (v14 - *(uint32_t *)(a1 + 16)) >> 2;
  v7 = sub_1908100(a1 + 36, *(char **)(a1 + 16), v12, (int)(uintptr_t)(a2), a3);
  if ( v7 == v12 + a3 )
  {
    v9 = *(uint32_t *)(a1 + 60);
    v10 = (*(uint32_t *)(a1 + 44) & 0x10) == 0;
    *(uint32_t *)(a1 + 4) = v9;
    *(uint32_t *)(a1 + 8) = v9;
    *(uint32_t *)(a1 + 12) = v9;
    if ( v10 || (unsigned int)(v11 = *(uint32_t *)(a1 + 64)) <= 1 )
    {
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
    }
    else
    {
      *(uint32_t *)(a1 + 20) = v9;
      *(uint32_t *)(a1 + 16) = v9;
      *(uint32_t *)(a1 + 24) = v9 + 4 * v11 - 4;
    }
    *(uint8_t *)(a1 + 70) = 1;
  }
  result = 0;
  if ( v12 < v7 )
    return v7 - v12;
  return result;
}


// ============================================================================
// Address:   0x190a040 (size: 327 bytes)
// Symbol:    sub_190A040
// Demangled: sub_190A040
// ============================================================================
int sub_190A040(int a1, int a2)
{
  int v2;
  unsigned int v3;
  char v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v9;
  typedef char _g4_t_v10;
  typedef uint32_t _g4_t_v11[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);

  v2 = -1;
  if ( (*(uint8_t *)(a1 + 44) & 8) == 0 )
    return v2;
  if ( *(uint8_t *)(a1 + 70) != 0 )
  {
    if ( G4_VCALL<int>(a1, 52, -1) == -1 )
      return v2;
    v9 = *(uint32_t *)(a1 + 60);
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 4) = v9;
    *(uint32_t *)(a1 + 8) = v9;
    *(uint32_t *)(a1 + 12) = v9;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
    *(uint8_t *)(a1 + 70) = 0;
    v4 = *(uint8_t *)(a1 + 84);
LABEL_14:
    v10 = v4;
    v2 = -1;
    (*(void (**)(uint32_t *, int, int64_t, int, int))(*(uint32_t *)a1 + 16))(v11, a1, (int64_t)-1, 1, 24);
    if ( (v11[1] & v11[0]) == -1 )
      return v2;
    v6 = G4_VCALL<int>(a1, 36);
    v4 = v10;
    if ( v6 == -1 )
      return v2;
    goto LABEL_5;
  }
  v3 = *(uint32_t *)(a1 + 8);
  v4 = *(uint8_t *)(a1 + 84);
  if ( v3 <= *(uint32_t *)(a1 + 4) )
    goto LABEL_14;
  v5 = v3 - 4;
  v6 = *(uint32_t *)(v3 - 4);
  *(uint32_t *)(a1 + 8) = v5;
LABEL_5:
  v2 = 0;
  if ( a2 != -1 )
  {
    v2 = a2;
    if ( a2 != v6 )
    {
      v2 = -1;
      if ( v4 == 0 )
      {
        v7 = *(int **)(a1 + 8);
        if ( *(uint8_t *)(a1 + 84) == 0 )
        {
          *(uint32_t *)(a1 + 76) = (uint32_t)(uintptr_t)(v7);
          *(uint32_t *)(a1 + 80) = *(uint32_t *)(a1 + 12);
          v7 = (int *)(a1 + 72);
          *(uint32_t *)(a1 + 12) = a1 + 76;
          *(uint32_t *)(a1 + 4) = a1 + 72;
          *(uint32_t *)(a1 + 8) = a1 + 72;
          *(uint8_t *)(a1 + 84) = 1;
        }
        *(uint8_t *)(a1 + 69) = 1;
        v2 = a2;
        *v7 = a2;
      }
    }
  }
  return v2;
}


// ============================================================================
// Address:   0x190a190 (size: 1217 bytes)
// Symbol:    sub_190A190
// Demangled: sub_190A190
// ============================================================================
int sub_190A190(int a1)
{
  int v1;
  unsigned int v2;
  int v3;
  bool v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  int v11;
  signed int v12;
  signed int v13;
  signed int n;
  char *v15;
  char *v16;
  int v17;
  int v18;
  ssize_t v19;
  unsigned int v20;
  wchar_t *s1;
  int v22;
  bool v24;
  int v25;
  char *v26;
  signed int v27;
  char *v28;
  void *v29;
  typedef signed int _g4_t_v30;
  typedef signed int _g4_t_v31;
  typedef signed int _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef char _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef void *_g4_t_src;
  typedef wchar_t *_g4_t_v39;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v30)) > _g4_s0 ? (8u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v31)) > _g4_s1 ? (8u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v32)) > _g4_s2 ? (8u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v33)) > _g4_s3 ? (12u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v34)) > _g4_s4 ? (12u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v35)) > _g4_s5 ? (16u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v36)) > _g4_s6 ? (16u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v37)) > _g4_s7 ? (20u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_src)) > _g4_s8 ? (24u + sizeof(_g4_t_src)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v39)) > _g4_s9 ? (44u + sizeof(_g4_t_v39)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);

  v1 = -1;
  if ( (*(uint8_t *)(a1 + 44) & 8) != 0 )
  {
    if ( *(uint8_t *)(a1 + 70) != 0 )
    {
      if ( G4_VCALL<int>(a1, 52, -1) == -1 )
        return v1;
      v2 = *(uint32_t *)(a1 + 60);
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 4) = v2;
      *(uint32_t *)(a1 + 8) = v2;
      *(uint32_t *)(a1 + 12) = v2;
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
      *(uint8_t *)(a1 + 70) = 0;
    }
    else
    {
      v2 = *(uint32_t *)(a1 + 8);
    }
    if ( *(uint8_t *)(a1 + 84) != 0 )
    {
      v3 = *(uint32_t *)(a1 + 76);
      v4 = *(uint32_t *)(a1 + 4) != v2;
      *(uint32_t *)(a1 + 4) = *(uint32_t *)(a1 + 60);
      *(uint8_t *)(a1 + 84) = 0;
      v2 = v3 + 4 * v4;
      v5 = *(uint32_t *)(a1 + 80);
      *(uint32_t *)(a1 + 76) = v2;
      *(uint32_t *)(a1 + 8) = v2;
      *(uint32_t *)(a1 + 12) = v5;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 12);
    }
    if ( v5 > v2 )
      return *(uint32_t *)v2;
    v6 = *(uint32_t *)(a1 + 64);
    v7 = v6 < 2;
    v8 = v6 - 1;
    v9 = *(uint32_t *)(a1 + 88);
    if ( v7 )
      v8 = 1;
    v37 = v8;
    if ( v9 == 0 )
      sub_18FFF30();
    if ( G4_VCALL<uint8_t>(v9, 24) == 0 )
    {
      v10 = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 88) + 20))(*(uint32_t *)(a1 + 88));
      if ( v10 <= 0 )
      {
        v12 = v37 + (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 88) + 32))(*(uint32_t *)(a1 + 88)) - 1;
        v11 = v37;
      }
      else
      {
        v11 = v37 * v10;
        v12 = v11;
      }
      src = *(void **)(a1 + 100);
      v13 = *(uint32_t *)(a1 + 104) - (uint32_t)(uintptr_t)(src);
      n = v11 - v13;
      if ( v11 <= v13 )
        n = 0;
      if ( *(uint8_t *)(a1 + 69) != 0 && *(uint32_t *)(a1 + 12) == *(uint32_t *)(a1 + 4) && v13 != 0 )
        n = 0;
      if ( v12 > *(uint32_t *)(a1 + 96) )
      {
        v30 = v12;
        v26 = (char *)opNewArray(v12);
        v27 = v30;
        v15 = v26;
        if ( v30 != 0 )
        {
          v28 = &v26[v30];
          do
            *v26++ = 0;
          while ( v26 != v28 );
          v27 = v30;
        }
        v35 = 0;
        if ( v13 != 0 )
        {
          v35 = v13;
          v34 = v15;
          v32 = v27;
          memcpy(v15, *(const void **)(a1 + 100), v13);
          v27 = v32;
          v15 = v34;
        }
        v29 = *(void **)(a1 + 92);
        if ( v29 != nullptr )
        {
          v33 = v15;
          v31 = v27;
          opDeleteArray(v29);
          v27 = v31;
          v15 = v33;
        }
        *(uint32_t *)(a1 + 92) = (uint32_t)(uintptr_t)(v15);
        *(uint32_t *)(a1 + 96) = v27;
      }
      else if ( v13 != 0 )
      {
        v35 = *(uint32_t *)(a1 + 104) - (uint32_t)(uintptr_t)(src);
        memmove(*(void **)(a1 + 92), src, v35);
        v15 = *(char **)(a1 + 92);
      }
      else
      {
        v15 = *(char **)(a1 + 92);
        v35 = 0;
      }
      v16 = &v15[v35];
      *(uint32_t *)(a1 + 100) = (uint32_t)(uintptr_t)(v15);
      v17 = *(uint32_t *)(a1 + 52);
      v18 = 0;
      *(uint32_t *)(a1 + 104) = (uint32_t)(uintptr_t)(v16);
      *(uint32_t *)(a1 + 56) = v17;
      if ( n <= 0 )
      {
        v36 = 0;
        goto LABEL_26;
      }
      while ( 1 )
      {
        if ( (int)(uintptr_t)(&v16[n - *(uint32_t *)(a1 + 92)]) > *(uint32_t *)(a1 + 96) )
          sub_19004E0("basic_filebuf::underflow codecvt::max_length() is not valid");
        v19 = sub_1908080(a1 + 36, v16, n);
        v36 = 1;
        if ( v19 != 0 )
        {
          if ( v19 == -1 )
            goto LABEL_52;
          v36 = 0;
        }
        v16 = (char *)(*(uint32_t *)(a1 + 104) + v19);
        *(uint32_t *)(a1 + 104) = (uint32_t)(uintptr_t)(v16);
LABEL_26:
        v20 = *(uint32_t *)(a1 + 100);
        s1 = *(wchar_t **)(a1 + 4);
        v39 = s1;
        if ( v20 < (unsigned int)(uintptr_t)(v16) )
        {
          v18 = (*(int (**)(uint32_t, int, unsigned int, char *, int, wchar_t *, wchar_t *, wchar_t **))(**(uint32_t **)(a1 + 88) + 16))(
                  *(uint32_t *)(a1 + 88),
                  a1 + 52,
                  v20,
                  v16,
                  a1 + 100,
                  s1,
                  &s1[v37],
                  &v39);
          s1 = *(wchar_t **)(a1 + 4);
          if ( v18 == 3 )
          {
LABEL_45:
            n = *(uint32_t *)(a1 + 104) - *(uint32_t *)(a1 + 92);
            if ( v37 <= n )
              n = v37;
            wmemcpy(s1, *(const wchar_t **)(a1 + 92), n);
            *(uint32_t *)(a1 + 100) = n + *(uint32_t *)(a1 + 92);
            goto LABEL_29;
          }
        }
        else if ( v18 == 3 )
        {
          goto LABEL_45;
        }
        n = v39 - s1;
        if ( v18 == 2 )
          goto LABEL_39;
LABEL_29:
        if ( n != 0 )
          goto LABEL_39;
        if ( v36 != 0 )
          goto LABEL_31;
        v16 = *(char **)(a1 + 104);
        LOWORD(n) = 1;
      }
    }
    n = sub_1908080(a1 + 36, *(void **)(a1 + 4), v37);
    if ( n == 0 )
    {
      v25 = *(uint32_t *)(a1 + 60);
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 4) = v25;
      *(uint32_t *)(a1 + 8) = v25;
      *(uint32_t *)(a1 + 12) = v25;
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
      *(uint8_t *)(a1 + 69) = 0;
      return -1;
    }
    v18 = 0;
    v36 = 0;
LABEL_39:
    if ( n > 0 )
    {
      v2 = *(uint32_t *)(a1 + 60);
      v24 = (*(uint8_t *)(a1 + 44) & 8) == 0;
      *(uint32_t *)(a1 + 4) = v2;
      *(uint32_t *)(a1 + 8) = v2;
      if ( v24 )
        *(uint32_t *)(a1 + 12) = v2;
      else
        *(uint32_t *)(a1 + 12) = v2 + 4 * n;
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
      *(uint8_t *)(a1 + 69) = 1;
      return *(uint32_t *)v2;
    }
    if ( v36 == 0 )
    {
LABEL_52:
      if ( v18 != 2 )
        sub_19004E0("basic_filebuf::underflow error reading the file");
      sub_19004E0("basic_filebuf::underflow invalid byte sequence in file");
    }
LABEL_31:
    v22 = *(uint32_t *)(a1 + 60);
    *(uint32_t *)(a1 + 4) = v22;
    *(uint32_t *)(a1 + 8) = v22;
    *(uint32_t *)(a1 + 12) = v22;
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 24) = 0;
    *(uint8_t *)(a1 + 69) = 0;
    if ( v18 == 1 )
      sub_19004E0("basic_filebuf::underflow incomplete character in file");
    return -1;
  }
  return v1;
}


// ============================================================================
// Address:   0x190a6d0 (size: 319 bytes)
// Symbol:    sub_190A6D0
// Demangled: sub_190A6D0
// ============================================================================
int sub_190A6D0(int a1)
{
  int result;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  sub_1903A70((uint32_t *)(a1 + 28));
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_1907E20(a1 + 36);
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 1024;
  *(uint8_t *)(a1 + 68) = 0;
  *(uint8_t *)(a1 + 69) = 0;
  *(uint8_t *)(a1 + 70) = 0;
  *(uint8_t *)(a1 + 71) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 76) = 0;
  *(uint8_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
  result = sub_191EB00(a1 + 28);
  if ( (uint8_t)result != 0 )
  {
    result = (int)(uintptr_t)(sub_191D290(a1 + 28));
    *(uint32_t *)(a1 + 84) = result;
  }
  return result;
}


// ============================================================================
// Address:   0x190a810 (size: 37 bytes)
// Symbol:    sub_190A810
// Demangled: sub_190A810
// ============================================================================
bool sub_190A810(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 36));
}


// ============================================================================
// Address:   0x190a840 (size: 76 bytes)
// Symbol:    sub_190A840
// Demangled: sub_190A840
// ============================================================================
void sub_190A840(int a1)
{
  if ( *(uint8_t *)(a1 + 68) == 0 && *(uint32_t *)(a1 + 60) == 0 )
  {
    *(uint32_t *)(a1 + 60) = opNewArray(*(uint32_t *)(a1 + 64));
    *(uint8_t *)(a1 + 68) = 1;
  }
}


// ============================================================================
// Address:   0x190a890 (size: 115 bytes)
// Symbol:    sub_190A890
// Demangled: sub_190A890
// ============================================================================
void sub_190A890(int a1)
{
  if ( *(uint8_t *)(a1 + 68) != 0 )
  {
    if ( *(uint32_t *)(a1 + 60) != 0 )
      opDeleteArray(*(void **)(a1 + 60));
    *(uint32_t *)(a1 + 60) = 0;
    *(uint8_t *)(a1 + 68) = 0;
  }
  if ( *(uint32_t *)(a1 + 88) != 0 )
    opDeleteArray(*(void **)(a1 + 88));
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
}


// ============================================================================
// Address:   0x190a910 (size: 385 bytes)
// Symbol:    sub_190A910
// Demangled: sub_190A910
// ============================================================================
bool sub_190A910(int a1, char *a2, size_t a3, int a4, ...)
{
  int v4;
  int v5;
  void *v6;
  char *v7;
  unsigned int v8;
  size_t v9;
  size_t v10;
  int v12;
  uint32_t *retaddr;
  va_list va;
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
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v20)) > _g4_s7 ? (36u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v21)) > _g4_s8 ? (40u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v22)) > _g4_s9 ? (44u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v23)) > _g4_s10 ? (48u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v24)) > _g4_s11 ? (52u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v25)) > _g4_s12 ? (52u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v26)) > _g4_s13 ? (56u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v27)) > _g4_s14 ? (56u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v28)) > _g4_s15 ? (60u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v29)) > _g4_s16 ? (64u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v30)) > _g4_s17 ? (68u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v31)) > _g4_s18 ? (72u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v32)) > _g4_s19 ? (76u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v33)) > _g4_s20 ? (80u + sizeof(_g4_t_v33)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);

  va_start(va, a4);
  v4 = *(uint32_t *)(a1 + 84);
  if ( v4 == 0 )
    sub_18FFF30();
  if ( (*(uint8_t (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v4 + 24))(
         *(uint32_t *)(a1 + 84),
         v13,
         v14,
         v15,
         v16,
         v17,
         v18,
         v19,
         v20,
         v21,
         v22,
         v23,
         v24,
         v26,
         v28,
         v29,
         v30,
         v31,
         v32,
         v33[0],
         v33[1],
         v33[2],
         v33[3]) != 0 )
    goto LABEL_5;
  v5 = a3 * (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 84) + 32))(*(uint32_t *)(a1 + 84));
  v6 = alloca(v5 + 15);
  a3 = (size_t)&v32;
  v7 = a2;
  a2 = g4_va_cast<char *>(va) + v5;
  retaddr = v33;
  v8 = (*(int (**)(uint32_t, int, char *, char *))(**(uint32_t **)(a1 + 84) + 8))(
         *(uint32_t *)(a1 + 84),
         a1 + 52,
         v7,
         (char *)&v33[-1] + (uint32_t)(uintptr_t)g4_va_cast<char *>(va) + v5);
  if ( v8 > 1 )
  {
    if ( v8 == 3 )
    {
LABEL_5:
      v9 = sub_19080E0(a1 + 36, a2, a3);
      v10 = a3;
      return v9 == v10;
    }
LABEL_11:
    sub_19004E0("basic_filebuf::_M_convert_to_external conversion error");
  }
  v25 = v8;
  v27 = v32 - (uint32_t)(uintptr_t)g4_va_cast<char *>(va);
  v9 = sub_19080E0(a1 + 36, g4_va_cast<char *>(va), v32 - (uint32_t)(uintptr_t)g4_va_cast<char *>(va));
  if ( v27 != v9 || v25 == 0 )
  {
    v10 = v27;
    return v9 == v10;
  }
  retaddr = v33;
  if ( (*(int (**)(uint32_t, int, uint32_t, uint32_t))(**(uint32_t **)(a1 + 84) + 8))(
         *(uint32_t *)(a1 + 84),
         a1 + 52,
         v33[0],
         *(uint32_t *)(a1 + 20)) == 2 )
    goto LABEL_11;
  v12 = v32 - (uint32_t)(uintptr_t)g4_va_cast<char *>(va);
  return sub_19080E0(a1 + 36, g4_va_cast<char *>(va), v32 - (uint32_t)(uintptr_t)g4_va_cast<char *>(va)) == v12;
}


// ============================================================================
// Address:   0x190aaa0 (size: 95 bytes)
// Symbol:    sub_190AAA0
// Demangled: sub_190AAA0
// ============================================================================
int sub_190AAA0(int a1, int a2)
{
  if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(a1 + 84) + 24))(*(uint32_t *)(a1 + 84)) != 0 )
    return *(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 12);
  else
    return *(uint32_t *)(a1 + 88)
         + (*(int (**)(uint32_t, int, uint32_t, uint32_t, int))(**(uint32_t **)(a1 + 84) + 28))(
             *(uint32_t *)(a1 + 84),
             a2,
             *(uint32_t *)(a1 + 88),
             *(uint32_t *)(a1 + 96),
             *(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 4))
         - *(uint32_t *)(a1 + 100);
}


// ============================================================================
// Address:   0x190ab00 (size: 349 bytes)
// Symbol:    sub_190AB00
// Demangled: sub_190AB00
// ============================================================================
bool sub_190AB00(int a1)
{
  int v1;
  int v2;
  unsigned int v3;
  unsigned int v4;
  size_t v6;
  bool v7;
  typedef bool _g4_t_v8;
  typedef int _g4_t_v9;
  typedef char _g4_t_v10[128];
  typedef uint8_t _g4_t_v11[28];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v9)) > _g4_s1 ? (44u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v10)) > _g4_s2 ? (48u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (176u + sizeof(_g4_t_v11)) > _g4_s3 ? (176u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 176u);

  v8 = true;
  if ( *(uint32_t *)(a1 + 16) < *(uint32_t *)(a1 + 20) )
    v8 = G4_VCALL<int>(a1, 52, -1) != -1;
  if ( *(uint8_t *)(a1 + 70) != 0 )
  {
    v1 = *(uint32_t *)(a1 + 84);
    if ( v1 == 0 )
      sub_18FFF30();
    if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 24))(*(uint32_t *)(a1 + 84)) == 0 && v8 )
    {
      v2 = 0;
      while ( 1 )
      {
        v3 = (*(int (**)(uint32_t, int, char *, uint8_t *, int *))(**(uint32_t **)(a1 + 84) + 12))(
               *(uint32_t *)(a1 + 84),
               a1 + 52,
               v10,
               v11,
               &v9);
        v4 = v3;
        if ( v3 == 2 )
          return false;
        if ( v3 <= 1 )
        {
          v2 = v9 - (uint32_t)(uintptr_t)(v10);
          if ( v9 - (int)(uintptr_t)(v10) <= 0 )
            break;
          v6 = sub_19080E0(a1 + 36, v10, v9 - (uint32_t)(uintptr_t)(v10));
          v7 = v8;
          if ( v2 != v6 )
            v7 = false;
          v8 = v7;
        }
        if ( v2 <= 0 || v4 != 1 )
          break;
        if ( !v8 )
          return v8;
      }
      if ( v8 )
        return G4_VCALL<int>(a1, 52, -1) != -1;
    }
  }
  return v8;
}


// ============================================================================
// Address:   0x190ac60 (size: 322 bytes)
// Symbol:    sub_190AC60
// Demangled: sub_190AC60
// ============================================================================
int sub_190AC60(int a1)
{
  bool v1; // bp
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  if ( !sub_1907FD0((uint32_t *)(a1 + 36)) )
    return 0;
  v1 = !sub_190AB00(a1);
  *(uint32_t *)(a1 + 44) = 0;
  *(uint8_t *)(a1 + 80) = 0;
  sub_190A890(a1);
  v2 = *(uint32_t *)(a1 + 60);
  *(uint8_t *)(a1 + 69) = 0;
  *(uint32_t *)(a1 + 4) = v2;
  *(uint32_t *)(a1 + 8) = v2;
  *(uint32_t *)(a1 + 12) = v2;
  v3 = *(uint32_t *)(a1 + 48);
  *(uint8_t *)(a1 + 70) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 52) = v3;
  *(uint32_t *)(a1 + 56) = v3;
  v6 = sub_1908000(v5, v4, a1 + 36);
  v7 = 0;
  if ( v6 != 0 && !v1 )
    return a1;
  return v7;
}


// ============================================================================
// Address:   0x190adb0 (size: 134 bytes)
// Symbol:    sub_190ADB0
// Demangled: sub_190ADB0
// ============================================================================
void sub_190ADB0(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(a1);
  sub_1908070(a1 + 36);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 28));
}


// ============================================================================
// Address:   0x190ae40 (size: 281 bytes)
// Symbol:    sub_190AE40
// Demangled: sub_190AE40
// ============================================================================
int sub_190AE40(int a1, char *a2, int a3)
{
  uint32_t *v3;
  bool v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  uint32_t v10[6];

  v3 = (uint32_t *)(a1 + 36);
  v4 = sub_1907FD0((uint32_t *)(a1 + 36));
  v5 = 0;
  if ( !v4 )
  {
    sub_1907F60((int)(uintptr_t)(v3), a2, a3);
    v6 = sub_1907FD0(v3);
    v5 = 0;
    if ( v6 )
    {
      sub_190A840(a1);
      v7 = *(uint32_t *)(a1 + 60);
      *(uint32_t *)(a1 + 4) = v7;
      *(uint32_t *)(a1 + 8) = v7;
      *(uint32_t *)(a1 + 12) = v7;
      v8 = *(uint32_t *)(a1 + 48);
      *(uint32_t *)(a1 + 44) = a3;
      *(uint8_t *)(a1 + 69) = 0;
      *(uint8_t *)(a1 + 70) = 0;
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
      *(uint32_t *)(a1 + 52) = v8;
      *(uint32_t *)(a1 + 56) = v8;
      v5 = a1;
      if ( (a3 & 2) != 0 )
      {
        (*(void (**)(uint32_t *, int, int64_t, int, int))(*(uint32_t *)a1 + 16))(v10, a1, (int64_t)0, 2, a3);
        v5 = a1;
        if ( (v10[1] & v10[0]) == -1 )
        {
          sub_190AC60(a1);
          return 0;
        }
      }
    }
  }
  return v5;
}


// ============================================================================
// Address:   0x190af80 (size: 217 bytes)
// Symbol:    sub_190AF80
// Demangled: sub_190AF80
// ============================================================================
int sub_190AF80(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9EAC);
  *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(&off_20A9EC0);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(a1 + 4);
  sub_1908070(a1 + 40);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 32));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E6C);
  *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90((uint32_t *)(a1 + 108));
}


// ============================================================================
// Address:   0x190b060 (size: 15 bytes)
// Symbol:    sub_190B060
// Demangled: sub_190B060
// ============================================================================
int sub_190B060(char *a1)
{
  return sub_190B080(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
}


// ============================================================================
// Address:   0x190b070 (size: 7 bytes)
// Symbol:    sub_190B070
// Demangled: sub_190B070
// ============================================================================
int sub_190B070(int a1)
{
  return sub_190B080((void *)(a1 - 8));
}


// ============================================================================
// Address:   0x190b080 (size: 251 bytes)
// Symbol:    sub_190B080
// Demangled: sub_190B080
// ============================================================================
void sub_190B080(char *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9FEC);
  *((uint32_t *)a1 + 2) = ((uint32_t)(uintptr_t)&off_20AA000);
  *((uint32_t *)a1 + 29) = (uint32_t)(uintptr_t)(&off_20AA014);
  *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60((int)(uintptr_t)(a1 + 12));
  sub_1908070(a1 + 48);
  *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)a1 + 10);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20A9EEC);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9F2C);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 29) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((uint32_t *)a1 + 29);
  opDelete(a1);
}


// ============================================================================
// Address:   0x190b180 (size: 15 bytes)
// Symbol:    sub_190B180
// Demangled: sub_190B180
// ============================================================================
int sub_190B180(uint32_t *a1)
{
  return sub_190B1A0((char *)a1 + *(uint32_t *)(*a1 - 12));
}


// ============================================================================
// Address:   0x190b190 (size: 7 bytes)
// Symbol:    sub_190B190
// Demangled: sub_190B190
// ============================================================================
int sub_190B190(int a1)
{
  return sub_190B1A0(a1 - 8);
}


// ============================================================================
// Address:   0x190b1a0 (size: 243 bytes)
// Symbol:    sub_190B1A0
// Demangled: sub_190B1A0
// ============================================================================
int sub_190B1A0(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9FEC);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA000);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA014);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(a1 + 12);
  sub_1908070(a1 + 48);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 40));
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20A9EEC);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9F2C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90((uint32_t *)(a1 + 116));
}


// ============================================================================
// Address:   0x190b2a0 (size: 15 bytes)
// Symbol:    sub_190B2A0
// Demangled: sub_190B2A0
// ============================================================================
int sub_190B2A0(uint32_t *a1)
{
  return sub_190B2B0((char *)a1 + *(uint32_t *)(*a1 - 12));
}


// ============================================================================
// Address:   0x190b2b0 (size: 231 bytes)
// Symbol:    sub_190B2B0
// Demangled: sub_190B2B0
// ============================================================================
int sub_190B2B0(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E2C);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20A9E40);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(a1 + 8);
  sub_1908070(a1 + 44);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 36));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9DEC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90((uint32_t *)(a1 + 112));
}


// ============================================================================
// Address:   0x190b3a0 (size: 15 bytes)
// Symbol:    sub_190B3A0
// Demangled: sub_190B3A0
// ============================================================================
int sub_190B3A0(char *a1)
{
  return sub_190B3B0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
}


// ============================================================================
// Address:   0x190b3b0 (size: 239 bytes)
// Symbol:    sub_190B3B0
// Demangled: sub_190B3B0
// ============================================================================
void sub_190B3B0(char *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E2C);
  *((uint32_t *)a1 + 28) = (uint32_t)(uintptr_t)(&off_20A9E40);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60((int)(uintptr_t)(a1 + 8));
  sub_1908070(a1 + 44);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)a1 + 9);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9DEC);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 28) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((uint32_t *)a1 + 28);
  opDelete(a1);
}


// ============================================================================
// Address:   0x190b4a0 (size: 142 bytes)
// Symbol:    sub_190B4A0
// Demangled: sub_190B4A0
// ============================================================================
void sub_190B4A0(volatile int32_t **a1)
{
  *a1 = (volatile int32_t *)&off_20A9DA8;
  sub_190AC60((int)(uintptr_t)(a1));
  sub_1908070(a1 + 9);
  *a1 = (volatile int32_t *)&off_20AB2C8;
  sub_1902180(a1 + 7);
  opDelete(a1);
}


// ============================================================================
// Address:   0x190b530 (size: 15 bytes)
// Symbol:    sub_190B530
// Demangled: sub_190B530
// ============================================================================
int sub_190B530(char *a1)
{
  return sub_190B540(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
}


// ============================================================================
// Address:   0x190b540 (size: 225 bytes)
// Symbol:    sub_190B540
// Demangled: sub_190B540
// ============================================================================
void sub_190B540(char *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9EAC);
  *((uint32_t *)a1 + 27) = (uint32_t)(uintptr_t)(&off_20A9EC0);
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60((int)(uintptr_t)(a1 + 4));
  sub_1908070(a1 + 40);
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)a1 + 8);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E6C);
  *((uint32_t *)a1 + 27) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((uint32_t *)a1 + 27);
  opDelete(a1);
}


// ============================================================================
// Address:   0x190b630 (size: 491 bytes)
// Symbol:    sub_190B630
// Demangled: sub_190B630
// ============================================================================
char sub_190B630(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  const void *src;
  size_t v8;
  size_t n;
  int v10;
  int v11;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  if ( (uint8_t)sub_191EB00(a2) != 0 )
    v2 = (int)(uintptr_t)(sub_191D290(a2));
  else
    v2 = 0;
  LOBYTE(v3) = sub_1907FD0((uint32_t *)(a1 + 36));
  if ( (uint8_t)v3 != 0 && (*(uint8_t *)(a1 + 69) != 0 || *(uint8_t *)(a1 + 70) != 0) )
  {
    v4 = *(uint32_t *)(a1 + 84);
    if ( v4 == 0 )
      goto LABEL_24;
    v3 = (*(int (**)(uint32_t))(*(uint32_t *)v4 + 20))(*(uint32_t *)(a1 + 84));
    if ( v3 == -1 )
    {
LABEL_13:
      v2 = 0;
      goto LABEL_14;
    }
    if ( *(uint8_t *)(a1 + 69) == 0 )
    {
      if ( *(uint8_t *)(a1 + 70) == 0 )
        goto LABEL_14;
      LOBYTE(v3) = sub_190AB00(a1);
      if ( (uint8_t)v3 != 0 )
      {
        v3 = *(uint32_t *)(a1 + 60);
        *(uint32_t *)(a1 + 20) = 0;
        *(uint32_t *)(a1 + 4) = v3;
        *(uint32_t *)(a1 + 8) = v3;
        *(uint32_t *)(a1 + 12) = v3;
        *(uint32_t *)(a1 + 16) = 0;
        *(uint32_t *)(a1 + 24) = 0;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    v5 = *(uint32_t *)(a1 + 84);
    if ( v5 == 0 )
LABEL_24:
      sub_18FFF30();
    LOBYTE(v3) = (*(int (**)(uint32_t))(*(uint32_t *)v5 + 24))(*(uint32_t *)(a1 + 84));
    if ( (uint8_t)v3 != 0 )
    {
      if ( v2 != 0 )
      {
        LOBYTE(v3) = G4_VCALL<int>(v2, 24);
        if ( (uint8_t)v3 == 0 )
        {
          (*(void (**)(int *, int, int64_t, int, uint32_t))(*(uint32_t *)a1 + 16))(&v13, a1, (int64_t)0, 1, *(uint32_t *)(a1 + 44));
          LOBYTE(v3) = v14 & v13;
          if ( (v14 & v13) == 0xFFFFFFFF )
            goto LABEL_13;
        }
      }
    }
    else
    {
      v6 = *(uint32_t *)(a1 + 88);
      src = (const void *)(v6
                         + (*(int (**)(uint32_t, int, int, uint32_t, int))(**(uint32_t **)(a1 + 84) + 28))(
                             *(uint32_t *)(a1 + 84),
                             a1 + 56,
                             v6,
                             *(uint32_t *)(a1 + 96),
                             *(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 4)));
      v8 = 0;
      n = *(uint32_t *)(a1 + 100) - (uint32_t)(uintptr_t)(src);
      *(uint32_t *)(a1 + 96) = (uint32_t)(uintptr_t)(src);
      if ( n != 0 )
      {
        v8 = n;
        memmove(*(void **)(a1 + 88), src, n);
      }
      v10 = *(uint32_t *)(a1 + 88);
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 96) = v10;
      *(uint32_t *)(a1 + 100) = v8 + v10;
      v11 = *(uint32_t *)(a1 + 60);
      *(uint32_t *)(a1 + 4) = v11;
      *(uint32_t *)(a1 + 8) = v11;
      *(uint32_t *)(a1 + 12) = v11;
      v3 = *(uint32_t *)(a1 + 48);
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
      *(uint32_t *)(a1 + 52) = v3;
      *(uint32_t *)(a1 + 56) = v3;
    }
  }
LABEL_14:
  *(uint32_t *)(a1 + 84) = v2;
  return v3;
}


// ============================================================================
// Address:   0x190b820 (size: 230 bytes)
// Symbol:    sub_190B820
// Demangled: sub_190B820
// ============================================================================
uint32_t *sub_190B820(uint32_t *a1, int a2, int64_t a3, int a4, int a5)
{
  int64_t v6; // rax
  int v7;
  int v8;

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( sub_190AB00(a2) )
  {
    v6 = sub_19081E0(a2 + 36, a3, a4);
    if ( (HIDWORD(v6) & (unsigned int)v6) != 0xFFFFFFFF )
    {
      v7 = *(uint32_t *)(a2 + 88);
      *(uint8_t *)(a2 + 69) = 0;
      *(uint32_t *)(a2 + 100) = v7;
      *(uint32_t *)(a2 + 96) = v7;
      v8 = *(uint32_t *)(a2 + 60);
      *(uint8_t *)(a2 + 70) = 0;
      *(uint32_t *)(a2 + 4) = v8;
      *(uint32_t *)(a2 + 8) = v8;
      *(uint32_t *)(a2 + 12) = v8;
      *(uint32_t *)(a2 + 20) = 0;
      *(uint32_t *)(a2 + 16) = 0;
      *(uint32_t *)(a2 + 24) = 0;
      *(uint32_t *)(a2 + 52) = a5;
      *(uint64_t *)a1 = v6;
      a1[2] = a5;
    }
  }
  return a1;
}


// ============================================================================
// Address:   0x190b910 (size: 188 bytes)
// Symbol:    sub_190B910
// Demangled: sub_190B910
// ============================================================================
uint32_t *sub_190B910(uint32_t *a1, int a2, int64_t a3, int a4)
{
  int v5;
  int v6;

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( sub_1907FD0((uint32_t *)(a2 + 36)) )
  {
    if ( *(uint8_t *)(a2 + 80) != 0 )
    {
      v5 = *(uint32_t *)(a2 + 76);
      v6 = *(uint32_t *)(a2 + 72) + (*(uint32_t *)(a2 + 8) != *(uint32_t *)(a2 + 4));
      *(uint32_t *)(a2 + 4) = *(uint32_t *)(a2 + 60);
      *(uint32_t *)(a2 + 72) = v6;
      *(uint32_t *)(a2 + 8) = v6;
      *(uint32_t *)(a2 + 12) = v5;
      *(uint8_t *)(a2 + 80) = 0;
    }
    sub_190B820(a1, a2, a3, 0, a4);
  }
  return a1;
}


// ============================================================================
// Address:   0x190b9d0 (size: 533 bytes)
// Symbol:    sub_190B9D0
// Demangled: sub_190B9D0
// ============================================================================
uint32_t *sub_190B9D0(uint32_t *a1, int a2, int64_t a3, int a4)
{
  int v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int v12;
  int64_t v14; // rax
  int v16;
  int64_t v21; // 0:edi.4,4:ebp.4
  typedef int _g4_t_v17;
  typedef bool _g4_t_v18;
  typedef char _g4_t_v19;
  typedef int _g4_t_v20[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v18)) > _g4_s1 ? (14u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v19)) > _g4_s2 ? (14u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v20)) > _g4_s3 ? (28u + sizeof(_g4_t_v20)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 14u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 14u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);

  v4 = *(uint32_t *)(a2 + 84);
  v5 = 0;
  v18 = true;
  if ( v4 != 0 )
  {
    v6 = G4_VCALL<int>(v4, 20);
    v5 = v6;
    if ( v6 < 0 )
      v5 = 0;
    else
      v18 = v6 <= 0;
  }
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  v7 = sub_1907FD0((uint32_t *)(a2 + 36));
  v8 = a2 + 36;
  if ( v7 && (a3 == 0 || !v18) )
  {
    if ( a4 == 1
      && a3 == 0
      && (*(uint8_t *)(a2 + 70) == 0
       || (v9 = (*(int (**)(uint32_t))(**(uint32_t **)(a2 + 84) + 24))(*(uint32_t *)(a2 + 84)), v8 = a2 + 36, v9 != 0)) )
    {
      v19 = 1;
    }
    else
    {
      if ( *(uint8_t *)(a2 + 80) != 0 )
      {
        v10 = *(uint32_t *)(a2 + 60);
        v11 = *(uint32_t *)(a2 + 72) + (*(uint32_t *)(a2 + 8) != *(uint32_t *)(a2 + 4));
        *(uint32_t *)(a2 + 72) = v11;
        *(uint32_t *)(a2 + 8) = v11;
        v12 = *(uint32_t *)(a2 + 76);
        *(uint32_t *)(a2 + 4) = v10;
        *(uint32_t *)(a2 + 12) = v12;
        *(uint8_t *)(a2 + 80) = 0;
      }
      v19 = 0;
    }
    v20[0] = *(uint32_t *)(a2 + 48);
    HIDWORD(v21) = (uint64_t)(v5 * a3) >> 32;
    LODWORD(v21) = a3 * v5;
    if ( *(uint8_t *)(a2 + 69) != 0 && a4 == 1 )
    {
      v17 = v8;
      v20[0] = *(uint32_t *)(a2 + 56);
      v16 = sub_190AAA0(a2, (int)(uintptr_t)(v20));
      v8 = v17;
      v21 += v16;
    }
    if ( v19 != 0 )
    {
      if ( *(uint8_t *)(a2 + 70) != 0 )
      {
        LODWORD(v21) = *(uint32_t *)(a2 + 20) - *(uint32_t *)(a2 + 16);
        HIDWORD(v21) = (int)v21 >> 31;
      }
      v14 = sub_19081E0(v8, 0, 1);
      if ( (HIDWORD(v14) & (unsigned int)v14) != 0xFFFFFFFF )
      {
        a1[1] = HIDWORD(v14) + __CFADD__((uint32_t)v14, (uint32_t)v21) + HIDWORD(v21);
        *a1 = v14 + v21;
        a1[2] = v20[0];
      }
    }
    else
    {
      sub_190B820(a1, a2, v21, a4, v20[0]);
    }
  }
  return a1;
}


// ============================================================================
// Address:   0x190bbf0 (size: 540 bytes)
// Symbol:    sub_190BBF0
// Demangled: sub_190BBF0
// ============================================================================
int sub_190BBF0(int a1, int a2)
{
  int result;
  char *v3;
  char *v4;
  bool v5;
  unsigned int v6;
  int v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  bool v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint32_t _g4_t_v17[3];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (35u + sizeof(_g4_t_v16)) > _g4_s1 ? (35u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v17)) > _g4_s2 ? (36u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 35u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);

  result = -1;
  if ( (*(uint8_t *)(a1 + 44) & 0x10) == 0 )
    return result;
  if ( *(uint8_t *)(a1 + 69) != 0 )
  {
    if ( *(uint8_t *)(a1 + 80) != 0 )
    {
      v9 = *(uint32_t *)(a1 + 76);
      v10 = *(uint32_t *)(a1 + 72) + (*(uint32_t *)(a1 + 8) != *(uint32_t *)(a1 + 4));
      *(uint32_t *)(a1 + 4) = *(uint32_t *)(a1 + 60);
      *(uint32_t *)(a1 + 72) = v10;
      *(uint32_t *)(a1 + 8) = v10;
      *(uint32_t *)(a1 + 12) = v9;
      *(uint8_t *)(a1 + 80) = 0;
    }
    v11 = sub_190AAA0(a1, a1 + 56);
    sub_190B820(v17, a1, v11, 1, *(uint32_t *)(a1 + 56));
    if ( (v17[1] & v17[0]) == -1 )
      return -1;
  }
  v3 = *(char **)(a1 + 16);
  v4 = *(char **)(a1 + 20);
  if ( v3 >= v4 )
  {
    v6 = *(uint32_t *)(a1 + 64);
    if ( v6 <= 1 )
    {
      v16 = a2;
      if ( a2 != -1 )
      {
        v14 = sub_190A910(a1, &v16, 1u, v15);
        result = -1;
        if ( !v14 )
          return result;
      }
      *(uint8_t *)(a1 + 70) = 1;
    }
    else
    {
      v7 = *(uint32_t *)(a1 + 60);
      v8 = (*(uint32_t *)(a1 + 44) & 0x10) == 0;
      *(uint32_t *)(a1 + 4) = v7;
      *(uint32_t *)(a1 + 8) = v7;
      *(uint32_t *)(a1 + 12) = v7;
      if ( v8 )
      {
        *(uint32_t *)(a1 + 20) = 0;
        *(uint32_t *)(a1 + 16) = 0;
        *(uint32_t *)(a1 + 24) = 0;
      }
      else
      {
        *(uint32_t *)(a1 + 20) = v7;
        *(uint32_t *)(a1 + 16) = v7;
        *(uint32_t *)(a1 + 24) = v7 + v6 - 1;
      }
      *(uint8_t *)(a1 + 70) = 1;
      if ( a2 != -1 )
        *(uint8_t *)(*(uint32_t *)(a1 + 20))++ = a2;
    }
LABEL_13:
    result = 0;
    if ( a2 != -1 )
      return a2;
    return result;
  }
  if ( a2 != -1 )
  {
    *v4 = a2;
    v4 = (char *)(*(uint32_t *)(a1 + 20) + 1);
    v3 = *(char **)(a1 + 16);
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v4);
  }
  v5 = sub_190A910(a1, v3, v4 - v3, v15);
  result = -1;
  if ( v5 )
  {
    v12 = *(uint32_t *)(a1 + 60);
    v8 = (*(uint32_t *)(a1 + 44) & 0x10) == 0;
    *(uint32_t *)(a1 + 4) = v12;
    *(uint32_t *)(a1 + 8) = v12;
    *(uint32_t *)(a1 + 12) = v12;
    if ( v8 || (unsigned int)(v13 = *(uint32_t *)(a1 + 64)) <= 1 )
    {
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
    }
    else
    {
      *(uint32_t *)(a1 + 20) = v12;
      *(uint32_t *)(a1 + 16) = v12;
      *(uint32_t *)(a1 + 24) = v12 + v13 - 1;
    }
    goto LABEL_13;
  }
  return result;
}


// ============================================================================
// Address:   0x190be10 (size: 132 bytes)
// Symbol:    sub_190BE10
// Demangled: sub_190BE10
// ============================================================================
uint32_t *sub_190BE10(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  bool v4;
  int v5;
  unsigned int v6;

  result = a1;
  v3 = a1[11] & 0x10;
  v4 = (a1[11] & 8) == 0;
  v5 = a1[15];
  a1[1] = v5;
  a1[2] = v5;
  if ( v4 || a2 <= 0 )
  {
    a1[3] = v5;
    if ( v3 == 0 )
      goto LABEL_4;
  }
  else
  {
    a1[3] = v5 + a2;
    if ( v3 == 0 )
    {
LABEL_4:
      a1[5] = 0;
      a1[4] = 0;
      a1[6] = 0;
      return result;
    }
  }
  if ( a2 != 0 )
    goto LABEL_4;
  v6 = a1[16];
  if ( v6 <= 1 )
    goto LABEL_4;
  a1[5] = v5;
  a1[4] = v5;
  a1[6] = v5 + v6 - 1;
  return result;
}


// ============================================================================
// Address:   0x190bea0 (size: 192 bytes)
// Symbol:    sub_190BEA0
// Demangled: sub_190BEA0
// ============================================================================
int sub_190BEA0(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2[1];
  v3 = *(uint32_t *)(v2 - 12);
  *a1 = v2;
  *(int *)((char *)a1 + v3) = a2[2];
  a1[1] = 0;
  sub_19119D0((char *)a1 + *(uint32_t *)(v2 - 12), 0);
  v4 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[3];
  sub_190A6D0((int)(uintptr_t)(a1 + 2));
  return sub_19119D0((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 2);
}


// ============================================================================
// Address:   0x190bf60 (size: 272 bytes)
// Symbol:    sub_190BF60
// Demangled: sub_190BF60
// ============================================================================
int sub_190BF60(int a1)
{
  sub_1900810((uint32_t *)(a1 + 112));
  *(uint32_t *)(a1 + 224) = 0;
  *(uint8_t *)(a1 + 228) = 0;
  *(uint8_t *)(a1 + 229) = 0;
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9DEC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20A9E00);
  sub_19119D0(a1 + 112, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E2C);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0(a1 + 8);
  return sub_19119D0(a1 + 112, a1 + 8);
}


// ============================================================================
// Address:   0x190c070 (size: 275 bytes)
// Symbol:    sub_190C070
// Demangled: sub_190C070
// ============================================================================
int sub_190C070(int *a1, int *a2, char *a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a2[1];
  v5 = *(uint32_t *)(v4 - 12);
  *a1 = v4;
  *(int *)((char *)a1 + v5) = a2[2];
  a1[1] = 0;
  sub_19119D0((char *)a1 + *(uint32_t *)(v4 - 12), 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  sub_190A6D0((int)(uintptr_t)(a1 + 2));
  sub_19119D0((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 2);
  if ( sub_190AE40((int)(uintptr_t)(a1 + 2), a3, a4 | 8) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190c190 (size: 351 bytes)
// Symbol:    sub_190C190
// Demangled: sub_190C190
// ============================================================================
int sub_190C190(int a1, char *a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 112));
  *(uint32_t *)(a1 + 224) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9DEC);
  *(uint8_t *)(a1 + 228) = 0;
  *(uint8_t *)(a1 + 229) = 0;
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20A9E00);
  sub_19119D0(a1 + 112, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E2C);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0(a1 + 8);
  sub_19119D0(a1 + 112, a1 + 8);
  if ( sub_190AE40(a1 + 8, a2, a3 | 8) != 0 )
    return sub_1911530(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911530(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}


// ============================================================================
// Address:   0x190c2f0 (size: 283 bytes)
// Symbol:    sub_190C2F0
// Demangled: sub_190C2F0
// ============================================================================
int sub_190C2F0(int *a1, int *a2, char **a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a2[1];
  v5 = *(uint32_t *)(v4 - 12);
  *a1 = v4;
  *(int *)((char *)a1 + v5) = a2[2];
  a1[1] = 0;
  sub_19119D0((char *)a1 + *(uint32_t *)(v4 - 12), 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  sub_190A6D0((int)(uintptr_t)(a1 + 2));
  sub_19119D0((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 2);
  if ( sub_190AE40((int)(uintptr_t)(a1 + 2), *a3, a4 | 8) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190c410 (size: 359 bytes)
// Symbol:    sub_190C410
// Demangled: sub_190C410
// ============================================================================
int sub_190C410(int a1, char **a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 112));
  *(uint32_t *)(a1 + 224) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9DEC);
  *(uint8_t *)(a1 + 228) = 0;
  *(uint8_t *)(a1 + 229) = 0;
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20A9E00);
  sub_19119D0(a1 + 112, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E2C);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0(a1 + 8);
  sub_19119D0(a1 + 112, a1 + 8);
  if ( sub_190AE40(a1 + 8, *a2, a3 | 8) != 0 )
    return sub_1911530(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911530(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}


// ============================================================================
// Address:   0x190c580 (size: 214 bytes)
// Symbol:    sub_190C580
// Demangled: sub_190C580
// ============================================================================
int sub_190C580(int a1, int *a2)
{
  int v2;
  int v3;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[3];
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(a1 + 8);
  sub_1908070(a1 + 44);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 36));
  v3 = a2[1];
  *(uint32_t *)a1 = v3;
  result = *(uint32_t *)(v3 - 12);
  *(uint32_t *)(a1 + result) = a2[2];
  *(uint32_t *)(a1 + 4) = 0;
  return result;
}


// ============================================================================
// Address:   0x190c670 (size: 37 bytes)
// Symbol:    sub_190C670
// Demangled: sub_190C670
// ============================================================================
bool sub_190C670(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 44));
}


// ============================================================================
// Address:   0x190c6a0 (size: 37 bytes)
// Symbol:    sub_190C6A0
// Demangled: sub_190C6A0
// ============================================================================
bool sub_190C6A0(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 44));
}


// ============================================================================
// Address:   0x190c6d0 (size: 132 bytes)
// Symbol:    sub_190C6D0
// Demangled: sub_190C6D0
// ============================================================================
int sub_190C6D0(uint32_t *a1, char *a2, int a3)
{
  if ( sub_190AE40((int)(uintptr_t)(a1 + 2), a2, a3 | 8) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190c760 (size: 140 bytes)
// Symbol:    sub_190C760
// Demangled: sub_190C760
// ============================================================================
int sub_190C760(uint32_t *a1, char **a2, int a3)
{
  if ( sub_190AE40((int)(uintptr_t)(a1 + 2), *a2, a3 | 8) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190c7f0 (size: 92 bytes)
// Symbol:    sub_190C7F0
// Demangled: sub_190C7F0
// ============================================================================
int sub_190C7F0(uint32_t *a1)
{
  int result;

  result = sub_190AC60((int)(uintptr_t)(a1 + 2));
  if ( result == 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
  return result;
}


// ============================================================================
// Address:   0x190c850 (size: 175 bytes)
// Symbol:    sub_190C850
// Demangled: sub_190C850
// ============================================================================
int sub_190C850(int *a1, int *a2)
{
  int v2;
  uint32_t *v3;
  int v4;

  v2 = a2[1];
  *a1 = v2;
  v3 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v2 - 12)));
  *v3 = a2[2];
  sub_19119D0(v3, 0);
  v4 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[3];
  sub_190A6D0((int)(uintptr_t)(a1 + 1));
  return sub_19119D0((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 1);
}


// ============================================================================
// Address:   0x190c900 (size: 258 bytes)
// Symbol:    sub_190C900
// Demangled: sub_190C900
// ============================================================================
int sub_190C900(int a1)
{
  sub_1900810((uint32_t *)(a1 + 108));
  *(uint32_t *)(a1 + 220) = 0;
  *(uint8_t *)(a1 + 224) = 0;
  *(uint8_t *)(a1 + 225) = 0;
  *(uint32_t *)(a1 + 228) = 0;
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E6C);
  *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(&off_20A9E80);
  sub_19119D0(a1 + 108, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9EAC);
  *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(a1 + 4);
  return sub_19119D0(a1 + 108, a1 + 4);
}


// ============================================================================
// Address:   0x190ca10 (size: 260 bytes)
// Symbol:    sub_190CA10
// Demangled: sub_190CA10
// ============================================================================
int sub_190CA10(int *a1, int *a2, char *a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;

  v4 = a2[1];
  *a1 = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12)));
  *v5 = a2[2];
  sub_19119D0(v5, 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  sub_190A6D0((int)(uintptr_t)(a1 + 1));
  sub_19119D0((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 1);
  if ( sub_190AE40((int)(uintptr_t)(a1 + 1), a3, a4 | 0x10) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190cb20 (size: 336 bytes)
// Symbol:    sub_190CB20
// Demangled: sub_190CB20
// ============================================================================
int sub_190CB20(int a1, char *a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 108));
  *(uint32_t *)(a1 + 220) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E6C);
  *(uint8_t *)(a1 + 224) = 0;
  *(uint8_t *)(a1 + 225) = 0;
  *(uint32_t *)(a1 + 228) = 0;
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(&off_20A9E80);
  sub_19119D0(a1 + 108, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9EAC);
  *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(a1 + 4);
  sub_19119D0(a1 + 108, a1 + 4);
  if ( sub_190AE40(a1 + 4, a2, a3 | 0x10) != 0 )
    return sub_1911530(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911530(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}


// ============================================================================
// Address:   0x190cc70 (size: 260 bytes)
// Symbol:    sub_190CC70
// Demangled: sub_190CC70
// ============================================================================
int sub_190CC70(int *a1, int *a2, char **a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;

  v4 = a2[1];
  *a1 = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12)));
  *v5 = a2[2];
  sub_19119D0(v5, 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  sub_190A6D0((int)(uintptr_t)(a1 + 1));
  sub_19119D0((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 1);
  if ( sub_190AE40((int)(uintptr_t)(a1 + 1), *a3, a4 | 0x10) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190cd80 (size: 344 bytes)
// Symbol:    sub_190CD80
// Demangled: sub_190CD80
// ============================================================================
int sub_190CD80(int a1, char **a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 108));
  *(uint32_t *)(a1 + 220) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9E6C);
  *(uint8_t *)(a1 + 224) = 0;
  *(uint8_t *)(a1 + 225) = 0;
  *(uint32_t *)(a1 + 228) = 0;
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(&off_20A9E80);
  sub_19119D0(a1 + 108, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9EAC);
  *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(a1 + 4);
  sub_19119D0(a1 + 108, a1 + 4);
  if ( sub_190AE40(a1 + 4, *a2, a3 | 0x10) != 0 )
    return sub_1911530(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911530(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}


// ============================================================================
// Address:   0x190cee0 (size: 200 bytes)
// Symbol:    sub_190CEE0
// Demangled: sub_190CEE0
// ============================================================================
int sub_190CEE0(int a1, int *a2)
{
  int v2;
  int v3;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[3];
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(a1 + 4);
  sub_1908070(a1 + 40);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 32));
  v3 = a2[1];
  *(uint32_t *)a1 = v3;
  result = *(uint32_t *)(v3 - 12);
  *(uint32_t *)(a1 + result) = a2[2];
  return result;
}


// ============================================================================
// Address:   0x190cfc0 (size: 37 bytes)
// Symbol:    sub_190CFC0
// Demangled: sub_190CFC0
// ============================================================================
bool sub_190CFC0(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 40));
}


// ============================================================================
// Address:   0x190cff0 (size: 37 bytes)
// Symbol:    sub_190CFF0
// Demangled: sub_190CFF0
// ============================================================================
bool sub_190CFF0(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 40));
}


// ============================================================================
// Address:   0x190d020 (size: 132 bytes)
// Symbol:    sub_190D020
// Demangled: sub_190D020
// ============================================================================
int sub_190D020(uint32_t *a1, char *a2, int a3)
{
  if ( sub_190AE40((int)(uintptr_t)(a1 + 1), a2, a3 | 0x10) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190d0b0 (size: 140 bytes)
// Symbol:    sub_190D0B0
// Demangled: sub_190D0B0
// ============================================================================
int sub_190D0B0(uint32_t *a1, char **a2, int a3)
{
  if ( sub_190AE40((int)(uintptr_t)(a1 + 1), *a2, a3 | 0x10) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190d140 (size: 92 bytes)
// Symbol:    sub_190D140
// Demangled: sub_190D140
// ============================================================================
int sub_190D140(uint32_t *a1)
{
  int result;

  result = sub_190AC60((int)(uintptr_t)(a1 + 1));
  if ( result == 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
  return result;
}


// ============================================================================
// Address:   0x190d1a0 (size: 278 bytes)
// Symbol:    sub_190D1A0
// Demangled: sub_190D1A0
// ============================================================================
int sub_190D1A0(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;

  v2 = a2[2];
  v3 = *(uint32_t *)(v2 - 12);
  *a1 = v2;
  *(int *)((char *)a1 + v3) = a2[3];
  a1[1] = 0;
  sub_19119D0((char *)a1 + *(uint32_t *)(v2 - 12), 0);
  v4 = a2[4];
  a1[2] = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12) + 8));
  *v5 = a2[5];
  sub_19119D0(v5, 0);
  v6 = a2[1];
  *a1 = v6;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[6];
  a1[2] = a2[7];
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[8];
  a1[2] = a2[9];
  sub_190A6D0((int)(uintptr_t)(a1 + 3));
  return sub_19119D0((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 3);
}


// ============================================================================
// Address:   0x190d2c0 (size: 323 bytes)
// Symbol:    sub_190D2C0
// Demangled: sub_190D2C0
// ============================================================================
int sub_190D2C0(int a1)
{
  sub_1900810((uint32_t *)(a1 + 116));
  *(uint32_t *)(a1 + 228) = 0;
  *(uint8_t *)(a1 + 232) = 0;
  *(uint8_t *)(a1 + 233) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9F2C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20A9F40);
  sub_19119D0(a1 + 116, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20A9EEC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20A9F00);
  sub_19119D0(a1 + 116, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9FEC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA014);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA000);
  sub_190A6D0(a1 + 12);
  return sub_19119D0(a1 + 116, a1 + 12);
}


// ============================================================================
// Address:   0x190d410 (size: 358 bytes)
// Symbol:    sub_190D410
// Demangled: sub_190D410
// ============================================================================
int sub_190D410(int *a1, int *a2, char *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;

  v4 = a2[2];
  v5 = *(uint32_t *)(v4 - 12);
  *a1 = v4;
  *(int *)((char *)a1 + v5) = a2[3];
  a1[1] = 0;
  sub_19119D0((char *)a1 + *(uint32_t *)(v4 - 12), 0);
  v6 = a2[4];
  a1[2] = v6;
  v7 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v6 - 12) + 8));
  *v7 = a2[5];
  sub_19119D0(v7, 0);
  v8 = a2[1];
  *a1 = v8;
  *(int *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[6];
  a1[2] = a2[7];
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v9 - 12)) = a2[8];
  a1[2] = a2[9];
  sub_190A6D0((int)(uintptr_t)(a1 + 3));
  sub_19119D0((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 3);
  if ( sub_190AE40((int)(uintptr_t)(a1 + 3), a3, a4) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190d580 (size: 405 bytes)
// Symbol:    sub_190D580
// Demangled: sub_190D580
// ============================================================================
int sub_190D580(int a1, char *a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 116));
  *(uint32_t *)(a1 + 228) = 0;
  *(uint8_t *)(a1 + 232) = 0;
  *(uint8_t *)(a1 + 233) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9F2C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20A9F40);
  sub_19119D0(a1 + 116, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20A9EEC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20A9F00);
  sub_19119D0(a1 + 116, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9FEC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA014);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA000);
  sub_190A6D0(a1 + 12);
  sub_19119D0(a1 + 116, a1 + 12);
  if ( sub_190AE40(a1 + 12, a2, a3) != 0 )
    return sub_1911530(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911530(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}


// ============================================================================
// Address:   0x190d720 (size: 349 bytes)
// Symbol:    sub_190D720
// Demangled: sub_190D720
// ============================================================================
int sub_190D720(int *a1, int *a2, char **a3, int a4)
{
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;

  v4 = a2[2];
  *a1 = v4;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[3];
  a1[1] = 0;
  sub_19119D0((char *)a1 + *(uint32_t *)(v4 - 12), 0);
  v5 = a2[4];
  a1[2] = v5;
  v6 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v5 - 12) + 8));
  *v6 = a2[5];
  sub_19119D0(v6, 0);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[6];
  a1[2] = a2[7];
  v8 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[8];
  a1[2] = a2[9];
  sub_190A6D0((int)(uintptr_t)(a1 + 3));
  sub_19119D0((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 3);
  if ( sub_190AE40((int)(uintptr_t)(a1 + 3), *a3, a4) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190d880 (size: 405 bytes)
// Symbol:    sub_190D880
// Demangled: sub_190D880
// ============================================================================
int sub_190D880(int a1, char **a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 116));
  *(uint32_t *)(a1 + 228) = 0;
  *(uint8_t *)(a1 + 232) = 0;
  *(uint8_t *)(a1 + 233) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9F2C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20A9F40);
  sub_19119D0(a1 + 116, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20A9EEC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20A9F00);
  sub_19119D0(a1 + 116, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20A9FEC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA014);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA000);
  sub_190A6D0(a1 + 12);
  sub_19119D0(a1 + 116, a1 + 12);
  if ( sub_190AE40(a1 + 12, *a2, a3) != 0 )
    return sub_1911530(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911530(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}


// ============================================================================
// Address:   0x190da20 (size: 250 bytes)
// Symbol:    sub_190DA20
// Demangled: sub_190DA20
// ============================================================================
int sub_190DA20(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[8];
  *(uint32_t *)(a1 + 8) = a2[9];
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(a1 + 12);
  sub_1908070(a1 + 48);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 40));
  v3 = a2[1];
  *(uint32_t *)a1 = v3;
  *(uint32_t *)(a1 + *(uint32_t *)(v3 - 12)) = a2[6];
  *(uint32_t *)(a1 + 8) = a2[7];
  v4 = a2[4];
  *(uint32_t *)(a1 + 8) = v4;
  *(uint32_t *)(a1 + *(uint32_t *)(v4 - 12) + 8) = a2[5];
  v5 = a2[2];
  *(uint32_t *)a1 = v5;
  result = *(uint32_t *)(v5 - 12);
  *(uint32_t *)(a1 + result) = a2[3];
  *(uint32_t *)(a1 + 4) = 0;
  return result;
}


// ============================================================================
// Address:   0x190db30 (size: 37 bytes)
// Symbol:    sub_190DB30
// Demangled: sub_190DB30
// ============================================================================
bool sub_190DB30(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 48));
}


// ============================================================================
// Address:   0x190db60 (size: 37 bytes)
// Symbol:    sub_190DB60
// Demangled: sub_190DB60
// ============================================================================
bool sub_190DB60(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 48));
}


// ============================================================================
// Address:   0x190db90 (size: 132 bytes)
// Symbol:    sub_190DB90
// Demangled: sub_190DB90
// ============================================================================
int sub_190DB90(uint32_t *a1, char *a2, int a3)
{
  if ( sub_190AE40((int)(uintptr_t)(a1 + 3), a2, a3) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190dc20 (size: 132 bytes)
// Symbol:    sub_190DC20
// Demangled: sub_190DC20
// ============================================================================
int sub_190DC20(uint32_t *a1, char **a2, int a3)
{
  if ( sub_190AE40((int)(uintptr_t)(a1 + 3), *a2, a3) != 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}


// ============================================================================
// Address:   0x190dcb0 (size: 92 bytes)
// Symbol:    sub_190DCB0
// Demangled: sub_190DCB0
// ============================================================================
int sub_190DCB0(uint32_t *a1)
{
  int result;

  result = sub_190AC60((int)(uintptr_t)(a1 + 3));
  if ( result == 0 )
    return sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
  return result;
}


// ============================================================================
// Address:   0x190dd80 (size: 319 bytes)
// Symbol:    sub_190DD80
// Demangled: sub_190DD80
// ============================================================================
int sub_190DD80(int a1)
{
  int result;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  sub_1903A70((uint32_t *)(a1 + 28));
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_1907E20(a1 + 36);
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 1024;
  *(uint8_t *)(a1 + 68) = 0;
  *(uint8_t *)(a1 + 69) = 0;
  *(uint8_t *)(a1 + 70) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint8_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 104) = 0;
  result = sub_19404A0(a1 + 28);
  if ( (uint8_t)result != 0 )
  {
    result = (int)(uintptr_t)(sub_193ED70(a1 + 28));
    *(uint32_t *)(a1 + 88) = result;
  }
  return result;
}


// ============================================================================
// Address:   0x190dec0 (size: 37 bytes)
// Symbol:    sub_190DEC0
// Demangled: sub_190DEC0
// ============================================================================
bool sub_190DEC0(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 36));
}


// ============================================================================
// Address:   0x190def0 (size: 79 bytes)
// Symbol:    sub_190DEF0
// Demangled: sub_190DEF0
// ============================================================================
void sub_190DEF0(int a1)
{
  if ( *(uint8_t *)(a1 + 68) == 0 && *(uint32_t *)(a1 + 60) == 0 )
  {
    *(uint32_t *)(a1 + 60) = opNewArray(4 * *(uint32_t *)(a1 + 64));
    *(uint8_t *)(a1 + 68) = 1;
  }
}


// ============================================================================
// Address:   0x190df40 (size: 115 bytes)
// Symbol:    sub_190DF40
// Demangled: sub_190DF40
// ============================================================================
void sub_190DF40(int a1)
{
  if ( *(uint8_t *)(a1 + 68) != 0 )
  {
    if ( *(uint32_t *)(a1 + 60) != 0 )
      opDeleteArray(*(void **)(a1 + 60));
    *(uint32_t *)(a1 + 60) = 0;
    *(uint8_t *)(a1 + 68) = 0;
  }
  if ( *(uint32_t *)(a1 + 92) != 0 )
    opDeleteArray(*(void **)(a1 + 92));
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 104) = 0;
}


// ============================================================================
// Address:   0x190dfc0 (size: 402 bytes)
// Symbol:    sub_190DFC0
// Demangled: sub_190DFC0
// ============================================================================
bool sub_190DFC0(int a1, char *a2, size_t a3, int a4, ...)
{
  int v4;
  int v5;
  void *v6;
  char *v7;
  unsigned int v8;
  size_t v9;
  size_t v10;
  int *v12;
  unsigned int v13;
  int v14;
  uint32_t *retaddr;
  va_list va;
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
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef int _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v22)) > _g4_s7 ? (36u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v23)) > _g4_s8 ? (40u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v24)) > _g4_s9 ? (44u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v25)) > _g4_s10 ? (48u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v26)) > _g4_s11 ? (48u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v27)) > _g4_s12 ? (52u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v28)) > _g4_s13 ? (52u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v29)) > _g4_s14 ? (56u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v30)) > _g4_s15 ? (60u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v31)) > _g4_s16 ? (60u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v32)) > _g4_s17 ? (64u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v33)) > _g4_s18 ? (68u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v34)) > _g4_s19 ? (72u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v35)) > _g4_s20 ? (76u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v36)) > _g4_s21 ? (80u + sizeof(_g4_t_v36)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
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
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);

  va_start(va, a4);
  v4 = *(uint32_t *)(a1 + 88);
  if ( v4 == 0 )
    sub_18FFF30();
  if ( (*(uint8_t (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v4 + 24))(
         *(uint32_t *)(a1 + 88),
         v15,
         v16,
         v17,
         v18,
         v19,
         v20,
         v21,
         v22,
         v23,
         v24,
         v25,
         v27,
         v29,
         v30,
         v32,
         v33,
         v34,
         v35,
         v36[0],
         v36[1],
         v36[2],
         v36[3]) != 0 )
    goto LABEL_5;
  v5 = a3 * (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 88) + 32))(*(uint32_t *)(a1 + 88));
  v6 = alloca(v5 + 15);
  retaddr = v36;
  a3 = (size_t)&v35;
  v7 = a2;
  a2 = g4_va_cast<char *>(va) + v5;
  v8 = (*(int (**)(uint32_t, int, char *, char *))(**(uint32_t **)(a1 + 88) + 8))(
         *(uint32_t *)(a1 + 88),
         a1 + 52,
         v7,
         &v7[4 * (uint32_t)(uintptr_t)(&v35)]);
  if ( v8 > 1 )
  {
    if ( v8 == 3 )
    {
LABEL_5:
      v9 = sub_19080E0(a1 + 36, a2, a3);
      v10 = a3;
      return v9 == v10;
    }
LABEL_11:
    sub_19004E0("basic_filebuf::_M_convert_to_external conversion error");
  }
  v26 = v8;
  v28 = v35 - (uint32_t)(uintptr_t)g4_va_cast<char *>(va);
  v9 = sub_19080E0(a1 + 36, g4_va_cast<char *>(va), v35 - (uint32_t)(uintptr_t)g4_va_cast<char *>(va));
  if ( v28 != v9 || v26 == 0 )
  {
    v10 = v28;
    return v9 == v10;
  }
  v12 = *(int **)(a1 + 88);
  v31 = *v12;
  retaddr = v36;
  v13 = (*(uint32_t *)(a1 + 20) - v36[0]) & 0xFFFFFFFC;
  v36[6] = v36[0];
  if ( (*(int (**)(int *, int, uint32_t, unsigned int))(v31 + 8))(v12, a1 + 52, v36[0], v36[0] + v13) == 2 )
    goto LABEL_11;
  v14 = v35 - (uint32_t)(uintptr_t)g4_va_cast<char *>(va);
  return sub_19080E0(a1 + 36, g4_va_cast<char *>(va), v35 - (uint32_t)(uintptr_t)g4_va_cast<char *>(va)) == v14;
}


// ============================================================================
// Address:   0x190e160 (size: 98 bytes)
// Symbol:    sub_190E160
// Demangled: sub_190E160
// ============================================================================
int sub_190E160(int a1, int a2)
{
  if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(a1 + 88) + 24))(*(uint32_t *)(a1 + 88)) != 0 )
    return (*(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 12)) >> 2;
  else
    return *(uint32_t *)(a1 + 92)
         + (*(int (**)(uint32_t, int, uint32_t, uint32_t, int))(**(uint32_t **)(a1 + 88) + 28))(
             *(uint32_t *)(a1 + 88),
             a2,
             *(uint32_t *)(a1 + 92),
             *(uint32_t *)(a1 + 100),
             (*(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 4)) >> 2)
         - *(uint32_t *)(a1 + 104);
}


// ============================================================================
// Address:   0x190e1d0 (size: 349 bytes)
// Symbol:    sub_190E1D0
// Demangled: sub_190E1D0
// ============================================================================
bool sub_190E1D0(int a1)
{
  int v1;
  int v2;
  unsigned int v3;
  unsigned int v4;
  size_t v6;
  bool v7;
  typedef bool _g4_t_v8;
  typedef int _g4_t_v9;
  typedef char _g4_t_v10[128];
  typedef uint8_t _g4_t_v11[28];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v9)) > _g4_s1 ? (44u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v10)) > _g4_s2 ? (48u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (176u + sizeof(_g4_t_v11)) > _g4_s3 ? (176u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 176u);

  v8 = true;
  if ( *(uint32_t *)(a1 + 16) < *(uint32_t *)(a1 + 20) )
    v8 = G4_VCALL<int>(a1, 52, -1) != -1;
  if ( *(uint8_t *)(a1 + 70) != 0 )
  {
    v1 = *(uint32_t *)(a1 + 88);
    if ( v1 == 0 )
      sub_18FFF30();
    if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 24))(*(uint32_t *)(a1 + 88)) == 0 && v8 )
    {
      v2 = 0;
      while ( 1 )
      {
        v3 = (*(int (**)(uint32_t, int, char *, uint8_t *, int *))(**(uint32_t **)(a1 + 88) + 12))(
               *(uint32_t *)(a1 + 88),
               a1 + 52,
               v10,
               v11,
               &v9);
        v4 = v3;
        if ( v3 == 2 )
          return false;
        if ( v3 <= 1 )
        {
          v2 = v9 - (uint32_t)(uintptr_t)(v10);
          if ( v9 - (int)(uintptr_t)(v10) <= 0 )
            break;
          v6 = sub_19080E0(a1 + 36, v10, v9 - (uint32_t)(uintptr_t)(v10));
          v7 = v8;
          if ( v2 != v6 )
            v7 = false;
          v8 = v7;
        }
        if ( v2 <= 0 || v4 != 1 )
          break;
        if ( !v8 )
          return v8;
      }
      if ( v8 )
        return G4_VCALL<int>(a1, 52, -1) != -1;
    }
  }
  return v8;
}


// ============================================================================
// Address:   0x190e330 (size: 322 bytes)
// Symbol:    sub_190E330
// Demangled: sub_190E330
// ============================================================================
int sub_190E330(int a1)
{
  bool v1; // bp
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  if ( !sub_1907FD0((uint32_t *)(a1 + 36)) )
    return 0;
  v1 = !sub_190E1D0(a1);
  *(uint32_t *)(a1 + 44) = 0;
  *(uint8_t *)(a1 + 84) = 0;
  sub_190DF40(a1);
  v2 = *(uint32_t *)(a1 + 60);
  *(uint8_t *)(a1 + 69) = 0;
  *(uint32_t *)(a1 + 4) = v2;
  *(uint32_t *)(a1 + 8) = v2;
  *(uint32_t *)(a1 + 12) = v2;
  v3 = *(uint32_t *)(a1 + 48);
  *(uint8_t *)(a1 + 70) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 52) = v3;
  *(uint32_t *)(a1 + 56) = v3;
  v6 = sub_1908000(v5, v4, a1 + 36);
  v7 = 0;
  if ( v6 != 0 && !v1 )
    return a1;
  return v7;
}


// ============================================================================
// Address:   0x190e480 (size: 134 bytes)
// Symbol:    sub_190E480
// Demangled: sub_190E480
// ============================================================================
void sub_190E480(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330(a1);
  sub_1908070(a1 + 36);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 28));
}


// ============================================================================
// Address:   0x190e510 (size: 281 bytes)
// Symbol:    sub_190E510
// Demangled: sub_190E510
// ============================================================================
int sub_190E510(int a1, char *a2, int a3)
{
  uint32_t *v3;
  bool v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  uint32_t v10[6];

  v3 = (uint32_t *)(a1 + 36);
  v4 = sub_1907FD0((uint32_t *)(a1 + 36));
  v5 = 0;
  if ( !v4 )
  {
    sub_1907F60((int)(uintptr_t)(v3), a2, a3);
    v6 = sub_1907FD0(v3);
    v5 = 0;
    if ( v6 )
    {
      sub_190DEF0(a1);
      v7 = *(uint32_t *)(a1 + 60);
      *(uint32_t *)(a1 + 4) = v7;
      *(uint32_t *)(a1 + 8) = v7;
      *(uint32_t *)(a1 + 12) = v7;
      v8 = *(uint32_t *)(a1 + 48);
      *(uint32_t *)(a1 + 44) = a3;
      *(uint8_t *)(a1 + 69) = 0;
      *(uint8_t *)(a1 + 70) = 0;
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
      *(uint32_t *)(a1 + 52) = v8;
      *(uint32_t *)(a1 + 56) = v8;
      v5 = a1;
      if ( (a3 & 2) != 0 )
      {
        (*(void (**)(uint32_t *, int, int64_t, int, int))(*(uint32_t *)a1 + 16))(v10, a1, (int64_t)0, 2, a3);
        v5 = a1;
        if ( (v10[1] & v10[0]) == -1 )
        {
          sub_190E330(a1);
          return 0;
        }
      }
    }
  }
  return v5;
}


// ============================================================================
// Address:   0x190e640 (size: 15 bytes)
// Symbol:    sub_190E640
// Demangled: sub_190E640
// ============================================================================
int sub_190E640(uint32_t *a1)
{
  return sub_190E660((char *)a1 + *(uint32_t *)(*a1 - 12));
}


// ============================================================================
// Address:   0x190e650 (size: 7 bytes)
// Symbol:    sub_190E650
// Demangled: sub_190E650
// ============================================================================
int sub_190E650(int a1)
{
  return sub_190E660(a1 - 8);
}


// ============================================================================
// Address:   0x190e660 (size: 243 bytes)
// Symbol:    sub_190E660
// Demangled: sub_190E660
// ============================================================================
int sub_190E660(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA26C);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA280);
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA294);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330(a1 + 12);
  sub_1908070(a1 + 48);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 40));
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA16C);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA1AC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90((uint32_t *)(a1 + 120));
}


// ============================================================================
// Address:   0x190e760 (size: 15 bytes)
// Symbol:    sub_190E760
// Demangled: sub_190E760
// ============================================================================
int sub_190E760(uint32_t *a1)
{
  return sub_190E770((char *)a1 + *(uint32_t *)(*a1 - 12));
}


// ============================================================================
// Address:   0x190e770 (size: 231 bytes)
// Symbol:    sub_190E770
// Demangled: sub_190E770
// ============================================================================
int sub_190E770(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0AC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA0C0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330(a1 + 8);
  sub_1908070(a1 + 44);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 36));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA06C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90((uint32_t *)(a1 + 116));
}


// ============================================================================
// Address:   0x190e860 (size: 15 bytes)
// Symbol:    sub_190E860
// Demangled: sub_190E860
// ============================================================================
int sub_190E860(char *a1)
{
  return sub_190E870(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
}


// ============================================================================
// Address:   0x190e870 (size: 239 bytes)
// Symbol:    sub_190E870
// Demangled: sub_190E870
// ============================================================================
void sub_190E870(char *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0AC);
  *((uint32_t *)a1 + 29) = (uint32_t)(uintptr_t)(&off_20AA0C0);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330((int)(uintptr_t)(a1 + 8));
  sub_1908070(a1 + 44);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)a1 + 9);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA06C);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 29) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90((uint32_t *)a1 + 29);
  opDelete(a1);
}


// ============================================================================
// Address:   0x190e960 (size: 15 bytes)
// Symbol:    sub_190E960
// Demangled: sub_190E960
// ============================================================================
int sub_190E960(uint32_t *a1)
{
  return sub_190E970((char *)a1 + *(uint32_t *)(*a1 - 12));
}


// ============================================================================
// Address:   0x190e970 (size: 217 bytes)
// Symbol:    sub_190E970
// Demangled: sub_190E970
// ============================================================================
int sub_190E970(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA12C);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20AA140);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330(a1 + 4);
  sub_1908070(a1 + 40);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 32));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0EC);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90((uint32_t *)(a1 + 112));
}


// ============================================================================
// Address:   0x190ea50 (size: 15 bytes)
// Symbol:    sub_190EA50
// Demangled: sub_190EA50
// ============================================================================
int sub_190EA50(char *a1)
{
  return sub_190EA60(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
}


// ============================================================================
// Address:   0x190ea60 (size: 225 bytes)
// Symbol:    sub_190EA60
// Demangled: sub_190EA60
// ============================================================================
void sub_190EA60(char *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA12C);
  *((uint32_t *)a1 + 28) = (uint32_t)(uintptr_t)(&off_20AA140);
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330((int)(uintptr_t)(a1 + 4));
  sub_1908070(a1 + 40);
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)a1 + 8);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0EC);
  *((uint32_t *)a1 + 28) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90((uint32_t *)a1 + 28);
  opDelete(a1);
}


// ============================================================================
// Address:   0x190eb50 (size: 142 bytes)
// Symbol:    sub_190EB50
// Demangled: sub_190EB50
// ============================================================================
void sub_190EB50(volatile int32_t **a1)
{
  *a1 = (volatile int32_t *)&off_20AA028;
  sub_190E330((int)(uintptr_t)(a1));
  sub_1908070(a1 + 9);
  *a1 = (volatile int32_t *)&off_20AB308;
  sub_1902180(a1 + 7);
  opDelete(a1);
}


// ============================================================================
// Address:   0x190ebe0 (size: 15 bytes)
// Symbol:    sub_190EBE0
// Demangled: sub_190EBE0
// ============================================================================
int sub_190EBE0(char *a1)
{
  return sub_190EC00(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
}


// ============================================================================
// Address:   0x190ebf0 (size: 7 bytes)
// Symbol:    sub_190EBF0
// Demangled: sub_190EBF0
// ============================================================================
int sub_190EBF0(int a1)
{
  return sub_190EC00((void *)(a1 - 8));
}


// ============================================================================
// Address:   0x190ec00 (size: 251 bytes)
// Symbol:    sub_190EC00
// Demangled: sub_190EC00
// ============================================================================
void sub_190EC00(char *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA26C);
  *((uint32_t *)a1 + 2) = ((uint32_t)(uintptr_t)&off_20AA280);
  *((uint32_t *)a1 + 30) = (uint32_t)(uintptr_t)(&off_20AA294);
  *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330((int)(uintptr_t)(a1 + 12));
  sub_1908070(a1 + 48);
  *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)a1 + 10);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AA16C);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA1AC);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 30) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90((uint32_t *)a1 + 30);
  opDelete(a1);
}

