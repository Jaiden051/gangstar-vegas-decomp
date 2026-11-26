#pragma once
// Grapher Actor: ActorGameObjectSetAnim
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectSetAnim
{
    constexpr const char* kActorName = "GameObjectSetAnim";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc630 | Ctor: 0xc38af0 | Dtor: 0xc2aed0 | Vtable: 0x206c008 (11 slots)
    // Vtable (0x206c008 / off_206C008) Slot Table (11 virtual methods):
    //   [+00] 0xc2aed0 : ActorGameObjectSetAnim::~ActorGameObjectSetAnim
    //   [+04] 0xc2ba30 : sub_C2BA30
    //   [+08] 0xc34bf0 : sub_C34BF0
    //   [+12] 0xc2aca0 : byte_C2ACA0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc2acb0 : byte_C2ACB0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3b2e0 : sub_C3B2E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectSetAnim
