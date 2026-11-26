#pragma once
// Grapher Actor: ActorGameCharacterSwitchJetpackMode
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSwitchJetpackMode
{
    constexpr const char* kActorName = "GameCharacterSwitchJetpackMode";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7ef0 | Ctor: 0x854cc0 | Dtor: 0x84d150 | Vtable: 0x205d8e8 (11 slots)
    // Vtable (0x205d8e8 / off_205D8E8) Slot Table (11 virtual methods):
    //   [+00] 0x84d150 : ActorGameCharacterSwitchJetpackMode::~ActorGameCharacterSwitchJetpackMode
    //   [+04] 0x84d750 : sub_84D750
    //   [+08] 0x852eb0 : sub_852EB0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x857c70 : sub_857C70
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x858510 : sub_858510
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSwitchJetpackMode
