#pragma once
// JNI exports of libgenerator.so, bound to com.gameloft.android.hdidfv.HDIDFV.
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

// 0xa120: static native String getNHDIDFVVersion();
JNIEXPORT jstring JNICALL Java_com_gameloft_android_hdidfv_HDIDFV_getNHDIDFVVersion(JNIEnv* env, jclass clazz);

// 0xa87c: static native String getNHDIDFV();
JNIEXPORT jstring JNICALL Java_com_gameloft_android_hdidfv_HDIDFV_getNHDIDFV(JNIEnv* env, jclass clazz);

#ifdef __cplusplus
}
#endif
