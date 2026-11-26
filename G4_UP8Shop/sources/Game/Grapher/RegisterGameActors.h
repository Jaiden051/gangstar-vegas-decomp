#pragma once
// ============================================================================
// Game/Grapher/RegisterGameActors.h
// Registers all 207 Grapher visual-scripting Actor classes (0xbb8480)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

namespace Game {
namespace Grapher {

void RegisterAllGameActors(grapher::ActorManager::Self* mgr);

} // namespace Grapher
} // namespace Game
