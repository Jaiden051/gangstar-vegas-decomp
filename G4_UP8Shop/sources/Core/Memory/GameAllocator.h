#pragma once
// ============================================================================
// Core/Memory/GameAllocator.h
// Reconstructed from 0x4eb7c0..0x4ebe90 and 0x523788..0x525fd0 in libGangstar4.so
// ============================================================================

#include "Core/Utils/DecompTypes.h"

namespace Core {
namespace Memory {

void* AllocateTracked(size_t size, const char* file, int line, uint32_t poolTag = 0);
void  FreeTracked(void* ptr);

} // namespace Memory
} // namespace Core

void* gll_operator_new(size_t size, const char* file, int line);
void  gll_operator_delete(void* ptr) noexcept;
