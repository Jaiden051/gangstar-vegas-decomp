// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd4898):
//   ../../../../../lib/vox/include/vox_minibus_system.h
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x10242d0 .. 0x1024485 (437 bytes)
// Symbol:               _ZN3vox17VoxEngineInternal16SetRoutingVolumeEPKcS2_NS_22VoxDSPGeneralParameter14BusRoutingTypeEfff
// Demangled:            vox::VoxEngineInternal::SetRoutingVolume(char const*,char const*,vox::VoxDSPGeneralParameter::BusRoutingType,float,float,float)
// ============================================================================
/*
int vox::VoxEngineInternal::SetRoutingVolume(
        int a1,
        char *s,
        char *src,
        char *a4,
        char *a5,
        char *a6,
        char *a7)
{
  char **v8;
  signed int v9;
  char *v10;
  signed int v11;
  char *v12;
  int v13;
  int v14;

  vox::Mutex::Lock((vox::Mutex *)(a1 + 220));
  if ( src != nullptr && s != nullptr )
  {
    v8 = (char **)VoxAllocInternal(
                    0x18u,
                    0,
                    (int)"F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp",
                    (int)"SetRoutingVolume",
                    4083);
    *v8 = nullptr;
    v8[1] = nullptr;
    v8[2] = a4;
    v8[3] = a5;
    v8[4] = a6;
    v8[5] = a7;
    v9 = strlen(s);
    if ( v9 > 0 )
    {
      v10 = (char *)VoxAllocInternal(
                      v9 + 1,
                      0,
                      (int)"../../../../../lib/vox/include/vox_minibus_system.h",
                      (int)"BusRoutingChange",
                      166);
      *v8 = v10;
      if ( v10 != nullptr )
        strcpy(v10, s);
    }
    v11 = strlen(src);
    if ( v11 > 0 )
    {
      v12 = (char *)VoxAllocInternal(
                      v11 + 1,
                      0,
                      (int)"../../../../../lib/vox/include/vox_minibus_system.h",
                      (int)"BusRoutingChange",
                      174);
      v8[1] = v12;
      if ( v12 != nullptr )
        strcpy(v12, src);
    }
    v13 = *(uint32_t *)(a1 + 408);
    v14 = VoxAllocInternal(0xCu, 0, (int)"../../../../../lib/vox/include/vox_memory.h", (int)"internal_new", 181);
    if ( v14 != -8 )
      *(uint32_t *)(v14 + 8) = v8;
    sub_1901920(v14, v13);
  }
  return vox::Mutex::Unlock((vox::Mutex *)(a1 + 220));
}

*/
