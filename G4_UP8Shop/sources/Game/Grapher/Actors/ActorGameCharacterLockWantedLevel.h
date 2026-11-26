#pragma once
// Grapher Actor: ActorGameCharacterLockWantedLevel
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterLockWantedLevel
{
    constexpr const char* kActorName = "GameCharacterLockWantedLevel";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc64b0 | Ctor: 0xc664e0 | Dtor: 0xc5aeb0 | Vtable: 0x206ce28 (11 slots)
    // Vtable (0x206ce28 / off_206CE28) Slot Table (11 virtual methods):
    //   [+00] 0xc5aeb0 : ActorGameCharacterLockWantedLevel::~ActorGameCharacterLockWantedLevel
    //   [+04] 0xc5b310 : sub_C5B310
    //   [+08] 0xc64f90 : sub_C64F90
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc690f0 : sub_C690F0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterLockWantedLevel
