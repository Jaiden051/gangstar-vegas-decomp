#pragma once
// Grapher Actor: ActorGameCharacterSetWeapon
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetWeapon
{
    constexpr const char* kActorName = "GameCharacterSetWeapon";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7860 | Ctor: 0xc66960 | Dtor: 0xc5ab50 | Vtable: 0x206d2e8 (11 slots)
    // Vtable (0x206d2e8 / off_206D2E8) Slot Table (11 virtual methods):
    //   [+00] 0xc5ab50 : ActorGameCharacterSetWeapon::~ActorGameCharacterSetWeapon
    //   [+04] 0xc5b790 : sub_C5B790
    //   [+08] 0xc64a20 : sub_C64A20
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc68b80 : sub_C68B80
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetWeapon
