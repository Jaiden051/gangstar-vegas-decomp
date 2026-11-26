#pragma once
// Grapher Actor: ActorGameSkillsMenu
#include "Core/Utils/DecompTypes.h"

namespace ActorGameSkillsMenu
{
    constexpr const char* kActorName = "GameSkillsMenu";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);

    // Factory: 0xbce7f0 | Ctor: 0x854ae0 | Dtor: None | Vtable: 0x205d6a8 (11 slots)
    // Vtable (0x205d6a8 / off_205D6A8) Slot Table (11 virtual methods):
    //   [+00] 0x84cd50 : ActorGameBase::~ActorGameBase
    //   [+04] 0x84d2d0 : sub_84D2D0
    //   [+08] 0x84c720 : sub_84C720
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x85a400 : sub_85A400
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameSkillsMenu
