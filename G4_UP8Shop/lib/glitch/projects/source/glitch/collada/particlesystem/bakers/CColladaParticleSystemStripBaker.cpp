// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bc8f0c):
//   F:\G4\G4_UP8Shop\androidPort\GameSpecific\..\..\project_vs\..\lib\glitch\projects\\..\source\glitch\collada\particlesystem\bakers\CColladaParticleSystemStripBaker.cpp
// Referenced by 1 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemStripBaker::bake  (binary VA: 0xd141f0)
// Original: glitch::collada::ps::CParticleSystemStripBaker::bake
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemStripBaker::bake()
{
  if ( byte_20DFBF4 == 0 )
  {
    glf::Console::Println(
      (glf::Console::Self *)"%s(%d): %s - %s",
      "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\lib\\glitch\\projects\\\\..\\source\\glitch"
      "\\collada\\particlesystem\\bakers\\CColladaParticleSystemStripBaker.cpp",
      120,
      "bake",
      "CParticleSystemStripBaker::bake");
    byte_20DFBF4 = 1;
  }
  return 0;
}

