// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd1cd0):
//   F:/G4/G4_UP8Shop/lib/vox/Plugins/VehicleSounds/vehicle_sounds_common.cpp
// Referenced by 6 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferPool::Construct  (binary VA: 0xfcd840)
// Original: vox::vs::VSBufferPool::VSBufferPool
// ----------------------------------------------------------------------------
vox::vs::VSBufferPool::Self * vox::vs::VSBufferPool::Construct(vox::vs::VSBufferPool::Self *self)
{
  vox::vs::VSBufferPool::Self *result;

  vox::Mutex::Construct((vox::vs::VSBufferPool::Self *)((char *)self + 4));
  result = (vox::vs::VSBufferPool::Self *)VoxAllocInternal(
                                      0x18u,
                                      0,
                                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/VehicleSounds/vehicle_sounds_common.cpp"),
                                      (int)(uintptr_t)("VSBufferPool"),
                                      114);
  *((uint32_t *)result + 1) = 0;
  *((uint32_t *)result + 2) = 0;
  *((uint32_t *)result + 5) = 0;
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)((char *)result + 4);
  *((uint32_t *)result + 4) = (uint32_t)(uintptr_t)((char *)result + 4);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::vs::VSBufferPool::CreateInstance  (binary VA: 0xfcd8d0)
// Original: vox::vs::VSBufferPool::CreateInstance
// ----------------------------------------------------------------------------
int vox::vs::VSBufferPool::CreateInstance()
{
  int CurThreadId;
  vox::VoxThread::Self *v2;
  vox::vs::VSBufferPool::Self *v3;

  CurThreadId = vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0("VSBufferPool::CreateInstance", CurThreadId);
  if ( vox::vs::VSBufferPool::s_pInstance == 0 )
  {
    v3 = (vox::vs::VSBufferPool::Self *)VoxAllocInternal(
                                    8u,
                                    0,
                                    (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/VehicleSounds/vehicle_sounds_common.cpp"),
                                    (int)(uintptr_t)("CreateInstance"),
                                    92);
    vox::vs::VSBufferPool::Construct(v3);
    vox::vs::VSBufferPool::s_pInstance = (uintptr_t)(uintptr_t)(v3);
  }
  { sub_BA06B0("VSBufferPool::CreateInstance", CurThreadId); return 0; }
}



// ============================================================================
// Referencing Function: 0xfcd980 .. 0xfcdf19 (1433 bytes)
// Symbol:               _ZN3vox2vs12VSBufferPool12CreateBufferEi
// Demangled:            vox::vs::VSBufferPool::CreateBuffer(int)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfce3b0 .. 0xfce5b2 (514 bytes)
// Symbol:               _ZN3vox2vs8VSStream11ParseHeaderEv
// Demangled:            vox::vs::VSStream::ParseHeader(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfce710 .. 0xfce778 (104 bytes)
// Symbol:               _ZN3vox2vs15VSStreamFactoryEPv
// Demangled:            vox::vs::VSStreamFactory(void *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfcf0c0 .. 0xfcf1ae (238 bytes)
// Symbol:               _ZN3vox2vs8VSStream15CreateNewCursorEiib
// Demangled:            vox::vs::VSStream::CreateNewCursor(int,int,bool)
// ============================================================================
