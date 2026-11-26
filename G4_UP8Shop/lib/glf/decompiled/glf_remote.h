#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_remote.h
// Library: glf | Module: glf_remote
// Binary Address Span: 0xcc14a0 .. 0xccff90 (33 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcc14a0] (265 bytes) glf::remote::Controller::Controller(glf::AddrIp4)
// void glf::remote::Controller::Controller(glf::EventReceiver *a1, int a2, int a3);
// [0xcc15b0] (945 bytes) glf::remote::Controller::DrawEvent(glf::CoreEvent const&)
// uint16_t glf::remote::Controller::DrawEvent(int a1, uint16_t *a2);
// [0xcc1970] (61 bytes) glf::remote::Controller::SendMessage(unsigned char const*,int)
// int glf::remote::Controller::SendMessage(glf::remote::Controller *this, const uint8_t *a2, size_t a3);
// [0xcc19b0] (70 bytes) glf::remote::Controller::SendQuit(void)
// int glf::remote::Controller::SendQuit(glf::remote::Controller *this);
// [0xcc1a00] (37 bytes) glf::remote::Controller::IsConnected(void)const
// int glf::remote::Controller::IsConnected(glf::remote::Controller *this);
// [0xcc1a30] (216 bytes) glf::remote::Controller::~Controller()
// void glf::remote::Controller::~Controller(void ***this);
// [0xcc1b10] (56 bytes) glf::remote::Controller::~Controller()
// void glf::remote::Controller::~Controller(void ***this);
// [0xcc1b50] (171 bytes) glf::remote::Controller::ReceiveEvent(glf::ByteArrayReader<std::allocator<char>> &)
// uint16_t *glf::remote::Controller::ReceiveEvent( glf::remote::Controller *this, glf::ByteArrayReader<std::allocator<char>> *a2);
// [0xcc1c00] (641 bytes) glf::remote::Controller::ReceiveIdentification(glf::ByteArrayReader<std::allocator<char>> &)
// const char *glf::remote::Controller::ReceiveIdentification( glf::remote::Controller *this, glf::ByteArrayReader<std::allocator<char>> *a2);
// [0xcc1e90] (462 bytes) glf::remote::Controller::ReceiveMessages(void)
// int glf::remote::Controller::ReceiveMessages(glf::remote::Controller *this);
// [0xcc2060] (63 bytes) glf::remote::Controller::Draw(glf::remote::Renderer *)
// int glf::remote::Controller::Draw(int a1, glf *a2);
// [0xcc20a0] (439 bytes) glf::remote::Controller::SendEvent(glf::CoreEvent const&)
// void glf::remote::Controller::SendEvent(glf::remote::Controller *a1, uint16_t *a2);
// [0xcc2260] (140 bytes) glf::remote::Controller::OnEvent(glf::CoreEvent const&)
// int glf::remote::Controller::OnEvent(glf::remote::Controller *a1, int a2);
// [0xcc22f0] (878 bytes) glf::remote::Controller::SendIdentification(void)
// void glf::remote::Controller::SendIdentification(glf::remote::Controller *this);
// [0xcc2660] (642 bytes) glf::remote::Controller::Connect(void)
// int glf::remote::Controller::Connect(glf::remote::Controller *this);
// [0xcc28f0] (101 bytes) glf::remote::Controller::Update(void)
// int glf::remote::Controller::Update(glf::remote::Canvas **this);
// [0xccf200] (110 bytes) glf::remote::Canvas::ConvertPosScreen2Canvas(glf::Point<short>)
// float *glf::remote::Canvas::ConvertPosScreen2Canvas(float *a1, int a2, int16_t a3);
// [0xccf270] (164 bytes) glf::remote::Canvas::ConvertLength2Size(float)
// glf::remote::Canvas *glf::remote::Canvas::ConvertLength2Size(glf::remote::Canvas *this, float a2, float a3);
// [0xccf320] (120 bytes) glf::remote::Canvas::PostDrawShape(glf::remote::Canvas::Shape const&)
// int glf::remote::Canvas::PostDrawShape(int a1, uint32_t *a2);
// [0xccf3a0] (162 bytes) glf::remote::Canvas::PostSignal(glf::remote::Canvas::Color,bool)
// int glf::remote::Canvas::PostSignal(int a1, int a2, char a3);
// [0xccf450] (31 bytes) glf::remote::Canvas::cvBegin(glf::remote::Renderer::PrimitiveType)
// int glf::remote::Canvas::cvBegin(int a1, int a2);
// [0xccf470] (87 bytes) glf::remote::Canvas::cvEnd(void)
// int glf::remote::Canvas::cvEnd(glf::remote::Canvas *this);
// [0xccf4d0] (168 bytes) glf::remote::Canvas::cvColor(glf::remote::Canvas::Color,float)
// int glf::remote::Canvas::cvColor(int a1, int a2, unsigned int a3);
// [0xccf580] (118 bytes) glf::remote::Canvas::Canvas(void)
// glf::remote::Canvas *glf::remote::Canvas::Canvas(glf::remote::Canvas *this);
// [0xccf600] (64 bytes) glf::remote::Canvas::cvOrientation(glf::remote::Canvas::OrientationType)
// int glf::remote::Canvas::cvOrientation(int a1, int a2);
// [0xccf640] (623 bytes) glf::remote::Canvas::cvVertex2f(float,float,float,float)
// void glf::remote::Canvas::cvVertex2f(glf::remote::Canvas *this, float a2, float a3, float a4, float a5);
// [0xccf8b0] (372 bytes) glf::remote::Canvas::cvCircle2fv(float const*,float const*,bool)
// int glf::remote::Canvas::cvCircle2fv(glf::remote::Canvas *this, float *a2, const float *a3, bool a4);
// [0xccfa30] (346 bytes) glf::remote::Canvas::cvCross2fv(float const*,float const*,bool)
// int glf::remote::Canvas::cvCross2fv(glf::remote::Canvas *this, float *a2, const float *a3, bool a4);
// [0xccfb90] (107 bytes) glf::remote::Canvas::cvPoint2fv(float const*,bool)
// int glf::remote::Canvas::cvPoint2fv(glf::remote::Canvas *this, float *a2);
// [0xccfc00] (246 bytes) glf::remote::Canvas::cvRect2fv(float const*,float const*,bool)
// int glf::remote::Canvas::cvRect2fv(glf::remote::Canvas *this, float *a2, float *a3, bool a4);
// [0xccfd00] (306 bytes) glf::remote::Canvas::cvTriangle2fv(float const*,float const*,bool)
// int glf::remote::Canvas::cvTriangle2fv(glf::remote::Canvas *this, float *a2, const float *a3, bool a4);
// [0xccfe40] (332 bytes) glf::remote::Canvas::cvDrawShape(glf::remote::Canvas::Shape const&,float)
// int glf::remote::Canvas::cvDrawShape(glf::remote::Canvas *a1, int a2, int a3);
// [0xccff90] (703 bytes) glf::remote::Canvas::Update(glf::remote::Renderer *)
// void glf::remote::Canvas::Update(glf::remote::Canvas *a1, glf *a2);
