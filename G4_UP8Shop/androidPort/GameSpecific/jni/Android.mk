# Reconstructed Android NDK build script for libGangstar4.so
# Proven 5-level relative depth from F:/G4/G4_UP8Shop/androidPort/GameSpecific/build/ndk/jni:
#   ../../../../../lib/grapher/inc/grapher/Core/ActorManager.h
LOCAL_PATH := $(call my-dir)
G4_ROOT    := $(LOCAL_PATH)/../../..

include $(CLEAR_VARS)
LOCAL_MODULE := Gangstar4

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH) \
    $(G4_ROOT)/sources \
    $(G4_ROOT)/sources/Core \
    $(G4_ROOT)/sources/Core/XmlData \
    $(G4_ROOT)/sources/Game \
    $(G4_ROOT)/lib/glf/inc \
    $(G4_ROOT)/lib/glitch/inc \
    $(G4_ROOT)/lib/vox/inc \
    $(G4_ROOT)/lib/gameswf/inc \
    $(G4_ROOT)/lib/grapher/inc \
    $(G4_ROOT)/lib/havok/inc \
    $(G4_ROOT)/lib/savemanager/inc \
    $(G4_ROOT)/lib/Glotv3/inc \
    $(G4_ROOT)/lib/ChatLibv2/inc \
    $(G4_ROOT)/lib/sociallib/inc \
    $(G4_ROOT)/lib/gaia/inc \
    $(G4_ROOT)/lib/iap/inc \
    $(G4_ROOT)/lib/oi/inc \
    $(G4_ROOT)/lib/popuplib/inc \
    $(G4_ROOT)/lib/glwebtools/inc \
    $(G4_ROOT)/lib/tinyxml/inc \
    $(G4_ROOT)/lib/jsoncpp/inc \
    $(G4_ROOT)/lib/freetype/inc \
    $(G4_ROOT)/lib/harfbuzz/inc \
    $(G4_ROOT)/lib/openssl/include

LOCAL_SRC_FILES := \
    InAppBilling.cpp \
    AndroidOS.cpp \
    Device.cpp \
    DataSharing.cpp \
    GameUtils.cpp \
    PushNotification.cpp \
    GameInstaller.cpp \
    GDRMPolicy.cpp \
    SplashScreenActivity.cpp \
    SendInfo.cpp \
    HidController.cpp \
    ABundle.cpp \
    MemoryOperators.cpp \
    PlatformMisc.cpp \
    JNI_ExternalBridges.cpp

LOCAL_LDLIBS := -llog -landroid -lEGL -lGLESv2 -lOpenSLES -lz -ldl -lm -lc
include $(BUILD_SHARED_LIBRARY)
