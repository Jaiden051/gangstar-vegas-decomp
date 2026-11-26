// JNI bridge for libgenerator.so. Both exports build a std::string with
// HDIDFVGenerator and hand it to JNIEnv::NewStringUTF (vtable slot 668/4 = 167).
#include "com_gameloft_android_hdidfv_HDIDFV.h"
#include "HDIDFVGenerator.h"

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_hdidfv_HDIDFV_getNHDIDFVVersion  (binary VA: 0xa120)
// ----------------------------------------------------------------------------
JNIEXPORT jstring JNICALL Java_com_gameloft_android_hdidfv_HDIDFV_getNHDIDFVVersion(JNIEnv* env, jclass /*clazz*/)
{
    const std::string version = HDIDFVGenerator::getVersion();
    return env->NewStringUTF(version.c_str());
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_hdidfv_HDIDFV_getNHDIDFV  (binary VA: 0xa87c)
// ----------------------------------------------------------------------------
JNIEXPORT jstring JNICALL Java_com_gameloft_android_hdidfv_HDIDFV_getNHDIDFV(JNIEnv* env, jclass /*clazz*/)
{
    const std::string id = HDIDFVGenerator::generate();
    return env->NewStringUTF(id.c_str());
}
