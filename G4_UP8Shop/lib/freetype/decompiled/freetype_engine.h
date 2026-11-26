#pragma once
// ============================================================================
// G4_UP8Shop/lib/freetype/decompiled/freetype_engine.h
// Library: freetype | Module: freetype_engine
// Binary Address Span: 0x11aa810 .. 0x1228a40 (199 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x11aa810] (37 bytes) FT_RoundFix
// int16_t FT_RoundFix(int a1);
// [0x11aa840] (37 bytes) FT_CeilFix
// int16_t FT_CeilFix(int a1);
// [0x11aa870] (24 bytes) FT_FloorFix
// int16_t FT_FloorFix(int a1);
// [0x11aa890] (68 bytes) FT_MSB
// int FT_MSB(unsigned int a1);
// [0x11aa8e0] (343 bytes) FT_MulDiv
// int FT_MulDiv(int a1, int a2, int a3);
// [0x11aaa40] (305 bytes) FT_MulDiv_No_Round
// int FT_MulDiv_No_Round(int a1, int a2, int a3);
// [0x11aab80] (37 bytes) FT_MulFix
// unsigned int FT_MulFix(int a1, int a2);
// [0x11aabb0] (167 bytes) FT_DivFix
// int FT_DivFix(int a1, int a2);
// [0x11aac60] (260 bytes) FT_Matrix_Multiply
// void FT_Matrix_Multiply(int *a1, int *a2);
// [0x11aad70] (190 bytes) FT_Matrix_Invert
// int FT_Matrix_Invert(int *a1);
// [0x11aae30] (319 bytes) FT_Matrix_Multiply_Scaled
// void FT_Matrix_Multiply_Scaled(int *a1, int *a2, int a3);
// [0x11aaf70] (194 bytes) FT_Vector_Transform_Scaled
// void FT_Vector_Transform_Scaled(int *a1, int *a2, int a3);
// [0x11ab040] (307 bytes) ft_corner_orientation
// int ft_corner_orientation(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
// [0x11ab180] (133 bytes) ft_corner_is_flat
// bool ft_corner_is_flat(int a1, int a2, int a3, int a4);
// [0x11ab210] (79 bytes) FT_GlyphLoader_Rewind
// int FT_GlyphLoader_Rewind(int a1);
// [0x11ab260] (96 bytes) FT_GlyphLoader_Prepare
// int FT_GlyphLoader_Prepare(int a1);
// [0x11ab2c0] (96 bytes) FT_GlyphLoader_Add
// int FT_GlyphLoader_Add(int a1);
// [0x11ab320] (98 bytes) ft_service_list_lookup
// const char *ft_service_list_lookup(const char **a1, char *s2);
// [0x11ab390] (32 bytes) ft_validator_init
// uint32_t *ft_validator_init(uint32_t *a1, int a2, int a3, int a4);
// [0x11ab3b0] (12 bytes) ft_validator_run
// int ft_validator_run();
// [0x11ab3c0] (46 bytes) ft_validator_error
// void __noreturn ft_validator_error(int a1, int a2);
// [0x11ab3f0] (203 bytes) FT_Set_Transform
// uint32_t *FT_Set_Transform(uint32_t *a1, uint32_t *a2, int *a3);
// [0x11ab4c0] (17 bytes) FT_Reference_Face
// int FT_Reference_Face(int a1);
// [0x11ab4e0] (355 bytes) FT_Match_Size
// char FT_Match_Size(int a1, uint32_t *a2, char a3, uint32_t *a4);
// [0x11ab650] (103 bytes) ft_synthesize_vertical_metrics
// int ft_synthesize_vertical_metrics(uint32_t *a1, int a2);
// [0x11ab6c0] (299 bytes) FT_Select_Metrics
// unsigned int FT_Select_Metrics(int a1, int a2);
// [0x11ab7f0] (999 bytes) FT_Request_Metrics
// unsigned int FT_Request_Metrics(int a1, int *a2);
// [0x11abbe0] (98 bytes) FT_Select_Size
// char FT_Select_Size(int a1, int a2);
// [0x11abc50] (189 bytes) FT_Request_Size
// char FT_Request_Size(uint32_t *a1, int *a2);
// [0x11abd10] (164 bytes) FT_Set_Char_Size
// char FT_Set_Char_Size(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x11abdc0] (151 bytes) FT_Set_Pixel_Sizes
// char FT_Set_Pixel_Sizes(uint32_t *a1, unsigned int a2, unsigned int a3);
// [0x11abe60] (323 bytes) FT_Get_Kerning
// int FT_Get_Kerning(int a1, int a2, int a3, int a4, int *a5);
// [0x11abfb0] (141 bytes) FT_Get_Track_Kerning
// int FT_Get_Track_Kerning(int a1, int a2, int a3, int a4);
// [0x11ac040] (228 bytes) FT_Select_Charmap
// char FT_Select_Charmap(uint32_t *a1, int a2);
// [0x11ac130] (61 bytes) FT_Get_Charmap_Index
// int FT_Get_Charmap_Index(int *a1);
// [0x11ac170] (43 bytes) FT_Get_Char_Index
// int FT_Get_Char_Index(int a1, int a2);
// [0x11ac1a0] (99 bytes) FT_Get_Next_Char
// int FT_Get_Next_Char(int a1, int a2, unsigned int *a3);
// [0x11ac210] (161 bytes) FT_Get_First_Char
// int FT_Get_First_Char(int a1, uint32_t *a2);
// [0x11ac2c0] (155 bytes) FT_Get_Name_Index
// int FT_Get_Name_Index(int a1, int a2);
// [0x11ac360] (261 bytes) FT_Get_Glyph_Name
// int FT_Get_Glyph_Name(int a1, int a2, uint8_t *a3, int a4);
// [0x11ac470] (139 bytes) FT_Get_Postscript_Name
// int FT_Get_Postscript_Name(int a1);
// [0x11ac500] (109 bytes) FT_Get_Sfnt_Table
// int FT_Get_Sfnt_Table(int a1, int a2);
// [0x11ac570] (148 bytes) FT_Load_Sfnt_Table
// int FT_Load_Sfnt_Table(int a1, int a2, int a3, int a4, int a5);
// [0x11ac610] (149 bytes) FT_Sfnt_Table_Info
// int FT_Sfnt_Table_Info(int a1, int a2, int a3, int a4);
// [0x11ac6b0] (115 bytes) FT_Get_CMap_Language_ID
// int FT_Get_CMap_Language_ID(int a1);
// [0x11ac730] (127 bytes) FT_Get_CMap_Format
// int FT_Get_CMap_Format(int a1);
// [0x11ac7b0] (180 bytes) FT_Face_GetCharVariantIndex
// int FT_Face_GetCharVariantIndex(uint32_t *a1, int a2, int a3);
// [0x11ac870] (151 bytes) FT_Set_Charmap
// char FT_Set_Charmap(uint32_t *a1, int a2);
// [0x11ac910] (149 bytes) FT_Face_GetCharVariantIsDefault
// int FT_Face_GetCharVariantIsDefault(int a1, int a2, int a3);
// [0x11ac9b0] (131 bytes) FT_Face_GetCharsOfVariant
// int FT_Face_GetCharsOfVariant(uint32_t *a1, int a2);
// [0x11aca40] (131 bytes) FT_Face_GetVariantsOfChar
// int FT_Face_GetVariantsOfChar(uint32_t *a1, int a2);
// [0x11acad0] (123 bytes) FT_Face_GetVariantSelectors
// int FT_Face_GetVariantSelectors(uint32_t *a1);
// [0x11acb50] (31 bytes) FT_Activate_Size
// char FT_Activate_Size(int *a1);
// [0x11acb70] (84 bytes) FT_Lookup_Renderer
// int FT_Lookup_Renderer(int a1, int a2, int a3);
// [0x11acbd0] (50 bytes) FT_Get_Renderer
// int FT_Get_Renderer(int a1, int a2);
// [0x11acc10] (125 bytes) FT_Get_Module
// int FT_Get_Module(int a1, char *s2);
// [0x11acc90] (60 bytes) FT_Get_Module_Interface
// int FT_Get_Module_Interface(int a1, char *a2);
// [0x11accd0] (127 bytes) ft_module_get_service
// int ft_module_get_service(uint32_t *a1, int a2);
// [0x11acd50] (247 bytes) FT_Property_Set
// int FT_Property_Set(int a1, char *s2, int a3, int a4);
// [0x11ace50] (248 bytes) FT_Property_Get
// int FT_Property_Get(int a1, char *s2, int a3, int a4);
// [0x11acf50] (16 bytes) FT_Reference_Library
// int FT_Reference_Library(int a1);
// [0x11acf60] (88 bytes) FT_Library_Version
// int FT_Library_Version(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x11acfc0] (33 bytes) FT_Set_Debug_Hook
// int FT_Set_Debug_Hook(int a1, unsigned int a2, int a3);
// [0x11acff0] (94 bytes) FT_Get_TrueType_Engine_Type
// int FT_Get_TrueType_Engine_Type(int a1);
// [0x11ad050] (128 bytes) FT_Get_SubGlyph_Info
// int FT_Get_SubGlyph_Info( uint32_t *a1, unsigned int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7);
// [0x11ad0d0] (1353 bytes) FT_Outline_Decompose
// int FT_Outline_Decompose(int16_t *a1, int a2, int a3);
// [0x11ad620] (127 bytes) FT_Outline_Check
// char FT_Outline_Check(int16_t *a1);
// [0x11ad6a0] (195 bytes) FT_Outline_Copy
// int FT_Outline_Copy(int16_t *a1, int a2);
// [0x11ad770] (730 bytes) FT_Outline_Get_CBox
// _OWORD *FT_Outline_Get_CBox(int a1, _OWORD *a2);
// [0x11ada50] (62 bytes) FT_Outline_Translate
// void FT_Outline_Translate(int a1, int a2, int a3);
// [0x11ada90] (220 bytes) FT_Outline_Reverse
// void FT_Outline_Reverse(int16_t *a1);
// [0x11adb70] (160 bytes) FT_Vector_Transform
// void FT_Vector_Transform(int *a1, int *a2);
// [0x11adc10] (104 bytes) FT_Outline_Transform
// void FT_Outline_Transform(int a1, int *a2);
// [0x11adc80] (352 bytes) FT_Outline_Get_Orientation
// int FT_Outline_Get_Orientation(int16_t *a1);
// [0x11adde0] (24 bytes) FT_Get_Sfnt_Name_Count
// int FT_Get_Sfnt_Name_Count(int a1);
// [0x11ade00] (46 bytes) FT_Stream_OpenMemory
// uint32_t *FT_Stream_OpenMemory(uint32_t *a1, int a2, int a3);
// [0x11ade30] (29 bytes) FT_Stream_Close
// int FT_Stream_Close(int a1);
// [0x11ade50] (129 bytes) FT_Stream_Seek
// int FT_Stream_Seek(uint32_t *a1, unsigned int a2);
// [0x11adee0] (1424 bytes) FT_Raccess_Guess
// int FT_Raccess_Guess(int a1, uint32_t *a2, char *s, uint32_t *a4, int a5, int *a6);
// [0x11ae470] (54 bytes) FT_Stream_Skip
// int FT_Stream_Skip(uint32_t *a1, int a2);
// [0x11ae4b0] (12 bytes) FT_Stream_Pos
// int FT_Stream_Pos(int a1);
// [0x11ae4c0] (157 bytes) FT_Stream_ReadAt
// int FT_Stream_ReadAt(uint32_t *a1, unsigned int a2, void *dest, size_t a4);
// [0x11ae560] (57 bytes) FT_Stream_Read
// int FT_Stream_Read(uint32_t *a1, void *a2, size_t a3);
// [0x11ae5a0] (141 bytes) FT_Stream_TryRead
// size_t FT_Stream_TryRead(uint32_t *a1, void *dest, size_t a3);
// [0x11ae630] (24 bytes) FT_Stream_GetChar
// int FT_Stream_GetChar(int a1);
// [0x11ae650] (38 bytes) FT_Stream_GetUShort
// int FT_Stream_GetUShort(int a1);
// [0x11ae680] (38 bytes) FT_Stream_GetUShortLE
// int FT_Stream_GetUShortLE(int a1);
// [0x11ae6b0] (47 bytes) FT_Stream_GetUOffset
// int FT_Stream_GetUOffset(int a1);
// [0x11ae6e0] (56 bytes) FT_Stream_GetULong
// int FT_Stream_GetULong(int a1);
// [0x11ae720] (56 bytes) FT_Stream_GetULongLE
// int FT_Stream_GetULongLE(int a1);
// [0x11ae760] (130 bytes) FT_Stream_ReadChar
// int FT_Stream_ReadChar(uint32_t *a1, uint32_t *a2);
// [0x11ae7f0] (141 bytes) FT_Stream_ReadUShort
// int FT_Stream_ReadUShort(uint32_t *a1, uint32_t *a2);
// [0x11ae880] (532 bytes) FT_Raccess_Get_HeaderInfo
// char FT_Raccess_Get_HeaderInfo(int a1, uint32_t *a2, unsigned int a3, unsigned int *a4, unsigned int *a5);
// [0x11aeaa0] (141 bytes) FT_Stream_ReadUShortLE
// int FT_Stream_ReadUShortLE(uint32_t *a1, uint32_t *a2);
// [0x11aeb30] (149 bytes) FT_Stream_ReadUOffset
// int FT_Stream_ReadUOffset(uint32_t *a1, uint32_t *a2);
// [0x11aebd0] (157 bytes) FT_Stream_ReadULong
// unsigned int FT_Stream_ReadULong(uint32_t *a1, uint32_t *a2);
// [0x11aef50] (157 bytes) FT_Stream_ReadULongLE
// int FT_Stream_ReadULongLE(uint32_t *a1, uint32_t *a2);
// [0x11aeff0] (240 bytes) FT_Cos
// int FT_Cos(int a1);
// [0x11af0e0] (39 bytes) FT_Sin
// int FT_Sin(int a1);
// [0x11af110] (246 bytes) FT_Tan
// int FT_Tan(int a1);
// [0x11af210] (379 bytes) FT_Atan2
// unsigned int FT_Atan2(int64_t a1);
// [0x11af390] (271 bytes) FT_Vector_Unit
// int *FT_Vector_Unit(int *a1, int a2);
// [0x11af4a0] (641 bytes) FT_Vector_Rotate
// void FT_Vector_Rotate(int *a1, int a2);
// [0x11af730] (459 bytes) FT_Vector_Length
// int FT_Vector_Length(int *a1);
// [0x11af900] (1088 bytes) FT_Outline_EmboldenXY
// int FT_Outline_EmboldenXY(int16_t *a1, int a2, int a3);
// [0x11afd40] (46 bytes) FT_Outline_Embolden
// int FT_Outline_Embolden(int16_t *a1, int a2);
// [0x11afd70] (50 bytes) FT_Hypot
// int FT_Hypot(int a1, int a2);
// [0x11afdb0] (535 bytes) FT_Vector_Polarize
// unsigned int FT_Vector_Polarize(int *a1, int *a2, unsigned int *a3);
// [0x11affd0] (55 bytes) FT_Vector_From_Polar
// void FT_Vector_From_Polar(int *a1, int a2, int a3);
// [0x11b0010] (66 bytes) FT_Angle_Diff
// int FT_Angle_Diff(int a1, int a2);
// [0x11b0060] (71 bytes) ft_mem_qalloc
// int ft_mem_qalloc(int a1, int a2, uint32_t *a3);
// [0x11b00b0] (126 bytes) ft_mem_alloc
// void *ft_mem_alloc(int a1, int n, uint32_t *a3);
// [0x11b02b0] (86 bytes) FT_GlyphLoader_New
// int FT_GlyphLoader_New(int a1, uint32_t *a2);
// [0x11b0530] (31 bytes) ft_mem_free
// int ft_mem_free(int a1, int a2);
// [0x11b0550] (263 bytes) ft_mem_qrealloc
// void *ft_mem_qrealloc(int a1, int a2, int a3, int a4, int a5, int *a6);
// [0x11b0660] (184 bytes) ft_mem_realloc
// char *ft_mem_realloc(int a1, int a2, int a3, int a4, int a5, int *a6);
// [0x11b0720] (165 bytes) FT_GlyphLoader_CheckSubGlyphs
// int FT_GlyphLoader_CheckSubGlyphs(int *a1, int a2);
// [0x11b07d0] (187 bytes) FT_GlyphLoader_CreateExtra
// int FT_GlyphLoader_CreateExtra(int a1);
// [0x11b0890] (84 bytes) FT_Stream_ExitFrame
// int FT_Stream_ExitFrame(int *a1);
// [0x11b08f0] (285 bytes) FT_Stream_EnterFrame
// int FT_Stream_EnterFrame(int a1, int a2, unsigned int a3, int a4, int a5);
// [0x11b0a10] (569 bytes) FT_Stream_ReadFields
// int FT_Stream_ReadFields(int *a1, int a2, int a3);
// [0x11b0c50] (83 bytes) FT_Stream_ExtractFrame
// int FT_Stream_ExtractFrame(int a1, unsigned int a2, uint32_t *a3);
// [0x11b0cb0] (78 bytes) FT_Stream_ReleaseFrame
// int FT_Stream_ReleaseFrame(int a1, int *a2);
// [0x11b0d00] (350 bytes) FT_Get_Sfnt_Name
// int FT_Get_Sfnt_Name(int a1, unsigned int a2, int a3);
// [0x11b0e60] (695 bytes) FT_Raccess_Get_DataOffsets
// int FT_Raccess_Get_DataOffsets( int *a1, uint32_t *a2, unsigned int a3, int a4, int a5, char a6, char **a7, int *a8);
// [0x11b1120] (181 bytes) FT_Outline_Done_Internal
// int FT_Outline_Done_Internal(int a1, int a2);
// [0x11b11e0] (53 bytes) FT_Outline_Done
// int FT_Outline_Done(int *a1, int a2);
// [0x11b1220] (371 bytes) FT_Outline_New_Internal
// int FT_Outline_New_Internal(int a1, unsigned int a2, int a3, int a4);
// [0x11b13a0] (69 bytes) FT_Outline_New
// int FT_Outline_New(int *a1, unsigned int a2, int a3, int a4);
// [0x11b13f0] (221 bytes) FT_New_Library
// int FT_New_Library(int a1, uint32_t *a2);
// [0x11b14d0] (362 bytes) FT_CMap_New
// int FT_CMap_New(int *a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x11b1710] (136 bytes) ft_glyphslot_alloc_bitmap
// int ft_glyphslot_alloc_bitmap(uint32_t *a1, size_t a2);
// [0x11b17a0] (115 bytes) ft_glyphslot_free_bitmap
// int ft_glyphslot_free_bitmap(uint32_t *a1);
// [0x11b1820] (55 bytes) ft_glyphslot_set_bitmap
// int ft_glyphslot_set_bitmap(uint32_t *a1, int a2);
// [0x11b1860] (86 bytes) FT_Stream_Free
// int FT_Stream_Free(int a1, int a2);
// [0x11b18c0] (347 bytes) FT_Stream_New
// char FT_Stream_New(int *a1, int *a2, uint32_t *a3);
// [0x11b1a20] (181 bytes) FT_Attach_Stream
// char FT_Attach_Stream(int a1, int *a2);
// [0x11b1ae0] (75 bytes) FT_Attach_File
// char FT_Attach_File(int a1, int a2);
// [0x11b2400] (196 bytes) FT_GlyphLoader_Reset
// int FT_GlyphLoader_Reset(int *a1);
// [0x11b24d0] (622 bytes) FT_GlyphLoader_CheckPoints
// int FT_GlyphLoader_CheckPoints(int a1, int a2, int a3);
// [0x11b2740] (453 bytes) FT_GlyphLoader_CopyPoints
// int FT_GlyphLoader_CopyPoints(int a1, int a2);
// [0x11b2910] (74 bytes) FT_GlyphLoader_Done
// int FT_GlyphLoader_Done(int *a1);
// [0x11b2960] (510 bytes) FT_New_GlyphSlot
// int FT_New_GlyphSlot(int a1, uint32_t *a2);
// [0x11b2b60] (284 bytes) FT_CMap_Done
// void FT_CMap_Done(uint32_t *a1);
// [0x11b2c80] (249 bytes) FT_Done_GlyphSlot
// void FT_Done_GlyphSlot(uint32_t *a1);
// [0x11b2d80] (130 bytes) ft_mem_dup
// void *ft_mem_dup(int a1, void *src, size_t n, uint32_t *a4);
// [0x11b2e10] (85 bytes) ft_mem_strdup
// void *ft_mem_strdup(int a1, char *s, uint32_t *a3);
// [0x11b2e70] (66 bytes) ft_mem_strcpyn
// bool ft_mem_strcpyn(uint8_t *a1, uint8_t *a2, unsigned int a3);
// [0x11b2ec0] (49 bytes) FT_List_Find
// int FT_List_Find(int *a1, int a2);
// [0x11b2f00] (38 bytes) FT_List_Add
// uint32_t *FT_List_Add(uint32_t *a1, uint32_t *a2);
// [0x11b2f30] (358 bytes) FT_New_Size
// char FT_New_Size(uint32_t *a1, uint32_t *a2);
// [0x11b30a0] (38 bytes) FT_List_Insert
// uint32_t *FT_List_Insert(int a1, uint32_t *a2);
// [0x11b30d0] (50 bytes) FT_List_Remove
// int64_t FT_List_Remove(uint32_t *a1, int64_t *a2);
// [0x11b3110] (270 bytes) FT_Done_Size
// char FT_Done_Size(uint32_t *a1);
// [0x11b3220] (53 bytes) FT_List_Up
// uint32_t *FT_List_Up(uint32_t *a1, uint32_t *a2);
// [0x11b3260] (224 bytes) FT_Set_Renderer
// int FT_Set_Renderer(int a1, int a2, int a3, uint32_t *a4);
// [0x11b3340] (228 bytes) FT_Outline_Render
// int FT_Outline_Render(int a1, int a2, int a3);
// [0x11b3430] (106 bytes) FT_Outline_Get_Bitmap
// int FT_Outline_Get_Bitmap(int a1, int a2, int a3);
// [0x11b34a0] (256 bytes) FT_Render_Glyph_Internal
// int FT_Render_Glyph_Internal(int a1, int a2, int a3);
// [0x11b35a0] (68 bytes) FT_Render_Glyph
// int FT_Render_Glyph(int a1, int a2);
// [0x11b35f0] (1722 bytes) FT_Load_Glyph
// int FT_Load_Glyph(int a1, int a2, int a3);
// [0x11b3cb0] (92 bytes) FT_Load_Char
// int FT_Load_Char(int a1, int a2, int a3);
// [0x11b3d10] (501 bytes) FT_Get_Advances
// int FT_Get_Advances(uint32_t *a1, unsigned int a2, int a3, int a4, int a5);
// [0x11b3f10] (300 bytes) FT_Get_Advance
// int FT_Get_Advance(uint32_t *a1, unsigned int a2, int a3, int *a4);
// [0x11b4040] (62 bytes) FT_List_Iterate
// int FT_List_Iterate(int *a1, int (*a2)(int, int), int a3);
// [0x11b4080] (143 bytes) FT_List_Finalize
// int *FT_List_Finalize(int *a1, void (*a2)(int, uint32_t, int), int a3, int a4);
// [0x11b4110] (791 bytes) FT_Remove_Module
// char FT_Remove_Module(int a1, int a2);
// [0x11b4430] (903 bytes) FT_Add_Module
// int FT_Add_Module(int *a1, int *a2);
// [0x11b4930] (499 bytes) FT_Done_Face
// int FT_Done_Face(int a1);
// [0x11b4b30] (369 bytes) FT_Done_Library
// char FT_Done_Library(int *a1);
// [0x11b4cb0] (3018 bytes) FT_Open_Face
// int FT_Open_Face(int *a1, int *a2, int a3, int *a4);
// [0x11b5880] (99 bytes) FT_New_Memory_Face
// int FT_New_Memory_Face(int *a1, int a2, int a3, int a4, int *a5);
// [0x11b58f0] (91 bytes) FT_New_Face
// int FT_New_Face(int *a1, int a2, int a3, int *a4);
// [0x11b6fd0] (18 bytes) ft_highpow2
// int ft_highpow2(int a1);
// [0x11b6ff0] (18 bytes) FT_Bitmap_New
// int FT_Bitmap_New(void *a1);
// [0x11b7010] (380 bytes) FT_Bitmap_Copy
// int FT_Bitmap_Copy(int *a1, int a2, uint32_t *a3);
// [0x11b7190] (5142 bytes) FT_Bitmap_Convert
// int FT_Bitmap_Convert(int *a1, int *a2, int *a3, int a4);
// [0x11b85b0] (167 bytes) FT_GlyphSlot_Own_Bitmap
// int FT_GlyphSlot_Own_Bitmap(int a1);
// [0x11b8660] (107 bytes) FT_Bitmap_Done
// int FT_Bitmap_Done(int *a1, int *a2);
// [0x11b86d0] (2216 bytes) FT_Bitmap_Embolden
// char FT_Bitmap_Embolden(int *a1, int a2, int a3, int a4);
// [0x11b8f80] (69 bytes) FT_Add_Default_Modules
// int *FT_Add_Default_Modules(int *a1);
// [0x11b8fd0] (122 bytes) FT_Init_FreeType
// int FT_Init_FreeType(int **a1);
// [0x11b9050] (64 bytes) FT_Done_FreeType
// int FT_Done_FreeType(int *a1);
// [0x11b91f0] (62 bytes) ft_set_file_callback
// void *ft_set_file_callback(void *a1, void *a2, void *a3, void *a4, void *a5);
// [0x11b9230] (234 bytes) FT_Stream_Open
// int FT_Stream_Open(uint32_t *a1, char *filename);
// [0x11b9320] (71 bytes) FT_New_Memory
// uint32_t *FT_New_Memory();
// [0x11b9370] (34 bytes) FT_Done_Memory
// void FT_Done_Memory(void *ptr);
// [0x11cec70] (10879 bytes) ps_hints_apply
// int ps_hints_apply(uint32_t *a1, int16_t *a2, int a3, int a4);
// [0x11ec100] (25448 bytes) TT_RunIns
// int TT_RunIns(int a1);
// [0x11f2470] (474 bytes) TT_New_Context
// int TT_New_Context(int a1);
// [0x1206eb0] (9 bytes) af_get_coverage
// int af_get_coverage();
// [0x1207a30] (74 bytes) af_get_char_index
// int af_get_char_index(int a1, int a2, int *a3, uint32_t *a4);
// [0x1227b60] (1894 bytes) FT_Stream_OpenGzip
// int FT_Stream_OpenGzip(int a1, uint32_t *a2);
// [0x12282d0] (739 bytes) FT_Gzip_Uncompress
// int FT_Gzip_Uncompress( int a1, uint8_t *a2, uint8_t **a3, uint8_t *a4, uint8_t *a5);
// [0x12285c0] (57 bytes) ft_lzwstate_reset
// int ft_lzwstate_reset(int a1);
// [0x1228600] (216 bytes) ft_lzwstate_init
// int ft_lzwstate_init(int a1, int a2);
// [0x12286e0] (522 bytes) FT_Stream_OpenLZW
// int FT_Stream_OpenLZW(int a1, uint32_t *a2);
// [0x12288f0] (205 bytes) ft_lzwstate_done
// int ft_lzwstate_done(int a1);
// [0x1228a40] (2589 bytes) ft_lzwstate_io
// int ft_lzwstate_io(int a1, uint8_t *a2, unsigned int a3);
