#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_collada_part04.h
// Library: glitch | Module: glitch_collada_part04
// Binary Address Span: 0xd7db40 .. 0xdcc6c0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xd7db40] (69 bytes) glitch::collada::animation_track::CWeightEx::getBlendedValue(void const*,float const*,int,void *)const
// int glitch::collada::animation_track::CWeightEx::getBlendedValue( glitch::collada::animation_track::CWeightEx *this, float *a2, const float *a3, int a4, float *a5);
// [0xd7db90] (69 bytes) glitch::collada::animation_track::CWeightEx::getAddedValue(void const*,float const*,int,void *)const
// int glitch::collada::animation_track::CWeightEx::getAddedValue( glitch::collada::animation_track::CWeightEx *this, float *a2, const float *a3, int a4, float *a5);
// [0xd7dbe0] (69 bytes) glitch::collada::animation_track::CWeightEx::applyBlendedValue(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// int glitch::collada::animation_track::CWeightEx::applyBlendedValue( glitch::collada::animation_track::CWeightEx *this, float *a2, const float *a3, int a4, float *a5);
// [0xd7dc60] (9 bytes) glitch::collada::CAnimationSet::remAnimation(glitch::collada::SAnimation const*)
// int glitch::collada::CAnimationSet::remAnimation();
// [0xd7dc70] (15 bytes) glitch::collada::CAnimationSet::getChannel(unsigned int)
// int glitch::collada::CAnimationSet::getChannel(glitch::collada::CAnimationSet *this, unsigned int a2);
// [0xd7dc80] (15 bytes) glitch::collada::CAnimationSet::getChannel(unsigned int)const
// int glitch::collada::CAnimationSet::getChannel(glitch::collada::CAnimationSet *this, unsigned int a2);
// [0xd7dc90] (29 bytes) glitch::collada::CAnimationSet::getAnimationTrack(int)const
// int glitch::collada::CAnimationSet::getAnimationTrack(glitch::collada::CAnimationSet *this, int a2);
// [0xd7dcb0] (15 bytes) glitch::collada::CAnimationSet::getAnimationTrackEx(int)
// int glitch::collada::CAnimationSet::getAnimationTrackEx(glitch::collada::CAnimationSet *this, int a2);
// [0xd7dcc0] (12 bytes) glitch::collada::CSceneNodeAnimatorSet::getAnimationSet(void)
// char *glitch::collada::CSceneNodeAnimatorSet::getAnimationSet(glitch::collada::CSceneNodeAnimatorSet *this);
// [0xd7dcd0] (27 bytes) glitch::collada::ps::IForce::~IForce()
// void glitch::collada::ps::IForce::~IForce(glitch::collada::ps::IForce *this);
// [0xd7dcf0] (9 bytes) glitch::collada::CSceneNodeAnimatorBlender::compile(void)
// void glitch::collada::CSceneNodeAnimatorBlender::compile();
// [0xd7dd90] (27 bytes) glitch::collada::animation_track::CMaterialApplicatorInfo::~CMaterialApplicatorInfo()
// void glitch::collada::animation_track::CMaterialApplicatorInfo::~CMaterialApplicatorInfo( glitch::collada::animation_track::CMaterialApplicatorInfo *this);
// [0xd7ddb0] (29 bytes) glitch::collada::CParametricControllerBlender::getId(void)const
// glitch::collada::CParametricControllerBlender *glitch::collada::CParametricControllerBlender::getId( glitch::collada::CParametricControllerBlender *this);
// [0xd7ddd0] (27 bytes) glitch::collada::IMotionListener::~IMotionListener()
// void glitch::collada::IMotionListener::~IMotionListener(glitch::collada::IMotionListener *this);
// [0xd7e010] (27 bytes) glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::~CMotionListener()
// void glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::~CMotionListener( glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>, void> *this);
// [0xd7e030] (27 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind>::~CForceProxy()
// void glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind>::~CForceProxy( glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind> *this);
// [0xd7e050] (27 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex>::~CForceProxy()
// void glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex>::~CForceProxy( glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex> *this);
// [0xd7e070] (27 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity>::~CForceProxy()
// void glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity>::~CForceProxy( glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity> *this);
// [0xd7e090] (27 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector>::~CForceProxy()
// void glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector>::~CForceProxy( glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector> *this);
// [0xd7e0d0] (27 bytes) glitch::collada::animation_track::CTextureTransformEx::~CTextureTransformEx()
// void glitch::collada::animation_track::CTextureTransformEx::~CTextureTransformEx( glitch::collada::animation_track::CTextureTransformEx *this);
// [0xd7e0f0] (27 bytes) glitch::collada::animation_track::CWeightEx::~CWeightEx()
// void glitch::collada::animation_track::CWeightEx::~CWeightEx(glitch::collada::animation_track::CWeightEx *this);
// [0xd7e110] (27 bytes) glitch::collada::animation_track::CVisibilityEx::~CVisibilityEx()
// void glitch::collada::animation_track::CVisibilityEx::~CVisibilityEx( glitch::collada::animation_track::CVisibilityEx *this);
// [0xd7e130] (27 bytes) glitch::collada::animation_track::CVector3dEx::~CVector3dEx()
// void glitch::collada::animation_track::CVector3dEx::~CVector3dEx( glitch::collada::animation_track::CVector3dEx *this);
// [0xd7e170] (27 bytes) glitch::collada::animation_track::CFloatEx::~CFloatEx()
// void glitch::collada::animation_track::CFloatEx::~CFloatEx(glitch::collada::animation_track::CFloatEx *this);
// [0xd7e1d0] (45 bytes) glitch::collada::animation_track::CFloatEx::~CFloatEx()
// void glitch::collada::animation_track::CFloatEx::~CFloatEx(glitch::collada::animation_track::CFloatEx *this);
// [0xd7e230] (45 bytes) glitch::collada::animation_track::CVector3dEx::~CVector3dEx()
// void glitch::collada::animation_track::CVector3dEx::~CVector3dEx( glitch::collada::animation_track::CVector3dEx *this);
// [0xd7e260] (45 bytes) glitch::collada::animation_track::CVisibilityEx::~CVisibilityEx()
// void glitch::collada::animation_track::CVisibilityEx::~CVisibilityEx( glitch::collada::animation_track::CVisibilityEx *this);
// [0xd7e290] (45 bytes) glitch::collada::animation_track::CWeightEx::~CWeightEx()
// void glitch::collada::animation_track::CWeightEx::~CWeightEx(glitch::collada::animation_track::CWeightEx *this);
// [0xd7e2c0] (45 bytes) glitch::collada::animation_track::CTextureTransformEx::~CTextureTransformEx()
// void glitch::collada::animation_track::CTextureTransformEx::~CTextureTransformEx( glitch::collada::animation_track::CTextureTransformEx *this);
// [0xd7e320] (45 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector>::~CForceProxy()
// void glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector>::~CForceProxy( glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector> *this);
// [0xd7e350] (45 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity>::~CForceProxy()
// void glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity>::~CForceProxy( glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity> *this);
// [0xd7e380] (45 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex>::~CForceProxy()
// void glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex>::~CForceProxy( glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex> *this);
// [0xd7e3b0] (45 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind>::~CForceProxy()
// void glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind>::~CForceProxy( glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind> *this);
// [0xd7e3e0] (45 bytes) glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::~CMotionListener()
// void glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::~CMotionListener( glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>, void> *this);
// [0xd7e410] (45 bytes) glitch::collada::IMotionListener::~IMotionListener()
// void glitch::collada::IMotionListener::~IMotionListener(glitch::collada::IMotionListener *this);
// [0xd7e440] (45 bytes) glitch::collada::animation_track::CMaterialApplicatorInfo::~CMaterialApplicatorInfo()
// void glitch::collada::animation_track::CMaterialApplicatorInfo::~CMaterialApplicatorInfo( glitch::collada::animation_track::CMaterialApplicatorInfo *this);
// [0xd7e4c0] (45 bytes) glitch::collada::ps::IForce::~IForce()
// void glitch::collada::ps::IForce::~IForce(glitch::collada::ps::IForce *this);
// [0xd7e520] (45 bytes) glitch::collada::CAnimationTrackEx::~CAnimationTrackEx()
// void glitch::collada::CAnimationTrackEx::~CAnimationTrackEx(glitch::collada::CAnimationTrackEx *this);
// [0xd7e550] (45 bytes) glitch::collada::IAnimationTrackEx::~IAnimationTrackEx()
// void glitch::collada::IAnimationTrackEx::~IAnimationTrackEx(glitch::collada::IAnimationTrackEx *this);
// [0xd7e580] (45 bytes) glitch::collada::animation_track::CApplicatorInfo::~CApplicatorInfo()
// void glitch::collada::animation_track::CApplicatorInfo::~CApplicatorInfo( glitch::collada::animation_track::CApplicatorInfo *this);
// [0xd7e610] (77 bytes) glitch::collada::CAnimationTargets::~CAnimationTargets()
// void glitch::collada::CAnimationTargets::~CAnimationTargets(glitch::collada::CAnimationTargets *this);
// [0xd7e660] (61 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector>::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// int glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector>::apply( int a1, float **a2, float **a3, int a4);
// [0xd7e6a0] (61 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity>::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// float *glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity>::apply( int a1, float **a2, float **a3, int a4);
// [0xd7e6e0] (61 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex>::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// float *glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex>::apply( int a1, float **a2, float **a3, float *a4);
// [0xd7e720] (61 bytes) glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind>::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// float *glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind>::apply( int a1, float **a2, float **a3, int a4);
// [0xd7e760] (58 bytes) glitch::collada::animation_track::CWeightEx::applyValue(void const*,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// void *glitch::collada::animation_track::CWeightEx::applyValue( glitch::collada::animation_track::CWeightEx *this, void *src, void *dest);
// [0xd7e7a0] (58 bytes) glitch::collada::animation_track::CVector3dEx::applyValue(void const*,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// void *glitch::collada::animation_track::CVector3dEx::applyValue( glitch::collada::animation_track::CVector3dEx *this, void *src, void *dest);
// [0xd7e7e0] (58 bytes) glitch::collada::animation_track::CFloatEx::applyValue(void const*,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// void *glitch::collada::animation_track::CFloatEx::applyValue( glitch::collada::animation_track::CFloatEx *this, void *src, void *dest);
// [0xd7e820] (58 bytes) glitch::collada::CAnimationTrackEx::retrieveValue(void *,void *)const
// void *glitch::collada::CAnimationTrackEx::retrieveValue( glitch::collada::CAnimationTrackEx *this, void *src, void *dest);
// [0xd7ea20] (15 bytes) `virtual thunk to'glitch::collada::CForceSceneNode::~CForceSceneNode()
// void `virtual thunk to'glitch::collada::CForceSceneNode::~CForceSceneNode( glitch::collada::CForceSceneNode *this);
// [0xd7ea30] (15 bytes) `virtual thunk to'glitch::collada::CForceSceneNode::~CForceSceneNode()
// void `virtual thunk to'glitch::collada::CForceSceneNode::~CForceSceneNode( glitch::collada::CForceSceneNode *this);
// [0xd7ea40] (127 bytes) glitch::collada::CForceSceneNode::~CForceSceneNode()
// void glitch::collada::CForceSceneNode::~CForceSceneNode(glitch::collada::CForceSceneNode *this);
// [0xd7eac0] (15 bytes) `virtual thunk to'glitch::collada::CLightSceneNode::~CLightSceneNode()
// void `virtual thunk to'glitch::collada::CLightSceneNode::~CLightSceneNode( glitch::collada::CLightSceneNode *this);
// [0xd7ead0] (15 bytes) `virtual thunk to'glitch::collada::CLightSceneNode::~CLightSceneNode()
// void `virtual thunk to'glitch::collada::CLightSceneNode::~CLightSceneNode( glitch::collada::CLightSceneNode *this);
// [0xd7eae0] (127 bytes) glitch::collada::CLightSceneNode::~CLightSceneNode()
// void glitch::collada::CLightSceneNode::~CLightSceneNode(glitch::collada::CLightSceneNode *this);
// [0xd7eb60] (15 bytes) `virtual thunk to'glitch::collada::CNoTimelineController::~CNoTimelineController()
// void `virtual thunk to'glitch::collada::CNoTimelineController::~CNoTimelineController( glitch::collada::CNoTimelineController *this);
// [0xd7eb70] (90 bytes) glitch::collada::CNoTimelineController::~CNoTimelineController()
// void glitch::collada::CNoTimelineController::~CNoTimelineController( glitch::collada::CNoTimelineController *this);
// [0xd7ebd0] (83 bytes) glitch::collada::animation_track::CMaterialApplicatorInfo::clone(void)const
// uint32_t *glitch::collada::animation_track::CMaterialApplicatorInfo::clone( glitch::collada::animation_track::CMaterialApplicatorInfo *this);
// [0xd7ec30] (96 bytes) glitch::collada::CNoTimelineController::update(float)
// int glitch::collada::CNoTimelineController::update(glitch::collada::CNoTimelineController *this, float a2);
// [0xd7ec90] (121 bytes) glitch::collada::animation_track::CVisibilityEx::applyAddedValue(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// int glitch::collada::animation_track::CVisibilityEx::applyAddedValue( glitch::collada::animation_track::CVisibilityEx *this, uint32_t *a2, const float *a3, int a4, void *a5);
// [0xd7ed10] (121 bytes) glitch::collada::animation_track::CVisibilityEx::applyBlendedValue(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// int glitch::collada::animation_track::CVisibilityEx::applyBlendedValue( glitch::collada::animation_track::CVisibilityEx *this, uint32_t *a2, const float *a3, int a4, void *a5);
// [0xd7ed90] (298 bytes) glitch::collada::animation_track::CVector3dEx::getBlendedValue(void const*,float const*,int,void *)const
// void glitch::collada::animation_track::CVector3dEx::getBlendedValue( glitch::collada::animation_track::CVector3dEx *this, float *a2, float *a3, int a4, float *a5);
// [0xd7f650] (15 bytes) `virtual thunk to'glitch::collada::CNoTimelineController::~CNoTimelineController()
// void `virtual thunk to'glitch::collada::CNoTimelineController::~CNoTimelineController( glitch::collada::CNoTimelineController *this);
// [0xd7f660] (98 bytes) glitch::collada::CNoTimelineController::~CNoTimelineController()
// void glitch::collada::CNoTimelineController::~CNoTimelineController( glitch::collada::CNoTimelineController *this);
// [0xd7f6d0] (85 bytes) glitch::collada::CAnimationTargets::~CAnimationTargets()
// void glitch::collada::CAnimationTargets::~CAnimationTargets(glitch::collada::CAnimationTargets *this);
// [0xd7f730] (15 bytes) `virtual thunk to'glitch::collada::CWindForceSceneNode::~CWindForceSceneNode()
// void `virtual thunk to'glitch::collada::CWindForceSceneNode::~CWindForceSceneNode( glitch::collada::CWindForceSceneNode *this);
// [0xd7f740] (15 bytes) `virtual thunk to'glitch::collada::CWindForceSceneNode::~CWindForceSceneNode()
// void `virtual thunk to'glitch::collada::CWindForceSceneNode::~CWindForceSceneNode( glitch::collada::CWindForceSceneNode *this);
// [0xd7f750] (135 bytes) glitch::collada::CWindForceSceneNode::~CWindForceSceneNode()
// void glitch::collada::CWindForceSceneNode::~CWindForceSceneNode(glitch::collada::CWindForceSceneNode *this);
// [0xd7f8c0] (15 bytes) `virtual thunk to'glitch::collada::CLightSceneNode::~CLightSceneNode()
// void `virtual thunk to'glitch::collada::CLightSceneNode::~CLightSceneNode( glitch::collada::CLightSceneNode *this);
// [0xd7f8d0] (15 bytes) `virtual thunk to'glitch::collada::CLightSceneNode::~CLightSceneNode()
// void `virtual thunk to'glitch::collada::CLightSceneNode::~CLightSceneNode( glitch::collada::CLightSceneNode *this);
// [0xd7f8e0] (135 bytes) glitch::collada::CLightSceneNode::~CLightSceneNode()
// void glitch::collada::CLightSceneNode::~CLightSceneNode(glitch::collada::CLightSceneNode *this);
// [0xd7f970] (15 bytes) `virtual thunk to'glitch::collada::CForceSceneNode::~CForceSceneNode()
// void `virtual thunk to'glitch::collada::CForceSceneNode::~CForceSceneNode( glitch::collada::CForceSceneNode *this);
// [0xd7f980] (15 bytes) `virtual thunk to'glitch::collada::CForceSceneNode::~CForceSceneNode()
// void `virtual thunk to'glitch::collada::CForceSceneNode::~CForceSceneNode( glitch::collada::CForceSceneNode *this);
// [0xd7f990] (135 bytes) glitch::collada::CForceSceneNode::~CForceSceneNode()
// void glitch::collada::CForceSceneNode::~CForceSceneNode(glitch::collada::CForceSceneNode *this);
// [0xd7fa20] (196 bytes) glitch::collada::CAnimationIOClipParam::apply(void)
// void glitch::collada::CAnimationIOClipParam::apply(glitch::collada::CAnimationIOClipParam *this);
// [0xd7faf0] (15 bytes) `virtual thunk to'glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode()
// void `virtual thunk to'glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode( glitch::collada::CDeflectorForceSceneNode *this);
// [0xd7fb00] (15 bytes) `virtual thunk to'glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode()
// void `virtual thunk to'glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode( glitch::collada::CDeflectorForceSceneNode *this);
// [0xd7fb10] (135 bytes) glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode()
// void glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode( glitch::collada::CDeflectorForceSceneNode *this);
// [0xd7fca0] (15 bytes) `virtual thunk to'glitch::collada::CBillboardSceneNode::~CBillboardSceneNode()
// void `virtual thunk to'glitch::collada::CBillboardSceneNode::~CBillboardSceneNode( glitch::collada::CBillboardSceneNode *this);
// [0xd7fcb0] (15 bytes) `virtual thunk to'glitch::collada::CBillboardSceneNode::~CBillboardSceneNode()
// void `virtual thunk to'glitch::collada::CBillboardSceneNode::~CBillboardSceneNode( glitch::collada::CBillboardSceneNode *this);
// [0xd7fcc0] (161 bytes) glitch::collada::CBillboardSceneNode::~CBillboardSceneNode()
// void glitch::collada::CBillboardSceneNode::~CBillboardSceneNode(glitch::collada::CBillboardSceneNode *this);
// [0xd7fd70] (15 bytes) `virtual thunk to'glitch::collada::CBillboardSceneNode::~CBillboardSceneNode()
// void `virtual thunk to'glitch::collada::CBillboardSceneNode::~CBillboardSceneNode( glitch::collada::CBillboardSceneNode *this);
// [0xd7fd80] (15 bytes) `virtual thunk to'glitch::collada::CBillboardSceneNode::~CBillboardSceneNode()
// void `virtual thunk to'glitch::collada::CBillboardSceneNode::~CBillboardSceneNode( glitch::collada::CBillboardSceneNode *this);
// [0xd7fd90] (169 bytes) glitch::collada::CBillboardSceneNode::~CBillboardSceneNode()
// void glitch::collada::CBillboardSceneNode::~CBillboardSceneNode(glitch::collada::CBillboardSceneNode *this);
// [0xd7fe40] (15 bytes) `virtual thunk to'glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode()
// void `virtual thunk to'glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode( glitch::collada::CGravityForceSceneNode *this);
// [0xd7fe50] (15 bytes) `virtual thunk to'glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode()
// void `virtual thunk to'glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode( glitch::collada::CGravityForceSceneNode *this);
// [0xd7fe60] (135 bytes) glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode()
// void glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode( glitch::collada::CGravityForceSceneNode *this);
// [0xd7fef0] (15 bytes) `virtual thunk to'glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode()
// void `virtual thunk to'glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode( glitch::collada::CDeflectorForceSceneNode *this);
// [0xd7ff00] (15 bytes) `virtual thunk to'glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode()
// void `virtual thunk to'glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode( glitch::collada::CDeflectorForceSceneNode *this);
// [0xd7ff10] (127 bytes) glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode()
// void glitch::collada::CDeflectorForceSceneNode::~CDeflectorForceSceneNode( glitch::collada::CDeflectorForceSceneNode *this);
// [0xd7ff90] (15 bytes) `virtual thunk to'glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode()
// void `virtual thunk to'glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode( glitch::collada::CGravityForceSceneNode *this);
// [0xd7ffa0] (15 bytes) `virtual thunk to'glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode()
// void `virtual thunk to'glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode( glitch::collada::CGravityForceSceneNode *this);
// [0xd7ffb0] (127 bytes) glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode()
// void glitch::collada::CGravityForceSceneNode::~CGravityForceSceneNode( glitch::collada::CGravityForceSceneNode *this);
// [0xd80030] (15 bytes) `virtual thunk to'glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode()
// void `virtual thunk to'glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode( glitch::collada::CVortexForceSceneNode *this);
// [0xd80040] (15 bytes) `virtual thunk to'glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode()
// void `virtual thunk to'glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode( glitch::collada::CVortexForceSceneNode *this);
// [0xd80050] (127 bytes) glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode()
// void glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode( glitch::collada::CVortexForceSceneNode *this);
// [0xd800d0] (15 bytes) `virtual thunk to'glitch::collada::CWindForceSceneNode::~CWindForceSceneNode()
// void `virtual thunk to'glitch::collada::CWindForceSceneNode::~CWindForceSceneNode( glitch::collada::CWindForceSceneNode *this);
// [0xd800e0] (15 bytes) `virtual thunk to'glitch::collada::CWindForceSceneNode::~CWindForceSceneNode()
// void `virtual thunk to'glitch::collada::CWindForceSceneNode::~CWindForceSceneNode( glitch::collada::CWindForceSceneNode *this);
// [0xd800f0] (127 bytes) glitch::collada::CWindForceSceneNode::~CWindForceSceneNode()
// void glitch::collada::CWindForceSceneNode::~CWindForceSceneNode(glitch::collada::CWindForceSceneNode *this);
// [0xd80170] (15 bytes) `virtual thunk to'glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode()
// void `virtual thunk to'glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode( glitch::collada::CVortexForceSceneNode *this);
// [0xd80180] (15 bytes) `virtual thunk to'glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode()
// void `virtual thunk to'glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode( glitch::collada::CVortexForceSceneNode *this);
// [0xd80190] (135 bytes) glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode()
// void glitch::collada::CVortexForceSceneNode::~CVortexForceSceneNode( glitch::collada::CVortexForceSceneNode *this);
// [0xd80220] (59 bytes) glitch::collada::animation_track::CWeightEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// uint32_t *glitch::collada::animation_track::CWeightEx::applyKeyBasedValue( glitch::collada::animation_track::CWeightEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, uint32_t *a4);
// [0xd80260] (59 bytes) glitch::collada::animation_track::CWeightEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *)const
// uint32_t *glitch::collada::animation_track::CWeightEx::getKeyBasedValue( glitch::collada::animation_track::CWeightEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, uint32_t *a4);
// [0xd802a0] (127 bytes) glitch::collada::animation_track::CVisibilityEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// int glitch::collada::animation_track::CVisibilityEx::applyKeyBasedValue( glitch::collada::animation_track::CVisibilityEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4);
// [0xd80320] (127 bytes) glitch::collada::animation_track::CVisibilityEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// int glitch::collada::animation_track::CVisibilityEx::applyKeyBasedValue( glitch::collada::animation_track::CVisibilityEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6);
// [0xd803a0] (86 bytes) glitch::collada::animation_track::CVisibilityEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *)const
// uint32_t *glitch::collada::animation_track::CVisibilityEx::getKeyBasedValue( glitch::collada::animation_track::CVisibilityEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, uint32_t *a4);
// [0xd80400] (86 bytes) glitch::collada::animation_track::CVisibilityEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *)const
// uint32_t *glitch::collada::animation_track::CVisibilityEx::getKeyBasedValue( glitch::collada::animation_track::CVisibilityEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, uint32_t *a6);
// [0xd80460] (77 bytes) glitch::collada::animation_track::CVector3dEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *)const
// int glitch::collada::animation_track::CVector3dEx::getKeyBasedValue( glitch::collada::animation_track::CVector3dEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, uint32_t *a4);
// [0xd804b0] (157 bytes) glitch::collada::animation_track::CVector3dEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *)const
// float *glitch::collada::animation_track::CVector3dEx::getKeyBasedValue( glitch::collada::animation_track::CVector3dEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6);
// [0xd80550] (59 bytes) glitch::collada::animation_track::CFloatEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *)const
// uint32_t *glitch::collada::animation_track::CFloatEx::getKeyBasedValue( glitch::collada::animation_track::CFloatEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, uint32_t *a4);
// [0xd80590] (94 bytes) glitch::collada::animation_track::CFloatEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *)const
// float *glitch::collada::animation_track::CFloatEx::getKeyBasedValue( glitch::collada::animation_track::CFloatEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6);
// [0xd805f0] (94 bytes) glitch::collada::animation_track::CWeightEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *)const
// float *glitch::collada::animation_track::CWeightEx::getKeyBasedValue( glitch::collada::animation_track::CWeightEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6);
// [0xd80650] (94 bytes) glitch::collada::animation_track::CWeightEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// float *glitch::collada::animation_track::CWeightEx::applyKeyBasedValue( glitch::collada::animation_track::CWeightEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, float *a6);
// [0xd806b0] (196 bytes) glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *this);
// [0xd80780] (98 bytes) glitch::collada::CAnimationIOParam::~CAnimationIOParam()
// void glitch::collada::CAnimationIOParam::~CAnimationIOParam(glitch::collada::CAnimationIOParam *this);
// [0xd807f0] (106 bytes) glitch::collada::CAnimationIOParam::~CAnimationIOParam()
// void glitch::collada::CAnimationIOParam::~CAnimationIOParam(glitch::collada::CAnimationIOParam *this);
// [0xd80860] (188 bytes) glitch::collada::CAnimationIOClipParam::~CAnimationIOClipParam()
// void glitch::collada::CAnimationIOClipParam::~CAnimationIOClipParam( glitch::collada::CAnimationIOClipParam *this);
// [0xd80920] (188 bytes) glitch::collada::CAnimationIOParamTemplate<int>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<int>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<int> *this);
// [0xd809e0] (188 bytes) glitch::collada::CAnimationIOParamTemplate<float>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<float>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<float> *this);
// [0xd80aa0] (188 bytes) glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *this);
// [0xd80b60] (188 bytes) glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *this);
// [0xd80c20] (188 bytes) glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion> *this);
// [0xd80ce0] (228 bytes) glitch::collada::CAnimationIOStringParam::~CAnimationIOStringParam()
// void glitch::collada::CAnimationIOStringParam::~CAnimationIOStringParam( glitch::collada::CAnimationIOStringParam *this);
// [0xd80dd0] (196 bytes) glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *this);
// [0xd80ea0] (196 bytes) glitch::collada::CAnimationIOParamTemplate<int>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<int>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<int> *this);
// [0xd80f70] (196 bytes) glitch::collada::CAnimationIOParamTemplate<float>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<float>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<float> *this);
// [0xd81040] (196 bytes) glitch::collada::CAnimationIOClipParam::~CAnimationIOClipParam()
// void glitch::collada::CAnimationIOClipParam::~CAnimationIOClipParam( glitch::collada::CAnimationIOClipParam *this);
// [0xd81110] (196 bytes) glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion>::~CAnimationIOParamTemplate()
// void glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion>::~CAnimationIOParamTemplate( glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion> *this);
// [0xd811e0] (236 bytes) glitch::collada::CAnimationIOStringParam::~CAnimationIOStringParam()
// void glitch::collada::CAnimationIOStringParam::~CAnimationIOStringParam( glitch::collada::CAnimationIOStringParam *this);
// [0xd812d0] (196 bytes) glitch::collada::CAnimationIOParamTemplate<int>::apply(void)
// void glitch::collada::CAnimationIOParamTemplate<int>::apply( glitch::collada::CAnimationIOParamTemplate<int> *this);
// [0xd813a0] (235 bytes) glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::apply(void)
// void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::apply( glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *this);
// [0xd81490] (291 bytes) glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion>::apply(void)
// void glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion>::apply( glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion> *this);
// [0xd815c0] (196 bytes) glitch::collada::CAnimationIOParamTemplate<float>::apply(void)
// void glitch::collada::CAnimationIOParamTemplate<float>::apply( glitch::collada::CAnimationIOParamTemplate<float> *this);
// [0xd81690] (230 bytes) glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::apply(void)
// void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::apply( glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *this);
// [0xd81780] (923 bytes) glitch::collada::CAnimationIOStringParam::apply(void)
// void glitch::collada::CAnimationIOStringParam::apply(glitch::collada::CAnimationIOStringParam *this);
// [0xd81b20] (74 bytes) glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int,false>>::~CAnimationFilter()
// void glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int,false>>::~CAnimationFilter( glitch::core **this);
// [0xd81b70] (82 bytes) glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int,false>>::~CAnimationFilter()
// void glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int,false>>::~CAnimationFilter( glitch::core **this);
// [0xd81d00] (42 bytes) glitch::collada::CDynamicAnimationSet::addAnimationLibrary(char const*)
// int glitch::collada::CDynamicAnimationSet::addAnimationLibrary( glitch::collada::CDynamicAnimationSet *this, char *a2);
// [0xd81d30] (217 bytes) glitch::collada::CLODMeshSceneNode::getRenderVertexCount(void *)const
// int glitch::collada::CLODMeshSceneNode::getRenderVertexCount( glitch::collada::CLODMeshSceneNode *this, unsigned int a2);
// [0xd81f30] (92 bytes) glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>>::~CBlendingBuffer()
// void glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>>::~CBlendingBuffer( glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *this);
// [0xd81f90] (92 bytes) glitch::collada::detail::CBlendingBuffer<glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>::~CBlendingBuffer()
// void glitch::collada::detail::CBlendingBuffer<glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>::~CBlendingBuffer(;
// [0xd81ff0] (100 bytes) glitch::collada::detail::CBlendingBuffer<glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>::~CBlendingBuffer()
// void glitch::collada::detail::CBlendingBuffer<glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>::~CBlendingBuffer(;
// [0xd82060] (100 bytes) glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>>::~CBlendingBuffer()
// void glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>>::~CBlendingBuffer( glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *this);
// [0xd821e0] (692 bytes) glitch::collada::animation_track::CTextureTransformEx::applyBlendedValueEx(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)
// int glitch::collada::animation_track::CTextureTransformEx::applyBlendedValueEx( glitch::collada::animation_track::CTextureTransformEx *this, float *a2, const float *a3, glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a4, uint16_t *a5);
// [0xd824a0] (492 bytes) glitch::collada::CAnimationTargets::set(glitch::collada::detail::CAnimationFilter<glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>> const&)
// uint32_t *glitch::collada::CAnimationTargets::set(uint32_t *a1, int a2);
// [0xd82690] (29 bytes) glitch::collada::CAnimationTreeCookie::unsetTarget(int)
// int glitch::collada::CAnimationTreeCookie::unsetTarget(glitch::collada::CAnimationTreeCookie *this, int a2);
// [0xd826b0] (15 bytes) `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode()
// void `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode( glitch::collada::CModularSkinnedMeshSceneNode *this);
// [0xd826c0] (15 bytes) `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode()
// void `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode( glitch::collada::CModularSkinnedMeshSceneNode *this);
// [0xd826d0] (125 bytes) glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode()
// void glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode( glitch::collada::CModularSkinnedMeshSceneNode *this);
// [0xd82750] (15 bytes) `virtual thunk to'glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode()
// void `virtual thunk to'glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode( glitch::collada::CSkinnedMeshSceneNode *this);
// [0xd82760] (15 bytes) `virtual thunk to'glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode()
// void `virtual thunk to'glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode( glitch::collada::CSkinnedMeshSceneNode *this);
// [0xd82770] (125 bytes) glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode()
// void glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode( glitch::collada::CSkinnedMeshSceneNode *this);
// [0xd827f0] (15 bytes) `virtual thunk to'glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode()
// void `virtual thunk to'glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode( glitch::collada::CSkinnedMeshSceneNode *this);
// [0xd82800] (15 bytes) `virtual thunk to'glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode()
// void `virtual thunk to'glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode( glitch::collada::CSkinnedMeshSceneNode *this);
// [0xd82810] (121 bytes) glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode()
// void glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode( glitch::collada::CSkinnedMeshSceneNode *this);
// [0xd82890] (15 bytes) `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode()
// void `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode( glitch::collada::CModularSkinnedMeshSceneNode *this);
// [0xd828a0] (15 bytes) `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode()
// void `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode( glitch::collada::CModularSkinnedMeshSceneNode *this);
// [0xd828b0] (121 bytes) glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode()
// void glitch::collada::CModularSkinnedMeshSceneNode::~CModularSkinnedMeshSceneNode( glitch::collada::CModularSkinnedMeshSceneNode *this);
// [0xd829a0] (91 bytes) glitch::collada::CDynamicAnimationSet::~CDynamicAnimationSet()
// void glitch::collada::CDynamicAnimationSet::~CDynamicAnimationSet(glitch::collada::CDynamicAnimationSet *this);
// [0xd82a00] (99 bytes) glitch::collada::CDynamicAnimationSet::~CDynamicAnimationSet()
// void glitch::collada::CDynamicAnimationSet::~CDynamicAnimationSet(glitch::collada::CDynamicAnimationSet *this);
// [0xd82a70] (121 bytes) glitch::collada::CAnimationTrackHandlers::~CAnimationTrackHandlers()
// void glitch::collada::CAnimationTrackHandlers::~CAnimationTrackHandlers( glitch::collada::CAnimationTrackHandlers *this);
// [0xd82af0] (129 bytes) glitch::collada::CAnimationTrackHandlers::~CAnimationTrackHandlers()
// void glitch::collada::CAnimationTrackHandlers::~CAnimationTrackHandlers( glitch::collada::CAnimationTrackHandlers *this);
// [0xd82b80] (186 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setWeight(int,float)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setWeight( glitch::collada::CSceneNodeAnimatorSynchronizedBlender *this, int a2, float a3);
// [0xd82c40] (15 bytes) `virtual thunk to'glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender()
// void `virtual thunk to'glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender( glitch::collada::CSceneNodeAnimatorTrackBlender *this);
// [0xd82c50] (7 bytes) `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender()
// void `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender( glitch::collada::CSceneNodeAnimatorTrackBlender *this);
// [0xd82c60] (176 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender()
// void glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender( glitch::collada::CSceneNodeAnimatorTrackBlender *this);
// [0xd82d10] (15 bytes) `virtual thunk to'glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender()
// void `virtual thunk to'glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender( glitch::collada::CSceneNodeAnimatorTrackBlender *this);
// [0xd82d20] (7 bytes) `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender()
// void `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender( glitch::collada::CSceneNodeAnimatorTrackBlender *this);
// [0xd82d30] (184 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender()
// void glitch::collada::CSceneNodeAnimatorTrackBlender::~CSceneNodeAnimatorTrackBlender( glitch::collada::CSceneNodeAnimatorTrackBlender *this);
// [0xd82df0] (120 bytes) glitch::collada::CAnimationGraph::SNode::~SNode()
// void glitch::collada::CAnimationGraph::SNode::~SNode(glitch::collada::CAnimationGraph::SNode *this);
// [0xd82e70] (216 bytes) glitch::collada::CAnimationGraph::SNode::SNode(glitch::collada::CAnimationGraph::SNode const&)
// glitch::collada::CAnimationGraph::SNode *glitch::collada::CAnimationGraph::SNode::SNode( int a1, int a2, glitch::collada::CAnimationGraph::SNode *this, const glitch::collada::CAnimationGraph::SNode *a4);
// [0xd82f50] (304 bytes) bool glitch::collada::SAnimationAccessor::findKeyFrameNoEx<unsigned char,30>(int,glitch::res::vector<int> const&,float,int &,float &)const
// bool glitch::collada::SAnimationAccessor::findKeyFrameNoEx<unsigned char,30>( int a1, int a2, uint32_t *a3, float a4, int *a5, float *a6);
// [0xd83080] (304 bytes) bool glitch::collada::SAnimationAccessor::findKeyFrameNoEx<unsigned short,30>(int,glitch::res::vector<int> const&,float,int &,float &)const
// bool glitch::collada::SAnimationAccessor::findKeyFrameNoEx<unsigned short,30>( int a1, int a2, uint32_t *a3, float a4, int *a5, float *a6);
// [0xd831b0] (264 bytes) bool glitch::collada::SAnimationAccessor::findKeyFrameNoEx<int,1000>(int,glitch::res::vector<int> const&,float,int &,float &)const
// bool glitch::collada::SAnimationAccessor::findKeyFrameNoEx<int,1000>( int a1, int a2, uint32_t *a3, float a4, int *a5, float *a6);
// [0xd83890] (15 bytes) `virtual thunk to'glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode()
// void `virtual thunk to'glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode( glitch::collada::CLODMeshSceneNode *this);
// [0xd838a0] (15 bytes) `virtual thunk to'glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode()
// void `virtual thunk to'glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode( glitch::collada::CLODMeshSceneNode *this);
// [0xd838b0] (145 bytes) glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode()
// void glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode(glitch::collada::CLODMeshSceneNode *this);
// [0xd83950] (15 bytes) `virtual thunk to'glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode()
// void `virtual thunk to'glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode( glitch::collada::CLODMeshSceneNode *this);
// [0xd83960] (15 bytes) `virtual thunk to'glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode()
// void `virtual thunk to'glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode( glitch::collada::CLODMeshSceneNode *this);
// [0xd83970] (153 bytes) glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode()
// void glitch::collada::CLODMeshSceneNode::~CLODMeshSceneNode(glitch::collada::CLODMeshSceneNode *this);
// [0xd83df0] (140 bytes) void glitch::collada::CAnimationTreeCookie::setTarget<boost::intrusive_ptr<glitch::collada::CParticleSystemEmitterSceneNode>>(int,void *,boost::intrusive_ptr<glitch::collada::CParticleSystemEmitterSceneNode> const&)
// int glitch::collada::CAnimationTreeCookie::setTarget<boost::intrusive_ptr<glitch::collada::CParticleSystemEmitterSceneNode>>( int a1, int a2, int a3, uint32_t *a4);
// [0xd85e50] (426 bytes) glitch::collada::CParametricControllerBlender::SDelegateControllerSlot::operator=(glitch::collada::CParametricControllerBlender::SDelegateControllerSlot const&)
// glitch::collada::CParametricControllerBlender::SDelegateControllerSlot *glitch::collada::CParametricControllerBlender::SDelegateControllerSlot::operator=( glitch::collada::CParametricControllerBlender::SDelegateControllerSlot *this, const glitch::collada::CParametricControllerBlender::SDelegateControllerSlot *a2);
// [0xd86060] (582 bytes) glitch::collada::CSceneNodeAnimatorBlender::addAnimator(boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&)
// unsigned int glitch::collada::CSceneNodeAnimatorBlender::addAnimator( glitch::collada::CSceneNodeAnimatorBlender *this, volatile int32_t **a2);
// [0xd895e0] (734 bytes) glitch::collada::CAnimationGraph::SNode::operator=(glitch::collada::CAnimationGraph::SNode const&)
// glitch::collada::CAnimationGraph::SNode *glitch::collada::CAnimationGraph::SNode::operator=( glitch::collada::CAnimationGraph::SNode *this, const glitch::collada::CAnimationGraph::SNode *a2);
// [0xd898c0] (536 bytes) glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::rotate(glitch::core::quaternion &)
// int glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::rotate( glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>, void> *this, glitch::core::quaternion *a2);
// [0xd89ae0] (264 bytes) glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::move(glitch::core::vector3d<float> &)
// int glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::move( int a1, uint32_t *a2);
// [0xd8a5b0] (16 bytes) glitch::collada::CEventsManager::onTimeJump(void)
// glitch::collada::CEventsManager *glitch::collada::CEventsManager::onTimeJump( glitch::collada::CEventsManager *this);
// [0xd8a5c0] (69 bytes) glitch::collada::COnDemandReader::read(int,int,void *)
// int glitch::collada::COnDemandReader::read(glitch::collada::COnDemandReader *this, int a2, int a3, void *a4);
// [0xd8a610] (69 bytes) glitch::collada::COnDemandReader::read(int,int,void *,void (*)(int,int,void *,void *),void *)
// int glitch::collada::COnDemandReader::read(glitch::collada::COnDemandReader *this, int a2, int a3, void *a4);
// [0xd8a660] (24 bytes) glitch::collada::CResFileReader::tell(void)
// int glitch::collada::CResFileReader::tell(glitch::collada::CResFileReader *this);
// [0xd8a680] (40 bytes) glitch::collada::CResFileReader::read(void *,unsigned int)
// int glitch::collada::CResFileReader::read(glitch::collada::CResFileReader *this, void *a2, unsigned int a3);
// [0xd8a6b0] (44 bytes) glitch::collada::CResFileReader::seek(long,bool)
// int glitch::collada::CResFileReader::seek(glitch::collada::CResFileReader *this, int a2, bool a3);
// [0xd8a6e0] (24 bytes) glitch::collada::CResFileReader::getSize(void)
// int glitch::collada::CResFileReader::getSize(glitch::collada::CResFileReader *this);
// [0xd8a700] (48 bytes) glitch::collada::CTimelineController::willReachClipEnd(float)
// bool glitch::collada::CTimelineController::willReachClipEnd( glitch::collada::CTimelineController *this, float a2);
// [0xd8a730] (55 bytes) glitch::collada::CTimelineController::setClip(char const*)
// int glitch::collada::CTimelineController::setClip(glitch::collada::CTimelineController *this, const char *a2);
// [0xd8a770] (16 bytes) glitch::collada::CTimelineController::getClipCount(void)const
// int glitch::collada::CTimelineController::getClipCount(glitch::collada::CTimelineController *this);
// [0xd8a780] (66 bytes) glitch::collada::CTimelineController::getClipStart(int)const
// long double glitch::collada::CTimelineController::getClipStart( glitch::collada::CTimelineController *this, int a2);
// [0xd8a7d0] (66 bytes) glitch::collada::CTimelineController::getClipEnd(int)const
// long double glitch::collada::CTimelineController::getClipEnd( glitch::collada::CTimelineController *this, int a2);
// [0xd8a820] (103 bytes) glitch::collada::CTimelineController::getClipLength(int)const
// long double glitch::collada::CTimelineController::getClipLength( glitch::collada::CTimelineController *this, int a2);
// [0xd8a890] (28 bytes) glitch::collada::CTimelineController::getCurrentClipStart(void)const
// int glitch::collada::CTimelineController::getCurrentClipStart(glitch::collada::CTimelineController *this);
// [0xd8a8b0] (28 bytes) glitch::collada::CTimelineController::getCurrentClipEnd(void)const
// int glitch::collada::CTimelineController::getCurrentClipEnd(glitch::collada::CTimelineController *this);
// [0xd8a8d0] (28 bytes) glitch::collada::CTimelineController::getCurrentClipLength(void)const
// int glitch::collada::CTimelineController::getCurrentClipLength(glitch::collada::CTimelineController *this);
// [0xd8a8f0] (12 bytes) glitch::collada::CTimelineController::getCurrentClipIndex(void)const
// int glitch::collada::CTimelineController::getCurrentClipIndex(glitch::collada::CTimelineController *this);
// [0xd8a900] (40 bytes) glitch::collada::CTimelineController::getCurrentClipReferenceTime(void)const
// long double glitch::collada::CTimelineController::getCurrentClipReferenceTime( glitch::collada::CTimelineController *this);
// [0xd8a930] (44 bytes) glitch::collada::CTimelineController::getClipName(int)const
// void *glitch::collada::CTimelineController::getClipName(glitch::collada::CTimelineController *this, int a2);
// [0xd8a960] (14 bytes) glitch::collada::CTimelineController::setLoop(bool)
// glitch::collada::CTimelineController *glitch::collada::CTimelineController::setLoop( glitch::collada::CTimelineController *this, bool a2);
// [0xd8a970] (13 bytes) glitch::collada::CTimelineController::getLoop(void)const
// int glitch::collada::CTimelineController::getLoop(glitch::collada::CTimelineController *this);
// [0xd8a980] (12 bytes) glitch::collada::CTimelineController::getScale(void)const
// long double glitch::collada::CTimelineController::getScale(glitch::collada::CTimelineController *this);
// [0xd8a990] (14 bytes) glitch::collada::CTimelineController::setScale(float)
// glitch::collada::CTimelineController *glitch::collada::CTimelineController::setScale( glitch::collada::CTimelineController *this, float a2);
// [0xd8a9a0] (19 bytes) glitch::collada::CTimelineController::setEventsCallback(void (*)(glitch::scene::STriggeredEvent const&,void *),void *)
// int glitch::collada::CTimelineController::setEventsCallback(int a1, int a2, int a3);
// [0xd8aec0] (809 bytes) glitch::collada::CTimelineController::update(float)
// int glitch::collada::CTimelineController::update(glitch::collada::CTimelineController *this, float a2);
// [0xd8baf0] (64 bytes) glitch::collada::CTimelineController::setRange(float,float,bool)
// glitch::collada::CTimelineController *glitch::collada::CTimelineController::setRange( glitch::collada::CTimelineController *this, float a2, float a3, bool a4);
// [0xd8bbd0] (77 bytes) glitch::collada::CTimelineController::setClip(int)
// int glitch::collada::CTimelineController::setClip(glitch::collada::CTimelineController *this, int a2);
// [0xd8bc20] (43 bytes) glitch::collada::CTimelineController::jumpTo(float)
// int glitch::collada::CTimelineController::jumpTo(glitch::collada::CTimelineController *this, float a2);
// [0xd8bcf0] (154 bytes) glitch::collada::CTimelineController::getClipIndex(char const*)const
// int glitch::collada::CTimelineController::getClipIndex(glitch::collada::CTimelineController *this, char *s2);
// [0xd8bd90] (629 bytes) glitch::collada::CEventsManager::getEventTimeFromEventName(char const*)
// int glitch::collada::CEventsManager::getEventTimeFromEventName( glitch::collada::CEventsManager *this, const char *s1);
// [0xd8ea10] (15 bytes) `virtual thunk to'glitch::collada::CTimelineController::~CTimelineController()
// void `virtual thunk to'glitch::collada::CTimelineController::~CTimelineController( glitch::collada::CTimelineController *this);
// [0xd8ea20] (95 bytes) glitch::collada::CTimelineController::~CTimelineController()
// void glitch::collada::CTimelineController::~CTimelineController(glitch::collada::CTimelineController *this);
// [0xd8ea80] (15 bytes) `virtual thunk to'glitch::collada::CTimelineController::~CTimelineController()
// void `virtual thunk to'glitch::collada::CTimelineController::~CTimelineController( glitch::collada::CTimelineController *this);
// [0xd8ea90] (56 bytes) glitch::collada::CTimelineController::~CTimelineController()
// void glitch::collada::CTimelineController::~CTimelineController(glitch::collada::CTimelineController *this);
// [0xd8ead0] (85 bytes) glitch::collada::CTimelineController::setEventsManager(glitch::scene::IEventsManager *)
// volatile int32_t *glitch::collada::CTimelineController::setEventsManager( glitch::collada::CTimelineController *this, glitch::scene::IEventsManager *a2);
// [0xd8f060] (77 bytes) glitch::collada::COnDemandReader::~COnDemandReader()
// void glitch::collada::COnDemandReader::~COnDemandReader(volatile int32_t **this);
// [0xd8f0b0] (56 bytes) glitch::collada::COnDemandReader::~COnDemandReader()
// void glitch::collada::COnDemandReader::~COnDemandReader(volatile int32_t **this);
// [0xd90e00] (1454 bytes) glitch::collada::CEventsManager::onUpdate(float,float,float,float)
// void glitch::collada::CEventsManager::onUpdate( glitch::collada::CEventsManager *this, float a2, float a3, float a4, float a5);
// [0xd913b0] (892 bytes) glitch::collada::CEventsManager::onUpdate(float,float)
// glitch::collada::CEventsManager *glitch::collada::CEventsManager::onUpdate( glitch::collada::CEventsManager *this, float a2, float a3);
// [0xda8130] (12 bytes) glitch::collada::convertMAX2BDAE(char const*,char const*)
// int glitch::collada::convertMAX2BDAE();
// [0xda8140] (12 bytes) glitch::collada::convertDAE2BDAE(char const*,char const*)
// int glitch::collada::convertDAE2BDAE();
// [0xda8150] (70 bytes) glitch::collada::CColladaDatabase::linkInstanceMaterial(glitch::collada::SInstanceMaterial *)const
// int glitch::collada::CColladaDatabase::linkInstanceMaterial(int a1, int a2);
// [0xda81a0] (15 bytes) glitch::collada::CColladaDatabase::getVersion(void)const
// int glitch::collada::CColladaDatabase::getVersion(glitch::collada::CColladaDatabase *this);
// [0xda81b0] (117 bytes) glitch::collada::CColladaDatabase::getAnimation(char const*)const
// const char **glitch::collada::CColladaDatabase::getAnimation(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8230] (117 bytes) glitch::collada::CColladaDatabase::getAnimationClip(char const*)const
// const char **glitch::collada::CColladaDatabase::getAnimationClip( glitch::collada::CColladaDatabase *this, char *s2);
// [0xda82b0] (141 bytes) glitch::collada::CColladaDatabase::getArticulatedSystem(char const*)const
// int glitch::collada::CColladaDatabase::getArticulatedSystem(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8340] (77 bytes) glitch::collada::CColladaDatabase::getJointDOF(glitch::collada::SKinematicsModel const*,int,int)const
// int glitch::collada::CColladaDatabase::getJointDOF(int a1, int a2, int a3, int a4);
// [0xda8390] (117 bytes) glitch::collada::CColladaDatabase::getKinematicsModel(char const*)const
// const char **glitch::collada::CColladaDatabase::getKinematicsModel( glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8410] (119 bytes) glitch::collada::CColladaDatabase::getAnimationSegment(int)const
// int glitch::collada::CColladaDatabase::getAnimationSegment(glitch::collada::CColladaDatabase *this, int a2);
// [0xda8490] (16 bytes) glitch::collada::CColladaDatabase::getAnimationClipLibrary(void)const
// int glitch::collada::CColladaDatabase::getAnimationClipLibrary(glitch::collada::CColladaDatabase *this);
// [0xda84a0] (117 bytes) glitch::collada::CColladaDatabase::getCamera(char const*)const
// const char **glitch::collada::CColladaDatabase::getCamera(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8520] (117 bytes) glitch::collada::CColladaDatabase::getLight(char const*)const
// const char **glitch::collada::CColladaDatabase::getLight(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda85a0] (117 bytes) glitch::collada::CColladaDatabase::getImage(char const*)const
// const char **glitch::collada::CColladaDatabase::getImage(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8620] (117 bytes) glitch::collada::CColladaDatabase::getEffect(char const*)const
// const char **glitch::collada::CColladaDatabase::getEffect(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda86a0] (125 bytes) glitch::collada::CColladaDatabase::getMaterial(char const*)const
// const char **glitch::collada::CColladaDatabase::getMaterial(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8720] (246 bytes) glitch::collada::CColladaDatabase::getDummy(char const*,glitch::collada::SNode &)const
// int glitch::collada::CColladaDatabase::getDummy(int a1, char *s2, uint32_t *a3);
// [0xda8820] (142 bytes) glitch::collada::CColladaDatabase::getNode(char const*,glitch::collada::SNode &)const
// int glitch::collada::CColladaDatabase::getNode(int a1, char *s2, int a3);
// [0xda88b0] (125 bytes) glitch::collada::CColladaDatabase::getGeometry(char const*)const
// const char **glitch::collada::CColladaDatabase::getGeometry(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8930] (149 bytes) glitch::collada::CColladaDatabase::getController(char const*)const
// int glitch::collada::CColladaDatabase::getController(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda89d0] (125 bytes) glitch::collada::CColladaDatabase::getForce(char const*)const
// const char **glitch::collada::CColladaDatabase::getForce(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8a50] (125 bytes) glitch::collada::CColladaDatabase::getCoronas(char const*)const
// const char **glitch::collada::CColladaDatabase::getCoronas(glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8ad0] (125 bytes) glitch::collada::CColladaDatabase::getVisualScene(char const*)const
// const char **glitch::collada::CColladaDatabase::getVisualScene( glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8b50] (439 bytes) glitch::collada::CColladaDatabase::find(char const*,unsigned int &)const
// const char **glitch::collada::CColladaDatabase::find( glitch::collada::CColladaDatabase *this, char *a2, unsigned int *a3);
// [0xda8d10] (117 bytes) glitch::collada::CColladaDatabase::getAnimationPackage(char const*)const
// const char **glitch::collada::CColladaDatabase::getAnimationPackage( glitch::collada::CColladaDatabase *this, char *s2);
// [0xda8d90] (18 bytes) glitch::collada::CColladaDatabase::getScene(void)const
// int glitch::collada::CColladaDatabase::getScene(glitch::collada::CColladaDatabase *this);
// [0xda8db0] (33 bytes) glitch::collada::CColladaDatabase::getStreamingCommand(int)const
// int glitch::collada::CColladaDatabase::getStreamingCommand(glitch::collada::CColladaDatabase *this, int a2);
// [0xda8de0] (27 bytes) glitch::collada::CColladaDatabase::getAnimation(int)const
// int glitch::collada::CColladaDatabase::getAnimation(glitch::collada::CColladaDatabase *this, int a2);
// [0xda8e00] (357 bytes) glitch::collada::CColladaDatabase::getAnimation(char const*,glitch::collada::SChannel::Type,glitch::collada::SChannel::SReserved const*)const
// int glitch::collada::CColladaDatabase::getAnimation( glitch::collada::CColladaDatabase *a1, char *s2, unsigned int a3, const char **a4);
// [0xda8f70] (64 bytes) glitch::collada::CColladaDatabase::getBlendableAnimation(glitch::collada::SChannel const*)const
// int glitch::collada::CColladaDatabase::getBlendableAnimation(glitch::collada::CColladaDatabase *a1, int a2);
// [0xda8fb0] (55 bytes) glitch::collada::CColladaDatabase::getBlendableAnimation(glitch::collada::SAnimation const*)const
// int glitch::collada::CColladaDatabase::getBlendableAnimation(glitch::collada::CColladaDatabase *a1, int a2);
// [0xda8ff0] (165 bytes) glitch::collada::CColladaDatabase::getAnimation(char const*,glitch::collada::SChannel::Type,char const*)const
// int glitch::collada::CColladaDatabase::getAnimation( glitch::collada::CColladaDatabase *a1, char *a2, int a3, char *s2);
// [0xda90a0] (27 bytes) glitch::collada::CColladaDatabase::getAnimationClip(int)const
// int glitch::collada::CColladaDatabase::getAnimationClip(glitch::collada::CColladaDatabase *this, int a2);
// [0xda90c0] (27 bytes) glitch::collada::CColladaDatabase::getArticulatedSystem(int)const
// int glitch::collada::CColladaDatabase::getArticulatedSystem(glitch::collada::CColladaDatabase *this, int a2);
// [0xda90e0] (27 bytes) glitch::collada::CColladaDatabase::getKinematicsModel(int)const
// int glitch::collada::CColladaDatabase::getKinematicsModel(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9100] (25 bytes) glitch::collada::CColladaDatabase::getCamera(int)const
// int glitch::collada::CColladaDatabase::getCamera(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9120] (30 bytes) glitch::collada::CColladaDatabase::getLight(int)const
// int glitch::collada::CColladaDatabase::getLight(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9140] (30 bytes) glitch::collada::CColladaDatabase::getImage(int)const
// int glitch::collada::CColladaDatabase::getImage(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9160] (28 bytes) glitch::collada::CColladaDatabase::getEffect(int)const
// int glitch::collada::CColladaDatabase::getEffect(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9180] (36 bytes) glitch::collada::CColladaDatabase::getMaterial(int)const
// int glitch::collada::CColladaDatabase::getMaterial(glitch::collada::CColladaDatabase *this, int a2);
// [0xda91b0] (33 bytes) glitch::collada::CColladaDatabase::getGeometry(int)const
// int glitch::collada::CColladaDatabase::getGeometry(glitch::collada::CColladaDatabase *this, int a2);
// [0xda91e0] (36 bytes) glitch::collada::CColladaDatabase::getController(int)const
// int glitch::collada::CColladaDatabase::getController(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9210] (33 bytes) glitch::collada::CColladaDatabase::getForce(int)const
// int glitch::collada::CColladaDatabase::getForce(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9240] (25 bytes) glitch::collada::CColladaDatabase::getAnimationPackage(int)const
// int glitch::collada::CColladaDatabase::getAnimationPackage(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9260] (125 bytes) glitch::collada::CColladaDatabase::getGNPSEmitter(char const*)const
// const char **glitch::collada::CColladaDatabase::getGNPSEmitter( glitch::collada::CColladaDatabase *this, char *s2);
// [0xda92e0] (34 bytes) glitch::collada::CColladaDatabase::getGNPSEmitter(int)const
// int glitch::collada::CColladaDatabase::getGNPSEmitter(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9310] (36 bytes) glitch::collada::CColladaDatabase::getCoronas(int)const
// int glitch::collada::CColladaDatabase::getCoronas(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9340] (33 bytes) glitch::collada::CColladaDatabase::getExternal(int)const
// int glitch::collada::CColladaDatabase::getExternal(glitch::collada::CColladaDatabase *this, int a2);
// [0xda9370] (33 bytes) glitch::collada::CColladaDatabase::getExternalBinding(int)const
// int glitch::collada::CColladaDatabase::getExternalBinding(glitch::collada::CColladaDatabase *this, int a2);
// [0xda93a0] (104 bytes) glitch::collada::CColladaDatabase::getExternalLightSceneNode(boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned short,unsigned int,char const*)const
// int glitch::collada::CColladaDatabase::getExternalLightSceneNode(int a1, int a2);
// [0xda9410] (104 bytes) glitch::collada::CColladaDatabase::getExternalLightSceneNode(boost::intrusive_ptr<glitch::video::CMaterialRenderer const> const&,unsigned short,unsigned int,char const*)const
// int glitch::collada::CColladaDatabase::getExternalLightSceneNode(int a1, int a2);
// [0xda9480] (45 bytes) glitch::collada::CColladaDatabase::getVisualScene(int)const
// int glitch::collada::CColladaDatabase::getVisualScene(glitch::collada::CColladaDatabase *this, int a2);
// [0xda94b0] (138 bytes) glitch::collada::CColladaDatabase::getDummy(char const*)const
// int glitch::collada::CColladaDatabase::getDummy(glitch::collada::CColladaDatabase *this, char *a2);
// [0xda9540] (138 bytes) glitch::collada::CColladaDatabase::getNode(char const*)const
// int glitch::collada::CColladaDatabase::getNode(glitch::collada::CColladaDatabase *this, char *a2);
// [0xda95d0] (1106 bytes) glitch::collada::CColladaDatabase::getDefaultValue(char const*,glitch::collada::SChannel::Type,void **,glitch::collada::SChannel::SReserved const*)const
// int glitch::collada::CColladaDatabase::getDefaultValue( glitch::collada::CColladaDatabase *a1, char *s2, int a3, int *a4, char **a5);
// [0xda9a30] (66 bytes) glitch::collada::CColladaDatabase::getDefaultValue(glitch::collada::SChannel const*,void **)const
// int glitch::collada::CColladaDatabase::getDefaultValue(glitch::collada::CColladaDatabase *a1, int a2, int *a3);
// [0xda9a80] (57 bytes) glitch::collada::CColladaDatabase::getDefaultValue(glitch::collada::SAnimation const*,void **)const
// int glitch::collada::CColladaDatabase::getDefaultValue(glitch::collada::CColladaDatabase *a1, int a2, int *a3);
// [0xda9ac0] (154 bytes) glitch::collada::CColladaDatabase::constructEffect(glitch::video::IVideoDriver *,glitch::collada::SEffect *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// int glitch::collada::CColladaDatabase::constructEffect(int a1, int a2);
// [0xda9b60] (108 bytes) glitch::collada::CColladaDatabase::constructEffect(glitch::video::IVideoDriver *,int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// int glitch::collada::CColladaDatabase::constructEffect( int a1, glitch::collada::CColladaDatabase *a2, int a3, int a4);
// [0xda9bd0] (171 bytes) glitch::collada::CColladaDatabase::constructEffect(glitch::video::IVideoDriver *,char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// int glitch::collada::CColladaDatabase::constructEffect( int a1, glitch::collada::CColladaDatabase *a2, int a3, char *a4);
// [0xda9c80] (744 bytes) glitch::collada::CColladaDatabase::constructMaterial(glitch::video::IVideoDriver *,glitch::collada::SMaterial *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::video **glitch::collada::CColladaDatabase::constructMaterial( glitch::video **a1, uint32_t **a2, int a3, int a4);
// [0xda9f70] (108 bytes) glitch::collada::CColladaDatabase::constructMaterial(glitch::video::IVideoDriver *,char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::video **glitch::collada::CColladaDatabase::constructMaterial( glitch::video **a1, glitch::collada::CColladaDatabase *a2, int a3, char *a4);
// [0xda9fe0] (108 bytes) glitch::collada::CColladaDatabase::constructMaterial(glitch::video::IVideoDriver *,int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::video **glitch::collada::CColladaDatabase::constructMaterial( glitch::video **a1, glitch::collada::CColladaDatabase *a2, int a3, int a4);
// [0xdaa050] (192 bytes) glitch::collada::CColladaDatabase::constructLight(glitch::collada::SLight *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::scene::CLightSceneNode **glitch::collada::CColladaDatabase::constructLight( glitch::scene::CLightSceneNode **a1, int a2, int a3, glitch::collada::CRootSceneNode **a4);
// [0xdaa110] (100 bytes) glitch::collada::CColladaDatabase::constructLight(int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::scene::CLightSceneNode **glitch::collada::CColladaDatabase::constructLight( glitch::scene::CLightSceneNode **a1, glitch::collada::CColladaDatabase *a2, int a3, glitch::collada::CRootSceneNode **a4);
// [0xdaa180] (100 bytes) glitch::collada::CColladaDatabase::constructLight(char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::scene::CLightSceneNode **glitch::collada::CColladaDatabase::constructLight( glitch::scene::CLightSceneNode **a1, glitch::collada::CColladaDatabase *a2, char *a3, glitch::collada::CRootSceneNode **a4);
// [0xdaa1f0] (192 bytes) glitch::collada::CColladaDatabase::constructCamera(glitch::collada::SCamera *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CCameraSceneNode **glitch::collada::CColladaDatabase::constructCamera( glitch::collada::CCameraSceneNode **a1, int a2, int a3, glitch::collada::CRootSceneNode **a4);
// [0xdaa2b0] (100 bytes) glitch::collada::CColladaDatabase::constructCamera(int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CCameraSceneNode **glitch::collada::CColladaDatabase::constructCamera( glitch::collada::CCameraSceneNode **a1, glitch::collada::CColladaDatabase *a2, int a3, glitch::collada::CRootSceneNode **a4);
// [0xdaa320] (100 bytes) glitch::collada::CColladaDatabase::constructCamera(char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CCameraSceneNode **glitch::collada::CColladaDatabase::constructCamera( glitch::collada::CCameraSceneNode **a1, glitch::collada::CColladaDatabase *a2, char *a3, glitch::collada::CRootSceneNode **a4);
// [0xdaa390] (13 bytes) glitch::collada::CColladaDatabase::constructCamera(glitch::collada::SInstanceCamera *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructCamera(uint32_t *a1);
// [0xdaa3a0] (192 bytes) glitch::collada::CColladaDatabase::constructGeometry(glitch::video::IVideoDriver *,glitch::collada::SGeometry *)const
// uint32_t *glitch::collada::CColladaDatabase::constructGeometry(uint32_t *a1, int a2, int a3, int a4);
// [0xdaa460] (100 bytes) glitch::collada::CColladaDatabase::constructGeometry(glitch::video::IVideoDriver *,int)const
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructGeometry( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, int a3, int a4);
// [0xdaa4d0] (100 bytes) glitch::collada::CColladaDatabase::constructGeometry(glitch::video::IVideoDriver *,char const*)const
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructGeometry( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, const char *a3, char *a4);
// [0xdaa540] (80 bytes) glitch::collada::CColladaDatabase::constructAnimator(void)const
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructAnimator( glitch::collada::CColladaDatabase *this, uint32_t **a2);
// [0xdaa590] (179 bytes) glitch::collada::CColladaDatabase::constructMorph(glitch::video::IVideoDriver *,glitch::collada::SController *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CMorphingMesh **glitch::collada::CColladaDatabase::constructMorph( glitch::collada::CMorphingMesh **a1, int a2, int a3, int a4, glitch::collada::CRootSceneNode **a5);
// [0xdaa650] (179 bytes) glitch::collada::CColladaDatabase::constructSkin(glitch::video::IVideoDriver *,glitch::collada::SController *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CSkinnedMesh **glitch::collada::CColladaDatabase::constructSkin( glitch::collada::CSkinnedMesh **a1, int a2, int a3, int a4, glitch::collada::CRootSceneNode **a5);
// [0xdaa710] (310 bytes) glitch::collada::CColladaDatabase::constructLodSelector(glitch::collada::SController *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CRootSceneNode *glitch::collada::CColladaDatabase::constructLodSelector( glitch::collada::CRootSceneNode *a1, int a2, int a3, const char **a4);
// [0xdaa850] (158 bytes) glitch::collada::CColladaDatabase::constructModularSkin(glitch::video::IVideoDriver *,glitch::collada::SInstanceModularSkin *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructModularSkin(uint32_t *a1, int a2);
// [0xdaa8f0] (213 bytes) glitch::collada::CColladaDatabase::constructController(glitch::video::IVideoDriver *,glitch::collada::SController *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CMorphingMesh **glitch::collada::CColladaDatabase::constructController( glitch::collada::CMorphingMesh **a1, int a2, int a3, uint32_t *a4, glitch::collada::CRootSceneNode **a5);
// [0xdaa9d0] (108 bytes) glitch::collada::CColladaDatabase::constructController(glitch::video::IVideoDriver *,int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CMorphingMesh **glitch::collada::CColladaDatabase::constructController( glitch::collada::CMorphingMesh **a1, glitch::collada::CColladaDatabase *a2, int a3, int a4, glitch::collada::CRootSceneNode **a5);
// [0xdaaa40] (108 bytes) glitch::collada::CColladaDatabase::constructController(glitch::video::IVideoDriver *,char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CMorphingMesh **glitch::collada::CColladaDatabase::constructController( glitch::collada::CMorphingMesh **a1, glitch::collada::CColladaDatabase *a2, int a3, char *a4, glitch::collada::CRootSceneNode **a5);
// [0xdaaab0] (120 bytes) glitch::collada::CColladaDatabase::constructCoronas(glitch::collada::SCoronas *,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructCoronas(uint32_t *a1, int a2, int a3);
// [0xdaab30] (108 bytes) glitch::collada::CColladaDatabase::constructCoronas(char const*,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructCoronas( uint32_t *a1, glitch::collada::CColladaDatabase *a2, char *a3);
// [0xdaaba0] (183 bytes) glitch::collada::CColladaDatabase::constructCoronas(glitch::collada::SInstanceCoronas *,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// int *glitch::collada::CColladaDatabase::constructCoronas( int *a1, glitch::collada::CColladaDatabase *a2, uint32_t *a3, int a4);
// [0xdaac60] (128 bytes) glitch::collada::CColladaDatabase::constructGNPSEmitter(glitch::collada::SGNPSEmitter *,glitch::video::IVideoDriver *,glitch::res::vector<glitch::res::String> *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructGNPSEmitter(uint32_t *a1, int a2, int a3);
// [0xdaace0] (116 bytes) glitch::collada::CColladaDatabase::constructGNPSEmitter(int,glitch::video::IVideoDriver *,glitch::res::vector<glitch::res::String> *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructGNPSEmitter( uint32_t *a1, glitch::collada::CColladaDatabase *a2, int a3);
// [0xdaad60] (116 bytes) glitch::collada::CColladaDatabase::constructGNPSEmitter(char const*,glitch::video::IVideoDriver *,glitch::res::vector<glitch::res::String> *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructGNPSEmitter( uint32_t *a1, glitch::collada::CColladaDatabase *a2, char *a3);
// [0xdaade0] (443 bytes) glitch::collada::CColladaDatabase::constructGNPSEmitter(glitch::collada::SInstanceGNPSEmitter *,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// int *glitch::collada::CColladaDatabase::constructGNPSEmitter( int *a1, glitch::collada::CColladaDatabase *a2, int a3, int a4, uint32_t **a5);
// [0xdaafa0] (259 bytes) glitch::collada::CColladaDatabase::constructForce(glitch::collada::SForce *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructForce(uint32_t *a1, int a2, int a3);
// [0xdab0b0] (100 bytes) glitch::collada::CColladaDatabase::constructForce(int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructForce( uint32_t *a1, glitch::collada::CColladaDatabase *a2, int a3);
// [0xdab120] (100 bytes) glitch::collada::CColladaDatabase::constructForce(char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructForce( uint32_t *a1, glitch::collada::CColladaDatabase *a2, char *a3);
// [0xdab190] (86 bytes) glitch::collada::CColladaDatabase::constructForce(glitch::collada::SInstanceForce *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructForce( uint32_t *a1, glitch::collada::CColladaDatabase *a2, int a3);
// [0xdab1f0] (174 bytes) glitch::collada::CColladaDatabase::constructAnimationPackage(char const*)const
// volatile int32_t **glitch::collada::CColladaDatabase::constructAnimationPackage( volatile int32_t **this, char *a2, char *a3);
// [0xdab2a0] (79 bytes) glitch::collada::CColladaDatabase::constructAnimatorNode(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&,glitch::collada::anim_pack::SAnimationGraphNode const&)const
// int glitch::collada::CColladaDatabase::constructAnimatorNode(int a1, int a2);
// [0xdab2f0] (162 bytes) glitch::collada::CColladaDatabase::constructAnimationSet(glitch::collada::anim_pack::SAnimationPackage *)const
// volatile int32_t **glitch::collada::CColladaDatabase::constructAnimationSet( volatile int32_t **a1, int a2, int a3);
// [0xdab3a0] (92 bytes) glitch::collada::CColladaDatabase::constructAnimationSet(char const*)const
// volatile int32_t **glitch::collada::CColladaDatabase::constructAnimationSet( volatile int32_t **this, glitch::collada::CColladaDatabase *a2, char *a3);
// [0xdab400] (71 bytes) glitch::collada::CColladaDatabase::constructIKSolver(glitch::collada::SArticulatedSystem const*)const
// int glitch::collada::CColladaDatabase::constructIKSolver(int a1, int a2);
// [0xdab450] (112 bytes) glitch::collada::CColladaDatabase::constructCommandNode(glitch::collada::SInstanceStreamingCommand *,glitch::video::IVideoDriver *)const
// int glitch::collada::CColladaDatabase::constructCommandNode( int a1, glitch::collada::CColladaDatabase *a2, int *a3);
// [0xdab4c0] (61 bytes) glitch::collada::COnDemandReader::COnDemandReader(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// volatile int32_t *glitch::collada::COnDemandReader::COnDemandReader( glitch::collada::COnDemandReader *this, volatile int32_t **a2);
// [0xdab500] (131 bytes) glitch::collada::CResFile::releaseBuffer(boost::intrusive_ptr<glitch::video::IBuffer> &)
// glitch::video::IBuffer *glitch::collada::CResFile::releaseBuffer(int a1, glitch::video::IBuffer **a2);
// [0xdab590] (649 bytes) glitch::collada::CResFile::releaseObjects(void)
// glitch::video::IBuffer *glitch::collada::CResFile::releaseObjects(glitch::collada::CResFile *this);
// [0xdab820] (118 bytes) glitch::collada::CResFileManager::CResFileManager(glitch::IDevice *)
// struct glitch::collada::CResFileManager *glitch::collada::CResFileManager::CResFileManager( glitch::collada::CResFileManager *this, glitch::IDevice *a2);
// [0xdab8a0] (769 bytes) glitch::collada::CResFileManager::getReadFile(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// glitch::collada::CResFileManager *glitch::collada::CResFileManager::getReadFile( glitch::collada::CResFileManager *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, boost::intrusive_ptr<glitch::io::IReadFile> *a3);
// [0xdabbb0] (9 bytes) glitch::collada::CResFileManager::checkVersion(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// int glitch::collada::CResFileManager::checkVersion();
// [0xdabbc0] (114 bytes) glitch::collada::CResFileManager::checkVersion(char const*)
// int glitch::collada::CResFileManager::checkVersion(glitch::collada::CResFileManager *this);
// [0xdabc40] (333 bytes) glitch::collada::CResFileManager::get(char const*)
// glitch::collada::CResFileManager *glitch::collada::CResFileManager::get( glitch::collada::CResFileManager *this, const char *a2, const char *a3);
// [0xdabd90] (248 bytes) glitch::collada::CResFileManager::unload(std::_Rb_tree_iterator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::collada::CResFile>>>,bool)
// int glitch::collada::CResFileManager::unload(int a1, int a2, char a3);
// [0xdabe90] (287 bytes) glitch::collada::CResFileManager::unload(char const*,bool)
// int glitch::collada::CResFileManager::unload(glitch::collada::CResFileManager *this, const char *a2, char a3);
// [0xdabfb0] (167 bytes) glitch::collada::CResFileManager::unload(glitch::collada::SCollada *,bool)
// int glitch::collada::CResFileManager::unload(glitch::collada::CResFileManager *a1, int a2, char a3);
// [0xdac060] (196 bytes) glitch::collada::CColladaDatabase::~CColladaDatabase()
// void glitch::collada::CColladaDatabase::~CColladaDatabase(volatile int32_t ***this);
// [0xdac130] (138 bytes) glitch::collada::CResFileManager::unloadAll(void)
// int glitch::collada::CResFileManager::unloadAll(glitch::collada::CResFileManager *this);
// [0xdac1c0] (142 bytes) glitch::collada::CTimelineController::CTimelineController(void)
// glitch::collada::CTimelineController *glitch::collada::CTimelineController::CTimelineController( glitch::collada::CTimelineController *this, int *a2);
// [0xdac250] (147 bytes) glitch::collada::CTimelineController::CTimelineController(void)
// glitch::collada::CTimelineController *glitch::collada::CTimelineController::CTimelineController( glitch::collada::CTimelineController *this);
// [0xdac2f0] (108 bytes) glitch::collada::CTimelineController::~CTimelineController()
// void glitch::collada::CTimelineController::~CTimelineController( volatile int32_t **this, volatile int32_t **a2);
// [0xdac360] (19 bytes) glitch::collada::CTimelineController::init(float,float)
// glitch::collada::CTimelineController *glitch::collada::CTimelineController::init( glitch::collada::CTimelineController *this, float a2, float a3);
// [0xdac380] (70 bytes) glitch::collada::CTimelineController::setAnimationClips(glitch::collada::SLibraryAnimationClips const*)
// int glitch::collada::CTimelineController::setAnimationClips(uint32_t *a1, uint32_t *a2);
// [0xdacf10] (403 bytes) glitch::collada::CResFile::CResFile(char const*,boost::intrusive_ptr<glitch::io::IReadFile> const&,bool)
// glitch::collada::CResFile *glitch::collada::CResFile::CResFile( glitch::collada::CResFile *this, const char *a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, bool a4);
// [0xdad290] (351 bytes) glitch::collada::CResFile::~CResFile()
// void glitch::collada::CResFile::~CResFile(glitch::collada::CResFile *this);
// [0xdad3f0] (56 bytes) glitch::collada::CResFile::~CResFile()
// void glitch::collada::CResFile::~CResFile(glitch::collada::CResFile *this);
// [0xdb1220] (152 bytes) glitch::collada::CColladaDatabase::constructImage(glitch::video::IVideoDriver *,glitch::collada::SImage *)const
// uint32_t *glitch::collada::CColladaDatabase::constructImage(uint32_t *a1, int a2, int a3, int a4);
// [0xdb12c0] (100 bytes) glitch::collada::CColladaDatabase::constructImage(glitch::video::IVideoDriver *,int)const
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructImage( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, int a3, int a4);
// [0xdb1330] (100 bytes) glitch::collada::CColladaDatabase::constructImage(glitch::video::IVideoDriver *,char const*)const
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructImage( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, const char *a3, char *a4);
// [0xdb13a0] (278 bytes) glitch::collada::CColladaDatabase::constructAllImages(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> *)const
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructAllImages( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, boost::intrusive_ptr<glitch::video::ITexture> *a3);
// [0xdb4fb0] (7631 bytes) glitch::collada::CColladaDatabase::getAnimationTrackEx(glitch::collada::SAnimation const*)
// uint32_t *glitch::collada::CColladaDatabase::getAnimationTrackEx(uint32_t *a1);
// [0xdb6d80] (4471 bytes) glitch::collada::CResFileManager::postLoadProcess(boost::intrusive_ptr<glitch::collada::CResFile> const&,glitch::collada::CColladaDatabase *,boost::intrusive_ptr<glitch::io::IReadFile> const&)
// int glitch::collada::CResFileManager::postLoadProcess( glitch::collada::CResFileManager *this, volatile int32_t ***a2, glitch::collada::CColladaDatabase *a3, const boost::intrusive_ptr<glitch::io::IReadFile> *a4);
// [0xdb7f00] (1144 bytes) glitch::collada::CResFileManager::get(char const*,glitch::collada::CColladaDatabase *,bool)
// volatile int32_t ***glitch::collada::CResFileManager::get( glitch::collada::CResFileManager *this, char *a2, glitch::collada::CColladaDatabase *a3, glitch::collada::CColladaDatabase *a4, char a5);
// [0xdb8380] (102 bytes) glitch::collada::CResFileManager::load(char const*,glitch::collada::CColladaDatabase *,bool,void (*)(char const*,glitch::collada::SCollada const*))
// glitch::collada::CResFileManager *glitch::collada::CResFileManager::load( glitch::collada::CResFileManager *a1, char *a2, glitch::collada::CColladaDatabase *a3, glitch::collada::CColladaDatabase *a4, char a5);
// [0xdb83f0] (259 bytes) glitch::collada::CColladaDatabase::constructAnimator(char const*,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructAnimator( glitch::collada::CColladaDatabase *this, glitch::collada::CColladaDatabase *a2, glitch::collada::CColladaFactory *a3);
// [0xdb8500] (205 bytes) glitch::collada::CColladaDatabase::CColladaDatabase(char const*,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::CColladaDatabase( glitch::collada::CColladaDatabase *this, glitch::collada::CColladaDatabase *a2, glitch::collada::CColladaFactory *a3);
// [0xdb85d0] (1161 bytes) glitch::collada::CResFileManager::loadLodResFiles(boost::intrusive_ptr<glitch::collada::CResFile> const&,glitch::collada::SInstance &)
// int glitch::collada::CResFileManager::loadLodResFiles(int a1, uint32_t **a2, uint32_t *a3);
// [0xdb8a60] (198 bytes) glitch::collada::CResFileManager::loadLodResFiles(boost::intrusive_ptr<glitch::collada::CResFile> const&,glitch::collada::SNode &)
// int glitch::collada::CResFileManager::loadLodResFiles(int a1, uint32_t **a2, int a3);
// [0xdb8b30] (570 bytes) glitch::collada::CResFileManager::get(boost::intrusive_ptr<glitch::collada::CResFile> const&,glitch::collada::CColladaDatabase *,char const*,bool)
// glitch::collada::CResFileManager *glitch::collada::CResFileManager::get( glitch::collada::CResFileManager *this, const boost::intrusive_ptr<glitch::collada::CResFile> *a2, glitch::collada::CColladaDatabase *a3, glitch::collada::CColladaDatabase *a4, glitch::collada::CColladaDatabase *a5, char a6);
// [0xdb8d70] (465 bytes) glitch::collada::CColladaDatabase::constructGeometry(glitch::video::IVideoDriver *,char const*,char const*)const
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructGeometry( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, char *a3, glitch::collada::CColladaDatabase *a4, char *a5);
// [0xdb8f50] (204 bytes) glitch::collada::CColladaDatabase::CColladaDatabase(glitch::collada::CColladaDatabase const*,char const*,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::CColladaDatabase( glitch::collada::CColladaDatabase *this, const glitch::collada::CColladaDatabase *a2, glitch::collada::CColladaDatabase *a3, glitch::collada::CColladaFactory *a4);
// [0xdb9020] (108 bytes) glitch::collada::CColladaDatabase::getMaterial(char const*,char const*)const
// const char **glitch::collada::CColladaDatabase::getMaterial( glitch::collada::CColladaDatabase *this, glitch::collada::CColladaDatabase *a2, char *a3);
// [0xdb9090] (1048 bytes) glitch::collada::CColladaDatabase::constructController(glitch::video::IVideoDriver *,glitch::collada::SInstanceController *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&,bool)const
// glitch::collada::CMorphingMesh **glitch::collada::CColladaDatabase::constructController( glitch::collada::CMorphingMesh **a1, glitch::collada::CColladaDatabase *a2, int a3, int a4, glitch::collada::CRootSceneNode **a5);
// [0xdb94b0] (709 bytes) glitch::collada::CColladaDatabase::constructGeometry(glitch::video::IVideoDriver *,glitch::collada::SInstanceGeometry *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// volatile int32_t **glitch::collada::CColladaDatabase::constructGeometry( volatile int32_t **a1, glitch::collada::CColladaDatabase *a2, char *a3, int a4, char **a5);
// [0xdb9780] (848 bytes) glitch::collada::CResFileManager::get(boost::intrusive_ptr<glitch::io::IReadFile> const&,glitch::collada::CColladaDatabase *,bool,bool)
// volatile int32_t ***glitch::collada::CResFileManager::get( glitch::collada::CResFileManager *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, glitch::collada::CColladaDatabase *a3, glitch::collada::CColladaDatabase *a4, bool a5, char a6);
// [0xdb9ad0] (118 bytes) glitch::collada::CResFileManager::load(boost::intrusive_ptr<glitch::io::IReadFile> const&,glitch::collada::CColladaDatabase *,bool,void (*)(char const*,glitch::collada::SCollada const*),bool)
// glitch::collada::CResFileManager *glitch::collada::CResFileManager::load( glitch::collada::CResFileManager *a1, boost::intrusive_ptr<glitch::io::IReadFile> *a2, glitch::collada::CColladaDatabase *a3, glitch::collada::CColladaDatabase *a4, char a5, int a6, char a7);
// [0xdb9b50] (275 bytes) glitch::collada::CColladaDatabase::constructAnimator(boost::intrusive_ptr<glitch::io::IReadFile> const&,bool,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructAnimator( glitch::collada::CColladaDatabase *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, char a3, glitch::collada::CColladaFactory *a4);
// [0xdb9c70] (275 bytes) glitch::collada::CColladaDatabase::constructAnimator(boost::intrusive_ptr<glitch::io::IReadFile> const&,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructAnimator( glitch::collada::CColladaDatabase *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, glitch::collada::CColladaFactory *a3);
// [0xdb9d90] (216 bytes) glitch::collada::CColladaDatabase::CColladaDatabase(boost::intrusive_ptr<glitch::io::IReadFile> const&,bool,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::CColladaDatabase( glitch::collada::CColladaDatabase *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, char a3, glitch::collada::CColladaFactory *a4);
// [0xdb9e70] (213 bytes) glitch::collada::CColladaDatabase::CColladaDatabase(boost::intrusive_ptr<glitch::io::IReadFile> const&,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::CColladaDatabase( glitch::collada::CColladaDatabase *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, glitch::collada::CColladaFactory *a3);
// [0xdbd570] (92 bytes) glitch::collada::CResFileManager::~CResFileManager()
// void glitch::collada::CResFileManager::~CResFileManager(glitch::collada::CResFileManager *this);
// [0xdbd5d0] (56 bytes) glitch::collada::CResFileManager::~CResFileManager()
// void glitch::collada::CResFileManager::~CResFileManager(glitch::collada::CResFileManager *this);
// [0xdc1d80] (1347 bytes) glitch::collada::CColladaDatabase::fillLodSceneNode(glitch::collada::SInstanceNodeLod *,glitch::scene::SLodNode *,glitch::scene::SLodNode *,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// int glitch::collada::CColladaDatabase::fillLodSceneNode(int a1, uint32_t *a2, int a3, int a4, int a5, int a6);
// [0xdc22d0] (9317 bytes) glitch::collada::CColladaDatabase::constructNode(glitch::video::IVideoDriver *,glitch::collada::SNode *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// uint32_t *glitch::collada::CColladaDatabase::constructNode( uint32_t *a1, glitch::collada::CColladaDatabase *a2, glitch::video::IVideoDriver *a3, int *a4, glitch::collada::CRootSceneNode **a5);
// [0xdc4740] (268 bytes) glitch::collada::CColladaDatabase::constructVisualScene(glitch::video::IVideoDriver *,glitch::collada::SVisualScene *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CRootSceneNode **glitch::collada::CColladaDatabase::constructVisualScene( glitch::collada::CRootSceneNode **a1, glitch::collada::CColladaDatabase *a2, glitch::video::IVideoDriver *a3, uint32_t *a4, glitch::collada::CRootSceneNode **a5);
// [0xdc4850] (232 bytes) glitch::collada::CColladaDatabase::constructVisualScene(glitch::video::IVideoDriver *,glitch::collada::SVisualScene *)const
// glitch::collada::CRootSceneNode **glitch::collada::CColladaDatabase::constructVisualScene( glitch::collada::CRootSceneNode **a1, glitch::collada::CColladaDatabase *a2, glitch::video::IVideoDriver *a3, uint32_t *a4);
// [0xdc4940] (100 bytes) glitch::collada::CColladaDatabase::constructVisualScene(glitch::video::IVideoDriver *,int)const
// glitch::collada::CRootSceneNode **glitch::collada::CColladaDatabase::constructVisualScene( glitch::collada::CRootSceneNode **this, glitch::video::IVideoDriver *a2, glitch::video::IVideoDriver *a3, int a4);
// [0xdc49b0] (100 bytes) glitch::collada::CColladaDatabase::constructVisualScene(glitch::video::IVideoDriver *,char const*)const
// glitch::collada::CRootSceneNode **glitch::collada::CColladaDatabase::constructVisualScene( glitch::collada::CRootSceneNode **this, glitch::video::IVideoDriver *a2, glitch::video::IVideoDriver *a3, char *a4);
// [0xdc4a20] (108 bytes) glitch::collada::CColladaDatabase::constructVisualScene(glitch::video::IVideoDriver *,int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CRootSceneNode **glitch::collada::CColladaDatabase::constructVisualScene( glitch::collada::CRootSceneNode **a1, glitch::collada::CColladaDatabase *a2, glitch::video::IVideoDriver *a3, int a4, glitch::collada::CRootSceneNode **a5);
// [0xdc4a90] (108 bytes) glitch::collada::CColladaDatabase::constructVisualScene(glitch::video::IVideoDriver *,char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// glitch::collada::CRootSceneNode **glitch::collada::CColladaDatabase::constructVisualScene( glitch::collada::CRootSceneNode **a1, glitch::collada::CColladaDatabase *a2, glitch::video::IVideoDriver *a3, char *a4, glitch::collada::CRootSceneNode **a5);
// [0xdc4b00] (699 bytes) glitch::collada::CColladaDatabase::constructScene(glitch::video::IVideoDriver *,unsigned int)const
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructScene( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, glitch::video::IVideoDriver *a3, unsigned int a4);
// [0xdc4dc0] (283 bytes) glitch::collada::CColladaDatabase::constructScene(glitch::video::IVideoDriver *,char const*,unsigned int,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructScene( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, glitch::collada::CColladaDatabase *a3, unsigned int a4, volatile int32_t **a5);
// [0xdc4ee0] (88 bytes) glitch::collada::CColladaDatabase::constructScene(glitch::video::IVideoDriver *,char const*,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructScene( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, char *a3, volatile int32_t **a4);
// [0xdc4f40] (299 bytes) glitch::collada::CColladaDatabase::constructScene(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::io::IReadFile> const&,unsigned int,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructScene( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, unsigned int a4, volatile int32_t **a5);
// [0xdc5070] (310 bytes) glitch::collada::CColladaDatabase::constructNode(glitch::video::IVideoDriver *,glitch::collada::SNode *)const
// glitch::collada::CRootSceneNode **glitch::collada::CColladaDatabase::constructNode( glitch::collada::CRootSceneNode **a1, glitch::collada::CColladaDatabase *a2, int a3, int a4);
// [0xdc51b0] (100 bytes) glitch::collada::CColladaDatabase::constructNode(glitch::video::IVideoDriver *,char const*)const
// glitch::collada::CRootSceneNode **glitch::collada::CColladaDatabase::constructNode( glitch::collada::CRootSceneNode **this, glitch::video::IVideoDriver *a2, const char *a3, char *a4);
// [0xdc5220] (275 bytes) glitch::collada::CColladaDatabase::constructNode(glitch::video::IVideoDriver *,char const*,char const*,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructNode( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, glitch::collada::CColladaDatabase *a3, char *a4, volatile int32_t **a5);
// [0xdc5340] (280 bytes) glitch::collada::CColladaDatabase::constructNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::io::IReadFile> const&,char const*,bool,glitch::collada::CColladaFactory *)
// glitch::collada::CRootSceneNode **glitch::collada::CColladaDatabase::constructNode( glitch::collada::CRootSceneNode **this, glitch::video::IVideoDriver *a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, char *a4, char a5, volatile int32_t **a6);
// [0xdc5460] (283 bytes) glitch::collada::CColladaDatabase::constructNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::io::IReadFile> const&,char const*,glitch::collada::CColladaFactory *)
// glitch::collada::CColladaDatabase *glitch::collada::CColladaDatabase::constructNode( glitch::collada::CColladaDatabase *this, glitch::video::IVideoDriver *a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, char *a4, volatile int32_t **a5);
// [0xdcb9f0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion, glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>> *this);
// [0xdcba10] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion, glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>> *this);
// [0xdcba30] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion, glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>> *this);
// [0xdcba50] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>> *this);
// [0xdcba70] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *this);
// [0xdcba90] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *this);
// [0xdcbab0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *this);
// [0xdcbad0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *this);
// [0xdcbaf0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *this);
// [0xdcbb10] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>, 0, float>>> *this);
// [0xdcbb30] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *this);
// [0xdcbb50] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *this);
// [0xdcbb70] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>, 1, float>>> *this);
// [0xdcbb90] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *this);
// [0xdcbbb0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *this);
// [0xdcbbd0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>, 2, float>>> *this);
// [0xdcbbf0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *this);
// [0xdcbc10] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *this);
// [0xdcbc30] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *this);
// [0xdcbc50] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *this);
// [0xdcbc70] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *this);
// [0xdcbc90] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>, 0, float>>> *this);
// [0xdcbcb0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *this);
// [0xdcbcd0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *this);
// [0xdcbcf0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>, 1, float>>> *this);
// [0xdcbd10] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *this);
// [0xdcbd30] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *this);
// [0xdcbd50] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>, 2, float>>> *this);
// [0xdcbd70] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *this);
// [0xdcbd90] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *this);
// [0xdcbdb0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>> *this);
// [0xdcbdd0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>> *this);
// [0xdcbdf0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>> *this);
// [0xdcbe10] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>> *this);
// [0xdcbe30] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CLightColorMixin<unsigned char>>> *this);
// [0xdcbe50] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CLightIntensityMixin<float>>> *this);
// [0xdcbe70] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *this);
// [0xdcbe90] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>, 0, float>>> *this);
// [0xdcbeb0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>, 1, float>>> *this);
// [0xdcbed0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>, 2, float>>> *this);
// [0xdcbef0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, -1, unsigned char>>> *this);
// [0xdcbf10] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5], glitch::collada::animation_track::CEmitterParamMixin<float, 5>>> *this);
// [0xdcbf30] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CMixin<float, 1, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float, float>>, -1, float>>> *this);
// [0xdcbf50] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2], glitch::collada::animation_track::CMixin<float, 2, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2], float [2]>>, -1, float>>> *this);
// [0xdcbf70] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2], glitch::collada::animation_track::CMixin<float, 2, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2], float [2]>>, 0, float>>> *this);
// [0xdcbf90] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2], glitch::collada::animation_track::CMixin<float, 2, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2], float [2]>>, 1, float>>> *this);
// [0xdcbfb0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *this);
// [0xdcbfd0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, 0, float>>> *this);
// [0xdcbff0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, -1, float>>> *this);
// [0xdcc010] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 0, float>>> *this);
// [0xdcc030] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 1, float>>> *this);
// [0xdcc050] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 2, float>>> *this);
// [0xdcc070] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 3, float>>> *this);
// [0xdcc090] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 0, unsigned char>>> *this);
// [0xdcc0b0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 1, unsigned char>>> *this);
// [0xdcc0d0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 2, unsigned char>>> *this);
// [0xdcc0f0] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 3, unsigned char>>> *this);
// [0xdcc110] (27 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::~CVirtualEx()
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::~CVirtualEx( glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3], glitch::collada::animation_track::CMixin<unsigned char, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3], glitch::video::SColor>>, -1, unsigned char>>> *this);
// [0xdcc170] (27 bytes) glitch::collada::CEventsManager::~CEventsManager()
// void glitch::collada::CEventsManager::~CEventsManager(glitch::collada::CEventsManager *this);
// [0xdcc1d0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getValueSize();
// [0xdcc1e0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getType();
// [0xdcc1f0] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::retrieveValue();
// [0xdcc200] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::getValueSize();
// [0xdcc210] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::getType();
// [0xdcc220] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::retrieveValue();
// [0xdcc230] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::getValueSize();
// [0xdcc240] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::getType();
// [0xdcc250] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::retrieveValue();
// [0xdcc260] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::getValueSize();
// [0xdcc270] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::getType();
// [0xdcc280] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::retrieveValue();
// [0xdcc290] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::getValueSize();
// [0xdcc2a0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::getType();
// [0xdcc2b0] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::retrieveValue();
// [0xdcc2c0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::getValueSize();
// [0xdcc2d0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::getType();
// [0xdcc2e0] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::retrieveValue();
// [0xdcc2f0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::getValueSize();
// [0xdcc300] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::getType();
// [0xdcc310] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::retrieveValue();
// [0xdcc320] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::getValueSize();
// [0xdcc330] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::getType();
// [0xdcc340] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::retrieveValue();
// [0xdcc350] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::getValueSize();
// [0xdcc360] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::getType();
// [0xdcc370] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::retrieveValue();
// [0xdcc380] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getValueSize();
// [0xdcc390] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getType();
// [0xdcc3a0] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::retrieveValue();
// [0xdcc3b0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getValueSize();
// [0xdcc3c0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getType();
// [0xdcc3d0] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::retrieveValue();
// [0xdcc3e0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getValueSize();
// [0xdcc3f0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getType();
// [0xdcc400] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::retrieveValue();
// [0xdcc410] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::getValueSize();
// [0xdcc420] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::getType();
// [0xdcc430] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::retrieveValue();
// [0xdcc440] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::getValueSize();
// [0xdcc450] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::getType();
// [0xdcc460] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::retrieveValue();
// [0xdcc470] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::getValueSize();
// [0xdcc480] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::getType();
// [0xdcc490] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::retrieveValue();
// [0xdcc4a0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getValueSize();
// [0xdcc4b0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getType();
// [0xdcc4c0] (9 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::retrieveValue(void *,void *)const
// void glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::retrieveValue();
// [0xdcc4d0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getValueSize();
// [0xdcc4e0] (434 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getHandledValue(void const*,int,glitch::collada::SAnimationTrackHandlingType,void *)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getHandledValue( int a1, int a2, int a3, uint8_t a4, int a5);
// [0xdcc6a0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getType();
// [0xdcc6b0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getValueSize(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getValueSize();
// [0xdcc6c0] (12 bytes) glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getType(void)const
// int glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getType();
