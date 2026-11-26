#pragma once
// Grapher Actor: ActorGameCharacterSetDriveBehaviour
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetDriveBehaviour
{
    constexpr const char* kActorName = "GameCharacterSetDriveBehaviour";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6ff0 | Ctor: 0xc66760 | Dtor: 0xc5acd0 | Vtable: 0x206d0a8 (11 slots)
    // Vtable (0x206d0a8 / off_206D0A8) Slot Table (11 virtual methods):
    //   [+00] 0xc5acd0 : ActorGameCharacterSetDriveBehaviour::~ActorGameCharacterSetDriveBehaviour
    //   [+04] 0xc5b590 : sub_C5B590
    //   [+08] 0xc619d0 : sub_C619D0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc655e0 : sub_C655E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetDriveBehaviour
