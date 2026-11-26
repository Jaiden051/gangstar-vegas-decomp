#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_task_detail.h
// Library: glf | Module: glf_task_detail
// Binary Address Span: 0xcc4940 .. 0x11811e0 (26 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcc4940] (46 bytes) glf::task_detail::GetGroup(void)
// int glf::task_detail::GetGroup();
// [0xcc4970] (54 bytes) glf::task_detail::SetGroup(glf::task_detail::Group *)
// int glf::task_detail::SetGroup(glf::task_detail *this);
// [0xcc49b0] (84 bytes) glf::task_detail::GrabGroup(void)
// int glf::task_detail::GrabGroup();
// [0xcc4a10] (367 bytes) glf::task_detail::DropGroup(glf::task_detail::Group *)
// glf::TaskCondition *glf::task_detail::DropGroup(glf::TaskCondition *a1);
// [0xcc4b80] (38 bytes) glf::task_detail::Wait(glf::task_detail::Group *)
// void glf::task_detail::Wait(glf::TaskCondition *a1);
// [0xcc4bb0] (11 bytes) glf::task_detail::GetCondition(glf::task_detail::Group *)
// glf::task_detail *glf::task_detail::GetCondition(glf::task_detail *this);
// [0xcc5080] (252 bytes) glf::task_detail::Group::~Group()
// void glf::task_detail::Group::~Group(glf::task_detail::Group *this);
// [0xcc5180] (1427 bytes) glf::task_detail::Group::TaskCompleted(void)
// int32_t glf::task_detail::Group::TaskCompleted(glf::task_detail::Group *this);
// [0xd7e0b0] (27 bytes) glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::collada::CMeshSceneNode,unsigned int>,boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>,boost::_bi::value<unsigned int>>>>::~TRunnable()
// void glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::collada::CMeshSceneNode,unsigned int>,boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>,boost::_bi::value<unsigned int>>>>::~TRunnable( glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::collada::CMeshSceneNode, unsigned int>, boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>, boost::_bi::value<unsigned int>>>> *this);
// [0xd7e190] (49 bytes) glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::collada::CMeshSceneNode,unsigned int>,boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>,boost::_bi::value<unsigned int>>>>::Run(void)
// int glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::collada::CMeshSceneNode,unsigned int>,boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>,boost::_bi::value<unsigned int>>>>::Run( glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::collada::CMeshSceneNode, unsigned int>, boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>, boost::_bi::value<unsigned int>>>> *this);
// [0xd7e2f0] (45 bytes) glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::collada::CMeshSceneNode,unsigned int>,boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>,boost::_bi::value<unsigned int>>>>::~TRunnable()
// void glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::collada::CMeshSceneNode,unsigned int>,boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>,boost::_bi::value<unsigned int>>>>::~TRunnable( glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::collada::CMeshSceneNode, unsigned int>, boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>, boost::_bi::value<unsigned int>>>> *this);
// [0xe542a0] (27 bytes) glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps>::~TRunnable()
// void glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps>::~TRunnable( glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps> *this);
// [0xe544f0] (45 bytes) glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps>::~TRunnable()
// void glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps>::~TRunnable( glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps> *this);
// [0xe772c0] (56 bytes) glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps>::Run(void)
// int glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps>::Run( glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps> *this);
// [0xf76750] (27 bytes) glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::scene::CSceneManager,glitch::scene::ISceneNode *>,boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>,boost::_bi::value<glitch::scene::ISceneNode *>>>>::~TRunnable()
// void glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::scene::CSceneManager,glitch::scene::ISceneNode *>,boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>,boost::_bi::value<glitch::scene::ISceneNode *>>>>::~TRunnable( glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::scene::CSceneManager, glitch::scene::ISceneNode *>, boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>, boost::_bi::value<glitch::scene::ISceneNode *>>>> *this);
// [0xf767b0] (27 bytes) glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask>::Run(void)
// int glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask>::Run( glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask> *this);
// [0xf767d0] (31 bytes) glf::task_detail::TRunnable<glitch::scene::SAddChildTask>::Run(void)
// int glf::task_detail::TRunnable<glitch::scene::SAddChildTask>::Run( glf::task_detail::TRunnable<glitch::scene::SAddChildTask> *this);
// [0xf767f0] (49 bytes) glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::scene::CSceneManager,glitch::scene::ISceneNode *>,boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>,boost::_bi::value<glitch::scene::ISceneNode *>>>>::Run(void)
// int glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::scene::CSceneManager,glitch::scene::ISceneNode *>,boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>,boost::_bi::value<glitch::scene::ISceneNode *>>>>::Run( glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::scene::CSceneManager, glitch::scene::ISceneNode *>, boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>, boost::_bi::value<glitch::scene::ISceneNode *>>>> *this);
// [0xf76860] (45 bytes) glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::scene::CSceneManager,glitch::scene::ISceneNode *>,boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>,boost::_bi::value<glitch::scene::ISceneNode *>>>>::~TRunnable()
// void glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::scene::CSceneManager,glitch::scene::ISceneNode *>,boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>,boost::_bi::value<glitch::scene::ISceneNode *>>>>::~TRunnable( glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::scene::CSceneManager, glitch::scene::ISceneNode *>, boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>, boost::_bi::value<glitch::scene::ISceneNode *>>>> *this);
// [0xf76d80] (102 bytes) glf::task_detail::TRunnable<glitch::scene::SAddChildTask>::~TRunnable()
// void glf::task_detail::TRunnable<glitch::scene::SAddChildTask>::~TRunnable( glf::task_detail::TRunnable<glitch::scene::SAddChildTask> *this);
// [0xf76df0] (82 bytes) glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask>::~TRunnable()
// void glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask>::~TRunnable( glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask> *this);
// [0xf76eb0] (90 bytes) glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask>::~TRunnable()
// void glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask>::~TRunnable( glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask> *this);
// [0xf76f10] (98 bytes) glf::task_detail::TRunnable<glitch::scene::SAddChildTask>::~TRunnable()
// void glf::task_detail::TRunnable<glitch::scene::SAddChildTask>::~TRunnable( glf::task_detail::TRunnable<glitch::scene::SAddChildTask> *this);
// [0x1180e20] (27 bytes) glf::task_detail::TRunnable<gameswf::TextureTask>::~TRunnable()
// void glf::task_detail::TRunnable<gameswf::TextureTask>::~TRunnable( glf::task_detail::TRunnable<gameswf::TextureTask> *this);
// [0x1180e40] (45 bytes) glf::task_detail::TRunnable<gameswf::TextureTask>::~TRunnable()
// void glf::task_detail::TRunnable<gameswf::TextureTask>::~TRunnable( glf::task_detail::TRunnable<gameswf::TextureTask> *this);
// [0x11811e0] (44 bytes) glf::task_detail::TRunnable<gameswf::TextureTask>::Run(void)
// int glf::task_detail::TRunnable<gameswf::TextureTask>::Run( glf::task_detail::TRunnable<gameswf::TextureTask> *this);
