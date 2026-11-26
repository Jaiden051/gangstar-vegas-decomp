#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppCom.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppCompilerInput::Construct  (binary VA: 0x1aeadf0)
// Original: hkpMoppCompilerInput::hkpMoppCompilerInput
// ----------------------------------------------------------------------------
void hkpMoppCompilerInput::Construct(hkpMoppCompilerInput::Self *self)
{
  *(uint32_t *)self = 1028443341;
  *((uint32_t *)self + 1) = 1028443341;
  *((uint32_t *)self + 2) = 1028443341;
  *((uint32_t *)self + 6) = 1050253722;
  *((uint32_t *)self + 4) = 1053609165;
  *((uint32_t *)self + 5) = 1036831949;
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 28) = 1;
  *((uint8_t *)self + 29) = 1;
  *((uint8_t *)self + 31) = 1;
  *((uint8_t *)self + 32) = 0;
  *((uint8_t *)self + 30) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompilerInput::setAbsoluteFitToleranceOfTriangles  (binary VA: 0x1aeae50)
// Original: hkpMoppCompilerInput::setAbsoluteFitToleranceOfTriangles
// ----------------------------------------------------------------------------
hkpMoppCompilerInput::Self * hkpMoppCompilerInput::setAbsoluteFitToleranceOfTriangles(hkpMoppCompilerInput::Self *self, float a2)
{
  *((float *)self + 6) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompilerInput::getAbsoluteFitToleranceOfTriangles  (binary VA: 0x1aeae70)
// Original: hkpMoppCompilerInput::getAbsoluteFitToleranceOfTriangles
// ----------------------------------------------------------------------------
long double hkpMoppCompilerInput::getAbsoluteFitToleranceOfTriangles(hkpMoppCompilerInput::Self *self)
{
  return *((float *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompilerInput::setAbsoluteFitToleranceOfAxisAlignedTriangles  (binary VA: 0x1aeae90)
// Original: hkpMoppCompilerInput::setAbsoluteFitToleranceOfAxisAlignedTriangles
// ----------------------------------------------------------------------------
hkpMoppCompilerInput::Self * hkpMoppCompilerInput::setAbsoluteFitToleranceOfAxisAlignedTriangles(hkpMoppCompilerInput::Self *self, const hkVector4f::Self *a2)
{
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompilerInput::getAbsoluteFitToleranceOfAxisAlignedTriangles  (binary VA: 0x1aeaeb0)
// Original: hkpMoppCompilerInput::getAbsoluteFitToleranceOfAxisAlignedTriangles
// ----------------------------------------------------------------------------
hkpMoppCompilerInput::Self * hkpMoppCompilerInput::getAbsoluteFitToleranceOfAxisAlignedTriangles(hkpMoppCompilerInput::Self *self, uint32_t *a2)
{
  int v3;

  *(uint32_t *)self = *a2;
  *((uint32_t *)self + 1) = a2[1];
  v3 = a2[3];
  *((uint32_t *)self + 2) = a2[2];
  *((uint32_t *)self + 3) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompilerInput::setRelativeFitToleranceOfInternalNodes  (binary VA: 0x1aeaee0)
// Original: hkpMoppCompilerInput::setRelativeFitToleranceOfInternalNodes
// ----------------------------------------------------------------------------
hkpMoppCompilerInput::Self * hkpMoppCompilerInput::setRelativeFitToleranceOfInternalNodes(hkpMoppCompilerInput::Self *self, float a2)
{
  *((float *)self + 4) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompilerInput::getRelativeFitToleranceOfInternalNodes  (binary VA: 0x1aeaf00)
// Original: hkpMoppCompilerInput::getRelativeFitToleranceOfInternalNodes
// ----------------------------------------------------------------------------
long double hkpMoppCompilerInput::getRelativeFitToleranceOfInternalNodes(hkpMoppCompilerInput::Self *self)
{
  return *((float *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompilerInput::setAbsoluteFitToleranceOfInternalNodes  (binary VA: 0x1aeaf20)
// Original: hkpMoppCompilerInput::setAbsoluteFitToleranceOfInternalNodes
// ----------------------------------------------------------------------------
hkpMoppCompilerInput::Self * hkpMoppCompilerInput::setAbsoluteFitToleranceOfInternalNodes(hkpMoppCompilerInput::Self *self, float a2)
{
  *((float *)self + 5) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompilerInput::getAbsoluteFitToleranceOfInternalNodes  (binary VA: 0x1aeaf40)
// Original: hkpMoppCompilerInput::getAbsoluteFitToleranceOfInternalNodes
// ----------------------------------------------------------------------------
long double hkpMoppCompilerInput::getAbsoluteFitToleranceOfInternalNodes(hkpMoppCompilerInput::Self *self)
{
  return *((float *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompiler::Construct  (binary VA: 0x1b052e0)
// Original: hkpMoppCompiler::hkpMoppCompiler
// ----------------------------------------------------------------------------
int hkpMoppCompiler::Construct(int a1, int a2)
{
  int result;

  hkpMoppSplitter::hkpMoppSplitParams::Construct(a1 + 8, a2);
  result = (int)(uintptr_t)(hkpMoppCostFunction::hkpMoppSplitCostParams::Construct(a1 + 32));
  *(uint32_t *)(a1 + 64) = 1056964608;
  *(uint32_t *)(a1 + 68) = 1045220557;
  *(uint32_t *)(a1 + 72) = 1065353216;
  *(uint32_t *)(a1 + 96) = 5;
  *(uint32_t *)(a1 + 88) = 1028443341;
  *(uint32_t *)(a1 + 80) = 1045220557;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 84) = 1045220557;
  *(uint8_t *)(a1 + 100) = 1;
  *(uint32_t *)(a1 + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompiler::Destroy  (binary VA: 0x1b05370)
// Original: hkpMoppCompiler::~hkpMoppCompiler
// ----------------------------------------------------------------------------
void hkpMoppCompiler::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompiler::setSplitParams  (binary VA: 0x1b05380)
// Original: hkpMoppCompiler::setSplitParams
// ----------------------------------------------------------------------------
hkpMoppCompiler::Self * hkpMoppCompiler::setSplitParams(hkpMoppCompiler::Self *self, const hkpMoppSplitter::hkpMoppSplitParams::Self *a2)
{
  *((uint32_t *)self + 2) = *(uint32_t *)a2;
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 4);
  *((uint8_t *)self + 28) = *((uint8_t *)a2 + 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompiler::setCostParams  (binary VA: 0x1b053b0)
// Original: hkpMoppCompiler::setCostParams
// ----------------------------------------------------------------------------
hkpMoppCompiler::Self * hkpMoppCompiler::setCostParams(hkpMoppCompiler::Self *self, const hkpMoppCostFunction::hkpMoppSplitCostParams::Self *a2)
{
  *((uint32_t *)self + 8) = *(uint32_t *)a2;
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 5);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompiler::setAssemblerParams  (binary VA: 0x1b053e0)
// Original: hkpMoppCompiler::setAssemblerParams
// ----------------------------------------------------------------------------
int hkpMoppCompiler::setAssemblerParams(int a1, int a2)
{
  *(uint32_t *)(a1 + 64) = *(uint32_t *)a2;
  *(uint32_t *)(a1 + 68) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 72) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 80) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 84) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 88) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 92) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 96) = *(uint32_t *)(a2 + 32);
  *(uint8_t *)(a1 + 100) = *(uint8_t *)(a2 + 36);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompiler::enableInterleavedBuilding  (binary VA: 0x1b05430)
// Original: hkpMoppCompiler::enableInterleavedBuilding
// ----------------------------------------------------------------------------
hkpMoppCompiler::Self * hkpMoppCompiler::enableInterleavedBuilding(hkpMoppCompiler::Self *self, bool a2)
{
  *((uint8_t *)self + 28) = a2;
  *((uint8_t *)self + 100) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCompiler::calculateRequiredBufferSize  (binary VA: 0x1b05440)
// Original: hkpMoppCompiler::calculateRequiredBufferSize
// ----------------------------------------------------------------------------
int hkpMoppCompiler::calculateRequiredBufferSize(hkpMoppCompiler::Self *self, hkpMoppMediator::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = *((uint32_t *)self + 3);
  v3 = v2 + G4_VCALL<int>(a2, 24);
  v4 = 917504;
  v5 = 224 * v3;
  v6 = 5 * v3;
  if ( *((uint8_t *)self + 28) == 0 )
    v4 = v5;
  return v4 + 4 * v6;
}



// ============================================================================
// Address:   0x1b05480 (size: 1823 bytes)
// Symbol:    _ZN15hkpMoppCompiler7compileEP15hkpMoppMediatorPci
// Demangled: hkpMoppCompiler::compile(hkpMoppMediator *,char *,int)
// ============================================================================

