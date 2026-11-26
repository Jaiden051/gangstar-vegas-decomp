#pragma once
// ============================================================================
// G4_UP8Shop/lib/tinyxml/decompiled/tinyxml_dom.h
// Library: tinyxml | Module: tinyxml_dom
// Binary Address Span: 0x105eca0 .. 0x10660b0 (184 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x105eca0] (115 bytes) TiXmlElement::Accept(TiXmlVisitor *)const
// int TiXmlElement::Accept(TiXmlElement *this, TiXmlVisitor *a2);
// [0x105ed20] (83 bytes) TiXmlDocument::Accept(TiXmlVisitor *)const
// int TiXmlDocument::Accept(TiXmlDocument *this, TiXmlVisitor *a2);
// [0x105ed80] (29 bytes) TiXmlComment::Accept(TiXmlVisitor *)const
// int TiXmlComment::Accept(TiXmlComment *this, TiXmlVisitor *a2);
// [0x105eda0] (29 bytes) TiXmlText::Accept(TiXmlVisitor *)const
// int TiXmlText::Accept(TiXmlText *this, TiXmlVisitor *a2);
// [0x105edc0] (29 bytes) TiXmlDeclaration::Accept(TiXmlVisitor *)const
// int TiXmlDeclaration::Accept(TiXmlDeclaration *this, TiXmlVisitor *a2);
// [0x105ede0] (29 bytes) TiXmlUnknown::Accept(TiXmlVisitor *)const
// int TiXmlUnknown::Accept(TiXmlUnknown *this, TiXmlVisitor *a2);
// [0x105ee00] (12 bytes) TiXmlPrinter::VisitEnter(TiXmlDocument const&)
// int TiXmlPrinter::VisitEnter();
// [0x105ee10] (12 bytes) TiXmlPrinter::VisitExit(TiXmlDocument const&)
// int TiXmlPrinter::VisitExit();
// [0x105ee20] (128 bytes) TiXmlUnknown::Print(__sFILE *,int)const
// int TiXmlUnknown::Print(int a1, FILE *stream, int a3);
// [0x105eea0] (175 bytes) TiXmlComment::Print(__sFILE *,int)const
// int TiXmlComment::Print(int a1, FILE *stream, int a3);
// [0x105ef50] (140 bytes) TiXmlDocument::Print(__sFILE *,int)const
// int TiXmlDocument::Print(int a1, FILE *stream, int a3);
// [0x105efe0] (85 bytes) TiXmlNode::~TiXmlNode()
// void TiXmlNode::~TiXmlNode(TiXmlNode *this);
// [0x105f040] (56 bytes) TiXmlNode::~TiXmlNode()
// void TiXmlNode::~TiXmlNode(TiXmlNode *this);
// [0x105f080] (237 bytes) TiXmlPrinter::VisitExit(TiXmlElement const&)
// int TiXmlPrinter::VisitExit(TiXmlPrinter *this, const TiXmlElement *a2);
// [0x105f170] (530 bytes) TiXmlDeclaration::Print(__sFILE *,int,TiXmlString *)const
// size_t *TiXmlDeclaration::Print(size_t **a1, FILE *stream, int a3, TiXmlString *a4);
// [0x105f390] (196 bytes) TiXmlPrinter::Visit(TiXmlUnknown const&)
// int TiXmlPrinter::Visit(TiXmlPrinter *this, const TiXmlUnknown *a2);
// [0x105f460] (196 bytes) TiXmlPrinter::Visit(TiXmlComment const&)
// int TiXmlPrinter::Visit(TiXmlPrinter *this, const TiXmlComment *a2);
// [0x105f530] (142 bytes) TiXmlPrinter::Visit(TiXmlDeclaration const&)
// int TiXmlPrinter::Visit(TiXmlPrinter *this, const TiXmlDeclaration *a2);
// [0x105f5c0] (42 bytes) TiXmlFOpen(char const*,char const*)
// FILE *TiXmlFOpen(char *filename, char *modes);
// [0x105f5f0] (919 bytes) TiXmlBase::EncodeString(TiXmlString const&,TiXmlString*,bool)
// unsigned int *TiXmlBase::EncodeString(unsigned int **this, const TiXmlString *a2, TiXmlString *a3);
// [0x105f990] (476 bytes) TiXmlPrinter::Visit(TiXmlText const&)
// int TiXmlPrinter::Visit(TiXmlPrinter *this, unsigned int **a2);
// [0x105fb70] (295 bytes) TiXmlText::Print(__sFILE *,int)const
// void TiXmlText::Print(int a1, FILE *stream, int a3);
// [0x105fca0] (99 bytes) TiXmlNode::TiXmlNode(TiXmlNode::NodeType)
// uint32_t *TiXmlNode::TiXmlNode(uint32_t *a1, int a2);
// [0x105fd10] (99 bytes) TiXmlNode::CopyTo(TiXmlNode*)const
// int TiXmlNode::CopyTo(TiXmlNode *this, TiXmlNode *a2);
// [0x105fd80] (62 bytes) TiXmlNode::Clear(void)
// uint32_t *TiXmlNode::Clear(TiXmlNode *this);
// [0x105fdc0] (146 bytes) TiXmlDeclaration::~TiXmlDeclaration()
// void TiXmlDeclaration::~TiXmlDeclaration(TiXmlDeclaration *this);
// [0x105fe60] (56 bytes) TiXmlDeclaration::~TiXmlDeclaration()
// void TiXmlDeclaration::~TiXmlDeclaration(TiXmlDeclaration *this);
// [0x105fea0] (82 bytes) TiXmlComment::~TiXmlComment()
// void TiXmlComment::~TiXmlComment(TiXmlComment *this);
// [0x105ff00] (56 bytes) TiXmlComment::~TiXmlComment()
// void TiXmlComment::~TiXmlComment(TiXmlComment *this);
// [0x105ff40] (98 bytes) TiXmlDocument::~TiXmlDocument()
// void TiXmlDocument::~TiXmlDocument(TiXmlDocument *this);
// [0x105ffb0] (56 bytes) TiXmlDocument::~TiXmlDocument()
// void TiXmlDocument::~TiXmlDocument(TiXmlDocument *this);
// [0x105fff0] (141 bytes) TiXmlNode::ReplaceChild(TiXmlNode*,TiXmlNode const&)
// int TiXmlNode::ReplaceChild(TiXmlNode *this, TiXmlNode *a2, const TiXmlNode *a3);
// [0x1060080] (168 bytes) TiXmlNode::RemoveChild(TiXmlNode*)
// int TiXmlNode::RemoveChild(TiXmlNode *this, TiXmlNode *a2);
// [0x1060130] (79 bytes) TiXmlNode::FirstChild(char const*)const
// int TiXmlNode::FirstChild(TiXmlNode *this, char *s2);
// [0x1060180] (79 bytes) TiXmlNode::LastChild(char const*)const
// int TiXmlNode::LastChild(TiXmlNode *this, char *s2);
// [0x10601d0] (120 bytes) TiXmlNode::IterateChildren(TiXmlNode const*)const
// TiXmlNode *TiXmlNode::IterateChildren(TiXmlNode *this, TiXmlNode **a2);
// [0x1060250] (79 bytes) TiXmlNode::NextSibling(char const*)const
// int TiXmlNode::NextSibling(TiXmlNode *this, char *s2);
// [0x10602a0] (134 bytes) TiXmlNode::IterateChildren(char const*,TiXmlNode const*)const
// int TiXmlNode::IterateChildren(TiXmlNode *this, char *a2, TiXmlNode **a3);
// [0x1060330] (79 bytes) TiXmlNode::PreviousSibling(char const*)const
// int TiXmlNode::PreviousSibling(TiXmlNode *this, char *s2);
// [0x1060380] (72 bytes) TiXmlNode::FirstChildElement(void)const
// int TiXmlNode::FirstChildElement(TiXmlNode *this);
// [0x10603d0] (106 bytes) TiXmlNode::FirstChildElement(char const*)const
// int TiXmlNode::FirstChildElement(TiXmlNode *this, char *a2);
// [0x1060440] (72 bytes) TiXmlNode::NextSiblingElement(void)const
// int TiXmlNode::NextSiblingElement(TiXmlNode *this);
// [0x1060490] (106 bytes) TiXmlNode::NextSiblingElement(char const*)const
// int TiXmlNode::NextSiblingElement(TiXmlNode *this, char *a2);
// [0x1060500] (72 bytes) TiXmlNode::GetDocument(void)const
// int TiXmlNode::GetDocument(TiXmlNode *this);
// [0x1060550] (255 bytes) TiXmlNode::InsertAfterChild(TiXmlNode*,TiXmlNode const&)
// TiXmlNode *TiXmlNode::InsertAfterChild(TiXmlNode **this, TiXmlNode *a2, const TiXmlNode *a3);
// [0x1060650] (255 bytes) TiXmlNode::InsertBeforeChild(TiXmlNode*,TiXmlNode const&)
// TiXmlNode *TiXmlNode::InsertBeforeChild(TiXmlNode **this, TiXmlNode *a2, const TiXmlNode *a3);
// [0x1060750] (309 bytes) TiXmlNode::LinkEndChild(TiXmlNode*)
// TiXmlNode *TiXmlNode::LinkEndChild(TiXmlNode *this, TiXmlNode *a2);
// [0x1060890] (158 bytes) TiXmlNode::InsertEndChild(TiXmlNode const&)
// TiXmlNode *TiXmlNode::InsertEndChild(TiXmlNode *this, const TiXmlNode *a2);
// [0x1060930] (44 bytes) TiXmlElement::GetText(void)const
// int TiXmlElement::GetText(TiXmlElement *this);
// [0x1060960] (172 bytes) TiXmlDocument::TiXmlDocument(bool)
// void TiXmlDocument::TiXmlDocument(TiXmlDocument *this, bool a2);
// [0x1060a10] (211 bytes) TiXmlDocument::TiXmlDocument(char const*,bool)
// void TiXmlDocument::TiXmlDocument(TiXmlDocument *this, char *s, bool a3);
// [0x1060af0] (981 bytes) TiXmlDocument::LoadFile(__sFILE *,TiXmlEncoding)
// bool TiXmlDocument::LoadFile(TiXmlNode *a1, FILE *stream, int a3);
// [0x1060ed0] (319 bytes) TiXmlDocument::LoadFile(char const*,TiXmlEncoding)
// int TiXmlDocument::LoadFile(TiXmlNode *a1, const char *s, int a3);
// [0x1061010] (52 bytes) TiXmlDocument::LoadFile(TiXmlEncoding)
// int TiXmlDocument::LoadFile(TiXmlNode *a1, int a2);
// [0x1061050] (133 bytes) TiXmlDocument::SaveFile(__sFILE *)const
// bool TiXmlDocument::SaveFile(uint8_t *a1, FILE *stream);
// [0x10610e0] (102 bytes) TiXmlDocument::SaveFile(char const*)const
// int TiXmlDocument::SaveFile(TiXmlDocument *this, char *a2);
// [0x1061150] (44 bytes) TiXmlDocument::SaveFile(void)const
// int TiXmlDocument::SaveFile(TiXmlDocument *this);
// [0x1061180] (147 bytes) TiXmlDocument::CopyTo(TiXmlDocument*)const
// TiXmlNode *TiXmlDocument::CopyTo(size_t **this, TiXmlDocument *a2);
// [0x1061220] (88 bytes) TiXmlDocument::Clone(void)const
// TiXmlDocument *TiXmlDocument::Clone(size_t **this);
// [0x1061280] (70 bytes) TiXmlDocument::operator=(TiXmlDocument const&)
// TiXmlNode *TiXmlDocument::operator=(TiXmlDocument *this, size_t **a2);
// [0x10612d0] (123 bytes) TiXmlDocument::TiXmlDocument(TiXmlDocument const&,bool)
// void TiXmlDocument::TiXmlDocument(TiXmlDocument *this, size_t **a2, bool a3);
// [0x1061350] (32 bytes) TiXmlAttribute::Next(void)const
// int TiXmlAttribute::Next(TiXmlAttribute *this);
// [0x1061370] (588 bytes) TiXmlElement::Print(__sFILE *,int)const
// size_t TiXmlElement::Print(uint32_t *a1, FILE *stream, int a3);
// [0x10615c0] (32 bytes) TiXmlAttribute::Previous(void)const
// int TiXmlAttribute::Previous(TiXmlAttribute *this);
// [0x10615e0] (552 bytes) TiXmlAttribute::Print(__sFILE *,int,TiXmlString *)const
// void TiXmlAttribute::Print(int a1, FILE *stream, int a3, TiXmlString *a4);
// [0x1061810] (384 bytes) TiXmlPrinter::VisitEnter(TiXmlElement const&,TiXmlAttribute const*)
// int TiXmlPrinter::VisitEnter(TiXmlPrinter *this, const TiXmlElement *a2, const TiXmlAttribute *a3);
// [0x1061990] (69 bytes) TiXmlAttribute::QueryIntValue(int *)const
// int TiXmlAttribute::QueryIntValue(TiXmlAttribute *this, int *a2);
// [0x10619e0] (69 bytes) TiXmlAttribute::QueryDoubleValue(double *)const
// int TiXmlAttribute::QueryDoubleValue(TiXmlAttribute *this, double *a2);
// [0x1061a30] (135 bytes) TiXmlAttribute::SetIntValue(int)
// int TiXmlAttribute::SetIntValue(TiXmlAttribute *this, int a2);
// [0x1061ac0] (151 bytes) TiXmlAttribute::SetDoubleValue(double)
// int TiXmlAttribute::SetDoubleValue(TiXmlAttribute *this, double a2);
// [0x1061b60] (40 bytes) TiXmlAttribute::IntValue(void)const
// int TiXmlAttribute::IntValue(TiXmlAttribute *this);
// [0x1061b90] (48 bytes) TiXmlAttribute::DoubleValue(void)const
// long double TiXmlAttribute::DoubleValue(TiXmlAttribute *this);
// [0x1061bc0] (42 bytes) TiXmlComment::CopyTo(TiXmlComment*)const
// int TiXmlComment::CopyTo(TiXmlComment *this, TiXmlComment *a2);
// [0x1061bf0] (120 bytes) TiXmlComment::Clone(void)const
// int TiXmlComment::Clone(TiXmlComment *this);
// [0x1061c70] (70 bytes) TiXmlComment::operator=(TiXmlComment const&)
// int TiXmlComment::operator=(TiXmlComment *this, const TiXmlComment *a2);
// [0x1061cc0] (100 bytes) TiXmlComment::TiXmlComment(TiXmlComment const&,bool)
// void TiXmlComment::TiXmlComment(TiXmlComment *this, const TiXmlComment *a2, bool a3);
// [0x1061d30] (71 bytes) TiXmlText::CopyTo(TiXmlText*)const
// int TiXmlText::CopyTo(TiXmlText *this, TiXmlText *a2);
// [0x1061d80] (120 bytes) TiXmlText::Clone(void)const
// int TiXmlText::Clone(TiXmlText *this);
// [0x1061e00] (211 bytes) TiXmlDeclaration::TiXmlDeclaration(char const*,char const*,char const*,bool)
// void TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration *this, char *s, char *a3, char *a4, bool a5);
// [0x1061ee0] (145 bytes) TiXmlDeclaration::CopyTo(TiXmlDeclaration*)const
// int TiXmlDeclaration::CopyTo(size_t **this, TiXmlDeclaration *a2);
// [0x1061f80] (114 bytes) TiXmlDeclaration::Clone(void)const
// int TiXmlDeclaration::Clone(size_t **this);
// [0x1062000] (70 bytes) TiXmlDeclaration::operator=(TiXmlDeclaration const&)
// int TiXmlDeclaration::operator=(TiXmlDeclaration *this, size_t **a2);
// [0x1062050] (115 bytes) TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&,bool)
// void TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration *this, size_t **a2, bool a3);
// [0x10620d0] (42 bytes) TiXmlUnknown::CopyTo(TiXmlUnknown*)const
// int TiXmlUnknown::CopyTo(TiXmlUnknown *this, TiXmlUnknown *a2);
// [0x1062100] (95 bytes) TiXmlUnknown::Clone(void)const
// TiXmlUnknown *TiXmlUnknown::Clone(TiXmlUnknown *this);
// [0x1062160] (73 bytes) TiXmlAttributeSet::TiXmlAttributeSet(void)
// void TiXmlAttributeSet::TiXmlAttributeSet(TiXmlAttributeSet *this);
// [0x10621b0] (148 bytes) TiXmlElement::TiXmlElement(char const*,bool)
// void TiXmlElement::TiXmlElement(TiXmlElement *this, char *s, bool a3);
// [0x1062250] (208 bytes) TiXmlAttributeSet::~TiXmlAttributeSet()
// void TiXmlAttributeSet::~TiXmlAttributeSet(TiXmlAttributeSet *this);
// [0x1062320] (150 bytes) TiXmlAttributeSet::Remove(TiXmlAttribute *)
// TiXmlAttribute *TiXmlAttributeSet::Remove(TiXmlAttributeSet *this, TiXmlAttribute *a2);
// [0x10623c0] (90 bytes) TiXmlElement::ClearThis(void)
// uint32_t *TiXmlElement::ClearThis(TiXmlAttribute **this);
// [0x1062420] (78 bytes) TiXmlElement::~TiXmlElement()
// void TiXmlElement::~TiXmlElement(TiXmlAttribute **this);
// [0x1062470] (56 bytes) TiXmlElement::~TiXmlElement()
// void TiXmlElement::~TiXmlElement(TiXmlAttribute **this);
// [0x10624b0] (93 bytes) TiXmlAttributeSet::Find(char const*)const
// TiXmlAttributeSet *TiXmlAttributeSet::Find(TiXmlAttributeSet *this, char *s2);
// [0x1062510] (134 bytes) TiXmlAttributeSet::Add(TiXmlAttribute *)
// int TiXmlAttributeSet::Add(TiXmlAttributeSet *this, TiXmlAttribute *a2);
// [0x10625a0] (274 bytes) TiXmlElement::SetAttribute(char const*,char const*)
// int TiXmlElement::SetAttribute(TiXmlElement *this, char *a2, char *s);
// [0x10626c0] (148 bytes) TiXmlElement::CopyTo(TiXmlElement*)const
// TiXmlNode *TiXmlElement::CopyTo(TiXmlNode **this, TiXmlElement *a2);
// [0x1062760] (114 bytes) TiXmlElement::Clone(void)const
// TiXmlElement *TiXmlElement::Clone(TiXmlElement *this);
// [0x10627e0] (64 bytes) TiXmlElement::operator=(TiXmlElement const&)
// TiXmlNode *TiXmlElement::operator=(TiXmlAttribute **this, TiXmlNode **a2);
// [0x1062820] (125 bytes) TiXmlElement::TiXmlElement(TiXmlElement const&,bool)
// void TiXmlElement::TiXmlElement(TiXmlElement *this, TiXmlNode **a2, bool a3);
// [0x10628a0] (129 bytes) TiXmlElement::SetDoubleAttribute(char const*,double)
// int TiXmlElement::SetDoubleAttribute(TiXmlElement *this, char *a2, double a3);
// [0x1062930] (98 bytes) TiXmlElement::SetAttribute(char const*,int)
// int TiXmlElement::SetAttribute(TiXmlElement *this, char *a2, int a3);
// [0x10629a0] (93 bytes) TiXmlElement::RemoveAttribute(char const*)
// TiXmlAttribute *TiXmlElement::RemoveAttribute(TiXmlElement *this, char *a2);
// [0x1062a00] (72 bytes) TiXmlElement::QueryDoubleAttribute(char const*,double *)const
// int TiXmlElement::QueryDoubleAttribute(TiXmlElement *this, char *a2, double *a3);
// [0x1062a50] (72 bytes) TiXmlElement::QueryIntAttribute(char const*,int *)const
// int TiXmlElement::QueryIntAttribute(TiXmlElement *this, char *a2, int *a3);
// [0x1062aa0] (60 bytes) TiXmlElement::Attribute(char const*)const
// int TiXmlElement::Attribute(TiXmlElement *this, char *a2);
// [0x1062ae0] (117 bytes) TiXmlElement::Attribute(char const*,double *)const
// const char *TiXmlElement::Attribute(TiXmlElement *this, char *a2, double *a3);
// [0x1062b60] (104 bytes) TiXmlElement::Attribute(char const*,int *)const
// const char *TiXmlElement::Attribute(TiXmlElement *this, char *a2, int *a3);
// [0x1062bd0] (24 bytes) TiXmlHandle::FirstChild(void)const
// int TiXmlHandle::FirstChild(TiXmlHandle *this, int a2);
// [0x1062bf0] (84 bytes) TiXmlHandle::FirstChild(char const*)const
// TiXmlHandle *TiXmlHandle::FirstChild(TiXmlHandle *this, const char *a2, char *a3);
// [0x1062c50] (76 bytes) TiXmlHandle::FirstChildElement(void)const
// TiXmlHandle *TiXmlHandle::FirstChildElement(TiXmlHandle *this, TiXmlNode **a2);
// [0x1062ca0] (84 bytes) TiXmlHandle::FirstChildElement(char const*)const
// TiXmlHandle *TiXmlHandle::FirstChildElement(TiXmlHandle *this, const char *a2, char *a3);
// [0x1062d00] (60 bytes) TiXmlHandle::Child(int)const
// int TiXmlHandle::Child(TiXmlHandle *this, int a2, int a3);
// [0x1062d40] (124 bytes) TiXmlHandle::Child(char const*,int)const
// TiXmlHandle *TiXmlHandle::Child(TiXmlHandle *this, const char *a2, char *a3, int a4);
// [0x1062dc0] (122 bytes) TiXmlHandle::ChildElement(int)const
// TiXmlHandle *TiXmlHandle::ChildElement(TiXmlHandle *this, TiXmlNode **a2, int a3);
// [0x1062e40] (124 bytes) TiXmlHandle::ChildElement(char const*,int)const
// TiXmlHandle *TiXmlHandle::ChildElement(TiXmlHandle *this, const char *a2, char *a3, int a4);
// [0x1062ec0] (27 bytes) TiXmlVisitor::~TiXmlVisitor()
// void TiXmlVisitor::~TiXmlVisitor(TiXmlVisitor *this);
// [0x1062ee0] (12 bytes) TiXmlVisitor::VisitEnter(TiXmlDocument const&)
// int TiXmlVisitor::VisitEnter();
// [0x1062ef0] (12 bytes) TiXmlVisitor::VisitExit(TiXmlDocument const&)
// int TiXmlVisitor::VisitExit();
// [0x1062f00] (12 bytes) TiXmlVisitor::VisitEnter(TiXmlElement const&,TiXmlAttribute const*)
// int TiXmlVisitor::VisitEnter();
// [0x1062f10] (12 bytes) TiXmlVisitor::VisitExit(TiXmlElement const&)
// int TiXmlVisitor::VisitExit();
// [0x1062f20] (12 bytes) TiXmlVisitor::Visit(TiXmlDeclaration const&)
// int TiXmlVisitor::Visit();
// [0x1062f30] (12 bytes) TiXmlVisitor::Visit(TiXmlText const&)
// int TiXmlVisitor::Visit();
// [0x1062f40] (12 bytes) TiXmlVisitor::Visit(TiXmlComment const&)
// int TiXmlVisitor::Visit();
// [0x1062f50] (12 bytes) TiXmlVisitor::Visit(TiXmlUnknown const&)
// int TiXmlVisitor::Visit();
// [0x1062f60] (27 bytes) TiXmlBase::~TiXmlBase()
// void TiXmlBase::~TiXmlBase(TiXmlBase *this);
// [0x1062f80] (9 bytes) TiXmlNode::ToDocument(void)const
// int TiXmlNode::ToDocument();
// [0x1062f90] (9 bytes) TiXmlNode::ToElement(void)const
// int TiXmlNode::ToElement();
// [0x1062fa0] (9 bytes) TiXmlNode::ToComment(void)const
// int TiXmlNode::ToComment();
// [0x1062fb0] (9 bytes) TiXmlNode::ToUnknown(void)const
// int TiXmlNode::ToUnknown();
// [0x1062fc0] (9 bytes) TiXmlNode::ToText(void)const
// int TiXmlNode::ToText();
// [0x1062fd0] (9 bytes) TiXmlNode::ToDeclaration(void)const
// int TiXmlNode::ToDeclaration();
// [0x1062fe0] (9 bytes) TiXmlNode::ToDocument(void)
// int TiXmlNode::ToDocument();
// [0x1062ff0] (9 bytes) TiXmlNode::ToElement(void)
// int TiXmlNode::ToElement();
// [0x1063000] (9 bytes) TiXmlNode::ToComment(void)
// int TiXmlNode::ToComment();
// [0x1063010] (9 bytes) TiXmlNode::ToUnknown(void)
// int TiXmlNode::ToUnknown();
// [0x1063020] (9 bytes) TiXmlNode::ToText(void)
// int TiXmlNode::ToText();
// [0x1063030] (9 bytes) TiXmlNode::ToDeclaration(void)
// int TiXmlNode::ToDeclaration();
// [0x1063040] (11 bytes) TiXmlElement::ToElement(void)const
// TiXmlElement *TiXmlElement::ToElement(TiXmlElement *this);
// [0x1063050] (11 bytes) TiXmlElement::ToElement(void)
// TiXmlElement *TiXmlElement::ToElement(TiXmlElement *this);
// [0x1063060] (11 bytes) TiXmlComment::ToComment(void)const
// TiXmlComment *TiXmlComment::ToComment(TiXmlComment *this);
// [0x1063070] (11 bytes) TiXmlComment::ToComment(void)
// TiXmlComment *TiXmlComment::ToComment(TiXmlComment *this);
// [0x1063080] (11 bytes) TiXmlText::ToText(void)const
// TiXmlText *TiXmlText::ToText(TiXmlText *this);
// [0x1063090] (11 bytes) TiXmlText::ToText(void)
// TiXmlText *TiXmlText::ToText(TiXmlText *this);
// [0x10630a0] (45 bytes) TiXmlDeclaration::Print(__sFILE *,int)const
// int TiXmlDeclaration::Print(int a1, int a2, int a3);
// [0x10630d0] (11 bytes) TiXmlDeclaration::ToDeclaration(void)const
// TiXmlDeclaration *TiXmlDeclaration::ToDeclaration(TiXmlDeclaration *this);
// [0x10630e0] (11 bytes) TiXmlDeclaration::ToDeclaration(void)
// TiXmlDeclaration *TiXmlDeclaration::ToDeclaration(TiXmlDeclaration *this);
// [0x10630f0] (11 bytes) TiXmlUnknown::ToUnknown(void)const
// TiXmlUnknown *TiXmlUnknown::ToUnknown(TiXmlUnknown *this);
// [0x1063100] (11 bytes) TiXmlUnknown::ToUnknown(void)
// TiXmlUnknown *TiXmlUnknown::ToUnknown(TiXmlUnknown *this);
// [0x1063110] (11 bytes) TiXmlDocument::ToDocument(void)const
// TiXmlDocument *TiXmlDocument::ToDocument(TiXmlDocument *this);
// [0x1063120] (11 bytes) TiXmlDocument::ToDocument(void)
// TiXmlDocument *TiXmlDocument::ToDocument(TiXmlDocument *this);
// [0x1063130] (45 bytes) TiXmlBase::~TiXmlBase()
// void TiXmlBase::~TiXmlBase(TiXmlBase *this);
// [0x1063160] (45 bytes) TiXmlVisitor::~TiXmlVisitor()
// void TiXmlVisitor::~TiXmlVisitor(TiXmlVisitor *this);
// [0x1063190] (133 bytes) TiXmlPrinter::~TiXmlPrinter()
// void TiXmlPrinter::~TiXmlPrinter(TiXmlPrinter *this);
// [0x1063220] (45 bytes) TiXmlText::~TiXmlText()
// void TiXmlText::~TiXmlText(TiXmlText *this);
// [0x1063250] (45 bytes) TiXmlUnknown::~TiXmlUnknown()
// void TiXmlUnknown::~TiXmlUnknown(TiXmlUnknown *this);
// [0x1063280] (67 bytes) TiXmlText::~TiXmlText()
// void TiXmlText::~TiXmlText(TiXmlText *this);
// [0x10632d0] (67 bytes) TiXmlUnknown::~TiXmlUnknown()
// void TiXmlUnknown::~TiXmlUnknown(TiXmlUnknown *this);
// [0x1063320] (141 bytes) TiXmlPrinter::~TiXmlPrinter()
// void TiXmlPrinter::~TiXmlPrinter(TiXmlPrinter *this);
// [0x10633b0] (259 bytes) TiXmlBase::ConvertUTF32ToUTF8(unsigned long,char *,int *)
// char TiXmlBase::ConvertUTF32ToUTF8(unsigned int this, unsigned int a2, char *a3);
// [0x10634c0] (48 bytes) TiXmlBase::IsAlpha(unsigned char,TiXmlEncoding)
// int TiXmlBase::IsAlpha(uint8_t a1);
// [0x10634f0] (48 bytes) TiXmlBase::IsAlphaNum(unsigned char,TiXmlEncoding)
// int TiXmlBase::IsAlphaNum(uint8_t a1);
// [0x1063520] (641 bytes) TiXmlParsingData::Stamp(char const*,TiXmlEncoding)
// int TiXmlParsingData::Stamp(int *a1, unsigned int a2, int a3);
// [0x10637b0] (223 bytes) TiXmlBase::SkipWhiteSpace(char const*,TiXmlEncoding)
// uint8_t *TiXmlBase::SkipWhiteSpace(uint8_t *a1, int a2);
// [0x1063890] (297 bytes) TiXmlBase::ReadName(char const*,TiXmlString *,TiXmlEncoding)
// char *TiXmlBase::ReadName(char *a1, TiXmlString *a2);
// [0x10639c0] (851 bytes) TiXmlBase::GetEntity(char const*,char *,int *,TiXmlEncoding)
// char *TiXmlBase::GetEntity(char *s2, uint8_t *a2, char *a3, int a4);
// [0x1063d20] (511 bytes) TiXmlBase::StringEqual(char const*,char const*,bool,TiXmlEncoding)
// char TiXmlBase::StringEqual(uint8_t *a1, char *a2, char a3, int a4);
// [0x1063f20] (989 bytes) TiXmlBase::ReadText(char const*,TiXmlString *,bool,char const*,bool,TiXmlEncoding)
// char *TiXmlBase::ReadText(char *a1, TiXmlString *a2, char a3, char *s, char a5, int a6);
// [0x1064300] (239 bytes) TiXmlDocument::SetError(int,char const*,TiXmlParsingData *,TiXmlEncoding)
// void TiXmlDocument::SetError(int a1, int a2, unsigned int a3, int *a4, int a5);
// [0x10643f0] (618 bytes) TiXmlAttribute::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// char *TiXmlAttribute::Parse(uint32_t *a1, uint8_t *a2, int *a3, int a4);
// [0x1064660] (684 bytes) TiXmlNode::Identify(char const*,TiXmlEncoding)
// int TiXmlNode::Identify(TiXmlNode *a1, uint8_t *a2, int a3);
// [0x1064910] (744 bytes) TiXmlDocument::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// uint8_t *TiXmlDocument::Parse(int a1, uint8_t *a2, int *a3, int a4);
// [0x1064c00] (413 bytes) TiXmlUnknown::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// char *TiXmlUnknown::Parse(uint32_t *a1, uint8_t *a2, int *a3, int a4);
// [0x1064da0] (384 bytes) TiXmlComment::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// char *TiXmlComment::Parse(TiXmlNode *a1, uint8_t *a2, int *a3, int a4);
// [0x1064f20] (555 bytes) TiXmlText::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// char *TiXmlText::Parse(TiXmlNode *a1, char *a2, int *a3, int a4);
// [0x1065150] (1236 bytes) TiXmlDeclaration::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// uint8_t *TiXmlDeclaration::Parse(TiXmlNode *a1, uint8_t *a2, int *a3, int a4);
// [0x1065630] (117 bytes) TiXmlText::Blank(void)const
// int TiXmlText::Blank(TiXmlText *this);
// [0x10656b0] (504 bytes) TiXmlElement::ReadValue(char const*,TiXmlParsingData *,TiXmlEncoding)
// uint8_t *TiXmlElement::ReadValue(TiXmlNode *a1, uint8_t *a2, int a3, int a4);
// [0x10658b0] (1297 bytes) TiXmlElement::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// uint8_t *TiXmlElement::Parse(TiXmlNode *a1, uint8_t *a2, int *a3, int a4);
// [0x1065dd0] (58 bytes) TiXmlAttribute::Print(__sFILE *,int)const
// void TiXmlAttribute::Print(int a1, FILE *stream, int a3);
// [0x1065e10] (114 bytes) TiXmlAttribute::~TiXmlAttribute()
// void TiXmlAttribute::~TiXmlAttribute(TiXmlAttribute *this);
// [0x1065e90] (122 bytes) TiXmlAttribute::~TiXmlAttribute()
// void TiXmlAttribute::~TiXmlAttribute(TiXmlAttribute *this);
// [0x1065f10] (174 bytes) TiXmlString::reserve(unsigned int)
// void TiXmlString::reserve(size_t **this, unsigned int a2);
// [0x1065fc0] (230 bytes) TiXmlString::assign(char const*,unsigned int)
// TiXmlString *TiXmlString::assign(TiXmlString *this, const char *a2, size_t n);
// [0x10660b0] (128 bytes) TiXmlString::append(char const*,unsigned int)
// size_t **TiXmlString::append(size_t **this, const char *src, size_t n);
