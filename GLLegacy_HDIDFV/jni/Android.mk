LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := generator
LOCAL_SRC_FILES := com_gameloft_android_hdidfv_HDIDFV.cpp \
                   HDIDFVGenerator.cpp
LOCAL_LDLIBS    := -llog -lz
include $(BUILD_SHARED_LIBRARY)
