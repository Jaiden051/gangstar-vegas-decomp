#pragma once
// Grapher Actor: ActorGameHUDFollowerStatus
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUDFollowerStatus
{
    constexpr const char* kActorName = "GameHUDFollowerStatus";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbca830 | Ctor: 0xc4f940 | Dtor: 0xc3f3e0 | Vtable: 0x206c868 (11 slots)
    // Vtable (0x206c868 / off_206C868) Slot Table (11 virtual methods):
    //   [+00] 0xc3f3e0 : ActorGameHUDFollowerStatus::~ActorGameHUDFollowerStatus
    //   [+04] 0xc40160 : sub_C40160
    //   [+08] 0xc478a0 : sub_C478A0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc52840 : sub_C52840
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHUDFollowerStatus
