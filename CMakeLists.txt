cmake_minimum_required(VERSION 3.16)
project(GangstarVegas_G4_UP8Shop VERSION 1.8.2 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Force response files for Windows/Ninja command-line length safety across 1,500+ TUs
set(CMAKE_NINJA_FORCE_RESPONSE_FILE 1 CACHE INTERNAL "")
set(CMAKE_C_USE_RESPONSE_FILE_FOR_OBJECTS 1)
set(CMAKE_CXX_USE_RESPONSE_FILE_FOR_OBJECTS 1)
set(CMAKE_C_USE_RESPONSE_FILE_FOR_LIBRARIES 1)
set(CMAKE_CXX_USE_RESPONSE_FILE_FOR_LIBRARIES 1)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    add_compile_options(-fpermissive -w -fno-strict-aliasing)
    if(CMAKE_SYSTEM_PROCESSOR MATCHES "i686|i386|x86_64|AMD64|x86")
        add_compile_options(-msse3)
    endif()
endif()

# ============================================================================
# Authentic Gameloft Source Tree Layout (F:/G4/G4_UP8Shop/)
# Cross-platform Core/, Game/, and lib/ contain ZERO Android-only SDK lock-in.
# ============================================================================
include_directories(
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib/glf/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib/glitch/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib/grapher/inc"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib/vox/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib/tinyxml"
)

file(GLOB_RECURSE G4_CORE_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/*.hpp"
)

file(GLOB_RECURSE G4_GAME_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Game/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Game/*.h"
)

file(GLOB_RECURSE G4_LIB_CPP_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib/*.hpp"
)

file(GLOB_RECURSE G4_LIB_C_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/lib/*.c"
)
# mpc_decoder.c / mpc_demux.c include Core/Utils/DecompTypes.h (C++ helpers)
set_source_files_properties(${G4_LIB_C_SOURCES} PROPERTIES LANGUAGE CXX)

add_library(Gangstar4Core STATIC
    ${G4_CORE_SOURCES}
    ${G4_GAME_SOURCES}
    ${G4_LIB_CPP_SOURCES}
    ${G4_LIB_C_SOURCES}
)

# Precompiled header drastically accelerates build across 1,500+ TUs
target_precompile_headers(Gangstar4Core PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/Utils/DecompTypes.h"
)

# Exclude GlobalSymbols.cpp from PCH or ensure clean compile even with large static data tables
set_source_files_properties(
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/Data/GlobalSymbols.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/Data/VtableRegistry.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/androidPort/GameSpecific/jni/RelocatedDataInit.cpp"
    PROPERTIES SKIP_PRECOMPILE_HEADERS ON
)
set_source_files_properties(
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/Data/GlobalSymbols.cpp"
    PROPERTIES COMPILE_OPTIONS "-Wa,-I${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/Data"
)
set_source_files_properties(
    "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/XmlData/TU19_VFXAndXmlDataSchemas.cpp"
    PROPERTIES COMPILE_OPTIONS "-Xclang;-disable-llvm-passes;-mllvm;-regalloc=fast"
)

if(ANDROID)
    file(GLOB_RECURSE G4_ANDROID_JNI_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/androidPort/GameSpecific/jni/*.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/androidPort/GameSpecific/jni/*.h"
    )
    add_library(Gangstar4 SHARED ${G4_ANDROID_JNI_SOURCES})
    target_precompile_headers(Gangstar4 PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/sources/Core/Utils/DecompTypes.h"
    )
    target_link_libraries(Gangstar4 PRIVATE
        Gangstar4Core
        log
        android
        EGL
        GLESv2
        OpenSLES
        z
        dl
        m
    )

    file(GLOB_RECURSE HDIDFV_JNI_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/GLLegacy_HDIDFV/jni/*.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/GLLegacy_HDIDFV/jni/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/GLLegacy_HDIDFV/jni/*.hpp"
    )
    add_library(generator SHARED ${HDIDFV_JNI_SOURCES})
    target_include_directories(generator PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/GLLegacy_HDIDFV/jni"
    )
    target_compile_definitions(generator PRIVATE G4_LIBGENERATOR_BUILD=1)
    target_link_libraries(generator PRIVATE log dl m)
    if(ANDROID_ABI STREQUAL "armeabi-v7a" OR CMAKE_SIZEOF_VOID_P EQUAL 4)
        target_compile_definitions(Gangstar4Core PRIVATE __int128=g4_int128_t)
        target_compile_definitions(Gangstar4 PRIVATE __int128=g4_int128_t)
    endif()
    if(ANDROID_ABI STREQUAL "arm64-v8a" OR ANDROID_ABI STREQUAL "armeabi-v7a")
        target_link_options(Gangstar4 PRIVATE "-Wl,-z,max-page-size=16384")
        target_link_options(generator PRIVATE "-Wl,-z,max-page-size=16384")
    endif()
    if(ANDROID_ABI STREQUAL "armeabi-v7a")
        target_link_options(Gangstar4 PRIVATE "-Wl,--wrap=setjmp" "-Wl,--wrap=longjmp" "-Wl,--defsym=dword_0=0" "-Wl,--version-script=${CMAKE_CURRENT_SOURCE_DIR}/G4_UP8Shop/androidPort/GameSpecific/jni/g4_exports.map")
    endif()
endif()
