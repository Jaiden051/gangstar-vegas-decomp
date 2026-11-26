#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_TlsNode.h
// Library: glf | Module: glf_TlsNode
// Binary Address Span: 0xc82d40 .. 0xc833e0 (14 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc82d40] (136 bytes) glf::TlsNode::GetMutex(void)
// pthread_mutex_t **glf::TlsNode::GetMutex();
// [0xc82dd0] (33 bytes) glf::TlsNode::GetHead(void)
// void *glf::TlsNode::GetHead();
// [0xc82e00] (9 bytes) glf::TlsNode::FreeThread(int)
// void glf::TlsNode::FreeThread();
// [0xc82e10] (85 bytes) glf::TlsNode::Init(void)
// int glf::TlsNode::Init(glf::TlsNode *this);
// [0xc82e70] (157 bytes) glf::TlsNode::TlsNode(void (*)(void *),void (*)(void *),unsigned int)
// glf::TlsNode *glf::TlsNode::TlsNode( glf::TlsNode *this, void (*a2)(void *), void (*a3)(void *), unsigned int a4);
// [0xc82f10] (37 bytes) glf::TlsNode::DeInit(void)
// int glf::TlsNode::DeInit(glf::TlsNode *this);
// [0xc82f40] (235 bytes) glf::TlsNode::~TlsNode()
// void glf::TlsNode::~TlsNode(glf::TlsNode *this);
// [0xc83030] (45 bytes) glf::TlsNode::SetValue(void *)
// int glf::TlsNode::SetValue(glf::TlsNode *this, void *pointer);
// [0xc83060] (90 bytes) glf::TlsNode::GetValue(bool)const
// void *glf::TlsNode::GetValue(glf::TlsNode *this, bool a2);
// [0xc830c0] (444 bytes) glf::TlsNode::Alloc(void)const
// glf *glf::TlsNode::Alloc(glf::TlsNode *this);
// [0xc83280] (191 bytes) glf::TlsNode::DeAlloc(void)
// void *glf::TlsNode::DeAlloc(pthread_key_t *this);
// [0xc83340] (78 bytes) glf::TlsNode::InitNodes(void)
// int glf::TlsNode::InitNodes();
// [0xc83390] (78 bytes) glf::TlsNode::DenitNodes(void)
// int glf::TlsNode::DenitNodes();
// [0xc833e0] (53 bytes) glf::TlsNode::DeallocNodes(void)
// pthread_key_t **glf::TlsNode::DeallocNodes();
