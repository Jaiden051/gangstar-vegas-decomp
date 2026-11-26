#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_EditTextCharacter.h
// Library: gameswf | Module: gameswf_EditTextCharacter
// Binary Address Span: 0x10f9140 .. 0x11079c0 (49 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10f9140] (32 bytes) gameswf::EditTextCharacter::canHandleMouseEvent(void)
// int gameswf::EditTextCharacter::canHandleMouseEvent(gameswf::EditTextCharacter *this);
// [0x10f9160] (42 bytes) gameswf::EditTextCharacter::hitTest(float,float,bool)
// bool gameswf::EditTextCharacter::hitTest(gameswf::EditTextCharacter *this, float a2, float a3);
// [0x10f9190] (96 bytes) gameswf::EditTextCharacter::getBoundingBox(gameswf::Transform const&,gameswf::BoundingBox *)
// int gameswf::EditTextCharacter::getBoundingBox(gameswf::ASDisplayObjectContainer *a1, int a2, int a3);
// [0x10f91f0] (64 bytes) gameswf::EditTextCharacter::advance(float)
// int gameswf::EditTextCharacter::advance(gameswf::EditTextCharacter *this, float a2);
// [0x10f9230] (114 bytes) gameswf::EditTextCharacter::getTopmostMouseEntity(gameswf::Point,gameswf::line3d const&)
// int gameswf::EditTextCharacter::getTopmostMouseEntity( gameswf::ASDisplayObjectContainer *a1, float a2, float a3, int a4);
// [0x10f93e0] (105 bytes) gameswf::EditTextCharacter::getMemberByName(gameswf::StringI const&,gameswf::ASValue *)
// int gameswf::EditTextCharacter::getMemberByName( gameswf::EditTextCharacter *this, const gameswf::StringI *a2, gameswf::ASValue *a3);
// [0x10f94c0] (652 bytes) gameswf::EditTextCharacter::getStandardMember(gameswf::as_standard_member,gameswf::ASValue *)
// int gameswf::EditTextCharacter::getStandardMember( long double a1, int a2, int a3, gameswf::ASValue *a4);
// [0x10f9750] (230 bytes) gameswf::EditTextCharacter::getTopmostMouseEntity(float,float)
// gameswf::EditTextCharacter *gameswf::EditTextCharacter::getTopmostMouseEntity( gameswf::EditTextCharacter *this, float a2, float a3);
// [0x10fd070] (294 bytes) gameswf::EditTextCharacter::showCursor(void)
// gameswf *gameswf::EditTextCharacter::showCursor(gameswf::EditTextCharacter *this);
// [0x10fd1a0] (16 bytes) gameswf::EditTextCharacter::getVarName(void)const
// int gameswf::EditTextCharacter::getVarName(gameswf::EditTextCharacter *this);
// [0x10fd1b0] (44 bytes) gameswf::EditTextCharacter::resetBoundingBox(float,float)
// gameswf::EditTextCharacter *gameswf::EditTextCharacter::resetBoundingBox( gameswf::EditTextCharacter *this, unsigned int a2, unsigned int a3);
// [0x10fd1e0] (578 bytes) gameswf::EditTextCharacter::alignLine(gameswf::TextStyle::Alignment,gameswf::array<gameswf::TextGlyphRecord> &,float,float)
// int gameswf::EditTextCharacter::alignLine(int a1, int a2, int *a3, int a4, float a5);
// [0x10fd840] (200 bytes) gameswf::EditTextCharacter::updateRecordOffsets(gameswf::array<gameswf::TextGlyphRecord> &,float,float,float,float)
// gameswf::array<gameswf::TextGlyphRecord> *gameswf::EditTextCharacter::updateRecordOffsets( gameswf::EditTextCharacter *this, gameswf::array<gameswf::TextGlyphRecord> *a2, float a3, float a4, float a5, float a6);
// [0x10fd910] (108 bytes) gameswf::EditTextCharacter::getRecordWidth(gameswf::array<gameswf::TextGlyphRecord> const&)const
// long double gameswf::EditTextCharacter::getRecordWidth( gameswf::EditTextCharacter *this, const gameswf::array<gameswf::TextGlyphRecord> *a2);
// [0x10fd980] (262 bytes) gameswf::EditTextCharacter::getMaxHeight(gameswf::array<gameswf::TextGlyphRecord> const&,float &,float &)const
// float *gameswf::EditTextCharacter::getMaxHeight( gameswf::EditTextCharacter *this, const gameswf::array<gameswf::TextGlyphRecord> *a2, float *a3, float *a4);
// [0x10fda90] (270 bytes) gameswf::EditTextCharacter::getCurrentZoneMargins(float &,float &)
// float *gameswf::EditTextCharacter::getCurrentZoneMargins( gameswf::EditTextCharacter *this, float *a2, float *a3);
// [0x10fdba0] (41 bytes) gameswf::EditTextCharacter::getGlyphCount(gameswf::array<gameswf::TextGlyphRecord> const&)const
// int gameswf::EditTextCharacter::getGlyphCount( gameswf::EditTextCharacter *this, const gameswf::array<gameswf::TextGlyphRecord> *a2);
// [0x10fdbd0] (630 bytes) gameswf::EditTextCharacter::updateChildBounds(void)
// void gameswf::EditTextCharacter::updateChildBounds(gameswf::EditTextCharacter *this);
// [0x10fde50] (281 bytes) gameswf::EditTextCharacter::getCharBoundaries(int,gameswf::Rect *,bool)const
// gameswf::EditTextCharacter *gameswf::EditTextCharacter::getCharBoundaries( gameswf::EditTextCharacter *this, int a2, gameswf::Rect *a3);
// [0x10fdf70] (243 bytes) gameswf::EditTextCharacter::updateCursorPosition(void)
// float *gameswf::EditTextCharacter::updateCursorPosition(gameswf::EditTextCharacter *this);
// [0x10fe720] (3545 bytes) gameswf::EditTextCharacter::flushPendingWord(bool)
// int gameswf::EditTextCharacter::flushPendingWord(gameswf::EditTextCharacter *this, bool a2);
// [0x10ff500] (3752 bytes) gameswf::EditTextCharacter::display(void)
// void gameswf::EditTextCharacter::display(long double a1, gameswf::EditTextCharacter *this);
// [0x1100440] (601 bytes) gameswf::EditTextCharacter::preloadGlyphs(gameswf::Filter const*)
// gameswf *gameswf::EditTextCharacter::preloadGlyphs(uint32_t *a1);
// [0x11006a0] (96 bytes) gameswf::EditTextCharacter::preloadGlyphs(void)
// gameswf *gameswf::EditTextCharacter::preloadGlyphs(gameswf::EditTextCharacter *this);
// [0x1100700] (1294 bytes) gameswf::EditTextCharacter::~EditTextCharacter()
// void gameswf::EditTextCharacter::~EditTextCharacter(gameswf::EditTextCharacter *this);
// [0x1100c10] (56 bytes) gameswf::EditTextCharacter::~EditTextCharacter()
// void gameswf::EditTextCharacter::~EditTextCharacter(gameswf::EditTextCharacter *this);
// [0x1100c50] (2024 bytes) gameswf::EditTextCharacter::isAccepted(unsigned short)const
// int gameswf::EditTextCharacter::isAccepted(gameswf::EditTextCharacter *this, uint16_t a2);
// [0x1101440] (444 bytes) gameswf::EditTextCharacter::addPendingRecord(gameswf::TextGlyphRecord const&)
// char *gameswf::EditTextCharacter::addPendingRecord(int a1, int a2);
// [0x1101600] (4392 bytes) gameswf::EditTextCharacter::appendText(gameswf::array<unsigned short> const&,int,int,gameswf::TextAttributes &)
// void gameswf::EditTextCharacter::appendText( long double a1, gameswf::EditTextCharacter *a2, gameswf::array<unsigned short> *a3, int a4, int a5, int *a6);
// [0x1102730] (275 bytes) gameswf::EditTextCharacter::appendText(gameswf::String const&,gameswf::TextAttributes &)
// int gameswf::EditTextCharacter::appendText( long double a1, gameswf::EditTextCharacter *a2, gameswf::String *a3, int *a4);
// [0x1102ae0] (947 bytes) gameswf::EditTextCharacter::addFloatingZone(gameswf::TextGlyphRecord const&,gameswf::TextAttributes const&,gameswf::Size const&)
// float *gameswf::EditTextCharacter::addFloatingZone(int a1, int a2, int a3, int *a4);
// [0x1102ea0] (3296 bytes) gameswf::EditTextCharacter::appendImage(gameswf::String const&,gameswf::String const&,int,int,gameswf::TextAttributes const&)
// gameswf::RefCounted *gameswf::EditTextCharacter::appendImage( int a1, gameswf::String *a2, gameswf *a3, int a4, int a5, int a6);
// [0x1103b80] (1481 bytes) gameswf::EditTextCharacter::formatText(void)
// void gameswf::EditTextCharacter::formatText(long double a1, gameswf::EditTextCharacter *this);
// [0x1104150] (808 bytes) gameswf::EditTextCharacter::onTouchEvent(float,float)
// void gameswf::EditTextCharacter::onTouchEvent( long double a1, gameswf::EditTextCharacter *this, float a3, float a4);
// [0x1104480] (422 bytes) gameswf::EditTextCharacter::setText(gameswf::String const&,bool)
// void gameswf::EditTextCharacter::setText( long double a1, gameswf::EditTextCharacter *this, const gameswf::String *a3, bool a4);
// [0x1104630] (932 bytes) gameswf::EditTextCharacter::toString(void)
// char *gameswf::EditTextCharacter::toString(long double a1, gameswf::EditTextCharacter *this);
// [0x11049e0] (1276 bytes) gameswf::EditTextCharacter::setTextValue(gameswf::String const&,bool)
// char *gameswf::EditTextCharacter::setTextValue( long double a1, gameswf::Player ***this, const gameswf::String *a3, bool a4);
// [0x1104ee0] (1931 bytes) gameswf::EditTextCharacter::EditTextCharacter(gameswf::Player *,gameswf::Character *,gameswf::EditTextCharacterDef *,int)
// gameswf::EditTextCharacter *gameswf::EditTextCharacter::EditTextCharacter( long double a1, gameswf::EditTextCharacter *this, gameswf::Player *a3, gameswf::Character *a4, gameswf::EditTextCharacterDef *a5, char *a6);
// [0x1105670] (1250 bytes) gameswf::EditTextCharacter::setStandardMember(gameswf::as_standard_member,gameswf::ASValue const&)
// int gameswf::EditTextCharacter::setStandardMember( long double a1, __m128 a2, gameswf::Character *a3, int a4, char **a5);
// [0x1105b60] (1570 bytes) gameswf::EditTextCharacter::onKeyboardEvent(gameswf::ASKeyboardEvent const&)
// void gameswf::EditTextCharacter::onKeyboardEvent( long double a1, gameswf::EditTextCharacter *this, const gameswf::ASKeyboardEvent *a3);
// [0x1106190] (120 bytes) gameswf::EditTextCharacter::onLostFocus(void)
// gameswf::EditTextCharacter *gameswf::EditTextCharacter::onLostFocus( long double a1, gameswf::EditTextCharacter *this);
// [0x1106210] (722 bytes) gameswf::EditTextCharacter::onGotFocus(void)
// void gameswf::EditTextCharacter::onGotFocus(long double a1, gameswf::EditTextCharacter *this);
// [0x11064f0] (4995 bytes) gameswf::EditTextCharacter::resetFormat(gameswf::ASTextFormat *)
// int gameswf::EditTextCharacter::resetFormat( long double a1, gameswf::EditTextCharacter *this, gameswf::ASTextFormat *a3);
// [0x11078a0] (35 bytes) gameswf::EditTextCharacter::is(int)const
// bool gameswf::EditTextCharacter::is(gameswf::EditTextCharacter *this, int a2);
// [0x11078d0] (15 bytes) gameswf::EditTextCharacter::getCharacterDef(void)
// int gameswf::EditTextCharacter::getCharacterDef(gameswf::EditTextCharacter *this);
// [0x11078e0] (17 bytes) gameswf::EditTextCharacter::isFocusNeedsPress(void)const
// int gameswf::EditTextCharacter::isFocusNeedsPress(gameswf::EditTextCharacter *this);
// [0x1107930] (80 bytes) gameswf::EditTextCharacter::getBoundInternal(gameswf::Rect *)
// gameswf::Rect *gameswf::EditTextCharacter::getBoundInternal( gameswf::EditTextCharacter *this, gameswf::Rect *a2);
// [0x1107980] (55 bytes) gameswf::EditTextCharacter::updateWorldCxForm(void)
// uint32_t *gameswf::EditTextCharacter::updateWorldCxForm(gameswf::EditTextCharacter *this);
// [0x11079c0] (55 bytes) gameswf::EditTextCharacter::updateWorldMatrix(void)
// uint32_t gameswf::EditTextCharacter::updateWorldMatrix(gameswf::EditTextCharacter *this);
