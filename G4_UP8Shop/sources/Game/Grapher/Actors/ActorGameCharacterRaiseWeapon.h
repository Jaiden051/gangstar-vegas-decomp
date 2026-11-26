#pragma once
// Grapher Actor: ActorGameCharacterRaiseWeapon
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterRaiseWeapon
{
    constexpr const char* kActorName = "GameCharacterRaiseWeapon";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6d20 | Ctor: 0xc666a0 | Dtor: 0xc5ad60 | Vtable: 0x206cfe8 (11 slots)
    // Vtable (0x206cfe8 / off_206CFE8) Slot Table (11 virtual methods):
    //   [+00] 0xc5ad60 : ActorGameCharacterRaiseWeapon::~ActorGameCharacterRaiseWeapon
    //   [+04] 0xc5b4d0 : sub_C5B4D0
    //   [+08] 0xc60ff0 : sub_C60FF0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc65790 : sub_C65790
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterRaiseWeapon
