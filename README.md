# Gangstar Vegas Decompilation (WIP)

Work-in-progress C/C++ and Java decompilation of **Gangstar Vegas v1.8.2f** (`G4_UP8Shop` and `GLLegacy_HDIDFV`).

## Current Status

- **In progress — does not build cleanly yet.**
- Native C/C++ code (`libGangstar4.so` and `libgenerator.so`) and Java classes (`classes.dex`) have been decompiled into `G4_UP8Shop/` and `GLLegacy_HDIDFV/`.
- Most translation units compile under CMake/Ninja (`armeabi-v7a`), but roughly a dozen translation units still fail due to unfinished engine/middleware methods, missing forward declarations, and decompiler signature mismatches (`gameswf`, `glf`, `glitch`, `havok`, `iap`, `vox`, `chatv2`).
- Runtime verification and C++ cleanup/refactoring are still incomplete.

## Structure

- `CMakeLists.txt` — CMake build configuration (`Gangstar4Core`, `Gangstar4`, `generator`)
- `G4_UP8Shop/sources/` — Decompiled `Core` and `Game` translation units, `XmlData` schemas, and `Grapher` actors
- `G4_UP8Shop/lib/` — Decompiled engine and middleware libraries (`glf`, `glitch`, `havok`, `gameswf`, `vox`, `grapher`, etc.)
- `G4_UP8Shop/androidPort/GameSpecific/` — Android JNI layer and decompiled Java sources
- `GLLegacy_HDIDFV/` — Companion `libgenerator.so` JNI source

## Assets & Binaries

No Gameloft APKs, OBB archives, game assets, resources, or extracted binary data sections are included in this repository. You must supply your own legally obtained copy of the game to extract any required runtime assets or binary sections.
