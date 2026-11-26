#pragma once
// Grapher Actor: ActorGameCharacterReloadWeapon
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterReloadWeapon
{
    constexpr const char* kActorName = "GameCharacterReloadWeapon";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6e10 | Ctor: 0xc666e0 | Dtor: 0xc5ad30 | Vtable: 0x206d028 (11 slots)
    // Vtable (0x206d028 / off_206D028) Slot Table (11 virtual methods):
    //   [+00] 0xc5ad30 : ActorGameCharacterReloadWeapon::~ActorGameCharacterReloadWeapon
    //   [+04] 0xc5b510 : sub_C5B510
    //   [+08] 0xc612d0 : sub_C612D0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc656c0 : sub_C656C0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterReloadWeapon
