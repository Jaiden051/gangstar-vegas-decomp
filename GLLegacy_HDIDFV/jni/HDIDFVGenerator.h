#pragma once
// ============================================================================
// HDIDFVGenerator - hardware-independent device identifier ("HDIDFV")
//
// Reconstructed from lib/armeabi-v7a/libgenerator.so (0xa108 .. 0xa838).
// Original implementation used:
//   boost::uuids::basic_random_generator<boost::lagged_fibonacci44497>
//   boost::uuids::to_string()
// This reconstruction is self-contained, portable C++14 with no boost or
// platform dependency. The JNI glue lives in com_gameloft_android_hdidfv_HDIDFV.cpp.
// ============================================================================

#include <string>

class HDIDFVGenerator
{
public:
    // 0xa108: returns the library version string ("v1.0.0", rodata 0x66f74).
    static std::string getVersion();

    // 0xa838: generates a random RFC 4122 version-4 UUID and formats it as a
    // 36-character lowercase hex string ("xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx").
    static std::string generate();
};
