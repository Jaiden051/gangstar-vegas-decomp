#pragma once
// ============================================================================
// Core/Data/VtableRegistry.h
// Complete Vtable Registry: 2345 named (_ZTV*) vtables +
// 4309 anonymous (.data.rel.ro off_20*) vtables = 6654 total vtables.
// ============================================================================

#include "Core/Utils/DecompTypes.h"

namespace G4Data {

struct VtableMethodSlot {
    uint32_t    slotOffset;
    uint32_t    funcAddress;
    const char* funcName;
};

struct VtableDescriptor {
    uint32_t                vtableAddress;
    const char*             symbolName;
    const char*             demangledName;
    size_t                  methodCount;
    const VtableMethodSlot* methods;
};

static constexpr size_t kNamedVtableCount = 2345;
static constexpr size_t kAnonVtableCount  = 4309;

} // namespace G4Data
