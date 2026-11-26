#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Bridge: HidController.h
// Reconstructed from lib/x86/libGangstar4.so (10 functions)
// ============================================================================
#pragma once
#include <string>

namespace HidController {
    void Initialize();
    void UpdateFromPlatformPad(
        uint32_t buttonsMask,
        float leftX, float leftY,
        float rightX, float rightY,
        float leftTrigger, float rightTrigger);
    bool IsConnected();
} // namespace HidController

namespace acp_utils {
namespace HidController {
  int (**RegisterStateCallback(acp_utils::HidController::Self *self))(uint32_t);
  int (**UnRegisterStateCallback())(uint32_t);
} // namespace HidController
} // namespace acp_utils

// Original Binary Symbol Table in lib/x86/libGangstar4.so:
//   [0x4d05c0] acp_utils::HidController::Init(_JavaVM *) (642 bytes)
//   [0x4d0850] acp_utils::HidController::RegisterListener(int) (218 bytes)
//   [0x4d0930] acp_utils::HidController::UnregisterListener(void) (198 bytes)
//   [0x4d0a00] acp_utils::HidController::OnControllerStateChanged(bool) (47 bytes)
//   [0x4d0ba0] acp_utils::HidController::DispatchEventToCallback(int,double) (55 bytes)
//   [0x4d0c10] acp_utils::HidController::RegisterStateCallback(void (*)(bool)) (64 bytes)
//   [0x4d0c50] acp_utils::HidController::UnRegisterStateCallback(void) (45 bytes)
//   [0x4d0c80] acp_utils::HidController::RegisterEventCallback(void (*)(acp_utils::ControllerEvents,double)) (31 bytes)
//   [0x4d0ca0] acp_utils::HidController::UnRegisterEventCallback(void) (26 bytes)
//   [0x4d0cc0] acp_utils::HidController::GetControllerName(void) (62 bytes)
