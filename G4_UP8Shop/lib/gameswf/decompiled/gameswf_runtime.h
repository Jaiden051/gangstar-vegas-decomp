#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_runtime.h
// Library: gameswf | Module: gameswf_runtime
// Binary Address Span: 0x1066500 .. 0x1192e50 (262 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1066500] (17 bytes) gameswf::assertMessage(char const*,char const*,int)
// void gameswf::assertMessage();
// [0x1066520] (22 bytes) gameswf::getHostInterface(void)
// int gameswf::getHostInterface();
// [0x1066540] (46 bytes) gameswf::setRenderMode(gameswf::RenderMode)
// int gameswf::setRenderMode(int a1);
// [0x10665f0] (327 bytes) gameswf::createContext(gameswf::InitializationParameters const&)
// int gameswf::createContext(int a1);
// [0x1066740] (129 bytes) gameswf::initialize(gameswf::InitializationParameters const&)
// void gameswf::initialize(int a1);
// [0x10667d0] (22 bytes) gameswf::getDefaultContext(void)
// int gameswf::getDefaultContext();
// [0x10667f0] (66 bytes) gameswf::clearGlyphTextureCaches(gameswf::PlayerContext *)
// gameswf::TextureCache *gameswf::clearGlyphTextureCaches(gameswf *this);
// [0x1066840] (581 bytes) gameswf::clearFonts(gameswf::PlayerContext *)
// void gameswf::clearFonts(gameswf *this);
// [0x1066a90] (67 bytes) gameswf::destroyContext(gameswf::PlayerContext *)
// int gameswf::destroyContext(gameswf *this);
// [0x1066ae0] (139 bytes) gameswf::finalize(void)
// int gameswf::finalize();
// [0x1066b70] (22 bytes) gameswf::getGameSwfVersion(void)
// const char *gameswf::getGameSwfVersion();
// [0x1066b90] (46 bytes) gameswf::getProfilingData(gameswf::ProfilingData &)
// uint32_t *gameswf::getProfilingData(uint32_t *a1);
// [0x1066c80] (9 bytes) gameswf::initMemoryAllocator(void)
// void gameswf::initMemoryAllocator();
// [0x1066c90] (9 bytes) gameswf::closeMemoryAllocator(void)
// void gameswf::closeMemoryAllocator();
// [0x1066ca0] (9 bytes) gameswf::dumpMemoryAllocator(void)
// void gameswf::dumpMemoryAllocator();
// [0x1066cb0] (42 bytes) gameswf::malloc_internal(unsigned int,gameswf::MemHint)
// int gameswf::malloc_internal(size_t a1);
// [0x1066ce0] (58 bytes) gameswf::malloc_internal(unsigned int,gameswf::MemHint,char const*,int)
// int gameswf::malloc_internal(size_t a1, int a2, int a3, int a4);
// [0x1066d20] (34 bytes) gameswf::free_internal(void *,unsigned int)
// int gameswf::free_internal(gameswf *this);
// [0x1066d50] (121 bytes) gameswf::realloc_internal(void *,unsigned int,unsigned int,gameswf::MemHint)
// void *gameswf::realloc_internal(gameswf *src, size_t a2, size_t a3);
// [0x1066dd0] (137 bytes) gameswf::realloc_internal(void *,unsigned int,unsigned int,gameswf::MemHint,char const*,int)
// void *gameswf::realloc_internal(gameswf *src, size_t a2, size_t a3, int a4, int a5, int a6);
// [0x1066e60] (42 bytes) operator new(unsigned int,gameswf::MemHint)
// int operator new(size_t a1);
// [0x1066ec0] (58 bytes) operator new(unsigned int,gameswf::MemHint,char const*,int)
// int operator new(size_t a1, int a2, int a3, int a4);
// [0x1067ae0] (269 bytes) gameswf::stringPrintf(char const*,...)
// gameswf *gameswf::stringPrintf(gameswf *this, char *format, char __varargs);
// [0x1067c90] (27 bytes) gameswf::validateTypes(void)
// char gameswf::validateTypes();
// [0x106aa60] (1228 bytes) gameswf::decodeNextUnicodeCharacter(char const**)
// int16_t gameswf::decodeNextUnicodeCharacter(char **this);
// [0x106af30] (504 bytes) gameswf::encodeUnicodeCharacter(char *,int *,unsigned int)
// unsigned int gameswf::encodeUnicodeCharacter(gameswf *this, char *a2, unsigned int a3);
// [0x106b130] (50 bytes) gameswf::Strnlen_s(char const*,unsigned int)
// const char *gameswf::Strnlen_s(gameswf *this, const char *a2);
// [0x106b170] (136 bytes) gameswf::Strcpy_s(char *,unsigned int,char const*)
// int gameswf::Strcpy_s(gameswf *this, char *a2, gameswf *src);
// [0x106b200] (89 bytes) gameswf::Strncpy_s(char *,unsigned int,char const*,unsigned int)
// int gameswf::Strncpy_s(gameswf *this, char *a2, unsigned int a3, char *a4);
// [0x106b260] (22 bytes) gameswf::getNAN(void)
// long double gameswf::getNAN();
// [0x106c2d0] (208 bytes) gameswf::call_method(gameswf::ASValue const&,gameswf::ASEnvironment *,gameswf::ASValue const&,int,int,char const*)
// gameswf *gameswf::call_method( gameswf *this, const gameswf::ASValue *a2, gameswf::ASEnvironment *a3, const gameswf::ASValue *a4, int a5, int a6, char *a7);
// [0x106c3a0] (1998 bytes) gameswf::call_method(gameswf::ASEnvironment *,gameswf::ASObject *,char const*,gameswf::ASValue const*,int)
// gameswf *gameswf::call_method( gameswf *this, gameswf::ASEnvironment *a2, gameswf::ASObject *a3, char *a4, const gameswf::ASValue *a5, int a6);
// [0x106ce00] (243 bytes) gameswf::do_init_action_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::do_init_action_loader(gameswf *this, gameswf::Stream *a2, uint32_t *a3);
// [0x106cf00] (203 bytes) gameswf::do_action_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::do_action_loader(gameswf *this, gameswf::Stream *a2, uint32_t *a3);
// [0x106d390] (281 bytes) gameswf::clearStandardFNames(void)
// void gameswf::clearStandardFNames();
// [0x1071080] (9 bytes) gameswf::beginAS3Profiling(void)
// void gameswf::beginAS3Profiling();
// [0x1071090] (9 bytes) gameswf::endAS3Profiling(void)
// void gameswf::endAS3Profiling();
// [0x1072b30] (1031 bytes) gameswf::as3FunctionCall(gameswf::FunctionCall const&)
// int gameswf::as3FunctionCall(int a1);
// [0x1087750] (156 bytes) gameswf::readVU30(int &,unsigned char const*)
// char gameswf::readVU30(gameswf *this, int *a2);
// [0x1087e60] (237 bytes) gameswf::clearDisasm(void)
// gameswf *gameswf::clearDisasm();
// [0x1087f50] (1750 bytes) gameswf::log_disasm(unsigned char const*)
// int gameswf::log_disasm(gameswf *this);
// [0x108c4a0] (37 bytes) gameswf::initDisasm(void)
// int gameswf::initDisasm();
// [0x108c4d0] (1242 bytes) gameswf::getAS3FunctionLocation(gameswf::fixed_array<unsigned char> const&,gameswf::abc_def const*,gameswf::String &,int &)
// int gameswf::getAS3FunctionLocation(uint32_t *a1, uint32_t *a2, gameswf **a3, gameswf *a4);
// [0x108c9b0] (698 bytes) gameswf::log_disasm_avm2(gameswf::fixed_array<unsigned char> const&,gameswf::abc_def const*)
// int gameswf::log_disasm_avm2(uint32_t *a1, uint32_t *a2);
// [0x108cc70] (231 bytes) gameswf::get_disasm_avm2(int)
// const char *gameswf::get_disasm_avm2(gameswf *this);
// [0x10912c0] (875 bytes) gameswf::get_file_type(char const*)
// int gameswf::get_file_type(gameswf *this);
// [0x1091630] (678 bytes) gameswf::getFullURL(gameswf::String const&,char const*)
// gameswf *gameswf::getFullURL(gameswf *this, const gameswf::String *a2, gameswf *a3);
// [0x10918e0] (75 bytes) gameswf::nextSlashOrDot(char const*)
// gameswf *gameswf::nextSlashOrDot(gameswf *this);
// [0x1094a00] (3152 bytes) gameswf::readFilterList(gameswf::Stream *,gameswf::Effect &)
// int gameswf::readFilterList( long double a1, __m128i a2, gameswf *this, gameswf::Stream *a4);
// [0x10961c0] (429 bytes) gameswf::gaussian_kernel(float *,int)
// void gameswf::gaussian_kernel(gameswf *this, int a2);
// [0x1096d70] (216 bytes) gameswf::createFilterEngine(void)
// int gameswf::createFilterEngine();
// [0x1096e50] (660 bytes) gameswf::closeFilterEngine(void)
// uint32_t *gameswf::closeFilterEngine();
// [0x10989b0] (21 bytes) gameswf::gameswf_ft_ftell(__sFILE *)
// int gameswf::gameswf_ft_ftell(int a1);
// [0x10989d0] (42 bytes) gameswf::gameswf_ft_free(FT_MemoryRec_ *,void *)
// int gameswf::gameswf_ft_free(gameswf *this, FT_MemoryRec_ *a2);
// [0x1098a00] (121 bytes) gameswf::gameswf_ft_realloc(FT_MemoryRec_ *,long,long,void *)
// void *gameswf::gameswf_ft_realloc(gameswf *this, signed int a2, int a3, gameswf *src);
// [0x1098a80] (42 bytes) gameswf::gameswf_ft_alloc(FT_MemoryRec_ *,long)
// int gameswf::gameswf_ft_alloc(gameswf *this, size_t a2);
// [0x1098ab0] (70 bytes) gameswf::gameswf_ft_fclose(__sFILE *)
// int gameswf::gameswf_ft_fclose(gameswf::File *a1);
// [0x1098b00] (137 bytes) gameswf::gameswf_ft_fopen(char const*,char const*)
// gameswf::File *gameswf::gameswf_ft_fopen(gameswf *this, char *a2);
// [0x1098b90] (58 bytes) gameswf::gameswf_ft_fread(void *,unsigned int,unsigned int,__sFILE *)
// int gameswf::gameswf_ft_fread(int a1, int a2, int a3, int a4);
// [0x1098bd0] (133 bytes) gameswf::gameswf_ft_fseek(__sFILE *,long,int)
// int gameswf::gameswf_ft_fseek(uint32_t *a1, int a2, int a3);
// [0x109b9d0] (9 bytes) gameswf::ASScriptFunctionCall(gameswf::FunctionCall const&)
// void gameswf::ASScriptFunctionCall();
// [0x109bc30] (1926 bytes) gameswf::ASCppFunctionCall(gameswf::FunctionCall const&)
// void gameswf::ASCppFunctionCall(uint32_t *a1);
// [0x109c6f0] (9 bytes) gameswf::null_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// void gameswf::null_loader();
// [0x109c700] (72 bytes) gameswf::define_debug_id_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// void gameswf::define_debug_id_loader(gameswf *this, gameswf::Stream *a2, int a3);
// [0x109c770] (9 bytes) gameswf::end_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// void gameswf::end_loader();
// [0x109c780] (56 bytes) gameswf::define_tabindex_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_tabindex_loader(gameswf *this);
// [0x109c7c0] (56 bytes) gameswf::jpeg_tables_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::jpeg_tables_loader(gameswf *this);
// [0x109c800] (258 bytes) gameswf::sound_stream_head_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int (***gameswf::sound_stream_head_loader( gameswf *this, gameswf::Stream *a2, int a3))(uint32_t, uint32_t, uint32_t, uint32_t, int, int, bool);
// [0x109c910] (140 bytes) gameswf::video_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::video_loader(gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinition *a3);
// [0x109c9a0] (132 bytes) gameswf::define_csm_textsetting_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_csm_textsetting_loader(gameswf *this, gameswf::Stream *a2, int a3);
// [0x109ca30] (99 bytes) gameswf::button_sound_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::button_sound_loader(gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinitionSub *a3);
// [0x109caa0] (132 bytes) gameswf::define_font_alignzones(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_font_alignzones(gameswf *this, gameswf::Stream *a2, int a3);
// [0x109cb30] (132 bytes) gameswf::define_font_info_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_font_info_loader(gameswf *this, gameswf::Stream *a2, int a3);
// [0x109cd90] (257 bytes) gameswf::sound_stream_block_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// void gameswf::sound_stream_block_loader(gameswf *this, gameswf::Stream *a2, int *a3);
// [0x109cea0] (136 bytes) gameswf::define_metadata_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_metadata_loader(gameswf *this);
// [0x109cf30] (165 bytes) gameswf::define_enable_debugger_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_enable_debugger_loader(gameswf *this, gameswf::Stream *a2);
// [0x109cfe0] (170 bytes) gameswf::frame_label_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::frame_label_loader( gameswf *this, gameswf::Stream *a2, int a3, gameswf::MovieDefinitionSub *a4, int a5);
// [0x109d090] (432 bytes) gameswf::define_scene_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_scene_loader(gameswf *this, gameswf::Stream *a2, int a3);
// [0x109d240] (640 bytes) gameswf::define_font_name(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_font_name( gameswf *this, gameswf::Stream *a2, int a3, gameswf::MovieDefinitionSub *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int16_t a12, int a13, int a14, gameswf *a15, unsigned int a16, int a17, int a18, int a19, char a20, int a21, int a22, gameswf *a23, int a24);
// [0x109dbc0] (235 bytes) gameswf::button_character_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::button_character_loader(gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinitionSub *a3);
// [0x109dcb0] (227 bytes) gameswf::sprite_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::sprite_loader(gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinitionSub *a3);
// [0x109dda0] (235 bytes) gameswf::define_font_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_font_loader(gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinitionSub *a3);
// [0x109de90] (243 bytes) gameswf::define_shape_morph_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_shape_morph_loader(gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinitionSub *a3);
// [0x109df90] (243 bytes) gameswf::define_shape_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_shape_loader(gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinitionSub *a3);
// [0x109e090] (355 bytes) gameswf::define_abc_loader_optimized(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_abc_loader_optimized( gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinitionSub *a3, gameswf::MovieDefinitionSub *a4, int a5, gameswf::Player *a6, gameswf *a7, int a8);
// [0x109e200] (355 bytes) gameswf::define_abc_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_abc_loader( gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinitionSub *a3, gameswf::MovieDefinitionSub *a4, int a5, gameswf::Player *a6, gameswf *a7, int a8);
// [0x109e470] (240 bytes) gameswf::remove_object_2_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::remove_object_2_loader(gameswf *this, gameswf::Stream *a2, uint32_t *a3);
// [0x109e560] (203 bytes) gameswf::set_background_color_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::set_background_color_loader(gameswf *this, gameswf::Stream *a2, uint32_t *a3);
// [0x109e630] (439 bytes) gameswf::define_video_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_video_loader(gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinition *a3);
// [0x109e7f0] (173 bytes) gameswf::define_file_attribute_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// char gameswf::define_file_attribute_loader(gameswf *this, gameswf::Stream *a2, int a3);
// [0x109e8a0] (1518 bytes) gameswf::import_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::import_loader(gameswf *this, gameswf::Stream *a2, gameswf **a3);
// [0x109ee90] (669 bytes) gameswf::define_bits_jpeg3_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_bits_jpeg3_loader(gameswf *this, gameswf::Stream *a2, uint32_t *a3);
// [0x109f130] (653 bytes) gameswf::define_bits_jpeg_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_bits_jpeg_loader(gameswf *this, gameswf::Stream *a2, uint32_t *a3);
// [0x109f3c0] (653 bytes) gameswf::define_bits_jpeg2_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_bits_jpeg2_loader(gameswf *this, gameswf::Stream *a2, uint32_t *a3);
// [0x109f650] (23 bytes) gameswf::getVerboseParse(void)
// int gameswf::getVerboseParse();
// [0x109f670] (23 bytes) gameswf::getVerboseDebug(void)
// int gameswf::getVerboseDebug();
// [0x109f690] (23 bytes) gameswf::getVerboseAction(void)
// int gameswf::getVerboseAction();
// [0x109f6b0] (23 bytes) gameswf::getVerboseDlist(void)
// int gameswf::getVerboseDlist();
// [0x109f6d0] (24 bytes) gameswf::setVerboseAction(bool)
// uint8_t *gameswf::setVerboseAction(gameswf *this);
// [0x109f6f0] (24 bytes) gameswf::setVerboseParse(bool)
// void *gameswf::setVerboseParse(gameswf *this);
// [0x109f710] (24 bytes) gameswf::setVerboseDlist(bool)
// void *gameswf::setVerboseDlist(gameswf *this);
// [0x109f730] (74 bytes) gameswf::executeActions(gameswf::ASEnvironment *,gameswf::array<gameswf::ActionBuffer *> const&)
// gameswf *gameswf::executeActions(gameswf::ASEnvironment *a1, int a2);
// [0x109fdb0] (1305 bytes) gameswf::ensureLoadersRegistered(void)
// int gameswf::ensureLoadersRegistered();
// [0x10a02d0] (315 bytes) gameswf::inflate_wrapper(gameswf::File *,void *,int)
// const char *gameswf::inflate_wrapper(gameswf *this, gameswf::File *a2, void *a3);
// [0x10a0410] (773 bytes) gameswf::define_native_image_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_native_image_loader(gameswf **this, gameswf::Stream *a2, uint32_t *a3);
// [0x10a0720] (3477 bytes) gameswf::define_bits_lossless_2_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_bits_lossless_2_loader( gameswf **this, gameswf::Stream *a2, uint32_t *a3, gameswf::MovieDefinitionSub *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, gameswf::File **a16, int a17, uint16_t a18, int a19, int a20, int a21, int a22, int a23, char a24);
// [0x10a14c0] (360 bytes) gameswf::substitute_bitmap_character(gameswf::String &,gameswf::BitmapCharacterDef *,gameswf::MovieDefinitionSub *)
// int gameswf::substitute_bitmap_character(gameswf *this, gameswf::String *a2);
// [0x10a1630] (484 bytes) gameswf::export_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::export_loader(gameswf *this, gameswf::Stream *a2, gameswf::BitmapCharacterDef *a3);
// [0x10a1820] (304 bytes) gameswf::symbol_class_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// gameswf::String *gameswf::symbol_class_loader( gameswf *this, gameswf::Stream *a2, gameswf::BitmapCharacterDef *a3);
// [0x10a3fc0] (135 bytes) gameswf::place_object_2_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::place_object_2_loader( long double a1, __m128 a2, gameswf *this, gameswf::Stream *a4, int a5);
// [0x10a6800] (23 bytes) gameswf::logPush(void)
// void gameswf::logPush();
// [0x10a6820] (23 bytes) gameswf::logPop(void)
// void gameswf::logPop();
// [0x10a6840] (213 bytes) gameswf::logMsg(char const*,...)
// int gameswf::logMsg(gameswf *this, const char *__varargs, ...);
// [0x10a6920] (119 bytes) gameswf::logError(char const*,...)
// int gameswf::logError(gameswf *this, const char *__varargs, ...);
// [0x10abc40] (124 bytes) gameswf::clearsTagLoaders(void)
// void gameswf::clearsTagLoaders();
// [0x10abcc0] (243 bytes) gameswf::getTagLoader(int,void (**)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *))
// int gameswf::getTagLoader(gameswf *this, uint32_t *a2);
// [0x10ac470] (36 bytes) gameswf::movieDefLoader(void *)
// int gameswf::movieDefLoader(gameswf::Stream **this);
// [0x10ad510] (52 bytes) gameswf::register_tag_loader(int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *))
// int gameswf::register_tag_loader( gameswf *this, void (*a2)(gameswf::Stream *, int, gameswf::MovieDefinitionSub *));
// [0x10ad550] (87 bytes) gameswf::isTagLoadersInitialized(void)
// bool gameswf::isTagLoadersInitialized();
// [0x10ae700] (119 bytes) gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::~hash()
// void gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::~hash(;
// [0x10ae780] (119 bytes) gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::clear(void)
// void gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::clear(;
// [0x10ae8f0] (848 bytes) gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::set_raw_capacity(int)
// void gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::set_raw_capacity(;
// [0x10aec40] (454 bytes) gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::add(int const&,void (* const&)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *))
// void (*gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::add(;
// [0x10b5370] (510 bytes) gameswf::get_builtin(gameswf::builtin_object,gameswf::StringI const&,gameswf::ASValue *)
// int gameswf::get_builtin(int a1, char *a2, gameswf::ASValue *a3);
// [0x10b5570] (102 bytes) gameswf::new_standard_method_map(gameswf::builtin_object)
// uint32_t *gameswf::new_standard_method_map(int a1);
// [0x10b55e0] (361 bytes) gameswf::clearStandardPropertyMap(void)
// gameswf *gameswf::clearStandardPropertyMap();
// [0x10b5750] (22 bytes) gameswf::getStandardPropertyMap(void)
// int *gameswf::getStandardPropertyMap();
// [0x10b5770] (22 bytes) gameswf::getStandardPropertyList(void)
// int *gameswf::getStandardPropertyList();
// [0x10b5790] (381 bytes) gameswf::getStandardMemberID(gameswf::StringI const&)
// int gameswf::getStandardMemberID(gameswf *this);
// [0x10b5910] (558 bytes) gameswf::getProperty(gameswf::ASObject *,int)
// gameswf *gameswf::getProperty(gameswf *this, gameswf::ASObject *a2, char *a3);
// [0x10b5b40] (526 bytes) gameswf::setProperty(gameswf::ASObject *,int,gameswf::ASValue const&)
// int gameswf::setProperty(gameswf *this, gameswf::ASObject *a2, int a3);
// [0x10b6b40] (363 bytes) gameswf::clearStandardMethodMap(void)
// int gameswf::clearStandardMethodMap();
// [0x10b7270] (645 bytes) gameswf::registerStandardMember(gameswf::String const&,gameswf::as_standard_member)
// int gameswf::registerStandardMember(gameswf **a1, int a2);
// [0x10b7500] (6526 bytes) gameswf::standardPropertyMapInit(void)
// int gameswf::standardPropertyMapInit();
// [0x10b8e80] (7718 bytes) gameswf::standardMethodMapInit(void)
// int gameswf::standardMethodMapInit();
// [0x10bacb0] (600 bytes) gameswf::registerNativeFunction(char const*,void (*)(gameswf::FunctionCall const&))
// int gameswf::registerNativeFunction(gameswf *a1, int a2);
// [0x10bb530] (517 bytes) gameswf::getStaticString(gameswf::String const&)
// gameswf::String *gameswf::getStaticString(gameswf *this);
// [0x10c0650] (1662 bytes) gameswf::isQuadEdgeIntersectingBound(gameswf::Point const*,gameswf::Rect const&)
// bool gameswf::isQuadEdgeIntersectingBound(gameswf *this, const gameswf::Point *a2);
// [0x10c3210] (457 bytes) gameswf::getBatchColor(int)
// gameswf *gameswf::getBatchColor(__m128d a1, float a2, gameswf *this, int a4);
// [0x10c4f10] (118 bytes) gameswf::normalize(float *)
// gameswf *gameswf::normalize(gameswf *this);
// [0x10c4f90] (95 bytes) gameswf::cross(float *,float *,float *)
// gameswf *gameswf::cross(gameswf *this, float *a2, float *a3);
// [0x10c5050] (9 bytes) gameswf::swapBuffers(void)
// void gameswf::swapBuffers();
// [0x10c79c0] (76 bytes) gameswf::createRenderHandler(gameswf::InitializationParameters const&)
// int gameswf::createRenderHandler(int a1);
// [0x10d1e90] (22 bytes) gameswf::getGlobalMutex(void)
// void *gameswf::getGlobalMutex();
// [0x10d9820] (517 bytes) void gameswf::collect<signed char>(unsigned int const*,unsigned int,glitch::video::SVertexStream const*,gameswf::Point *)
// void gameswf::collect<signed char>( gameswf *this, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream *a4);
// [0x10d9a30] (756 bytes) void gameswf::collect<unsigned char>(unsigned int const*,unsigned int,glitch::video::SVertexStream const*,gameswf::Point *)
// void gameswf::collect<unsigned char>( gameswf *this, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream *a4);
// [0x10d9d30] (517 bytes) void gameswf::collect<short>(unsigned int const*,unsigned int,glitch::video::SVertexStream const*,gameswf::Point *)
// void gameswf::collect<short>( gameswf *this, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream *a4);
// [0x10d9f40] (756 bytes) void gameswf::collect<unsigned short>(unsigned int const*,unsigned int,glitch::video::SVertexStream const*,gameswf::Point *)
// void gameswf::collect<unsigned short>( gameswf *this, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream *a4);
// [0x10da240] (462 bytes) void gameswf::collect<int>(unsigned int const*,unsigned int,glitch::video::SVertexStream const*,gameswf::Point *)
// void gameswf::collect<int>( gameswf *this, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream *a4);
// [0x10da410] (755 bytes) void gameswf::collect<unsigned int>(unsigned int const*,unsigned int,glitch::video::SVertexStream const*,gameswf::Point *)
// void gameswf::collect<unsigned int>( gameswf *this, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream *a4);
// [0x10da900] (42 bytes) gameswf::setCurveMaxPixelError(float)
// void gameswf::setCurveMaxPixelError(gameswf *this);
// [0x10da930] (22 bytes) gameswf::getCurveMaxPixelError(void)
// long double gameswf::getCurveMaxPixelError();
// [0x10e05e0] (25 bytes) gameswf::get_sample_rate(int)
// int gameswf::get_sample_rate(gameswf *this);
// [0x10e0600] (24 bytes) gameswf::set_sound_handler(gameswf::SoundHandler *)
// int gameswf::set_sound_handler(int a1);
// [0x10e0620] (67 bytes) gameswf::getSoundHandler(void)
// int gameswf::getSoundHandler();
// [0x10e0670] (4021 bytes) gameswf::define_sound_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_sound_loader(gameswf *this, gameswf::Stream *a2, uint32_t *a3);
// [0x10e1630] (1621 bytes) gameswf::start_sound_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::start_sound_loader(gameswf *this, gameswf::Stream *a2, uint32_t *a3);
// [0x10ef4a0] (24 bytes) gameswf::setEdgeAntiAliasingEnabled(bool)
// gameswf *gameswf::setEdgeAntiAliasingEnabled(gameswf *this);
// [0x10ef4c0] (23 bytes) gameswf::isEdgeAntiAliasingEnabled(void)
// int gameswf::isEdgeAntiAliasingEnabled();
// [0x10ef4e0] (24 bytes) gameswf::setLineAntiAliasingEnabled(bool)
// gameswf *gameswf::setLineAntiAliasingEnabled(gameswf *this);
// [0x10ef500] (23 bytes) gameswf::isLineAntiAliasingEnabled(void)
// int gameswf::isLineAntiAliasingEnabled();
// [0x10f1fc0] (12708 bytes) gameswf::executeTesselate(gameswf::MeshSet *,gameswf::ShapeCharacterDef const*,float)
// void gameswf::executeTesselate(gameswf *this, gameswf::MeshSet *a2, float a3);
// [0x10fc5c0] (288 bytes) gameswf::DoesCharIsSymbolsForTransferWithPrevNeighbor(wchar_t)
// bool gameswf::DoesCharIsSymbolsForTransferWithPrevNeighbor(gameswf *this);
// [0x10fc6e0] (12 bytes) gameswf::preloadGlyphCodes(gameswf::PlayerContext *,unsigned short *,int,gameswf::Font *,int,gameswf::Filter const*)
// int gameswf::preloadGlyphCodes(int a1, int a2, int a3);
// [0x10fc860] (417 bytes) gameswf::removeHTML(gameswf::String &)
// char *gameswf::removeHTML(gameswf *this);
// [0x10fe070] (235 bytes) gameswf::define_edit_text_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_edit_text_loader(gameswf *this, gameswf::Stream *a2, gameswf::MovieDefinitionSub *a3);
// [0x10fe630] (235 bytes) gameswf::define_text_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// int gameswf::define_text_loader( __m128 a1, gameswf *this, gameswf::Stream *a3, gameswf::MovieDefinitionSub *a4);
// [0x1111ab0] (173 bytes) gameswf::attachVideo(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::attachVideo(int a1);
// [0x1112260] (9 bytes) gameswf::NativeSetWindowSize(gameswf::FunctionCall const&)
// void gameswf::NativeSetWindowSize();
// [0x1112270] (9 bytes) gameswf::NativeAssert(gameswf::FunctionCall const&)
// void gameswf::NativeAssert();
// [0x1112280] (124 bytes) gameswf::NativeHasMissingGlyphs(gameswf::FunctionCall const&)
// int gameswf::NativeHasMissingGlyphs(int a1);
// [0x1112540] (289 bytes) gameswf::NativePreloadGlyphs(gameswf::FunctionCall const&)
// int gameswf::NativePreloadGlyphs(int a1);
// [0x1112670] (719 bytes) gameswf::NativeSetLanguage(gameswf::FunctionCall const&)
// int gameswf::NativeSetLanguage(gameswf::ASValue **a1);
// [0x1112940] (289 bytes) gameswf::NativeGetGameData(gameswf::FunctionCall const&)
// int gameswf::NativeGetGameData(int a1);
// [0x1112a70] (289 bytes) gameswf::NativeSetGameData(gameswf::FunctionCall const&)
// int gameswf::NativeSetGameData(int a1);
// [0x1112ba0] (301 bytes) gameswf::NativeGetCursorState(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::NativeGetCursorState(int a1);
// [0x1112cd0] (273 bytes) gameswf::NativeGetKeyState(gameswf::FunctionCall const&)
// int gameswf::NativeGetKeyState(int a1);
// [0x1112df0] (218 bytes) gameswf::NativeSetGraphicsAntiAliasing(gameswf::FunctionCall const&)
// char gameswf::NativeSetGraphicsAntiAliasing(int a1);
// [0x1112ed0] (289 bytes) gameswf::NativeGetViewportBounds(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::NativeGetViewportBounds(int a1);
// [0x1113000] (293 bytes) gameswf::NativeGetString(gameswf::FunctionCall const&)
// int gameswf::NativeGetString(int a1);
// [0x1113130] (222 bytes) gameswf::NativeStopSound(gameswf::FunctionCall const&)
// int gameswf::NativeStopSound(int a1);
// [0x1113210] (329 bytes) gameswf::NativePlaySound(gameswf::FunctionCall const&)
// int gameswf::NativePlaySound(int a1);
// [0x1113360] (306 bytes) gameswf::NativeSetGlyphTransforms(gameswf::FunctionCall const&)
// void gameswf::NativeSetGlyphTransforms(int a1);
// [0x1115460] (201 bytes) gameswf::NativeForceFlashInputBehavior(gameswf::FunctionCall const&)
// void gameswf::NativeForceFlashInputBehavior(uint32_t *a1);
// [0x1115a30] (228 bytes) gameswf::getLocalPosition(gameswf::Character *,float,float)
// gameswf *gameswf::getLocalPosition(gameswf *this, gameswf::Character *a2, float a3, float a4);
// [0x111c170] (1345 bytes) gameswf::arrayInit(gameswf::Player *)
// gameswf::ASObject *gameswf::arrayInit(gameswf *this);
// [0x111f3b0] (437 bytes) gameswf::createArray(gameswf::Player *)
// gameswf::ASArray *gameswf::createArray(gameswf *this);
// [0x1125630] (277 bytes) gameswf::broadcasterInit(gameswf::Player *)
// gameswf::ASObject *gameswf::broadcasterInit(gameswf *this);
// [0x112b060] (289 bytes) gameswf::flash_init(gameswf::Player *)
// gameswf::ASObject *gameswf::flash_init(gameswf *this);
// [0x112b190] (1039 bytes) gameswf::geomInit(gameswf::Player *)
// gameswf::ASObject *gameswf::geomInit(gameswf *this);
// [0x112c9f0] (8365 bytes) gameswf::keyInit(gameswf::Player *)
// gameswf::ASKey *gameswf::keyInit(gameswf *this);
// [0x112ef60] (168 bytes) gameswf::math_round(gameswf::FunctionCall const&)
// int gameswf::math_round(int a1);
// [0x112f010] (109 bytes) gameswf::math_min(gameswf::FunctionCall const&)
// int gameswf::math_min(int a1);
// [0x112f080] (109 bytes) gameswf::math_max(gameswf::FunctionCall const&)
// int gameswf::math_max(int a1);
// [0x112f0f0] (160 bytes) gameswf::math_floor(gameswf::FunctionCall const&)
// int gameswf::math_floor(int a1);
// [0x112f190] (104 bytes) gameswf::math_fabs(gameswf::FunctionCall const&)
// int gameswf::math_fabs(int a1);
// [0x112f200] (72 bytes) gameswf::math_random(gameswf::FunctionCall const&)
// int gameswf::math_random(gameswf::ASValue **a1);
// [0x112f250] (107 bytes) gameswf::math_pow(gameswf::FunctionCall const&)
// int gameswf::math_pow(int a1);
// [0x112f2c0] (107 bytes) gameswf::math_atan2(gameswf::FunctionCall const&)
// int gameswf::math_atan2(int a1);
// [0x112f330] (84 bytes) gameswf::math_tan(gameswf::FunctionCall const&)
// int gameswf::math_tan(int a1);
// [0x112f390] (88 bytes) gameswf::math_sqrt(gameswf::FunctionCall const&)
// int gameswf::math_sqrt(int a1);
// [0x112f3f0] (84 bytes) gameswf::math_sin(gameswf::FunctionCall const&)
// int gameswf::math_sin(int a1);
// [0x112f450] (84 bytes) gameswf::math_log(gameswf::FunctionCall const&)
// int gameswf::math_log(int a1);
// [0x112f4b0] (84 bytes) gameswf::math_exp(gameswf::FunctionCall const&)
// int gameswf::math_exp(int a1);
// [0x112f510] (84 bytes) gameswf::math_cos(gameswf::FunctionCall const&)
// int gameswf::math_cos(int a1);
// [0x112f570] (152 bytes) gameswf::math_ceil(gameswf::FunctionCall const&)
// int gameswf::math_ceil(int a1);
// [0x112f610] (84 bytes) gameswf::math_atan(gameswf::FunctionCall const&)
// int gameswf::math_atan(int a1);
// [0x112f670] (84 bytes) gameswf::math_asin(gameswf::FunctionCall const&)
// int gameswf::math_asin(int a1);
// [0x112f6d0] (84 bytes) gameswf::math_acos(gameswf::FunctionCall const&)
// int gameswf::math_acos(int a1);
// [0x112fcb0] (7541 bytes) gameswf::mathInit(gameswf::Player *)
// gameswf::ASObject *gameswf::mathInit(gameswf *this);
// [0x1133800] (532 bytes) gameswf::createMatrix(gameswf::Player *,gameswf::Matrix const*)
// gameswf::ASMatrix *gameswf::createMatrix(gameswf *this, gameswf::Player *a2);
// [0x113d580] (464 bytes) gameswf::createPoint(gameswf::Player *,float,float)
// int gameswf::createPoint(gameswf *this, gameswf::Player *a2, float a3);
// [0x113dad0] (219 bytes) gameswf::as_selection_setfocus(gameswf::FunctionCall const&)
// int gameswf::as_selection_setfocus(int a1);
// [0x113dc00] (277 bytes) gameswf::selection_init(gameswf::Player *)
// gameswf::as_selection *gameswf::selection_init(gameswf *this);
// [0x113efd0] (123 bytes) gameswf::spriteGetPtr(gameswf::FunctionCall const&)
// int gameswf::spriteGetPtr(int a1);
// [0x113fa10] (1413 bytes) gameswf::transformPoint(gameswf::ASObject *,gameswf::Matrix const&)
// void gameswf::transformPoint(gameswf *this, gameswf::ASObject *a2);
// [0x1144290] (293 bytes) gameswf::textFieldInit(gameswf::Player *)
// gameswf::ASObject *gameswf::textFieldInit(gameswf *this);
// [0x1147040] (13 bytes) gameswf::parseStyleSheetStyle(gameswf::ASStyleSheet::Style &,gameswf::String const&)
// char *gameswf::parseStyleSheetStyle( gameswf::hash<gameswf::StringI, gameswf::String, gameswf::stringi_hash_functor<gameswf::StringI>> **a1, char *a2);
// [0x1152bf0] (189 bytes) gameswf::transformPoint(gameswf::ASPoint *,gameswf::Matrix const&)
// void gameswf::transformPoint(gameswf *this, gameswf::ASPoint *a2);
// [0x1152e00] (31 bytes) gameswf::setFilterEnabled(gameswf::Filter::ID,bool)
// int gameswf::setFilterEnabled(int a1, char a2);
// [0x115d900] (1384 bytes) gameswf::filtersInitPackage(gameswf::Player *)
// int gameswf::filtersInitPackage(gameswf *this);
// [0x115de70] (496 bytes) gameswf::mediaInitPackage(gameswf::Player *)
// int gameswf::mediaInitPackage(gameswf *this);
// [0x115e060] (221 bytes) gameswf::loadTexture(gameswf::Player *,char const*)
// gameswf *gameswf::loadTexture(gameswf *this, gameswf::Player *a2, char *a3);
// [0x115fff0] (536 bytes) gameswf::extensionsInitPackage(gameswf::Player *)
// int gameswf::extensionsInitPackage(gameswf *this);
// [0x11607d0] (1878 bytes) gameswf::displayInitPackage(gameswf::Player *)
// int gameswf::displayInitPackage(gameswf *this);
// [0x1167fe0] (648 bytes) gameswf::eventsInitPackage(gameswf::Player *)
// int gameswf::eventsInitPackage(gameswf *this);
// [0x116e3b0] (437 bytes) gameswf::createRectangle(gameswf::Player *)
// gameswf::ASRectangle *gameswf::createRectangle(gameswf *this);
// [0x116e710] (1952 bytes) gameswf::geomInitPackage(gameswf::Player *)
// int gameswf::geomInitPackage(gameswf *this);
// [0x116efe0] (125 bytes) gameswf::getTimer(gameswf::FunctionCall const&)
// int gameswf::getTimer(gameswf::ASValue **a1);
// [0x116f5c0] (856 bytes) gameswf::splitFullClassName(gameswf::String const&,gameswf::String&,gameswf::String&)
// int gameswf::splitFullClassName(gameswf *this, gameswf **a2, gameswf **a3);
// [0x116f920] (559 bytes) gameswf::getDefinitionByName(gameswf::FunctionCall const&)
// gameswf::RefCounted *gameswf::getDefinitionByName(int a1);
// [0x116fb50] (1504 bytes) gameswf::utilsInitPackage(gameswf::Player *)
// int gameswf::utilsInitPackage(gameswf *this);
// [0x11727f0] (9 bytes) gameswf::buffered_write(void const*,int,void *)
// int gameswf::buffered_write();
// [0x1172800] (228 bytes) gameswf::buffered_seek(int,void *)
// char *gameswf::buffered_seek(gameswf *this, uint32_t **a2);
// [0x11728f0] (63 bytes) gameswf::buffered_seek_to_end(void *)
// int gameswf::buffered_seek_to_end(gameswf *this);
// [0x1172930] (19 bytes) gameswf::buffered_tell(void const*)
// int gameswf::buffered_tell(gameswf *this);
// [0x1172950] (44 bytes) gameswf::buffered_get_eof(void *)
// int gameswf::buffered_get_eof(gameswf *this);
// [0x11729d0] (48 bytes) gameswf::buffered_close(void *)
// int gameswf::buffered_close(gameswf *this);
// [0x1172a00] (229 bytes) gameswf::buffered_read(void *,int,void *)
// int gameswf::buffered_read(gameswf *this, char *a2, uint32_t **a3);
// [0x1173640] (208 bytes) gameswf::getBufferedFile(gameswf::File *)
// gameswf::File *gameswf::getBufferedFile(gameswf *this);
// [0x1173940] (16 bytes) gameswf::scanline(gameswf::ImageBase *,int)
// int gameswf::scanline(gameswf *this, gameswf::ImageBase *a2);
// [0x1173950] (16 bytes) gameswf::scanline(gameswf::ImageBase const*,int)
// int gameswf::scanline(gameswf *this, const gameswf::ImageBase *a2);
// [0x11739e0] (84 bytes) gameswf::createRGB(int,int)
// gameswf::ImageRGB *gameswf::createRGB(gameswf *this, int a2);
// [0x1173ac0] (84 bytes) gameswf::createRGBA(int,int)
// gameswf::ImageRGBA *gameswf::createRGBA(gameswf *this, int a2);
// [0x1173c20] (84 bytes) gameswf::createAlpha(int,int)
// gameswf::ImageAlpha *gameswf::createAlpha(gameswf *this, int a2);
// [0x1173e70] (167 bytes) gameswf::readJpeg(gameswf::File *)
// gameswf::ImageRGB *gameswf::readJpeg(gameswf *this);
// [0x1173f20] (104 bytes) gameswf::readJpeg(char const*)
// gameswf::ImageRGB *gameswf::readJpeg(gameswf *this);
// [0x1173f90] (136 bytes) gameswf::readSwfJpeg2WithTables(gameswf::jpeg::input *)
// gameswf::ImageRGB *gameswf::readSwfJpeg2WithTables(gameswf *this);
// [0x1174020] (99 bytes) gameswf::readSwfJpeg2(gameswf::File *)
// gameswf::ImageRGB *gameswf::readSwfJpeg2(gameswf *this);
// [0x1174090] (394 bytes) gameswf::readSwfJpeg3(gameswf::File *)
// gameswf::ImageRGBA *gameswf::readSwfJpeg3(gameswf *this);
// [0x1174220] (614 bytes) gameswf::writeTGA(gameswf::File *,gameswf::ImageRGBA *)
// gameswf::File *gameswf::writeTGA(gameswf *this, gameswf::File *a2);
// [0x1174490] (402 bytes) gameswf::makeNextMipLevel(gameswf::ImageRGB *)
// gameswf *gameswf::makeNextMipLevel(gameswf *this);
// [0x1174630] (434 bytes) gameswf::makeNextMipLevel(gameswf::ImageRGBA *)
// gameswf *gameswf::makeNextMipLevel(gameswf *this);
// [0x118df30] (24 bytes) gameswf::setVideoBufferingMode(gameswf::VideoBufferingMode)
// uint32_t *gameswf::setVideoBufferingMode(int a1);
// [0x118e0a0] (808 bytes) gameswf::YCrCbToRGB(gameswf::VideoHandler::Frame const&,unsigned char *,int)
// int gameswf::YCrCbToRGB(int *a1, uint8_t *a2, int a3);
// [0x118e3d0] (320 bytes) gameswf::YCrCbToTexture(gameswf::VideoHandler::Frame const&,unsigned char **,gameswf::Size *)
// void *gameswf::YCrCbToTexture(uint32_t *a1, char **a2, void **a3);
// [0x118e710] (501 bytes) gameswf::createVideoBitmapRGBA(gameswf::Size const&)
// int gameswf::createVideoBitmapRGBA( int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11, int a12, int a13, gameswf *a14, int a15);
// [0x118e910] (413 bytes) gameswf::createVideoBitmapAlpha(gameswf::Size const&,char const*)
// int gameswf::createVideoBitmapAlpha( int *a1, char *s, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11, int a12, int a13, gameswf *a14, int a15);
// [0x118f560] (540 bytes) gameswf::createColorTransform(gameswf::Player *,gameswf::CxForm const*)
// gameswf::ASObject *gameswf::createColorTransform(gameswf **this, gameswf::Player *a2);
// [0x11921a0] (1288 bytes) gameswf::netInitPackage(gameswf::Player *)
// int gameswf::netInitPackage(gameswf *this);
// [0x11927b0] (1696 bytes) gameswf::textInitPackage(gameswf::Player *)
// int gameswf::textInitPackage(gameswf *this);
// [0x1192e50] (608 bytes) gameswf::xmlInitPackage(gameswf::Player *)
// int gameswf::xmlInitPackage(gameswf *this);
