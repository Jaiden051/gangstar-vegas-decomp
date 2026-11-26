#pragma once
// ============================================================================
// Core/XmlData/_base_constant.h
// Referenced verbatim by DataManager::GenerateHeaderFile (0xaa9620)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

namespace xmldata {

struct base_constant
{
    static int GenerateCpp(uint32_t *a1, int a2);
    static int GenerateHeader(uint32_t *a1, int a2);
    virtual ~base_constant() {}
};

} // namespace xmldata
