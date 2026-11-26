#pragma once
// Grapher Actor: ActorGameCharacterToggleUseCover
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterToggleUseCover
{
    constexpr const char* kActorName = "GameCharacterToggleUseCover";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8670 | Ctor: 0x8452c0 | Dtor: 0x838c80 | Vtable: 0x205c908 (11 slots)
    // Vtable (0x205c908 / off_205C908) Slot Table (11 virtual methods):
    //   [+00] 0x838c80 : ActorGameCharacterToggleUseCover::~ActorGameCharacterToggleUseCover
    //   [+04] 0x8397b0 : sub_8397B0
    //   [+08] 0x83f0c0 : sub_83F0C0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x83ab40 : sub_83AB40
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterToggleUseCover
