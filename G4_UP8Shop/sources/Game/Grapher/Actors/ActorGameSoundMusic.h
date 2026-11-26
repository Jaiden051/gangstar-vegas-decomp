#pragma once
// Grapher Actor: ActorGameSoundMusic
#include "Core/Utils/DecompTypes.h"

namespace ActorGameSoundMusic
{
    constexpr const char* kActorName = "GameSoundMusic";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd9e0 | Ctor: 0x829a90 | Dtor: 0x81ec10 | Vtable: 0x205bb28 (11 slots)
    // Vtable (0x205bb28 / off_205BB28) Slot Table (11 virtual methods):
    //   [+00] 0x81ec10 : ActorGameSoundMusic::~ActorGameSoundMusic
    //   [+04] 0x8206f0 : sub_8206F0
    //   [+08] 0x825290 : sub_825290
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x81fad0 : sub_81FAD0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x833c80 : sub_833C80
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x834a80 : sub_834A80
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameSoundMusic
