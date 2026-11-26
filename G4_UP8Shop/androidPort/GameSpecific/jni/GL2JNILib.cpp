#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: GL2JNILib.cpp
// Portable lifecycle, render step, and input dispatch for Switch, PC, & Android
// ============================================================================
#include "GL2JNILib.h"

static int  s_screenWidth  = 1280;
static int  s_screenHeight = 720;
static bool s_isPaused     = false;
// ----------------------------------------------------------------------------
// Function: GL2JNILib::init  (binary VA: 0x0)
// Original: GL2JNILib::init
// ----------------------------------------------------------------------------
void GL2JNILib::init(int width, int height)
{
    s_screenWidth  = width;
    s_screenHeight = height;
    __android_log_print(ANDROID_LOG_INFO, "GL2JNILib", "Initialized cross-platform GL2JNILib runtime");
}

// ----------------------------------------------------------------------------
// Function: GL2JNILib::resize  (binary VA: 0x0)
// Original: GL2JNILib::resize
// ----------------------------------------------------------------------------
void GL2JNILib::resize(int width, int height)
{
    s_screenWidth  = width;
    s_screenHeight = height;
}

// ----------------------------------------------------------------------------
// Function: GL2JNILib::step  (binary VA: 0x0)
// Original: GL2JNILib::step
// ----------------------------------------------------------------------------
void GL2JNILib::step()
{
    if (s_isPaused) {
        return;
    }
}

// ----------------------------------------------------------------------------
// Function: GL2JNILib::pause  (binary VA: 0x0)
// Original: GL2JNILib::pause
// ----------------------------------------------------------------------------
void GL2JNILib::pause()
{
    s_isPaused = true;
}

// ----------------------------------------------------------------------------
// Function: GL2JNILib::resume  (binary VA: 0x0)
// Original: GL2JNILib::resume
// ----------------------------------------------------------------------------
void GL2JNILib::resume()
{
    s_isPaused = false;
}

// ----------------------------------------------------------------------------
// Function: GL2JNILib::touchEvent  (binary VA: 0x0)
// Original: GL2JNILib::touchEvent
// ----------------------------------------------------------------------------
void GL2JNILib::touchEvent(int, int, int, int)
{}

// ----------------------------------------------------------------------------
// Function: GL2JNILib::keyEvent  (binary VA: 0x0)
// Original: GL2JNILib::keyEvent
// ----------------------------------------------------------------------------
void GL2JNILib::keyEvent(int, int)
{}

