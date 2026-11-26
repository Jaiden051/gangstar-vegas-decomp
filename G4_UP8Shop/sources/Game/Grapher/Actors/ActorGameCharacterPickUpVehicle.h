#pragma once
// Grapher Actor: ActorGameCharacterPickUpVehicle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterPickUpVehicle
{
    constexpr const char* kActorName = "GameCharacterPickUpVehicle";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6960 | Ctor: 0x854c80 | Dtor: 0x84d180 | Vtable: 0x205d8a8 (11 slots)
    // Vtable (0x205d8a8 / off_205D8A8) Slot Table (11 virtual methods):
    //   [+00] 0x84d180 : ActorGameCharacterPickUpVehicle::~ActorGameCharacterPickUpVehicle
    //   [+04] 0x84d590 : sub_84D590
    //   [+08] 0x853300 : sub_853300
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x858050 : sub_858050
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterPickUpVehicle
