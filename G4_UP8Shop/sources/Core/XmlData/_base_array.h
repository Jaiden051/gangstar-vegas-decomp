#pragma once
// ============================================================================
// Core/XmlData/_base_array.h
// Referenced verbatim by DataManager::GenerateHeaderFile (0xaa9620)
// ============================================================================

#include "Core/XmlData/_base_struct.h"

namespace xmldata {

struct base_array
{
    static int GenerateHeader(uint32_t *a1, int *a2);
    static int GenerateCpp(int a1, int a2);
    virtual ~base_array() {}
};

} // namespace xmldata
