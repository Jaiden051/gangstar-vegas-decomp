#include "Core/Utils/DecompTypes.h"
#include "glitch_collada_part04.h"

// === [b26_collada04_r3] Namespace forward declarations ===
namespace glitch { namespace collada {
struct CResFile {
  uint8_t opaque[256];
  static glitch::video::IBuffer::Self *releaseBuffer(int a1, glitch::video::IBuffer::Self **a2);
  static glitch::video::IBuffer::Self *releaseObjects(CResFile *self);
  static CResFile *Construct(CResFile *self, const char *a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, bool a4);
};
namespace CAnimationStreamingManager {
  static inline uint32_t *release(glitch::collada::CAnimationStreamingManager::Self *self, glitch::collada::CColladaDatabase::Self *a2) { (void)self; (void)a2; return nullptr; }
}
namespace CParticleSystemEmitterSceneNode {
  template <typename A1, typename A2, typename A3> static inline int init(A1, A2, A3) { return 0; }
}
namespace CLODMeshSceneNode {
  template <typename... Args> static inline void CLODMeshSceneNode(Args...) {}
}
namespace CRootSceneNode {
  static inline int onPostLoad(glitch::collada::CRootSceneNode::Self *self) { (void)self; return 0; }
  template <typename A1, typename A2, typename A3> static inline char *resolveExternals(A1, A2, A3) { return nullptr; }
}
namespace animation_track { namespace CVirtualEx_collada_animation_track_5149af {
  uint32_t *getInstance();
} }
namespace CColladaDatabase {
  int getVersion(glitch::collada::CColladaDatabase::Self *self);
  const char ** getAnimation(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getAnimationClip(glitch::collada::CColladaDatabase::Self *self, char *s2);
  int getArticulatedSystem(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getKinematicsModel(glitch::collada::CColladaDatabase::Self *self, char *s2);
  int getAnimationSegment(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getAnimationClipLibrary(glitch::collada::CColladaDatabase::Self *self);
  const char ** getCamera(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getLight(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getImage(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getEffect(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getMaterial(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getGeometry(glitch::collada::CColladaDatabase::Self *self, char *s2);
  int getController(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getForce(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getCoronas(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** getVisualScene(glitch::collada::CColladaDatabase::Self *self, char *s2);
  const char ** find(glitch::collada::CColladaDatabase::Self *self, char *a2, unsigned int *a3);
  const char ** getAnimationPackage(glitch::collada::CColladaDatabase::Self *self, char *s2);
  int getScene(glitch::collada::CColladaDatabase::Self *self);
  int getStreamingCommand(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getAnimation(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getAnimation(glitch::collada::CColladaDatabase::Self *a1, char *s2, unsigned int a3, const char **a4);
  int getBlendableAnimation(glitch::collada::CColladaDatabase::Self *a1, int a2);
  int getBlendableAnimation_ead8fb0(glitch::collada::CColladaDatabase::Self *a1, int a2);
  int getAnimation(glitch::collada::CColladaDatabase::Self *a1, char *a2, int a3, char *s2);
  int getAnimationClip(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getArticulatedSystem(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getKinematicsModel(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getCamera(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getLight(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getImage(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getEffect(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getMaterial(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getGeometry(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getController(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getForce(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getAnimationPackage(glitch::collada::CColladaDatabase::Self *self, int a2);
  const char ** getGNPSEmitter(glitch::collada::CColladaDatabase::Self *self, char *s2);
  int getGNPSEmitter(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getCoronas(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getExternal(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getExternalBinding(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getVisualScene(glitch::collada::CColladaDatabase::Self *self, int a2);
  int getDummy(glitch::collada::CColladaDatabase::Self *self, char *a2);
  int getNode(glitch::collada::CColladaDatabase::Self *self, char *a2);
  int getDefaultValue(glitch::collada::CColladaDatabase::Self *a1, char *s2, int a3, int *a4, char **a5);
  int getDefaultValue(glitch::collada::CColladaDatabase::Self *a1, int a2, int *a3);
  int getDefaultValue_ead9a80(glitch::collada::CColladaDatabase::Self *a1, int a2, int *a3);
  int constructEffect(int a1, glitch::collada::CColladaDatabase::Self *a2, int a3, int a4);
  int constructEffect(int a1, glitch::collada::CColladaDatabase::Self *a2, int a3, char *a4);
  glitch::video::Self ** constructMaterial(glitch::video::Self **a1, uint32_t **a2, int a3, int a4);
  glitch::video::Self ** constructMaterial(glitch::video::Self **a1, glitch::collada::CColladaDatabase::Self *a2, int a3, char *a4);
  glitch::video::Self ** constructMaterial(glitch::video::Self **a1, glitch::collada::CColladaDatabase::Self *a2, int a3, int a4);
  glitch::scene::CLightSceneNode::Self ** constructLight(glitch::scene::CLightSceneNode::Self **a1, int a2, int a3, glitch::collada::CRootSceneNode::Self **a4);
  glitch::scene::CLightSceneNode::Self ** constructLight(glitch::scene::CLightSceneNode::Self **a1, glitch::collada::CColladaDatabase::Self *a2, int a3, glitch::collada::CRootSceneNode::Self **a4);
  glitch::scene::CLightSceneNode::Self ** constructLight(glitch::scene::CLightSceneNode::Self **a1, glitch::collada::CColladaDatabase::Self *a2, char *a3, glitch::collada::CRootSceneNode::Self **a4);
  glitch::collada::CCameraSceneNode ** constructCamera(glitch::collada::CCameraSceneNode **a1, int a2, int a3, glitch::collada::CRootSceneNode::Self **a4);
  glitch::collada::CCameraSceneNode ** constructCamera(glitch::collada::CCameraSceneNode **a1, glitch::collada::CColladaDatabase::Self *a2, int a3, glitch::collada::CRootSceneNode::Self **a4);
  glitch::collada::CCameraSceneNode ** constructCamera(glitch::collada::CCameraSceneNode **a1, glitch::collada::CColladaDatabase::Self *a2, char *a3, glitch::collada::CRootSceneNode::Self **a4);
  uint32_t * constructCamera(uint32_t *a1);
  uint32_t * constructGeometry(uint32_t *a1, int a2, int a3, int a4);
  glitch::collada::CColladaDatabase::Self * constructGeometry(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, int a3, int a4);
  glitch::collada::CColladaDatabase::Self * constructGeometry(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, const char *a3, char *a4);
  glitch::collada::CColladaDatabase::Self * constructAnimator(glitch::collada::CColladaDatabase::Self *self, uint32_t **a2);
  glitch::collada::CMorphingMesh::Self ** constructMorph(glitch::collada::CMorphingMesh::Self **a1, int a2, int a3, int a4, glitch::collada::CRootSceneNode::Self **a5);
  glitch::collada::CSkinnedMesh::Self ** constructSkin(glitch::collada::CSkinnedMesh::Self **a1, int a2, int a3, int a4, glitch::collada::CRootSceneNode::Self **a5);
  glitch::collada::CRootSceneNode::Self * constructLodSelector(glitch::collada::CRootSceneNode::Self *a1, int a2, int a3, const char **a4);
  uint32_t * constructModularSkin(uint32_t *a1, int a2);
  glitch::collada::CMorphingMesh::Self ** constructController(glitch::collada::CMorphingMesh::Self **a1, int a2, int a3, uint32_t *a4, glitch::collada::CRootSceneNode::Self **a5);
  glitch::collada::CMorphingMesh::Self ** constructController(glitch::collada::CMorphingMesh::Self **a1, glitch::collada::CColladaDatabase::Self *a2, int a3, char *a4, glitch::collada::CRootSceneNode::Self **a5);
  uint32_t * constructCoronas(uint32_t *a1, int a2, int a3);
  uint32_t * constructCoronas(uint32_t *a1, glitch::collada::CColladaDatabase::Self *a2, char *a3);
  int * constructCoronas(int *a1, glitch::collada::CColladaDatabase::Self *a2, uint32_t *a3, int a4);
  uint32_t * constructGNPSEmitter(uint32_t *a1, int a2, int a3);
  uint32_t * constructGNPSEmitter(uint32_t *a1, glitch::collada::CColladaDatabase::Self *a2, int a3);
  uint32_t * constructGNPSEmitter(uint32_t *a1, glitch::collada::CColladaDatabase::Self *a2, char *a3);
  int * constructGNPSEmitter(int *a1, glitch::collada::CColladaDatabase::Self *a2, int a3, int a4, uint32_t **a5);
  uint32_t * constructForce(uint32_t *a1, int a2, int a3);
  uint32_t * constructForce(uint32_t *a1, glitch::collada::CColladaDatabase::Self *a2, int a3);
  uint32_t * constructForce_eadab190(uint32_t *a1, glitch::collada::CColladaDatabase::Self *a2, int a3);
  uint32_t * constructForce(uint32_t *a1, glitch::collada::CColladaDatabase::Self *a2, char *a3);
  volatile int32_t ** constructAnimationPackage(volatile int32_t **self, char *a2, char *a3);
  volatile int32_t ** constructAnimationSet(volatile int32_t **a1, int a2, int a3);
  volatile int32_t ** constructAnimationSet(volatile int32_t **self, glitch::collada::CColladaDatabase::Self *a2, char *a3);
  int constructCommandNode(int a1, glitch::collada::CColladaDatabase::Self *a2, int *a3);
  uint32_t * constructImage(uint32_t *a1, int a2, int a3, int a4);
  glitch::collada::CColladaDatabase::Self * constructImage(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, int a3, int a4);
  glitch::collada::CColladaDatabase::Self * constructImage(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, const char *a3, char *a4);
  glitch::collada::CColladaDatabase::Self * constructAllImages(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3);
  uint32_t * getAnimationTrackEx(uint32_t *a1);
  int getBlendableAnimation_ead8fb0(glitch::collada::CColladaDatabase::Self *a1, int a2);
  int getExternalLightSceneNode_ead9410(int a1, int a2);
  int getDefaultValue_ead9a80(glitch::collada::CColladaDatabase::Self *a1, int a2, int *a3);
  glitch::collada::CMorphingMesh::Self ** constructController_eadb9090(glitch::collada::CMorphingMesh::Self **a1, glitch::collada::CColladaDatabase::Self *a2, int a3, int a4, glitch::collada::CRootSceneNode::Self **a5);
  template <typename A1> static inline uint32_t *constructNode(A1 a1) { if (a1) *(uintptr_t *)a1 = 0; return (uint32_t *)(uintptr_t)a1; }
  template <typename A1, typename A2, typename A3> static inline uint32_t *constructNode(A1 a1, A2, A3) { if (a1) *(uintptr_t *)a1 = 0; return (uint32_t *)(uintptr_t)a1; }
}
namespace CEventsManager {
  glitch::collada::CEventsManager::Self * onTimeJump(glitch::collada::CEventsManager::Self *self);
  int getEventTimeFromEventName(glitch::collada::CEventsManager::Self *self, const char *s1);
  void onUpdate(glitch::collada::CEventsManager::Self *self, float a2, float a3, float a4, float a5);
  glitch::collada::CEventsManager::Self * onUpdate(glitch::collada::CEventsManager::Self *self, float a2, float a3);
}
namespace COnDemandReader {
  int read(glitch::collada::COnDemandReader::Self *self, int a2, int a3, void *a4);
  int read_ead8a610(glitch::collada::COnDemandReader::Self *self, int a2, int a3, void *a4);
  void Destroy(volatile int32_t **self);
  volatile int32_t * COnDemandReader(glitch::collada::COnDemandReader::Self *self, volatile int32_t **a2);
}
namespace CResFileManager {
  struct glitch::collada::CResFileManager::Self * CResFileManager(glitch::collada::CResFileManager::Self *self, glitch::IDevice::Self *a2);
  glitch::collada::CResFileManager::Self * getReadFile(glitch::collada::CResFileManager::Self *self, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, boost::intrusive_ptr<glitch::io::IReadFile> *a3);
  int checkVersion(glitch::collada::CResFileManager::Self *self);
  glitch::collada::CResFileManager::Self * get(glitch::collada::CResFileManager::Self *self, const char *a2, const char *a3);
  int unload(glitch::collada::CResFileManager::Self *self, const char *a2, char a3);
  int unload(glitch::collada::CResFileManager::Self *a1, int a2, char a3);
  int unloadAll(glitch::collada::CResFileManager::Self *self);
}
namespace CResFileReader {
  int tell(glitch::collada::CResFileReader::Self *self);
  int read(glitch::collada::CResFileReader::Self *self, void *a2, unsigned int a3);
  int seek(glitch::collada::CResFileReader::Self *self, int a2, bool a3);
  int getSize(glitch::collada::CResFileReader::Self *self);
}
namespace CSceneNodeAnimatorBlender {
  unsigned int addAnimator(glitch::collada::CSceneNodeAnimatorBlender::Self *self, volatile int32_t **a2);
}
namespace CTimelineController {
  bool willReachClipEnd(glitch::collada::CTimelineController::Self *self, float a2);
  int setClip(glitch::collada::CTimelineController::Self *self, const char *a2);
  int getClipCount(glitch::collada::CTimelineController::Self *self);
  long double getClipStart(glitch::collada::CTimelineController::Self *self, int a2);
  long double getClipEnd(glitch::collada::CTimelineController::Self *self, int a2);
  long double getClipLength(glitch::collada::CTimelineController::Self *self, int a2);
  int getCurrentClipStart(glitch::collada::CTimelineController::Self *self);
  int getCurrentClipEnd(glitch::collada::CTimelineController::Self *self);
  int getCurrentClipLength(glitch::collada::CTimelineController::Self *self);
  int getCurrentClipIndex(glitch::collada::CTimelineController::Self *self);
  long double getCurrentClipReferenceTime(glitch::collada::CTimelineController::Self *self);
  void * getClipName(glitch::collada::CTimelineController::Self *self, int a2);
  glitch::collada::CTimelineController::Self * setLoop(glitch::collada::CTimelineController::Self *self, bool a2);
  int getLoop(glitch::collada::CTimelineController::Self *self);
  long double getScale(glitch::collada::CTimelineController::Self *self);
  glitch::collada::CTimelineController::Self * setScale(glitch::collada::CTimelineController::Self *self, float a2);
  int setEventsCallback(int a1, int a2, int a3);
  int update(glitch::collada::CTimelineController::Self *self, float a2);
  glitch::collada::CTimelineController::Self * setRange(glitch::collada::CTimelineController::Self *self, float a2, float a3, bool a4);
  int setClip(glitch::collada::CTimelineController::Self *self, int a2);
  int jumpTo(glitch::collada::CTimelineController::Self *self, float a2);
  int getClipIndex(glitch::collada::CTimelineController::Self *self, char *s2);
  void Destroy(glitch::collada::CTimelineController::Self *self);
  volatile int32_t * setEventsManager(glitch::collada::CTimelineController::Self *self, glitch::scene::IEventsManager::Self *a2);
  glitch::collada::CTimelineController::Self * Construct(glitch::collada::CTimelineController::Self *self, int *a2);
  glitch::collada::CTimelineController::Self * Construct(glitch::collada::CTimelineController::Self *self);
  void Destroy(volatile int32_t **self, volatile int32_t **a2);
  glitch::collada::CTimelineController::Self * init(glitch::collada::CTimelineController::Self *self, float a2, float a3);
  int setAnimationClips(uint32_t *a1, uint32_t *a2);
}
} } // namespace glitch::collada
// === end [b26_collada04_r3] ===

static inline void g4_CSceneNodeAnimatorBlender_Destroy(void *, int *) {}
static void g4_CModularSkinnedMeshSceneNode_Destroy_d826d0(glitch::collada::CModularSkinnedMeshSceneNode::Self *self);
static void g4_CSkinnedMeshSceneNode_dtor_d82770(glitch::collada::CSkinnedMeshSceneNode *self);
static void g4_CSceneNodeAnimatorTrackBlender_Destroy_d82c60(glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self);
static void g4_CLODMeshSceneNode_Destroy_d838b0(glitch::collada::CLODMeshSceneNode::Self *self);

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CWeightEx::getBlendedValue  (binary VA: 0xd7db40)
// Original: glitch::collada::animation_track::CWeightEx::getBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CWeightEx::getBlendedValue(glitch::collada::animation_track::CWeightEx::Self *self, float *a2, const float *a3, int a4, float *a5)
{
  int result;
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0;
  *a5 = 0.0;
  if ( a4 > 0 )
  {
    v6 = 0.0;
    for ( result = 0; result != a4; ++result )
    {
      v7 = a3[result] * a2[result];
      v6 = v6 + v7;
      *a5 = v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CWeightEx::getAddedValue  (binary VA: 0xd7db90)
// Original: glitch::collada::animation_track::CWeightEx::getAddedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CWeightEx::getAddedValue(glitch::collada::animation_track::CWeightEx::Self *self, float *a2, const float *a3, int a4, float *a5)
{
  int result;
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0;
  *a5 = 0.0;
  if ( a4 > 0 )
  {
    v6 = 0.0;
    for ( result = 0; result != a4; ++result )
    {
      v7 = a3[result] * a2[result];
      v6 = v6 + v7;
      *a5 = v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CWeightEx::applyBlendedValue  (binary VA: 0xd7dbe0)
// Original: glitch::collada::animation_track::CWeightEx::applyBlendedValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CWeightEx::applyBlendedValue(glitch::collada::animation_track::CWeightEx::Self *self, float *a2, const float *a3, int a4, float *a5)
{
  int result;
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0;
  *a5 = 0.0;
  if ( a4 > 0 )
  {
    v6 = 0.0;
    for ( result = 0; result != a4; ++result )
    {
      v7 = a3[result] * a2[result];
      v6 = v6 + v7;
      *a5 = v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::remAnimation  (binary VA: 0xd7dc60)
// Original: glitch::collada::CAnimationSet::remAnimation
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationSet::remAnimation()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::getChannel  (binary VA: 0xd7dc70)
// Original: glitch::collada::CAnimationSet::getChannel
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationSet::getChannel(glitch::collada::CAnimationSet::Self *self, unsigned int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 3) + 4 * a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::getChannel_ead7dc80  (binary VA: 0xd7dc80)
// Original: glitch::collada::CAnimationSet::getChannel
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationSet::getChannel_ead7dc80(glitch::collada::CAnimationSet::Self *self, unsigned int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 3) + 4 * a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::getAnimationTrack  (binary VA: 0xd7dc90)
// Original: glitch::collada::CAnimationSet::getAnimationTrack
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationSet::getAnimationTrack(glitch::collada::CAnimationSet::Self *self, int a2)
{
  return G4_VCALL<int>(self, 56, a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationSet::getAnimationTrackEx  (binary VA: 0xd7dcb0)
// Original: glitch::collada::CAnimationSet::getAnimationTrackEx
// ----------------------------------------------------------------------------
int glitch::collada::CAnimationSet::getAnimationTrackEx(glitch::collada::CAnimationSet::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 6) + 4 * a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorSet::getAnimationSet  (binary VA: 0xd7dcc0)
// Original: glitch::collada::CSceneNodeAnimatorSet::getAnimationSet
// ----------------------------------------------------------------------------
char * glitch::collada::CSceneNodeAnimatorSet::getAnimationSet(glitch::collada::CSceneNodeAnimatorSet::Self *self)
{
  return (char *)self + 40;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::IForce::Destroy  (binary VA: 0xd7dcd0)
// Original: glitch::collada::ps::IForce::~IForce
// ----------------------------------------------------------------------------
void glitch::collada::ps::IForce::Destroy(glitch::collada::ps::IForce::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSceneNodeAnimatorBlender::compile  (binary VA: 0xd7dcf0)
// Original: glitch::collada::CSceneNodeAnimatorBlender::compile
// ----------------------------------------------------------------------------
void glitch::collada::CSceneNodeAnimatorBlender::compile()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CMaterialApplicatorInfo::Destroy  (binary VA: 0xd7dd90)
// Original: glitch::collada::animation_track::CMaterialApplicatorInfo::~CMaterialApplicatorInfo
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CMaterialApplicatorInfo::Destroy(glitch::collada::animation_track::CMaterialApplicatorInfo::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079508);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CParametricControllerBlender::getId  (binary VA: 0xd7ddb0)
// Original: glitch::collada::CParametricControllerBlender::getId
// ----------------------------------------------------------------------------
glitch::collada::CParametricControllerBlender::Self * glitch::collada::CParametricControllerBlender::getId(glitch::collada::CParametricControllerBlender::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(byte_20D3E78);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IMotionListener::Destroy  (binary VA: 0xd7ddd0)
// Original: glitch::collada::IMotionListener::~IMotionListener
// ----------------------------------------------------------------------------
void glitch::collada::IMotionListener::Destroy(glitch::collada::IMotionListener::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMotionListener_intrusive_ptr_scene_ISce_60822a::Destroy  (binary VA: 0xd7e010)
// Original: glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::~CMotionListener
// ----------------------------------------------------------------------------
void glitch::collada::CMotionListener_intrusive_ptr_scene_ISce_60822a::Destroy(glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode::Self>, void> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CWind_7e51e3::Destroy  (binary VA: 0xd7e030)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind>::~CForceProxy
// ----------------------------------------------------------------------------
void glitch::collada::ps::CForceProxy_collada_ps_CWind_7e51e3::Destroy(glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CVortex_408d46::Destroy  (binary VA: 0xd7e050)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex>::~CForceProxy
// ----------------------------------------------------------------------------
void glitch::collada::ps::CForceProxy_collada_ps_CVortex_408d46::Destroy(glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CGravity_7823ae::Destroy  (binary VA: 0xd7e070)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity>::~CForceProxy
// ----------------------------------------------------------------------------
void glitch::collada::ps::CForceProxy_collada_ps_CGravity_7823ae::Destroy(glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CDeflector_473752::Destroy  (binary VA: 0xd7e090)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector>::~CForceProxy
// ----------------------------------------------------------------------------
void glitch::collada::ps::CForceProxy_collada_ps_CDeflector_473752::Destroy(glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CTextureTransformEx::Destroy  (binary VA: 0xd7e0d0)
// Original: glitch::collada::animation_track::CTextureTransformEx::~CTextureTransformEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CTextureTransformEx::Destroy(glitch::collada::animation_track::CTextureTransformEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CWeightEx::Destroy  (binary VA: 0xd7e0f0)
// Original: glitch::collada::animation_track::CWeightEx::~CWeightEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CWeightEx::Destroy(glitch::collada::animation_track::CWeightEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVisibilityEx::Destroy  (binary VA: 0xd7e110)
// Original: glitch::collada::animation_track::CVisibilityEx::~CVisibilityEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVisibilityEx::Destroy(glitch::collada::animation_track::CVisibilityEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVector3dEx::Destroy  (binary VA: 0xd7e130)
// Original: glitch::collada::animation_track::CVector3dEx::~CVector3dEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVector3dEx::Destroy(glitch::collada::animation_track::CVector3dEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CFloatEx::Destroy  (binary VA: 0xd7e170)
// Original: glitch::collada::animation_track::CFloatEx::~CFloatEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CFloatEx::Destroy(glitch::collada::animation_track::CFloatEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CFloatEx::Destroy_ead7e1d0  (binary VA: 0xd7e1d0)
// Original: glitch::collada::animation_track::CFloatEx::~CFloatEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CFloatEx::Destroy_ead7e1d0(glitch::collada::animation_track::CFloatEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVector3dEx::Destroy_ead7e230  (binary VA: 0xd7e230)
// Original: glitch::collada::animation_track::CVector3dEx::~CVector3dEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVector3dEx::Destroy_ead7e230(glitch::collada::animation_track::CVector3dEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVisibilityEx::Destroy_ead7e260  (binary VA: 0xd7e260)
// Original: glitch::collada::animation_track::CVisibilityEx::~CVisibilityEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVisibilityEx::Destroy_ead7e260(glitch::collada::animation_track::CVisibilityEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CWeightEx::Destroy_ead7e290  (binary VA: 0xd7e290)
// Original: glitch::collada::animation_track::CWeightEx::~CWeightEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CWeightEx::Destroy_ead7e290(glitch::collada::animation_track::CWeightEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CTextureTransformEx::Destroy_ead7e2c0  (binary VA: 0xd7e2c0)
// Original: glitch::collada::animation_track::CTextureTransformEx::~CTextureTransformEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CTextureTransformEx::Destroy_ead7e2c0(glitch::collada::animation_track::CTextureTransformEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CDeflector_473752::Destroy_ead7e320  (binary VA: 0xd7e320)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector>::~CForceProxy
// ----------------------------------------------------------------------------
void glitch::collada::ps::CForceProxy_collada_ps_CDeflector_473752::Destroy_ead7e320(glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CGravity_7823ae::Destroy_ead7e350  (binary VA: 0xd7e350)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity>::~CForceProxy
// ----------------------------------------------------------------------------
void glitch::collada::ps::CForceProxy_collada_ps_CGravity_7823ae::Destroy_ead7e350(glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CVortex_408d46::Destroy_ead7e380  (binary VA: 0xd7e380)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex>::~CForceProxy
// ----------------------------------------------------------------------------
void glitch::collada::ps::CForceProxy_collada_ps_CVortex_408d46::Destroy_ead7e380(glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CWind_7e51e3::Destroy_ead7e3b0  (binary VA: 0xd7e3b0)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind>::~CForceProxy
// ----------------------------------------------------------------------------
void glitch::collada::ps::CForceProxy_collada_ps_CWind_7e51e3::Destroy_ead7e3b0(glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMotionListener_intrusive_ptr_scene_ISce_60822a::Destroy_ead7e3e0  (binary VA: 0xd7e3e0)
// Original: glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::~CMotionListener
// ----------------------------------------------------------------------------
void glitch::collada::CMotionListener_intrusive_ptr_scene_ISce_60822a::Destroy_ead7e3e0(glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode::Self>, void> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IMotionListener::Destroy_ead7e410  (binary VA: 0xd7e410)
// Original: glitch::collada::IMotionListener::~IMotionListener
// ----------------------------------------------------------------------------
void glitch::collada::IMotionListener::Destroy_ead7e410(glitch::collada::IMotionListener::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CMaterialApplicatorInfo::Destroy_ead7e440  (binary VA: 0xd7e440)
// Original: glitch::collada::animation_track::CMaterialApplicatorInfo::~CMaterialApplicatorInfo
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CMaterialApplicatorInfo::Destroy_ead7e440(glitch::collada::animation_track::CMaterialApplicatorInfo::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079508);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::IForce::Destroy_ead7e4c0  (binary VA: 0xd7e4c0)
// Original: glitch::collada::ps::IForce::~IForce
// ----------------------------------------------------------------------------
void glitch::collada::ps::IForce::Destroy_ead7e4c0(glitch::collada::ps::IForce::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079330);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackEx::Destroy_ead7e520  (binary VA: 0xd7e520)
// Original: glitch::collada::CAnimationTrackEx::~CAnimationTrackEx
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTrackEx::Destroy_ead7e520(glitch::collada::CAnimationTrackEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IAnimationTrackEx::Destroy  (binary VA: 0xd7e550)
// Original: glitch::collada::IAnimationTrackEx::~IAnimationTrackEx
// ----------------------------------------------------------------------------
void glitch::collada::IAnimationTrackEx::Destroy(glitch::collada::IAnimationTrackEx::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CApplicatorInfo::Destroy  (binary VA: 0xd7e580)
// Original: glitch::collada::animation_track::CApplicatorInfo::~CApplicatorInfo
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CApplicatorInfo::Destroy(glitch::collada::animation_track::CApplicatorInfo::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079508);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTargets::Destroy  (binary VA: 0xd7e610)
// Original: glitch::collada::CAnimationTargets::~CAnimationTargets
// ----------------------------------------------------------------------------
void glitch::collada::CAnimationTargets::Destroy(glitch::collada::CAnimationTargets::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20794D8);
  if ( *((uint32_t *)self + 2) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 2));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CDeflector_473752::apply  (binary VA: 0xd7e660)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CDeflector>::apply
// ----------------------------------------------------------------------------
int glitch::collada::ps::CForceProxy_collada_ps_CDeflector_473752::apply(int a1, float **a2, float **a3, int a4)
{
  return glitch::collada::ps::CDeflector::apply((glitch::collada::ps::CDeflector::Self *)(a1 + 12), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CGravity_7823ae::apply  (binary VA: 0xd7e6a0)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CGravity>::apply
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CForceProxy_collada_ps_CGravity_7823ae::apply(int a1, float **a2, float **a3, int a4)
{
  return (float *)(uintptr_t)(glitch::collada::ps::CGravity::apply((float ***)(a1 + 12), a2, a3, a4));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CVortex_408d46::apply  (binary VA: 0xd7e6e0)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CVortex>::apply
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CForceProxy_collada_ps_CVortex_408d46::apply(int a1, float **a2, float **a3, float *a4)
{
  return (float *)(uintptr_t)(glitch::collada::ps::CVortex::apply((float ***)(a1 + 12), a2, a3, a4));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CForceProxy_collada_ps_CWind_7e51e3::apply  (binary VA: 0xd7e720)
// Original: glitch::collada::ps::CForceProxy<glitch::collada::ps::CWind>::apply
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CForceProxy_collada_ps_CWind_7e51e3::apply(int a1, float **a2, float **a3, int a4)
{
  return (float *)(uintptr_t)(glitch::collada::ps::CWind::apply((float ***)(a1 + 12), a2, a3, a4));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CWeightEx::applyValue  (binary VA: 0xd7e760)
// Original: glitch::collada::animation_track::CWeightEx::applyValue
// ----------------------------------------------------------------------------
void * glitch::collada::animation_track::CWeightEx::applyValue(glitch::collada::animation_track::CWeightEx::Self *self, void *src, void *dest)
{
  size_t n;

  n = G4_VCALL<int>(self, 8);
  return memcpy(dest, src, n);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVector3dEx::applyValue  (binary VA: 0xd7e7a0)
// Original: glitch::collada::animation_track::CVector3dEx::applyValue
// ----------------------------------------------------------------------------
void * glitch::collada::animation_track::CVector3dEx::applyValue(glitch::collada::animation_track::CVector3dEx::Self *self, void *src, void *dest)
{
  size_t n;

  n = G4_VCALL<int>(self, 8);
  return memcpy(dest, src, n);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CFloatEx::applyValue  (binary VA: 0xd7e7e0)
// Original: glitch::collada::animation_track::CFloatEx::applyValue
// ----------------------------------------------------------------------------
void * glitch::collada::animation_track::CFloatEx::applyValue(glitch::collada::animation_track::CFloatEx::Self *self, void *src, void *dest)
{
  size_t n;

  n = G4_VCALL<int>(self, 8);
  return memcpy(dest, src, n);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CAnimationTrackEx::retrieveValue  (binary VA: 0xd7e820)
// Original: glitch::collada::CAnimationTrackEx::retrieveValue
// ----------------------------------------------------------------------------
void * glitch::collada::CAnimationTrackEx::retrieveValue(glitch::collada::CAnimationTrackEx::Self *self, void *src, void *dest)
{
  size_t n;

  n = G4_VCALL<int>(self, 8);
  return memcpy(dest, src, n);
}



// ============================================================================
// Address:   0xd7ea20 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada15CForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd7ea20_1()
// ============================================================================
void g4_thunk_0xd7ea20_2(
        glitch::collada::CForceSceneNode::Self *self)
{
  glitch::collada::CForceSceneNode::Destroy((glitch::collada::CForceSceneNode::Self *)((char *)self
                                                                                        + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7ea30 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada15CForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd7ea30_3()
// ============================================================================
void g4_thunk_0xd7ea30_4(
        glitch::collada::CForceSceneNode::Self *self)
{
  glitch::collada::CForceSceneNode::Destroy((glitch::collada::CForceSceneNode::Self *)((char *)self
                                                                                        + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7ea40 (size: 127 bytes)
// Symbol:    _ZN6glitch7collada15CForceSceneNodeD1Ev
// Demangled: glitch::collada::CForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CForceSceneNode::Destroy(glitch::collada::CForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2076CB0);
  *((uint32_t *)self + 73) = ((uint32_t)(uintptr_t)&off_2076DEC);
  *((uint32_t *)self + 74) = ((uint32_t)(uintptr_t)&off_2076E0C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 73) = ((uint32_t)(uintptr_t)&off_2076ACC);
  *((uint32_t *)self + 74) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd7eac0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada15CLightSceneNodeD1Ev
// Demangled: g4_thunk_0xd7eac0_5()
// ============================================================================
void g4_thunk_0xd7eac0_6(
        glitch::collada::CLightSceneNode::Self *self)
{
  glitch::collada::CLightSceneNode::Destroy((glitch::collada::CLightSceneNode::Self *)((char *)self
                                                                                        + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7ead0 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada15CLightSceneNodeD1Ev
// Demangled: g4_thunk_0xd7ead0_7()
// ============================================================================
void g4_thunk_0xd7ead0_8(
        glitch::collada::CLightSceneNode::Self *self)
{
  glitch::collada::CLightSceneNode::Destroy((glitch::collada::CLightSceneNode::Self *)((char *)self
                                                                                        + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7eae0 (size: 127 bytes)
// Symbol:    _ZN6glitch7collada15CLightSceneNodeD1Ev
// Demangled: glitch::collada::CLightSceneNode::Destroy()
// ============================================================================
void glitch::collada::CLightSceneNode::Destroy(glitch::collada::CLightSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2073B50);
  *((uint32_t *)self + 82) = (uint32_t)(uintptr_t)(&off_2073C84);
  *((uint32_t *)self + 83) = ((uint32_t)(uintptr_t)&off_2073CA4);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CLightSceneNode::Self *)((char *)self + 304));
  glitch::scene::CLightSceneNode::Destroy(self);
  *((uint32_t *)self + 82) = ((uint32_t)(uintptr_t)&off_20737CC);
  *((uint32_t *)self + 83) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd7eb60 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada21CNoTimelineControllerD1Ev
// Demangled: g4_thunk_0xd7eb60_9()
// ============================================================================
void g4_thunk_0xd7eb60_10(
        glitch::collada::CNoTimelineController::Self *self)
{
  glitch::collada::CNoTimelineController::Destroy((glitch::collada::CNoTimelineController::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7eb70 (size: 90 bytes)
// Symbol:    _ZN6glitch7collada21CNoTimelineControllerD1Ev
// Demangled: glitch::collada::CNoTimelineController::Destroy()
// ============================================================================
void glitch::collada::CNoTimelineController::Destroy(
        glitch::collada::CNoTimelineController::Self *self)
{
  *((uint32_t *)self + 16) = ((uint32_t)(uintptr_t)&off_2079660);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20795EC);
  glitch::collada::CTimelineController::Destroy(self);
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd7ebd0 (size: 83 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track23CMaterialApplicatorInfo5cloneEv
// Demangled: glitch::collada::animation_track::CMaterialApplicatorInfo::clone(void)const
// ============================================================================
uint32_t *glitch::collada::animation_track::CMaterialApplicatorInfo::clone(
        glitch::collada::animation_track::CMaterialApplicatorInfo::Self *self)
{
  uint32_t *result;

  result = (uint32_t *)operator new(0xCu);
  *result = ((uint32_t)(uintptr_t)&off_2079520);
  result[1] = *((uint32_t *)self + 1);
  result[2] = *((uint32_t *)self + 2);
  return result;
}


// ============================================================================
// Address:   0xd7ec30 (size: 96 bytes)
// Symbol:    _ZN6glitch7collada21CNoTimelineController6updateEf
// Demangled: glitch::collada::CNoTimelineController::update(float)
// ============================================================================
int glitch::collada::CNoTimelineController::update(glitch::collada::CNoTimelineController::Self *self, float a2)
{
  long double v2; // fst6
  char v4; // c2
  float v6;
  float v7;

  v7 = *((float *)self + 5) - *((float *)self + 4);
  v2 = a2;
  if ( v7 <= 0.0 )
    return (*(int (**)(glitch::collada::CNoTimelineController::Self *, uint32_t))(*(uint32_t *)self + 16))(self, 0);
  do
    v2 = __FPREM__(v2, v7);
  while ( v4 != 0 );
  v6 = v2;
  return (*(int (**)(glitch::collada::CNoTimelineController::Self *, uint32_t))(*(uint32_t *)self + 16))(
           self,
           LODWORD(v6));
}


// ============================================================================
// Address:   0xd7ec90 (size: 121 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track13CVisibilityEx15applyAddedValueEPKvPKfiPvPNS1_15CApplicatorInfoE
// Demangled: glitch::collada::animation_track::CVisibilityEx::applyAddedValue(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// ============================================================================
int glitch::collada::animation_track::CVisibilityEx::applyAddedValue(
        glitch::collada::animation_track::CVisibilityEx::Self *self,
        uint32_t *a2,
        const float *a3,
        int a4,
        void *a5)
{
  int result;

  result = (*(int (**)(void *, uint32_t))(*(uint32_t *)a5 + 76))(a5, 0);
  if ( a4 > 0 )
  {
    result = 0;
    while ( a3[result] == 0.0 || a2[result] != 0 )
    {
      if ( ++result == a4 )
        return result;
    }
    return (*(int (**)(void *, int))(*(uint32_t *)a5 + 76))(a5, 1);
  }
  return result;
}


// ============================================================================
// Address:   0xd7ed10 (size: 121 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track13CVisibilityEx17applyBlendedValueEPKvPKfiPvPNS1_15CApplicatorInfoE
// Demangled: glitch::collada::animation_track::CVisibilityEx::applyBlendedValue(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// ============================================================================
int glitch::collada::animation_track::CVisibilityEx::applyBlendedValue(
        glitch::collada::animation_track::CVisibilityEx::Self *self,
        uint32_t *a2,
        const float *a3,
        int a4,
        void *a5)
{
  int result;

  result = (*(int (**)(void *, int))(*(uint32_t *)a5 + 76))(a5, 1);
  if ( a4 > 0 )
  {
    result = 0;
    while ( a3[result] == 0.0 || a2[result] != 0 )
    {
      if ( ++result == a4 )
        return result;
    }
    return (*(int (**)(void *, uint32_t))(*(uint32_t *)a5 + 76))(a5, 0);
  }
  return result;
}


// ============================================================================
// Address:   0xd7ed90 (size: 298 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track11CVector3dEx15getBlendedValueEPKvPKfiPv
// Demangled: glitch::collada::animation_track::CVector3dEx::getBlendedValue(void const*,float const*,int,void *)const
// ============================================================================
void glitch::collada::animation_track::CVector3dEx::getBlendedValue(
        glitch::collada::animation_track::CVector3dEx::Self *self,
        float *a2,
        float *a3,
        int a4,
        float *a5)
{
  float v5; // xmm6_4
  int v6;
  float v7; // xmm5_4
  int v8;
  float v9; // xmm4_4
  float v10; // xmm7_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm2_4

  if ( a4 <= 2 )
  {
    if ( a4 == 2 )
    {
      v16 = *a2;
      v17 = a3[1] / (float)(*a3 + a3[1]);
      v18 = (float)((float)(a2[5] - a2[2]) * v17) + a2[2];
      v19 = a2[3];
      a5[1] = (float)((float)(a2[4] - a2[1]) * v17) + a2[1];
      a5[2] = v18;
      *a5 = (float)((float)(v19 - v16) * v17) + v16;
    }
    else if ( a4 == 1 )
    {
      *a5 = *a2;
      a5[1] = a2[1];
      a5[2] = a2[2];
    }
  }
  else
  {
    v5 = *a2;
    v6 = 3;
    v7 = a2[1];
    v8 = 1;
    v9 = a2[2];
    v10 = *a3;
    do
    {
      v11 = a3[v8];
      v10 = v10 + v11;
      v12 = a2[v6];
      v13 = a2[v6 + 1];
      v14 = a2[v6 + 2];
      ++v8;
      v6 += 3;
      v15 = v11 / v10;
      v5 = v5 + (float)((float)(v12 - v5) * v15);
      v7 = v7 + (float)((float)(v13 - v7) * v15);
      v9 = v9 + (float)((float)(v14 - v9) * v15);
    }
    while ( v8 != a4 );
    *a5 = v5;
    a5[1] = v7;
    a5[2] = v9;
  }
}


// ============================================================================
// Address:   0xd7f650 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada21CNoTimelineControllerD0Ev
// Demangled: g4_thunk_0xd7f650_11()
// ============================================================================
void g4_thunk_0xd7f650_12(
        glitch::collada::CNoTimelineController::Self *self)
{
  glitch::collada::CNoTimelineController::Destroy((glitch::collada::CNoTimelineController::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7f660 (size: 98 bytes)
// Symbol:    _ZN6glitch7collada21CNoTimelineControllerD0Ev
// Demangled: glitch::collada::CNoTimelineController::Destroy()
// ============================================================================
void glitch::collada::CNoTimelineController::DestroyDeleting(
        glitch::collada::CNoTimelineController::Self *self)
{
  *((uint32_t *)self + 16) = ((uint32_t)(uintptr_t)&off_2079660);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20795EC);
  glitch::collada::CTimelineController::Destroy(self);
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd7f6d0 (size: 85 bytes)
// Symbol:    _ZN6glitch7collada17CAnimationTargetsD0Ev
// Demangled: glitch::collada::CAnimationTargets::Destroy()
// ============================================================================
void glitch::collada::CAnimationTargets::DestroyDeleting(glitch::collada::CAnimationTargets::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20794D8);
  if ( *((uint32_t *)self + 2) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 2));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd7f730 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada19CWindForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd7f730_13()
// ============================================================================
void g4_thunk_0xd7f730_14(
        glitch::collada::CWindForceSceneNode::Self *self)
{
  glitch::collada::CWindForceSceneNode::Destroy((glitch::collada::CWindForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7f740 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada19CWindForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd7f740_15()
// ============================================================================
void g4_thunk_0xd7f740_16(
        glitch::collada::CWindForceSceneNode::Self *self)
{
  glitch::collada::CWindForceSceneNode::Destroy((glitch::collada::CWindForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7f750 (size: 135 bytes)
// Symbol:    _ZN6glitch7collada19CWindForceSceneNodeD0Ev
// Demangled: glitch::collada::CWindForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CWindForceSceneNode::DestroyDeleting(glitch::collada::CWindForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20779F0);
  *((uint32_t *)self + 80) = ((uint32_t)(uintptr_t)&off_2077B2C);
  *((uint32_t *)self + 81) = ((uint32_t)(uintptr_t)&off_2077B4C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CWindForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 80) = ((uint32_t)(uintptr_t)&off_207782C);
  *((uint32_t *)self + 81) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd7f8c0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada15CLightSceneNodeD0Ev
// Demangled: g4_thunk_0xd7f8c0_17()
// ============================================================================
void g4_thunk_0xd7f8c0_18(
        glitch::collada::CLightSceneNode::Self *self)
{
  glitch::collada::CLightSceneNode::Destroy((glitch::collada::CLightSceneNode::Self *)((char *)self
                                                                                        + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7f8d0 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada15CLightSceneNodeD0Ev
// Demangled: g4_thunk_0xd7f8d0_19()
// ============================================================================
void g4_thunk_0xd7f8d0_20(
        glitch::collada::CLightSceneNode::Self *self)
{
  glitch::collada::CLightSceneNode::Destroy((glitch::collada::CLightSceneNode::Self *)((char *)self
                                                                                        + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7f8e0 (size: 135 bytes)
// Symbol:    _ZN6glitch7collada15CLightSceneNodeD0Ev
// Demangled: glitch::collada::CLightSceneNode::Destroy()
// ============================================================================
void glitch::collada::CLightSceneNode::DestroyDeleting(glitch::collada::CLightSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2073B50);
  *((uint32_t *)self + 82) = (uint32_t)(uintptr_t)(&off_2073C84);
  *((uint32_t *)self + 83) = ((uint32_t)(uintptr_t)&off_2073CA4);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CLightSceneNode::Self *)((char *)self + 304));
  glitch::scene::CLightSceneNode::Destroy(self);
  *((uint32_t *)self + 82) = ((uint32_t)(uintptr_t)&off_20737CC);
  *((uint32_t *)self + 83) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd7f970 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada15CForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd7f970_21()
// ============================================================================
void g4_thunk_0xd7f970_22(
        glitch::collada::CForceSceneNode::Self *self)
{
  glitch::collada::CForceSceneNode::Destroy((glitch::collada::CForceSceneNode::Self *)((char *)self
                                                                                        + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7f980 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada15CForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd7f980_23()
// ============================================================================
void g4_thunk_0xd7f980_24(
        glitch::collada::CForceSceneNode::Self *self)
{
  glitch::collada::CForceSceneNode::Destroy((glitch::collada::CForceSceneNode::Self *)((char *)self
                                                                                        + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7f990 (size: 135 bytes)
// Symbol:    _ZN6glitch7collada15CForceSceneNodeD0Ev
// Demangled: glitch::collada::CForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CForceSceneNode::DestroyDeleting(glitch::collada::CForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2076CB0);
  *((uint32_t *)self + 73) = ((uint32_t)(uintptr_t)&off_2076DEC);
  *((uint32_t *)self + 74) = ((uint32_t)(uintptr_t)&off_2076E0C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 73) = ((uint32_t)(uintptr_t)&off_2076ACC);
  *((uint32_t *)self + 74) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd7fa20 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada21CAnimationIOClipParam5applyEv
// Demangled: glitch::collada::CAnimationIOClipParam::apply(void)
// ============================================================================
void glitch::collada::CAnimationIOClipParam::apply(glitch::collada::CAnimationIOClipParam *self)
{
  uint32_t *i;
  int v2;
  void *v3;
  typedef uint16_t _g4_t_v4[3];
  typedef int (**_g4_t_v5)(std::exception *);
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (2u + sizeof(_g4_t_v4)) > _g4_s0 ? (2u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 2u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);

  if ( *((uint8_t *)self + 16) != 0 )
  {
    for ( i = *((uint32_t **)self + 6); (uint32_t *)((char *)self + 24) != i; i = (uint32_t *)*i )
    {
      v2 = i[2];
      if ( v2 == 0 )
      {
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v4[1]), "call to empty boost::function", (int)(uintptr_t)(v4));
        sub_19042E0(&v5, &v4[1]);
        v3 = (void *)(*(uint32_t *)&v4[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v3);
        }
        v5 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
        std::terminate();
      }
      (*(void (**)(uint32_t *, uint32_t))((v2 & 0xFFFFFFFE) + 4))(i + 3, *((uint32_t *)self + 5));
    }
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0xd7faf0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada24CDeflectorForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd7faf0_25()
// ============================================================================
void g4_thunk_0xd7faf0_26(
        glitch::collada::CDeflectorForceSceneNode::Self *self)
{
  glitch::collada::CDeflectorForceSceneNode::Destroy((glitch::collada::CDeflectorForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7fb00 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada24CDeflectorForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd7fb00_27()
// ============================================================================
void g4_thunk_0xd7fb00_28(
        glitch::collada::CDeflectorForceSceneNode::Self *self)
{
  glitch::collada::CDeflectorForceSceneNode::Destroy((glitch::collada::CDeflectorForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7fb10 (size: 135 bytes)
// Symbol:    _ZN6glitch7collada24CDeflectorForceSceneNodeD0Ev
// Demangled: glitch::collada::CDeflectorForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CDeflectorForceSceneNode::DestroyDeleting(glitch::collada::CDeflectorForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2076430);
  *((uint32_t *)self + 81) = ((uint32_t)(uintptr_t)&off_207656C);
  *((uint32_t *)self + 82) = ((uint32_t)(uintptr_t)&off_207658C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CDeflectorForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 81) = ((uint32_t)(uintptr_t)&off_207626C);
  *((uint32_t *)self + 82) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd7fca0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada19CBillboardSceneNodeD1Ev
// Demangled: g4_thunk_0xd7fca0_29()
// ============================================================================
void g4_thunk_0xd7fca0_30(
        glitch::collada::CBillboardSceneNode *self)
{
  glitch::collada::CBillboardSceneNode::Destroy((glitch::collada::CBillboardSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7fcb0 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada19CBillboardSceneNodeD1Ev
// Demangled: g4_thunk_0xd7fcb0_31()
// ============================================================================
void g4_thunk_0xd7fcb0_32(
        glitch::collada::CBillboardSceneNode *self)
{
  glitch::collada::CBillboardSceneNode::Destroy((glitch::collada::CBillboardSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7fcc0 (size: 161 bytes)
// Symbol:    _ZN6glitch7collada19CBillboardSceneNodeD1Ev
// Demangled: glitch::collada::CBillboardSceneNode::Destroy()
// ============================================================================
void glitch::collada::CBillboardSceneNode::Destroy(glitch::collada::CBillboardSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2071BD0);
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)(&off_2071D08);
  *((uint32_t *)self + 79) = ((uint32_t)(uintptr_t)&off_2071D28);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CBillboardSceneNode::Self *)((char *)self + 288));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2071A50);
  *((uint32_t *)self + 79) = ((uint32_t)(uintptr_t)&off_2071BA4);
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)(&off_2071B84);
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 78) = ((uint32_t)(uintptr_t)&off_207188C);
  *((uint32_t *)self + 79) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd7fd70 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada19CBillboardSceneNodeD0Ev
// Demangled: g4_thunk_0xd7fd70_33()
// ============================================================================
void g4_thunk_0xd7fd70_34(
        glitch::collada::CBillboardSceneNode *self)
{
  glitch::collada::CBillboardSceneNode::Destroy((glitch::collada::CBillboardSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7fd80 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada19CBillboardSceneNodeD0Ev
// Demangled: g4_thunk_0xd7fd80_35()
// ============================================================================
void g4_thunk_0xd7fd80_36(
        glitch::collada::CBillboardSceneNode *self)
{
  glitch::collada::CBillboardSceneNode::Destroy((glitch::collada::CBillboardSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7fd90 (size: 169 bytes)
// Symbol:    _ZN6glitch7collada19CBillboardSceneNodeD0Ev
// Demangled: glitch::collada::CBillboardSceneNode::Destroy()
// ============================================================================
void g4_dtor_deleting::dd_CBillboardSceneNode_c3924a(glitch::collada::CBillboardSceneNode *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2071BD0);
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)(&off_2071D08);
  *((uint32_t *)self + 79) = ((uint32_t)(uintptr_t)&off_2071D28);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CBillboardSceneNode::Self *)((char *)self + 288));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2071A50);
  *((uint32_t *)self + 79) = ((uint32_t)(uintptr_t)&off_2071BA4);
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)(&off_2071B84);
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 78) = ((uint32_t)(uintptr_t)&off_207188C);
  *((uint32_t *)self + 79) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd7fe40 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada22CGravityForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd7fe40_37()
// ============================================================================
void g4_thunk_0xd7fe40_38(
        glitch::collada::CGravityForceSceneNode::Self *self)
{
  glitch::collada::CGravityForceSceneNode::Destroy((glitch::collada::CGravityForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7fe50 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada22CGravityForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd7fe50_39()
// ============================================================================
void g4_thunk_0xd7fe50_40(
        glitch::collada::CGravityForceSceneNode::Self *self)
{
  glitch::collada::CGravityForceSceneNode::Destroy((glitch::collada::CGravityForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7fe60 (size: 135 bytes)
// Symbol:    _ZN6glitch7collada22CGravityForceSceneNodeD0Ev
// Demangled: glitch::collada::CGravityForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CGravityForceSceneNode::DestroyDeleting(glitch::collada::CGravityForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2076FF0);
  *((uint32_t *)self + 77) = ((uint32_t)(uintptr_t)&off_207712C);
  *((uint32_t *)self + 78) = ((uint32_t)(uintptr_t)&off_207714C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CGravityForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 77) = ((uint32_t)(uintptr_t)&off_2076E2C);
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)((uint32_t)(uintptr_t)(&off_20483C0));
  operator delete(self);
}


// ============================================================================
// Address:   0xd7fef0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada24CDeflectorForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd7fef0_41()
// ============================================================================
void g4_thunk_0xd7fef0_42(
        glitch::collada::CDeflectorForceSceneNode::Self *self)
{
  glitch::collada::CDeflectorForceSceneNode::Destroy((glitch::collada::CDeflectorForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7ff00 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada24CDeflectorForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd7ff00_43()
// ============================================================================
void g4_thunk_0xd7ff00_44(
        glitch::collada::CDeflectorForceSceneNode::Self *self)
{
  glitch::collada::CDeflectorForceSceneNode::Destroy((glitch::collada::CDeflectorForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7ff10 (size: 127 bytes)
// Symbol:    _ZN6glitch7collada24CDeflectorForceSceneNodeD1Ev
// Demangled: glitch::collada::CDeflectorForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CDeflectorForceSceneNode::Destroy(
        glitch::collada::CDeflectorForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2076430);
  *((uint32_t *)self + 81) = ((uint32_t)(uintptr_t)&off_207656C);
  *((uint32_t *)self + 82) = ((uint32_t)(uintptr_t)&off_207658C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CDeflectorForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 81) = ((uint32_t)(uintptr_t)&off_207626C);
  *((uint32_t *)self + 82) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd7ff90 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada22CGravityForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd7ff90_45()
// ============================================================================
void g4_thunk_0xd7ff90_46(
        glitch::collada::CGravityForceSceneNode::Self *self)
{
  glitch::collada::CGravityForceSceneNode::Destroy((glitch::collada::CGravityForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd7ffa0 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada22CGravityForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd7ffa0_47()
// ============================================================================
void g4_thunk_0xd7ffa0_48(
        glitch::collada::CGravityForceSceneNode::Self *self)
{
  glitch::collada::CGravityForceSceneNode::Destroy((glitch::collada::CGravityForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd7ffb0 (size: 127 bytes)
// Symbol:    _ZN6glitch7collada22CGravityForceSceneNodeD1Ev
// Demangled: glitch::collada::CGravityForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CGravityForceSceneNode::Destroy(
        glitch::collada::CGravityForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2076FF0);
  *((uint32_t *)self + 77) = ((uint32_t)(uintptr_t)&off_207712C);
  *((uint32_t *)self + 78) = ((uint32_t)(uintptr_t)&off_207714C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CGravityForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 77) = ((uint32_t)(uintptr_t)&off_2076E2C);
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd80030 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada21CVortexForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd80030_49()
// ============================================================================
void g4_thunk_0xd80030_50(
        glitch::collada::CVortexForceSceneNode::Self *self)
{
  glitch::collada::CVortexForceSceneNode::Destroy((glitch::collada::CVortexForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd80040 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada21CVortexForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd80040_51()
// ============================================================================
void g4_thunk_0xd80040_52(
        glitch::collada::CVortexForceSceneNode::Self *self)
{
  glitch::collada::CVortexForceSceneNode::Destroy((glitch::collada::CVortexForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd80050 (size: 127 bytes)
// Symbol:    _ZN6glitch7collada21CVortexForceSceneNodeD1Ev
// Demangled: glitch::collada::CVortexForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CVortexForceSceneNode::Destroy(
        glitch::collada::CVortexForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20774F0);
  *((uint32_t *)self + 88) = ((uint32_t)(uintptr_t)&off_207762C);
  *((uint32_t *)self + 89) = ((uint32_t)(uintptr_t)&off_207764C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CVortexForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 88) = ((uint32_t)(uintptr_t)&off_207732C);
  *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd800d0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada19CWindForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd800d0_53()
// ============================================================================
void g4_thunk_0xd800d0_54(
        glitch::collada::CWindForceSceneNode::Self *self)
{
  glitch::collada::CWindForceSceneNode::Destroy((glitch::collada::CWindForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd800e0 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada19CWindForceSceneNodeD1Ev
// Demangled: g4_thunk_0xd800e0_55()
// ============================================================================
void g4_thunk_0xd800e0_56(
        glitch::collada::CWindForceSceneNode::Self *self)
{
  glitch::collada::CWindForceSceneNode::Destroy((glitch::collada::CWindForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd800f0 (size: 127 bytes)
// Symbol:    _ZN6glitch7collada19CWindForceSceneNodeD1Ev
// Demangled: glitch::collada::CWindForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CWindForceSceneNode::Destroy(glitch::collada::CWindForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20779F0);
  *((uint32_t *)self + 80) = ((uint32_t)(uintptr_t)&off_2077B2C);
  *((uint32_t *)self + 81) = ((uint32_t)(uintptr_t)&off_2077B4C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CWindForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 80) = ((uint32_t)(uintptr_t)&off_207782C);
  *((uint32_t *)self + 81) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd80170 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada21CVortexForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd80170_57()
// ============================================================================
void g4_thunk_0xd80170_58(
        glitch::collada::CVortexForceSceneNode::Self *self)
{
  glitch::collada::CVortexForceSceneNode::Destroy((glitch::collada::CVortexForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd80180 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada21CVortexForceSceneNodeD0Ev
// Demangled: g4_thunk_0xd80180_59()
// ============================================================================
void g4_thunk_0xd80180_60(
        glitch::collada::CVortexForceSceneNode::Self *self)
{
  glitch::collada::CVortexForceSceneNode::Destroy((glitch::collada::CVortexForceSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd80190 (size: 135 bytes)
// Symbol:    _ZN6glitch7collada21CVortexForceSceneNodeD0Ev
// Demangled: glitch::collada::CVortexForceSceneNode::Destroy()
// ============================================================================
void glitch::collada::CVortexForceSceneNode::DestroyDeleting(glitch::collada::CVortexForceSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20774F0);
  *((uint32_t *)self + 88) = ((uint32_t)(uintptr_t)&off_207762C);
  *((uint32_t *)self + 89) = ((uint32_t)(uintptr_t)&off_207764C);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CVortexForceSceneNode::Self *)((char *)self + 264));
  glitch::scene::ISceneNode::Destroy(self);
  *((uint32_t *)self + 88) = ((uint32_t)(uintptr_t)&off_207732C);
  *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd80220 (size: 59 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track9CWeightEx18applyKeyBasedValueERKNS0_18SAnimationAccessorEiPvPNS1_15CApplicatorInfoE
// Demangled: glitch::collada::animation_track::CWeightEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// ============================================================================
uint32_t *glitch::collada::animation_track::CWeightEx::applyKeyBasedValue(
        glitch::collada::animation_track::CWeightEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        uint32_t *a4)
{
  int v4;

  v4 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  *a4 = *(uint32_t *)(*(uint32_t *)(v4 + 4)
                  + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36)
                  + v4
                  + a3 * *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38)
                  + 4);
  return a4;
}


// ============================================================================
// Address:   0xd80260 (size: 59 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track9CWeightEx16getKeyBasedValueERKNS0_18SAnimationAccessorEiPv
// Demangled: glitch::collada::animation_track::CWeightEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *)const
// ============================================================================
uint32_t *glitch::collada::animation_track::CWeightEx::getKeyBasedValue(
        glitch::collada::animation_track::CWeightEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        uint32_t *a4)
{
  int v4;

  v4 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  *a4 = *(uint32_t *)(*(uint32_t *)(v4 + 4)
                  + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36)
                  + v4
                  + a3 * *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38)
                  + 4);
  return a4;
}


// ============================================================================
// Address:   0xd802a0 (size: 127 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track13CVisibilityEx18applyKeyBasedValueERKNS0_18SAnimationAccessorEiPvPNS1_15CApplicatorInfoE
// Demangled: glitch::collada::animation_track::CVisibilityEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// ============================================================================
int glitch::collada::animation_track::CVisibilityEx::applyKeyBasedValue(
        glitch::collada::animation_track::CVisibilityEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        void *a4)
{
  int v4;

  v4 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  return (*(int (**)(void *, bool))(*(uint32_t *)a4 + 76))(
           a4,
           *(float *)(*(uint32_t *)(v4 + 4)
                    + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36)
                    + v4
                    + a3 * *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38)
                    + 4) >= 1.0);
}


// ============================================================================
// Address:   0xd80320 (size: 127 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track13CVisibilityEx18applyKeyBasedValueERKNS0_18SAnimationAccessorEiifPvPNS1_15CApplicatorInfoE
// Demangled: glitch::collada::animation_track::CVisibilityEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// ============================================================================
int glitch::collada::animation_track::CVisibilityEx::applyKeyBasedValue(
        glitch::collada::animation_track::CVisibilityEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        int a4,
        float a5,
        void *a6)
{
  int v6;

  v6 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  return (*(int (**)(void *, bool))(*(uint32_t *)a6 + 76))(
           a6,
           *(float *)(*(uint32_t *)(v6 + 4)
                    + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36)
                    + v6
                    + a3 * *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38)
                    + 4) >= 1.0);
}


// ============================================================================
// Address:   0xd803a0 (size: 86 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track13CVisibilityEx16getKeyBasedValueERKNS0_18SAnimationAccessorEiPv
// Demangled: glitch::collada::animation_track::CVisibilityEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *)const
// ============================================================================
uint32_t *glitch::collada::animation_track::CVisibilityEx::getKeyBasedValue(
        glitch::collada::animation_track::CVisibilityEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        uint32_t *a4)
{
  int v4;
  int v5;
  int v6;
  bool v7;
  bool v8;

  v4 = *(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 8;
  v5 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  v6 = *(uint32_t *)(v5 + 4) + *(uint16_t *)(v4 + 28) + v5 + a3 * *(uint16_t *)(v4 + 30);
  v7 = *(float *)(v6 + 4) > 1.0;
  v8 = *(float *)(v6 + 4) == 1.0;
  *a4 = v7 || v8;
  return a4;
}


// ============================================================================
// Address:   0xd80400 (size: 86 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track13CVisibilityEx16getKeyBasedValueERKNS0_18SAnimationAccessorEiifPv
// Demangled: glitch::collada::animation_track::CVisibilityEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *)const
// ============================================================================
uint32_t *glitch::collada::animation_track::CVisibilityEx::getKeyBasedValue(
        glitch::collada::animation_track::CVisibilityEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        int a4,
        float a5,
        uint32_t *a6)
{
  int v6;
  int v7;
  int v8;
  bool v9;
  bool v10;

  v6 = *(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 8;
  v7 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  v8 = *(uint32_t *)(v7 + 4) + *(uint16_t *)(v6 + 28) + v7 + a3 * *(uint16_t *)(v6 + 30);
  v9 = *(float *)(v8 + 4) > 1.0;
  v10 = *(float *)(v8 + 4) == 1.0;
  *a6 = v9 || v10;
  return a6;
}


// ============================================================================
// Address:   0xd80460 (size: 77 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track11CVector3dEx16getKeyBasedValueERKNS0_18SAnimationAccessorEiPv
// Demangled: glitch::collada::animation_track::CVector3dEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *)const
// ============================================================================
int glitch::collada::animation_track::CVector3dEx::getKeyBasedValue(
        glitch::collada::animation_track::CVector3dEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        uint32_t *a4)
{
  int v4;
  uint32_t *v5;
  int result;

  v4 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  v5 = (uint32_t *)(*(uint32_t *)(v4 + 4)
                + v4
                + a3 * *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38)
                + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36)
                + 4);
  *a4 = *v5;
  a4[1] = v5[1];
  result = v5[2];
  a4[2] = result;
  return result;
}


// ============================================================================
// Address:   0xd804b0 (size: 157 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track11CVector3dEx16getKeyBasedValueERKNS0_18SAnimationAccessorEiifPv
// Demangled: glitch::collada::animation_track::CVector3dEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *)const
// ============================================================================
float *glitch::collada::animation_track::CVector3dEx::getKeyBasedValue(
        glitch::collada::animation_track::CVector3dEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        int a4,
        float a5,
        float *a6)
{
  int v7;
  int v8;
  int v9;
  int v10;
  float *v11;
  float *v12;
  float v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm2_4

  v7 = *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36);
  v8 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  v9 = *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38);
  v10 = v8 + *(uint32_t *)(v8 + 4) + 4;
  v11 = (float *)(v10 + v7 + v9 * a3);
  v12 = (float *)(v10 + v7 + a4 * v9);
  v13 = *v11;
  v14 = (float)((float)(v12[2] - v11[2]) * a5) + v11[2];
  v15 = *v12;
  a6[1] = (float)((float)(v12[1] - v11[1]) * a5) + v11[1];
  a6[2] = v14;
  *a6 = (float)((float)(v15 - v13) * a5) + v13;
  return a6;
}


// ============================================================================
// Address:   0xd80550 (size: 59 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track8CFloatEx16getKeyBasedValueERKNS0_18SAnimationAccessorEiPv
// Demangled: glitch::collada::animation_track::CFloatEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *)const
// ============================================================================
uint32_t *glitch::collada::animation_track::CFloatEx::getKeyBasedValue(
        glitch::collada::animation_track::CFloatEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        uint32_t *a4)
{
  int v4;

  v4 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  *a4 = *(uint32_t *)(*(uint32_t *)(v4 + 4)
                  + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36)
                  + v4
                  + a3 * *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38)
                  + 4);
  return a4;
}


// ============================================================================
// Address:   0xd80590 (size: 94 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track8CFloatEx16getKeyBasedValueERKNS0_18SAnimationAccessorEiifPv
// Demangled: glitch::collada::animation_track::CFloatEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *)const
// ============================================================================
float *glitch::collada::animation_track::CFloatEx::getKeyBasedValue(
        glitch::collada::animation_track::CFloatEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        int a4,
        float a5,
        float *a6)
{
  int v6;
  int v7;
  float v8; // xmm1_4
  float v9; // xmm0_4

  v6 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  v7 = v6 + *(uint32_t *)(v6 + 4) + 4 + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36);
  v8 = *(float *)(v7 + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38) * a3);
  v9 = *(float *)(v7 + a4 * *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38));
  *a6 = (float)((float)(v9 - v8) * a5) + v8;
  return a6;
}


// ============================================================================
// Address:   0xd805f0 (size: 94 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track9CWeightEx16getKeyBasedValueERKNS0_18SAnimationAccessorEiifPv
// Demangled: glitch::collada::animation_track::CWeightEx::getKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *)const
// ============================================================================
float *glitch::collada::animation_track::CWeightEx::getKeyBasedValue(
        glitch::collada::animation_track::CWeightEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        int a4,
        float a5,
        float *a6)
{
  int v6;
  int v7;
  float v8; // xmm1_4
  float v9; // xmm0_4

  v6 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  v7 = v6 + *(uint32_t *)(v6 + 4) + 4 + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36);
  v8 = *(float *)(v7 + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38) * a3);
  v9 = *(float *)(v7 + a4 * *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38));
  *a6 = (float)((float)(v9 - v8) * a5) + v8;
  return a6;
}


// ============================================================================
// Address:   0xd80650 (size: 94 bytes)
// Symbol:    _ZNK6glitch7collada15animation_track9CWeightEx18applyKeyBasedValueERKNS0_18SAnimationAccessorEiifPvPNS1_15CApplicatorInfoE
// Demangled: glitch::collada::animation_track::CWeightEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// ============================================================================
float *glitch::collada::animation_track::CWeightEx::applyKeyBasedValue(
        glitch::collada::animation_track::CWeightEx::Self *self,
        const glitch::collada::SAnimationAccessor *a2,
        int a3,
        int a4,
        float a5,
        float *a6)
{
  int v6;
  int v7;
  float v8; // xmm1_4
  float v9; // xmm0_4

  v6 = *((uint32_t *)a2 + 1)
     + *(uint32_t *)(*((uint32_t *)a2 + 1) + 4)
     + 4
     + 8 * *(uint32_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 32);
  v7 = v6 + *(uint32_t *)(v6 + 4) + 4 + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 36);
  v8 = *(float *)(v7 + *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38) * a3);
  v9 = *(float *)(v7 + a4 * *(uint16_t *)(*(uint32_t *)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8) + 38));
  *a6 = (float)((float)(v9 - v8) * a5) + v8;
  return a6;
}


// ============================================================================
// Address:   0xd806b0 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateINS_4core8vector2dIfEEED0Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::~CAnimationIOParamTemplate()
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::DestroyDeleting(
        glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *self)
{
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **v1;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *v2;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> ***)self + 7);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079968);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **)((char *)self + 28) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *)((char *)self + 28) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd80780 (size: 98 bytes)
// Symbol:    _ZN6glitch7collada17CAnimationIOParamD2Ev
// Demangled: glitch::collada::CAnimationIOParam::Destroy()
// ============================================================================
// Alternative name is '_ZN6glitch7collada17CAnimationIOParamD1Ev'
static void g4_CAnimationIOParam_Destroy_d80780(glitch::collada::CAnimationIOParam::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v1 = *((uint32_t *)self + 2);
  if ( (int *)(v1 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v1 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd807f0 (size: 106 bytes)
// Symbol:    _ZN6glitch7collada17CAnimationIOParamD0Ev
// Demangled: glitch::collada::CAnimationIOParam::Destroy()
// ============================================================================
void glitch::collada::CAnimationIOParam::DestroyDeleting(glitch::collada::CAnimationIOParam::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v1 = *((uint32_t *)self + 2);
  if ( (int *)(v1 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v1 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd80860 (size: 188 bytes)
// Symbol:    _ZN6glitch7collada21CAnimationIOClipParamD2Ev
// Demangled: glitch::collada::CAnimationIOClipParam::~CAnimationIOClipParam()
// ============================================================================
// Alternative name is '_ZN6glitch7collada21CAnimationIOClipParamD1Ev'
void glitch::collada::CAnimationIOClipParam::Destroy(
        glitch::collada::CAnimationIOClipParam *self)
{
  glitch::collada::CAnimationIOClipParam **v1;
  glitch::collada::CAnimationIOClipParam *v2;
  glitch::collada::CAnimationIOClipParam *v3;
  void (*v4)(glitch::collada::CAnimationIOClipParam **, glitch::collada::CAnimationIOClipParam **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOClipParam ***)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079910);
  if ( v1 != (glitch::collada::CAnimationIOClipParam **)((char *)self + 24) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOClipParam **, glitch::collada::CAnimationIOClipParam **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOClipParam *)((char *)self + 24) )
        break;
      v1 = (glitch::collada::CAnimationIOClipParam **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd80920 (size: 188 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateIiED2Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<int>::~CAnimationIOParamTemplate()
// ============================================================================
// Alternative name is '_ZN6glitch7collada25CAnimationIOParamTemplateIiED1Ev'
template <> void glitch::collada::CAnimationIOParamTemplate<int>::Destroy(
        glitch::collada::CAnimationIOParamTemplate<int> *self)
{
  glitch::collada::CAnimationIOParamTemplate<int> **v1;
  glitch::collada::CAnimationIOParamTemplate<int> *v2;
  glitch::collada::CAnimationIOParamTemplate<int> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<int> **, glitch::collada::CAnimationIOParamTemplate<int> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<int> ***)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079938);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<int> **)((char *)self + 24) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<int> **, glitch::collada::CAnimationIOParamTemplate<int> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<int> *)((char *)self + 24) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<int> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd809e0 (size: 188 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateIfED2Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<float>::~CAnimationIOParamTemplate()
// ============================================================================
// Alternative name is '_ZN6glitch7collada25CAnimationIOParamTemplateIfED1Ev'
template <> void glitch::collada::CAnimationIOParamTemplate<float>::Destroy(
        glitch::collada::CAnimationIOParamTemplate<float> *self)
{
  glitch::collada::CAnimationIOParamTemplate<float> **v1;
  glitch::collada::CAnimationIOParamTemplate<float> *v2;
  glitch::collada::CAnimationIOParamTemplate<float> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<float> **, glitch::collada::CAnimationIOParamTemplate<float> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<float> ***)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079950);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<float> **)((char *)self + 24) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<float> **, glitch::collada::CAnimationIOParamTemplate<float> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<float> *)((char *)self + 24) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<float> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd80aa0 (size: 188 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateINS_4core8vector3dIfEEED2Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::~CAnimationIOParamTemplate()
// ============================================================================
// Alternative name is '_ZN6glitch7collada25CAnimationIOParamTemplateINS_4core8vector3dIfEEED1Ev'
template <> void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::Destroy(
        glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *self)
{
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **v1;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *v2;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> ***)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079980);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **)((char *)self + 32) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *)((char *)self + 32) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd80b60 (size: 188 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateINS_4core8vector2dIfEEED2Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::~CAnimationIOParamTemplate()
// ============================================================================
// Alternative name is '_ZN6glitch7collada25CAnimationIOParamTemplateINS_4core8vector2dIfEEED1Ev'
template <> void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::Destroy(
        glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *self)
{
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **v1;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *v2;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> ***)self + 7);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079968);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **)((char *)self + 28) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *)((char *)self + 28) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd80c20 (size: 188 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateINS_4core10quaternionEED2Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion>::~CAnimationIOParamTemplate()
// ============================================================================
// Alternative name is '_ZN6glitch7collada25CAnimationIOParamTemplateINS_4core10quaternionEED1Ev'
template <> void glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self>::Destroy(
        glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> *self)
{
  glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **v1;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> *v2;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> ***)self + 9);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079998);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **)((char *)self + 36) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> *)((char *)self + 36) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd80ce0 (size: 228 bytes)
// Symbol:    _ZN6glitch7collada23CAnimationIOStringParamD2Ev
// Demangled: glitch::collada::CAnimationIOStringParam::~CAnimationIOStringParam()
// ============================================================================
// Alternative name is '_ZN6glitch7collada23CAnimationIOStringParamD1Ev'
void glitch::collada::CAnimationIOStringParam::Destroy(
        glitch::collada::CAnimationIOStringParam *self)
{
  glitch::collada::CAnimationIOStringParam **v1;
  glitch::collada::CAnimationIOStringParam *v2;
  glitch::collada::CAnimationIOStringParam *v3;
  void (*v4)(glitch::collada::CAnimationIOStringParam **, glitch::collada::CAnimationIOStringParam **, int);
  int v5;
  int v6;

  v1 = *((glitch::collada::CAnimationIOStringParam ***)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798E0);
  if ( v1 != (glitch::collada::CAnimationIOStringParam **)((char *)self + 24) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOStringParam **, glitch::collada::CAnimationIOStringParam **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOStringParam *)((char *)self + 24) )
        break;
      v1 = (glitch::collada::CAnimationIOStringParam **)v3;
    }
  }
  v5 = *((uint32_t *)self + 5);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v6 = *((uint32_t *)self + 2);
  if ( (int *)(v6 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v6 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd80dd0 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateINS_4core8vector3dIfEEED0Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::~CAnimationIOParamTemplate()
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::DestroyDeleting(
        glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *self)
{
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **v1;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *v2;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> ***)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079980);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **)((char *)self + 32) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *)((char *)self + 32) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd80ea0 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateIiED0Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<int>::~CAnimationIOParamTemplate()
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<int>::DestroyDeleting(
        glitch::collada::CAnimationIOParamTemplate<int> *self)
{
  glitch::collada::CAnimationIOParamTemplate<int> **v1;
  glitch::collada::CAnimationIOParamTemplate<int> *v2;
  glitch::collada::CAnimationIOParamTemplate<int> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<int> **, glitch::collada::CAnimationIOParamTemplate<int> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<int> ***)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079938);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<int> **)((char *)self + 24) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<int> **, glitch::collada::CAnimationIOParamTemplate<int> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<int> *)((char *)self + 24) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<int> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd80f70 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateIfED0Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<float>::~CAnimationIOParamTemplate()
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<float>::DestroyDeleting(
        glitch::collada::CAnimationIOParamTemplate<float> *self)
{
  glitch::collada::CAnimationIOParamTemplate<float> **v1;
  glitch::collada::CAnimationIOParamTemplate<float> *v2;
  glitch::collada::CAnimationIOParamTemplate<float> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<float> **, glitch::collada::CAnimationIOParamTemplate<float> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<float> ***)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079950);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<float> **)((char *)self + 24) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<float> **, glitch::collada::CAnimationIOParamTemplate<float> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<float> *)((char *)self + 24) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<float> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd81040 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada21CAnimationIOClipParamD0Ev
// Demangled: glitch::collada::CAnimationIOClipParam::~CAnimationIOClipParam()
// ============================================================================
void glitch::collada::CAnimationIOClipParam::DestroyDeleting(
        glitch::collada::CAnimationIOClipParam *self)
{
  glitch::collada::CAnimationIOClipParam **v1;
  glitch::collada::CAnimationIOClipParam *v2;
  glitch::collada::CAnimationIOClipParam *v3;
  void (*v4)(glitch::collada::CAnimationIOClipParam **, glitch::collada::CAnimationIOClipParam **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOClipParam ***)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079910);
  if ( v1 != (glitch::collada::CAnimationIOClipParam **)((char *)self + 24) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOClipParam **, glitch::collada::CAnimationIOClipParam **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOClipParam *)((char *)self + 24) )
        break;
      v1 = (glitch::collada::CAnimationIOClipParam **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd81110 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateINS_4core10quaternionEED0Ev
// Demangled: glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion>::~CAnimationIOParamTemplate()
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self>::DestroyDeleting(
        glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> *self)
{
  glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **v1;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> *v2;
  glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> *v3;
  void (*v4)(glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **, int);
  int v5;

  v1 = *((glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> ***)self + 9);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079998);
  if ( v1 != (glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **)((char *)self + 36) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **, glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> *)((char *)self + 36) )
        break;
      v1 = (glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> **)v3;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v5 = *((uint32_t *)self + 2);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd811e0 (size: 236 bytes)
// Symbol:    _ZN6glitch7collada23CAnimationIOStringParamD0Ev
// Demangled: glitch::collada::CAnimationIOStringParam::~CAnimationIOStringParam()
// ============================================================================
void glitch::collada::CAnimationIOStringParam::DestroyDeleting(
        glitch::collada::CAnimationIOStringParam *self)
{
  glitch::collada::CAnimationIOStringParam **v1;
  glitch::collada::CAnimationIOStringParam *v2;
  glitch::collada::CAnimationIOStringParam *v3;
  void (*v4)(glitch::collada::CAnimationIOStringParam **, glitch::collada::CAnimationIOStringParam **, int);
  int v5;
  int v6;

  v1 = *((glitch::collada::CAnimationIOStringParam ***)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798E0);
  if ( v1 != (glitch::collada::CAnimationIOStringParam **)((char *)self + 24) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( v2 != nullptr )
      {
        if ( ((uint8_t)(uintptr_t)v2 & 1) == 0 )
        {
          v4 = *(void (**)(glitch::collada::CAnimationIOStringParam **, glitch::collada::CAnimationIOStringParam **, int))((unsigned int)(uintptr_t)v2 & 0xFFFFFFFE);
          if ( v4 != nullptr )
            v4(v1 + 3, v1 + 3, 2);
        }
        v1[2] = nullptr;
      }
      operator delete(v1);
      if ( v3 == (glitch::collada::CAnimationIOStringParam *)((char *)self + 24) )
        break;
      v1 = (glitch::collada::CAnimationIOStringParam **)v3;
    }
  }
  v5 = *((uint32_t *)self + 5);
  if ( (int *)(v5 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v5 - 12);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20798B8);
  v6 = *((uint32_t *)self + 2);
  if ( (int *)(v6 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v6 - 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd812d0 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateIiE5applyEv
// Demangled: glitch::collada::CAnimationIOParamTemplate<int>::apply(void)
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<int>::apply(
        glitch::collada::CAnimationIOParamTemplate<int> *self)
{
  uint32_t *i;
  int v2;
  void *v3;
  typedef uint16_t _g4_t_v4[3];
  typedef int (**_g4_t_v5)(std::exception *);
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (2u + sizeof(_g4_t_v4)) > _g4_s0 ? (2u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 2u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);

  if ( *((uint8_t *)self + 16) != 0 )
  {
    for ( i = *((uint32_t **)self + 6); (uint32_t *)((char *)self + 24) != i; i = (uint32_t *)*i )
    {
      v2 = i[2];
      if ( v2 == 0 )
      {
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)&v4[1], "call to empty boost::function", (int)(uintptr_t)v4);
        sub_19042E0(&v5, &v4[1]);
        v3 = (void *)(*(uint32_t *)&v4[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v3);
        }
        v5 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
        std::terminate();
      }
      (*(void (**)(uint32_t *, uint32_t))((v2 & 0xFFFFFFFE) + 4))(i + 3, *((uint32_t *)self + 5));
    }
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0xd813a0 (size: 235 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateINS_4core8vector2dIfEEE5applyEv
// Demangled: glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::apply(void)
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>>::apply(
        glitch::collada::CAnimationIOParamTemplate<glitch::core::vector2d<float>> *self)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  void (*v5)(uint32_t *, uint32_t *);
  void *v6;
  typedef uint16_t _g4_t_v7[3];
  typedef uint32_t _g4_t_v8[2];
  typedef int (**_g4_t_v9)(std::exception *);
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (10u + sizeof(_g4_t_v7)) > _g4_s0 ? (10u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 10u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  if ( *((uint8_t *)self + 16) != 0 )
  {
    v1 = *((uint32_t **)self + 7);
    if ( v1 != (uint32_t *)((char *)self + 28) )
    {
      v2 = v1[2];
      v3 = *((uint32_t *)self + 5);
      v4 = *((uint32_t *)self + 6);
      if ( v2 == 0 )
      {
LABEL_9:
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)&v7[1], "call to empty boost::function", (int)(uintptr_t)v7);
        sub_19042E0(&v9, &v7[1]);
        v6 = (void *)(*(uint32_t *)&v7[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v7[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v7[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
        v9 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
        std::terminate();
      }
      while ( 1 )
      {
        v8[0] = v3;
        v5 = *(void (**)(uint32_t *, uint32_t *))((v2 & 0xFFFFFFFE) + 4);
        v8[1] = v4;
        v5(v1 + 3, v8);
        v1 = (uint32_t *)*v1;
        if ( (uint32_t *)((char *)self + 28) == v1 )
          break;
        v2 = v1[2];
        v3 = *((uint32_t *)self + 5);
        v4 = *((uint32_t *)self + 6);
        if ( v2 == 0 )
          goto LABEL_9;
      }
    }
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0xd81490 (size: 291 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateINS_4core10quaternionEE5applyEv
// Demangled: glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion>::apply(void)
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self>::apply(
        glitch::collada::CAnimationIOParamTemplate<glitch::core::quaternion::Self> *self)
{
  uint32_t *i;
  int v2;
  void *v3;
  typedef void (*_g4_t_v4)(uint32_t *, int, int, int, int);
  typedef uint16_t _g4_t_v5[3];
  typedef int (**_g4_t_v6)(std::exception *);
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (18u + sizeof(_g4_t_v5)) > _g4_s1 ? (18u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v7)) > _g4_s3 ? (32u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v8)) > _g4_s4 ? (36u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v9)) > _g4_s5 ? (40u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v10)) > _g4_s6 ? (44u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v11)) > _g4_s7 ? (48u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v12)) > _g4_s8 ? (52u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v13)) > _g4_s9 ? (56u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v14)) > _g4_s10 ? (60u + sizeof(_g4_t_v14)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 18u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);

  if ( *((uint8_t *)self + 16) != 0 )
  {
    for ( i = *((uint32_t **)self + 9); (uint32_t *)((char *)self + 36) != i; i = (uint32_t *)*i )
    {
      v7 = *((uint32_t *)self + 5);
      v8 = *((uint32_t *)self + 6);
      v9 = *((uint32_t *)self + 7);
      v10 = *((uint32_t *)self + 8);
      v2 = i[2];
      if ( v2 == 0 )
      {
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)&v5[1], "call to empty boost::function", (int)(uintptr_t)v5);
        sub_19042E0(&v6, &v5[1]);
        v3 = (void *)(*(uint32_t *)&v5[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v5[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v5[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v3);
        }
        v6 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
        std::terminate();
      }
      v11 = v7;
      v12 = v8;
      v13 = v9;
      v4 = *(void (**)(uint32_t *, int, int, int, int))((v2 & 0xFFFFFFFE) + 4);
      v14 = v10;
      v4(i + 3, v7, v8, v9, v10);
    }
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0xd815c0 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateIfE5applyEv
// Demangled: glitch::collada::CAnimationIOParamTemplate<float>::apply(void)
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<float>::apply(
        glitch::collada::CAnimationIOParamTemplate<float> *self)
{
  uint32_t *i;
  int v2;
  void *v3;
  typedef uint16_t _g4_t_v4[3];
  typedef int (**_g4_t_v5)(std::exception *);
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (2u + sizeof(_g4_t_v4)) > _g4_s0 ? (2u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 2u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);

  if ( *((uint8_t *)self + 16) != 0 )
  {
    for ( i = *((uint32_t **)self + 6); (uint32_t *)((char *)self + 24) != i; i = (uint32_t *)*i )
    {
      v2 = i[2];
      if ( v2 == 0 )
      {
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)&v4[1], "call to empty boost::function", (int)(uintptr_t)v4);
        sub_19042E0(&v5, &v4[1]);
        v3 = (void *)(*(uint32_t *)&v4[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v3);
        }
        v5 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
        std::terminate();
      }
      (*(void (**)(uint32_t *, uint32_t))((v2 & 0xFFFFFFFE) + 4))(i + 3, *((uint32_t *)self + 5));
    }
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0xd81690 (size: 230 bytes)
// Symbol:    _ZN6glitch7collada25CAnimationIOParamTemplateINS_4core8vector3dIfEEE5applyEv
// Demangled: glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::apply(void)
// ============================================================================
template <> void glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>>::apply(
        glitch::collada::CAnimationIOParamTemplate<glitch::core::vector3d<float>> *self)
{
  uint32_t *i;
  int v2;
  int v3;
  int v4;
  void (*v5)(uint32_t *, uint32_t *);
  void *v6;
  typedef uint16_t _g4_t_v7[3];
  typedef int (**_g4_t_v8)(std::exception *);
  typedef uint32_t _g4_t_v9[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (6u + sizeof(_g4_t_v7)) > _g4_s0 ? (6u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 6u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);

  if ( *((uint8_t *)self + 16) != 0 )
  {
    for ( i = *((uint32_t **)self + 8); (uint32_t *)((char *)self + 32) != i; i = (uint32_t *)*i )
    {
      v2 = i[2];
      v3 = *((uint32_t *)self + 5);
      v4 = *((uint32_t *)self + 6);
      if ( v2 == 0 )
      {
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)&v7[1], "call to empty boost::function", (int)(uintptr_t)v7);
        sub_19042E0(&v8, &v7[1]);
        v6 = (void *)(*(uint32_t *)&v7[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v7[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v7[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
        v8 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
        std::terminate();
      }
      v5 = *(void (**)(uint32_t *, uint32_t *))((v2 & 0xFFFFFFFE) + 4);
      v9[2] = *((uint32_t *)self + 7);
      v9[0] = v3;
      v9[1] = v4;
      v5(i + 3, v9);
    }
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0xd81780 (size: 923 bytes)
// Symbol:    _ZN6glitch7collada23CAnimationIOStringParam5applyEv
// Demangled: glitch::collada::CAnimationIOStringParam::apply(void)
// ============================================================================
void glitch::collada::CAnimationIOStringParam::apply(glitch::collada::CAnimationIOStringParam *self)
{
  uint8_t *v1;
  int v2;
  bool v3;
  uint8_t *src;
  int v5;
  int *v6;
  void (*v7)(uint32_t, uint32_t);
  unsigned int v8;
  unsigned int v9;
  int v10;
  size_t v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  size_t n;
  int v17;
  uint8_t *v18;
  void *v19;
  typedef int _g4_t_v20;
  typedef void (*_g4_t_v21)(uint32_t, uint32_t);
  typedef unsigned int _g4_t_v22;
  typedef glitch::collada::CAnimationIOStringParam *_g4_t_v23;
  typedef int *_g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef void *_g4_t_dest;
  typedef uint16_t _g4_t_v27[3];
  typedef int _g4_t_v28;
  typedef int (**_g4_t_v29)(std::exception *);
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v24)) > _g4_s4 ? (20u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v25)) > _g4_s5 ? (24u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_dest)) > _g4_s6 ? (24u + sizeof(_g4_t_dest)) : _g4_s6,
    _g4_s8 = (46u + sizeof(_g4_t_v27)) > _g4_s7 ? (46u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v28)) > _g4_s8 ? (52u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v29)) > _g4_s9 ? (56u + sizeof(_g4_t_v29)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 46u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);

  if ( *((uint8_t *)self + 16) != 0 )
  {
    v23 = *((glitch::collada::CAnimationIOStringParam **)self + 6);
    if ( v23 != (glitch::collada::CAnimationIOStringParam *)((char *)self + 24) )
    {
      do
      {
        src = *((uint8_t **)self + 5);
        if ( *((int *)src - 1) < 0 )
        {
          v12 = *((uint32_t *)src - 3);
          v13 = *((uint32_t *)src - 2);
          if ( v12 > 0x3FFFFFFC )
LABEL_53:
            sub_1900180("basic_string::_S_create");
          if ( v12 > v13 && v12 < 2 * v13 )
            v12 = 2 * v13;
          if ( v12 + 29 > 0x1000 && v13 < v12 )
          {
            v14 = v12 + 4096 - (((uint16_t)v12 + 29) & 0xFFF);
            v12 = 1073741820;
            if ( v14 <= 0x3FFFFFFC )
              v12 = v14;
          }
          v15 = sub_4EBDC0(v12 + 13);
          *(uint32_t *)(v15 + 4) = v12;
          *(uint32_t *)(v15 + 8) = 0;
          n = *((uint32_t *)src - 3);
          v17 = 0;
          v18 = (uint8_t *)(v15 + 12);
          if ( n != 0 )
          {
            if ( n == 1 )
            {
              *(uint8_t *)(v15 + 12) = *src;
              v17 = *((uint32_t *)src - 3);
            }
            else
            {
              memcpy((void *)(v15 + 12), src, n);
              v17 = *((uint32_t *)src - 3);
              v18 = (uint8_t *)(v15 + 12);
            }
          }
          if ( (int *)v15 == (int *)(&dword_20D3E6C) )
          {
            src = v18;
          }
          else
          {
            *(uint32_t *)(v15 + 8) = 0;
            *(uint32_t *)v15 = v17;
            src = v18;
            *(uint8_t *)(v15 + v17 + 12) = 0;
          }
        }
        else if ( src - 12 != (uint8_t *)&dword_20D3E6C )
        {
          __sync_add_and_fetch((volatile int32_t *)src - 1, 1u);
        }
        v5 = *((uint32_t *)v23 + 2);
        if ( v5 == 0 )
        {
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)&v28, "call to empty boost::function", (int)(uintptr_t)v27);
          sub_19042E0(&v29, &v28);
          v19 = (void *)(v28 - 12);
          if ( (uint32_t *)(v28 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v19);
          }
          v29 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
          std::terminate();
        }
        v6 = (int *)(src - 12);
        v7 = *(void (**)(uint32_t, uint32_t))((v5 & 0xFFFFFFFE) + 4);
        if ( *((int *)src - 1) >= 0 )
        {
          if ( v6 != (int *)(&dword_20D3E6C) )
            __sync_add_and_fetch((volatile int32_t *)src - 1, 1u);
          v1 = src;
        }
        else
        {
          v8 = *((uint32_t *)src - 3);
          v25 = *((uint32_t *)src - 2);
          if ( v8 > 0x3FFFFFFC )
            goto LABEL_53;
          if ( v8 > v25 && v8 < 2 * v25 )
            v8 = 2 * v25;
          if ( v8 + 29 > 0x1000 && v25 < v8 )
          {
            v9 = v8 + 4096 - (((uint16_t)v8 + 29) & 0xFFF);
            v8 = 1073741820;
            if ( v9 <= 0x3FFFFFFC )
              v8 = v9;
          }
          v21 = v7;
          v22 = v8;
          v10 = sub_4EBDC0(v8 + 13);
          *(uint32_t *)(v10 + 8) = 0;
          *(uint32_t *)(v10 + 4) = v22;
          v11 = *((uint32_t *)src - 3);
          v24 = (int *)v10;
          v20 = 0;
          dest = (void *)(v10 + 12);
          v7 = v21;
          if ( v11 != 0 )
          {
            if ( v11 == 1 )
            {
              *(uint8_t *)(v10 + 12) = *src;
            }
            else
            {
              memcpy(dest, src, v11);
              v7 = v21;
            }
            v20 = *((uint32_t *)src - 3);
          }
          if ( v24 != (int *)(&dword_20D3E6C) )
          {
            v24[2] = 0;
            *v24 = v20;
            *((uint8_t *)v24 + v20 + 12) = 0;
          }
          v1 = (uint8_t *)(dest);
        }
        *(uint32_t *)&v27[1] = (uint32_t)(uintptr_t)(v1);
        v7((uint32_t)(uintptr_t)((char *)v23 + 12), (uint32_t)(uintptr_t)&v27[1]);
        v2 = *(uint32_t *)&v27[1] - 12;
        if ( (int *)(*(uint32_t *)&v27[1] - 12) != (int *)(&dword_20D3E6C)
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v27[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          gll_operator_delete_arr(v2);
        }
        if ( v6 != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)src - 1, 0xFFFFFFFF) <= 0 )
          gll_operator_delete_arr((int)(uintptr_t)(src - 12));
        v3 = (glitch::collada::CAnimationIOStringParam *)((char *)self + 24) == *(glitch::collada::CAnimationIOStringParam **)v23;
        v23 = *(glitch::collada::CAnimationIOStringParam **)v23;
      }
      while ( !v3 );
    }
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0xd81b20 (size: 74 bytes)
// Symbol:    _ZN6glitch7collada6detail16CAnimationFilterINS_4core23SProcessBufferAllocatorIjLb0EEEED2Ev
// Demangled: glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int,false>>::~CAnimationFilter()
// ============================================================================
// Alternative name is '_ZN6glitch7collada6detail16CAnimationFilterINS_4core23SProcessBufferAllocatorIjLb0EEEED1Ev'
static void g4_CAnimationFilter_dtor_d81b20(
        glitch::core::Self **self)
{
  void *v1;

  *self = (glitch::core::Self *)((uint32_t)(uintptr_t)&off_2079838);
  if ( *(self + 2) != nullptr )
    glitch::core::releaseProcessBuffer(*(self + 2), v1);
  glitch::collada::CAnimationFilterBase::Destroy((volatile int32_t **)self);
}


// ============================================================================
// Address:   0xd81b70 (size: 82 bytes)
// Symbol:    _ZN6glitch7collada6detail16CAnimationFilterINS_4core23SProcessBufferAllocatorIjLb0EEEED0Ev
// Demangled: glitch::collada::detail::CAnimationFilter<glitch::core::SProcessBufferAllocator<unsigned int,false>>::~CAnimationFilter()
// ============================================================================
static void g4_CAnimationFilter_dtor_d81b70(
        glitch::core::Self **self)
{
  void *v1;

  *self = (glitch::core::Self *)((uint32_t)(uintptr_t)&off_2079838);
  if ( *(self + 2) != nullptr )
    glitch::core::releaseProcessBuffer(*(self + 2), v1);
  glitch::collada::CAnimationFilterBase::Destroy((volatile int32_t **)self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd81d00 (size: 42 bytes)
// Symbol:    _ZN6glitch7collada20CDynamicAnimationSet19addAnimationLibraryEPKc
// Demangled: glitch::collada::CDynamicAnimationSet::addAnimationLibrary(char const*)
// ============================================================================
static int g4_CDynamicAnimationSet_addAnimationLibrary_d81d00(
        glitch::collada::CDynamicAnimationSet::Self *self,
        char *a2)
{
  return glitch::collada::CAnimationSet::addAnimationLibrary((glitch::collada::CAnimationSet::Self *)self, a2);
}


// ============================================================================
// Address:   0xd81d30 (size: 217 bytes)
// Symbol:    _ZNK6glitch7collada17CLODMeshSceneNode20getRenderVertexCountEPv
// Demangled: glitch::collada::CLODMeshSceneNode::getRenderVertexCount(void *)const
// ============================================================================
static int g4_CLODMeshSceneNode_getRenderVertexCount_d81d30(
        glitch::collada::CLODMeshSceneNode::Self *self,
        unsigned int a2)
{
  volatile int32_t *v2;
  glitch::video::CVertexStreams::Self *v3;
  typedef int _g4_t_v5;
  typedef volatile int32_t *_g4_t_v6[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  v6[6] = (volatile int32_t *)&self;
  v2 = *(volatile int32_t **)(*(uint32_t *)(*((uint32_t *)self + 79) + 12 * HIBYTE(a2)) + 4 * ((a2 & 0xFF0000) >> 16));
  if ( v2 != nullptr )
    sub_8B1B00(v2 + 1);
  (*(void (**)(volatile int32_t **))(*v2 + 20))(v6);
  v3 = *((glitch::video::CVertexStreams::Self **)v6[0] + 2);
  if ( v3 != nullptr )
    sub_8B1B00(*((volatile int32_t **)v6[0] + 2));
  v5 = *((uint32_t *)v3 + 2);
  if ( __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v3);
    gll_operator_delete_arr((int)(uintptr_t)v3);
  }
  if ( v6[0] != nullptr )
    sub_5459C0(v6[0]);
  sub_5459C0(v2);
  return v5;
}


// ============================================================================
// Address:   0xd81f30 (size: 92 bytes)
// Symbol:    _ZN6glitch7collada6detail15CBlendingBufferINS_4core23SProcessBufferAllocatorIhLb0EEEED2Ev
// Demangled: glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>>::~CBlendingBuffer()
// ============================================================================
// Alternative name is '_ZN6glitch7collada6detail15CBlendingBufferINS_4core23SProcessBufferAllocatorIhLb0EEEED1Ev'
static void g4_CBlendingBuffer_dtor_d81f30(
        void *self)
{
  void *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20795A0);
  if ( *((uint32_t *)self + 2) != 0 )
    glitch::core::releaseProcessBuffer(*((glitch::core::Self **)self + 2), v1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2047EB8);
  if ( *((uint32_t *)self + 1) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 1));
}


// ============================================================================
// Address:   0xd81f90 (size: 92 bytes)
// Symbol:    _ZN6glitch7collada6detail15CBlendingBufferINS_4core10SAllocatorIhLNS_6memory13E_MEMORY_HINTE0EEEED2Ev
// Demangled: glitch::collada::detail::CBlendingBuffer<glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>::~CBlendingBuffer()
// ============================================================================
// Alternative name is '_ZN6glitch7collada6detail15CBlendingBufferINS_4core10SAllocatorIhLNS_6memory13E_MEMORY_HINTE0EEEED1Ev'
static void g4_CBlendingBuffer_dtor_d81f90(
        void *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079858);
  if ( *((uint32_t *)self + 2) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 2));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2047EB8);
  if ( *((uint32_t *)self + 1) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 1));
}


// ============================================================================
// Address:   0xd81ff0 (size: 100 bytes)
// Symbol:    _ZN6glitch7collada6detail15CBlendingBufferINS_4core10SAllocatorIhLNS_6memory13E_MEMORY_HINTE0EEEED0Ev
// Demangled: glitch::collada::detail::CBlendingBuffer<glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>::~CBlendingBuffer()
// ============================================================================
static void g4_CBlendingBuffer_dtor_d81ff0(
        void *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079858);
  if ( *((uint32_t *)self + 2) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 2));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2047EB8);
  if ( *((uint32_t *)self + 1) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 1));
  operator delete(self);
}


// ============================================================================
// Address:   0xd82060 (size: 100 bytes)
// Symbol:    _ZN6glitch7collada6detail15CBlendingBufferINS_4core23SProcessBufferAllocatorIhLb0EEEED0Ev
// Demangled: glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>>::~CBlendingBuffer()
// ============================================================================
static void g4_CBlendingBuffer_dtor_d82060(
        void *self)
{
  void *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20795A0);
  if ( *((uint32_t *)self + 2) != 0 )
    glitch::core::releaseProcessBuffer(*((glitch::core::Self **)self + 2), v1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2047EB8);
  if ( *((uint32_t *)self + 1) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 1));
  operator delete(self);
}


// ============================================================================
// Address:   0xd821e0 (size: 692 bytes)
// Symbol:    _ZN6glitch7collada15animation_track19CTextureTransformEx19applyBlendedValueExEPKvPKfiPvPNS1_15CApplicatorInfoE
// Demangled: glitch::collada::animation_track::CTextureTransformEx::applyBlendedValueEx(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)
// ============================================================================
static int g4_CTextureTransformEx_applyBlendedValueEx_d821e0(
        glitch::collada::animation_track::CTextureTransformEx::Self *self,
        float *a2,
        const float *a3,
        glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>> *a4,
        uint16_t *a5)
{
  float v5; // xmm7_4
  float v7; // xmm5_4
  const float *v8;
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  uint16_t v21;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30[18];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_v25)) > _g4_s2 ? (72u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v26)) > _g4_s3 ? (76u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v27)) > _g4_s4 ? (84u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v28)) > _g4_s5 ? (88u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v29)) > _g4_s6 ? (92u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v30)) > _g4_s7 ? (96u + sizeof(_g4_t_v30)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);

  if ( (int)(uintptr_t)a3 <= 0 )
  {
    v27 = 1.0;
    v19 = 0.0;
    v25 = -0.0;
    v18 = 0.0;
    v20 = 1.0;
    v26 = 0.0;
  }
  else
  {
    v5 = 0.0;
    v7 = 1.0;
    v8 = nullptr;
    v9 = 1.0;
    v28 = 0.0;
    v29 = 0.0;
    do
    {
      v10 = a2[(uint32_t)(uintptr_t)v8];
      v8 = (const float *)((char *)v8 + 1);
      v11 = *(float *)self * v10;
      v12 = *((float *)self + 1) * v10;
      v13 = *((float *)self + 2);
      v14 = *((float *)self + 3);
      *(float *)self = v11;
      *((float *)self + 1) = v12;
      v15 = v13 * v10;
      v16 = v14 * v10;
      v17 = v10 * *((float *)self + 4);
      v29 = v11 + v29;
      *((float *)self + 2) = v15;
      v5 = v5 + v15;
      *((float *)self + 3) = v16;
      v9 = v9 + v16;
      *((float *)self + 4) = v17;
      v7 = v7 + v17;
      v28 = v12 + v28;
      self = (glitch::collada::animation_track::CTextureTransformEx::Self *)((char *)self + 20);
    }
    while ( v8 != a3 );
    v23 = cosf(v5 * 0.017453313f);
    v24 = sinf(v5 * 0.017453313f);
    v26 = v7 * v24;
    v25 = (float)-v24 * v9;
    v27 = v23 * v7;
    v18 = (float)((float)((float)((float)-v24 * (float)(v28 - 0.5)) + (float)(v23 * (float)(v29 - 0.5))) * v9) + 0.5;
    v19 = (float)((float)((float)(v23 * (float)(v28 - 0.5)) + (float)(v24 * (float)(v29 - 0.5))) * v7) + 0.5;
    v20 = v23 * v9;
  }
  v30[0] = v20;
  v30[2] = 0.0;
  v30[3] = 0.0;
  v30[1] = v26;
  v30[6] = 0.0;
  v30[7] = 0.0;
  v21 = a5[4];
  v30[10] = 1.0;
  v30[4] = v25;
  v30[5] = v27;
  memset(&v30[11], 0, 16);
  v30[8] = v18;
  v30[9] = v19;
  v30[15] = 1.0;
  return glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>>::setParameter(
           a4,
           v21,
           0,
           (const glitch::core::CMatrix4<float> *)v30);
}


// ============================================================================
// Address:   0xd824a0 (size: 492 bytes)
// Symbol:    _ZN6glitch7collada17CAnimationTargets3setERKNS0_6detail16CAnimationFilterINS_4core10SAllocatorIjLNS_6memory13E_MEMORY_HINTE0EEEEE
// Demangled: glitch::collada::CAnimationTargets::set(glitch::collada::detail::CAnimationFilter<glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
static uint32_t *g4_CAnimationTargets_set_d824a0(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *result;
  int i;
  char *v7;
  int v8;
  int v9;
  uint16_t *v10;
  char *v11;
  uint16_t *v12;
  char *v13;
  uint16_t *v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  unsigned int v19;
  char *v20;
  char *v21;
  int v22;
  unsigned int v23;
  int v24;
  int16_t v25;

  a1[3] = a1[2];
  v2 = *(uint32_t *)(a2 + 12);
  v3 = 0;
  if ( v2 != 0 )
  {
    v4 = *(uint32_t *)(v2 + 8);
    if ( v4 != 0 )
      v3 = v4 - 8;
  }
  result = *(uint32_t **)(v3 + 52);
  v18 = result[1] - *result;
  if ( v18 > 0 )
  {
    for ( i = 0; i != v18; ++i )
    {
      result = *(uint32_t **)(a2 + 8);
      if ( ((1 << i) & result[i >> 5]) != 0 )
      {
        v7 = (char *)a1[3];
        v25 = i;
        if ( v7 == (char *)a1[4] )
        {
          v9 = (int)(uintptr_t)&v7[-a1[2]] >> 1;
          v22 = 2;
          v19 = v9;
          if ( v9 != 0 )
          {
            v16 = 2 * v9;
            if ( v19 > v16 || v16 > 0x7FFFFFFF )
              v22 = -2;
            else
              v22 = 4 * v19;
          }
          v17 = i;
          v24 = sub_4EBDC0(v22);
          v23 = v24 + 2;
          i = v17;
          v10 = (uint16_t *)(v24 + 2 * v19);
          if ( v10 != nullptr )
            *v10 = v25;
          v20 = (char *)a1[2];
          if ( v7 != v20 )
          {
            v11 = (char *)a1[2];
            v12 = (uint16_t *)v24;
            do
            {
              if ( v12 != nullptr )
                *v12 = *(uint16_t *)v11;
              v11 += 2;
              ++v12;
            }
            while ( v7 != v11 );
            v23 = v24 + 2 * ((unsigned int)(v7 - (v20 + 2)) >> 1) + 4;
          }
          v21 = (char *)a1[3];
          if ( v7 != v21 )
          {
            v13 = v7;
            v14 = (uint16_t *)v23;
            do
            {
              if ( v14 != nullptr )
                *v14 = *(uint16_t *)v13;
              v13 += 2;
              ++v14;
            }
            while ( v21 != v13 );
            v23 += 2 * ((unsigned int)(v21 - (v7 + 2)) >> 1) + 2;
          }
          v15 = a1[2];
          if ( v15 != 0 )
          {
            gll_operator_delete_arr(v15);
            i = v17;
          }
          a1[2] = v24;
          result = (uint32_t *)(v22 + v24);
          a1[3] = v23;
          a1[4] = v22 + v24;
        }
        else
        {
          v8 = 0;
          if ( v7 != nullptr )
          {
            *(uint16_t *)v7 = i;
            v8 = a1[3];
          }
          result = (uint32_t *)(v8 + 2);
          a1[3] = (uint32_t)(uintptr_t)(result);
        }
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd82690 (size: 29 bytes)
// Symbol:    _ZN6glitch7collada20CAnimationTreeCookie11unsetTargetEi
// Demangled: glitch::collada::CAnimationTreeCookie::unsetTarget(int)
// ============================================================================
static int g4_CAnimationTreeCookie_unsetTarget_d82690(glitch::collada::CAnimationTreeCookie::Self *self, int a2)
{
  *(uint32_t *)(*((uint32_t *)self + 15) + 4 * a2) = 0;
  *(uint32_t *)(*((uint32_t *)self + 18) + 4 * a2) = 0;
  return a2;
}


// ============================================================================
// Address:   0xd826b0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada28CModularSkinnedMeshSceneNodeD1Ev
// Demangled: g4_thunk_0xd826b0_61()
// ============================================================================
void g4_thunk_0xd826b0_62(
        glitch::collada::CModularSkinnedMeshSceneNode::Self *self)
{
  g4_CModularSkinnedMeshSceneNode_Destroy_d826d0((glitch::collada::CModularSkinnedMeshSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd826c0 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada28CModularSkinnedMeshSceneNodeD1Ev
// Demangled: g4_thunk_0xd826c0_63()
// ============================================================================
void g4_thunk_0xd826c0_64(
        glitch::collada::CModularSkinnedMeshSceneNode::Self *self)
{
  g4_CModularSkinnedMeshSceneNode_Destroy_d826d0((glitch::collada::CModularSkinnedMeshSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd826d0 (size: 125 bytes)
// Symbol:    _ZN6glitch7collada28CModularSkinnedMeshSceneNodeD1Ev
// Demangled: glitch::collada::CModularSkinnedMeshSceneNode::Destroy()
// ============================================================================
static void g4_CModularSkinnedMeshSceneNode_Destroy_d826d0(
        glitch::collada::CModularSkinnedMeshSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2074D10);
  *((uint32_t *)self + 92) = ((uint32_t)(uintptr_t)&off_2074E6C);
  *((uint32_t *)self + 91) = (uint32_t)(uintptr_t)(&off_2074E4C);
  glitch::collada::CMeshSceneNode::Destroy(
    (volatile int32_t **)self,
    (volatile int32_t **)&off_2074E88);
  *((uint32_t *)self + 91) = ((uint32_t)(uintptr_t)&off_207484C);
  *((uint32_t *)self + 92) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd82750 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada21CSkinnedMeshSceneNodeD1Ev
// Demangled: g4_thunk_0xd82750_65()
// ============================================================================
void g4_thunk_0xd82750_66(
        glitch::collada::CSkinnedMeshSceneNode *self)
{
  g4_CSkinnedMeshSceneNode_dtor_d82770((glitch::collada::CSkinnedMeshSceneNode *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd82760 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada21CSkinnedMeshSceneNodeD1Ev
// Demangled: g4_thunk_0xd82760_67()
// ============================================================================
void g4_thunk_0xd82760_68(
        glitch::collada::CSkinnedMeshSceneNode *self)
{
  g4_CSkinnedMeshSceneNode_dtor_d82770((glitch::collada::CSkinnedMeshSceneNode *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd82770 (size: 125 bytes)
// Symbol:    _ZN6glitch7collada21CSkinnedMeshSceneNodeD1Ev
// Demangled: glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode()
// ============================================================================
static void g4_CSkinnedMeshSceneNode_dtor_d82770(
        glitch::collada::CSkinnedMeshSceneNode *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20760F0);
  *((uint32_t *)self + 92) = ((uint32_t)(uintptr_t)&off_207624C);
  *((uint32_t *)self + 91) = (uint32_t)(uintptr_t)(&off_207622C);
  glitch::collada::CMeshSceneNode::Destroy(
    (volatile int32_t **)self,
    (volatile int32_t **)&off_20760A4);
  *((uint32_t *)self + 91) = ((uint32_t)(uintptr_t)&off_2075BEC);
  *((uint32_t *)self + 92) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd827f0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada21CSkinnedMeshSceneNodeD0Ev
// Demangled: g4_thunk_0xd827f0_69()
// ============================================================================
void g4_thunk_0xd827f0_70(
        glitch::collada::CSkinnedMeshSceneNode *self)
{
  g4_CSkinnedMeshSceneNode_dtor_d82770((glitch::collada::CSkinnedMeshSceneNode *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd82800 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada21CSkinnedMeshSceneNodeD0Ev
// Demangled: g4_thunk_0xd82800_71()
// ============================================================================
void g4_thunk_0xd82800_72(
        glitch::collada::CSkinnedMeshSceneNode *self)
{
  g4_CSkinnedMeshSceneNode_dtor_d82770((glitch::collada::CSkinnedMeshSceneNode *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd82810 (size: 121 bytes)
// Symbol:    _ZN6glitch7collada21CSkinnedMeshSceneNodeD0Ev
// Demangled: glitch::collada::CSkinnedMeshSceneNode::~CSkinnedMeshSceneNode()
// ============================================================================
static void g4_CSkinnedMeshSceneNode_dtor_d82810(
        glitch::collada::CSkinnedMeshSceneNode *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20760F0);
  *((uint32_t *)self + 91) = (uint32_t)(uintptr_t)(&off_207622C);
  *((uint32_t *)self + 92) = ((uint32_t)(uintptr_t)&off_207624C);
  glitch::collada::CMeshSceneNode::Destroy(
    (volatile int32_t **)self,
    (volatile int32_t **)&off_20760A4);
  *((uint32_t *)self + 91) = ((uint32_t)(uintptr_t)&off_2075BEC);
  *((uint32_t *)self + 92) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd82890 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada28CModularSkinnedMeshSceneNodeD0Ev
// Demangled: g4_thunk_0xd82890_73()
// ============================================================================
void g4_thunk_0xd82890_74(
        glitch::collada::CModularSkinnedMeshSceneNode::Self *self)
{
  g4_CModularSkinnedMeshSceneNode_Destroy_d826d0((glitch::collada::CModularSkinnedMeshSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd828a0 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada28CModularSkinnedMeshSceneNodeD0Ev
// Demangled: g4_thunk_0xd828a0_75()
// ============================================================================
void g4_thunk_0xd828a0_76(
        glitch::collada::CModularSkinnedMeshSceneNode::Self *self)
{
  g4_CModularSkinnedMeshSceneNode_Destroy_d826d0((glitch::collada::CModularSkinnedMeshSceneNode::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd828b0 (size: 121 bytes)
// Symbol:    _ZN6glitch7collada28CModularSkinnedMeshSceneNodeD0Ev
// Demangled: glitch::collada::CModularSkinnedMeshSceneNode::Destroy()
// ============================================================================
void glitch::collada::CModularSkinnedMeshSceneNode::DestroyDeleting(
        glitch::collada::CModularSkinnedMeshSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2074D10);
  *((uint32_t *)self + 91) = (uint32_t)(uintptr_t)(&off_2074E4C);
  *((uint32_t *)self + 92) = ((uint32_t)(uintptr_t)&off_2074E6C);
  glitch::collada::CMeshSceneNode::Destroy(
    (volatile int32_t **)self,
    (volatile int32_t **)&off_2074E88);
  *((uint32_t *)self + 91) = ((uint32_t)(uintptr_t)&off_207484C);
  *((uint32_t *)self + 92) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd829a0 (size: 91 bytes)
// Symbol:    _ZN6glitch7collada20CDynamicAnimationSetD2Ev
// Demangled: glitch::collada::CDynamicAnimationSet::Destroy()
// ============================================================================
// Alternative name is '_ZN6glitch7collada20CDynamicAnimationSetD1Ev'
static void g4_CDynamicAnimationSet_Destroy_d829a0(glitch::collada::CDynamicAnimationSet::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077DC8);
  if ( *((uint32_t *)self + 42) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 42));
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CDynamicAnimationSet::Self *)((char *)self + 144));
  glitch::collada::CAnimationSet::Destroy((glitch::collada::CAnimationSet::Self *)(self));
}


// ============================================================================
// Address:   0xd82a00 (size: 99 bytes)
// Symbol:    _ZN6glitch7collada20CDynamicAnimationSetD0Ev
// Demangled: glitch::collada::CDynamicAnimationSet::Destroy()
// ============================================================================
void glitch::collada::CDynamicAnimationSet::DestroyDeleting(glitch::collada::CDynamicAnimationSet::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2077DC8);
  if ( *((uint32_t *)self + 42) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 42));
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CDynamicAnimationSet::Self *)((char *)self + 144));
  glitch::collada::CAnimationSet::Destroy((glitch::collada::CAnimationSet::Self *)(self));
  operator delete(self);
}


// ============================================================================
// Address:   0xd82a70 (size: 121 bytes)
// Symbol:    _ZN6glitch7collada23CAnimationTrackHandlersD2Ev
// Demangled: glitch::collada::CAnimationTrackHandlers::Destroy()
// ============================================================================
// Alternative name is '_ZN6glitch7collada23CAnimationTrackHandlersD1Ev'
static void g4_CAnimationTrackHandlers_Destroy_d82a70(
        glitch::collada::CAnimationTrackHandlers::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079470);
  if ( *((uint32_t *)self + 20) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 20));
  if ( *((uint32_t *)self + 19) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 19));
  if ( *((uint32_t *)self + 15) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 15));
  if ( *((uint32_t *)self + 12) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 12));
  glitch::collada::CAnimationTrackHandlersCookie::Destroy((void **)self + 2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd82af0 (size: 129 bytes)
// Symbol:    _ZN6glitch7collada23CAnimationTrackHandlersD0Ev
// Demangled: glitch::collada::CAnimationTrackHandlers::Destroy()
// ============================================================================
void glitch::collada::CAnimationTrackHandlers::DestroyDeleting(glitch::collada::CAnimationTrackHandlers::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2079470);
  if ( *((uint32_t *)self + 20) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 20));
  if ( *((uint32_t *)self + 19) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 19));
  if ( *((uint32_t *)self + 15) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 15));
  if ( *((uint32_t *)self + 12) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 12));
  glitch::collada::CAnimationTrackHandlersCookie::Destroy((void **)self + 2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd82b80 (size: 186 bytes)
// Symbol:    _ZN6glitch7collada37CSceneNodeAnimatorSynchronizedBlender9setWeightEif
// Demangled: glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setWeight(int,float)
// ============================================================================
static int g4_CSceneNodeAnimatorSynchronizedBlender_setWeight_d82b80(
        glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self *self,
        int a2,
        float a3)
{
  int v3;
  float *v4;
  int result;

  v3 = (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 16) + 4 * a2) + 68))(*(uint32_t *)(*((uint32_t *)self + 16) + 4 * a2));
  *((float *)self + 22) = (float)((float)(a3 - *(float *)(*((uint32_t *)self + 10) + 4 * a2))
                                * (float)(*(float *)(*(uint32_t *)v3 + 20) - *(float *)(*(uint32_t *)v3 + 16)))
                        + *((float *)self + 22);
  glitch::collada::CSceneNodeAnimatorSynchronizedBlender::adjustTimeline(self);
  v4 = (float *)(*((uint32_t *)self + 10) + 4 * a2);
  *((uint32_t *)self + 19) -= *v4 > 0.00000011920929f;
  *v4 = a3;
  result = *(float *)(*((uint32_t *)self + 10) + 4 * a2) > 0.00000011920929f;
  *((uint32_t *)self + 19) += result;
  return result;
}


// ============================================================================
// Address:   0xd82c40 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada30CSceneNodeAnimatorTrackBlenderD1Ev
// Demangled: g4_thunk_0xd82c40_77()
// ============================================================================
void g4_thunk_0xd82c40_78(
        glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self)
{
  g4_CSceneNodeAnimatorTrackBlender_Destroy_d82c60((glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd82c50 (size: 7 bytes)
// Symbol:    _ZThn4_N6glitch7collada30CSceneNodeAnimatorTrackBlenderD1Ev
// Demangled: g4_thunk_0xd82c50_79()
// ============================================================================
void g4_thunk_0xd82c50_80(
        glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self)
{
  g4_CSceneNodeAnimatorTrackBlender_Destroy_d82c60((glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self - 4));
}


// ============================================================================
// Address:   0xd82c60 (size: 176 bytes)
// Symbol:    _ZN6glitch7collada30CSceneNodeAnimatorTrackBlenderD1Ev
// Demangled: glitch::collada::CSceneNodeAnimatorTrackBlender::Destroy()
// ============================================================================
static void g4_CSceneNodeAnimatorTrackBlender_Destroy_d82c60(
        glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self)
{
  glitch::collada::CSceneNodeAnimatorTrackBlender::Self *v1;
  glitch::collada::CSceneNodeAnimatorTrackBlender::Self *v2;
  char *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2078B4C);
  *((uint32_t *)self + 25) = ((uint32_t)(uintptr_t)&off_2078C1C);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2078C00);
  v1 = (glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self + 100);
  v2 = (glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self + 100);
  v3 = (char *)self + 96;
  do
  {
    if ( *(uint32_t *)&v3[v2 - v1] != 0 )
      sub_5459C0(*(volatile int32_t **)&v3[v2 - v1]);
    v2 = (glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)v2 - 4);
  }
  while ( (glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self + 92) != v2 );
  if ( *((uint32_t *)self + 22) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 22));
  if ( *((uint32_t *)self + 21) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 21));
  g4_CSceneNodeAnimatorBlender_Destroy(self, (int *)((uint32_t)(uintptr_t)&off_2078B04));
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd82d10 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada30CSceneNodeAnimatorTrackBlenderD0Ev
// Demangled: g4_thunk_0xd82d10_81()
// ============================================================================
void g4_thunk_0xd82d10_82(
        glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self)
{
  g4_CSceneNodeAnimatorTrackBlender_Destroy_d82c60((glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd82d20 (size: 7 bytes)
// Symbol:    _ZThn4_N6glitch7collada30CSceneNodeAnimatorTrackBlenderD0Ev
// Demangled: g4_thunk_0xd82d20_83()
// ============================================================================
void g4_thunk_0xd82d20_84(
        glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self)
{
  g4_CSceneNodeAnimatorTrackBlender_Destroy_d82c60((glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self - 4));
}


// ============================================================================
// Address:   0xd82d30 (size: 184 bytes)
// Symbol:    _ZN6glitch7collada30CSceneNodeAnimatorTrackBlenderD0Ev
// Demangled: glitch::collada::CSceneNodeAnimatorTrackBlender::Destroy()
// ============================================================================
void glitch::collada::CSceneNodeAnimatorTrackBlender::DestroyDeleting(glitch::collada::CSceneNodeAnimatorTrackBlender::Self *self)
{
  glitch::collada::CSceneNodeAnimatorTrackBlender::Self *v1;
  glitch::collada::CSceneNodeAnimatorTrackBlender::Self *v2;
  char *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2078B4C);
  *((uint32_t *)self + 25) = ((uint32_t)(uintptr_t)&off_2078C1C);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2078C00);
  v1 = (glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self + 100);
  v2 = (glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self + 100);
  v3 = (char *)self + 96;
  do
  {
    if ( *(uint32_t *)&v3[v2 - v1] != 0 )
      sub_5459C0(*(volatile int32_t **)&v3[v2 - v1]);
    v2 = (glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)v2 - 4);
  }
  while ( (glitch::collada::CSceneNodeAnimatorTrackBlender::Self *)((char *)self + 92) != v2 );
  if ( *((uint32_t *)self + 22) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 22));
  if ( *((uint32_t *)self + 21) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 21));
  g4_CSceneNodeAnimatorBlender_Destroy(self, (int *)((uint32_t)(uintptr_t)&off_2078B04));
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd82df0 (size: 120 bytes)
// Symbol:    _ZN6glitch7collada15CAnimationGraph5SNodeD2Ev
// Demangled: glitch::collada::CAnimationGraph::SNode::~SNode()
// ============================================================================
// Alternative name is '_ZN6glitch7collada15CAnimationGraph5SNodeD1Ev'
static void g4_CAnimationGraph_SNode_dtor_d82df0(void *self)
{
  volatile int32_t **v1;
  volatile int32_t **v2;
  uint32_t *v3;

  v1 = *((volatile int32_t ***)self + 4);
  v2 = *((volatile int32_t ***)self + 3);
  if ( v1 != v2 )
  {
    do
    {
      if ( *v2 != nullptr )
        sub_5459C0(*v2);
      ++v2;
    }
    while ( v1 != v2 );
    v2 = *((volatile int32_t ***)self + 3);
  }
  if ( v2 != nullptr )
    operator delete(v2);
  if ( *((uint32_t *)self + 2) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 2));
  v3 = *((uint32_t **)self + 1);
  if ( v3 != nullptr )
    sub_5459C0((uint32_t *)((char *)v3 + *(uint32_t *)(*v3 - 12)));
}


// ============================================================================
// Address:   0xd82e70 (size: 216 bytes)
// Symbol:    _ZN6glitch7collada15CAnimationGraph5SNodeC2ERKS2_
// Demangled: glitch::collada::CAnimationGraph::SNode::SNode(glitch::collada::CAnimationGraph::SNode const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada15CAnimationGraph5SNodeC1ERKS2_'
static void *g4_CAnimationGraph_SNode_ctor_d82e70(
        int a1,
        int a2,
        void *self,
        const void *a4)
{
  uint32_t *v4;
  int v5;
  unsigned int v6;
  size_t v7;
  void *result;
  int *v9;
  int *i;
  int v11;
  bool v12;
  void *v13;

  *(uint32_t *)self = *(uint32_t *)a4;
  v4 = *((uint32_t **)a4 + 1);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v4);
  if ( v4 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 12) + 4));
  v5 = *((uint32_t *)a4 + 2);
  *((uint32_t *)self + 2) = v5;
  if ( v5 != 0 )
    sub_8B1B00((volatile int32_t *)(v5 + 4));
  v6 = (*((uint32_t *)a4 + 4) - *((uint32_t *)a4 + 3)) >> 2;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  if ( v6 != 0 )
  {
    if ( v6 > 0x3FFFFFFF )
      sub_18FFEE0(a1, a2);
    v7 = 4 * v6;
    result = (void *)operator new(v7);
  }
  else
  {
    v7 = 0;
    result = nullptr;
  }
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)result + v7);
  v9 = *((int **)a4 + 4);
  for ( i = *((int **)a4 + 3); v9 != i; result = (void *)((char *)result + 4) )
  {
    if ( result != nullptr )
    {
      v11 = *i;
      v12 = *i == 0;
      *(uint32_t *)result = *i;
      if ( !v12 )
      {
        v13 = result;
        sub_8B1B00((volatile int32_t *)(v11 + 4));
        result = v13;
      }
    }
    ++i;
  }
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(result);
  return result;
}


// ============================================================================
// Address:   0xd82f50 (size: 304 bytes)
// Symbol:    _ZNK6glitch7collada18SAnimationAccessor16findKeyFrameNoExIhLi30EEEbiRKNS_3res6vectorIiEEfRiRf
// Demangled: bool glitch::collada::SAnimationAccessor::findKeyFrameNoEx<unsigned char,30>(int,glitch::res::vector<int> const&,float,int &,float &)const
// ============================================================================
static bool g4_findKeyFrameNoEx_u8_d82f50(
        int a1,
        int a2,
        uint32_t *a3,
        float a4,
        int *a5,
        float *a6)
{
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  int v10;
  int v11;
  int v12;
  bool result;
  int v14;
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17;

  v17 = *a3 - 1;
  v6 = v17;
  if ( v17 > 0 )
  {
    v7 = 1;
    do
    {
      v8 = (v7 + v6) >> 1;
      v9 = (float)*((uint8_t *)a3 + a3[1] + v8 + 4);
      v10 = v8 - 1;
      v11 = v8 + 1;
      if ( (float)(0.030000001f * a4) < v9 )
        v6 = v10;
      else
        v7 = v11;
    }
    while ( v7 <= v6 );
  }
  *a5 = v6;
  v12 = (int)(uintptr_t)a3 + a3[1] + 4;
  result = false;
  v14 = (int)(float)((float)((float)*(uint8_t *)(v12 + v6) * 33.333332f) + 0.5);
  if ( (int)a4 != v14 && v6 != v17 && *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 8) + *(uint32_t *)a1 + 32 * a2 + 8) != 0 )
  {
    v15 = (float)((float)*(uint8_t *)(v12 + v6 + 1) * 33.333332f) + 0.5;
    if ( (int)v15 != v14 )
    {
      v16 = fminf(fmaxf((float)(a4 - (float)v14) / (float)((int)v15 - v14), 0.0), 1.0);
      *a6 = v16;
      if ( v16 == 1.0 )
        ++*a5;
      else
        return v16 != 0.0;
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd83080 (size: 304 bytes)
// Symbol:    _ZNK6glitch7collada18SAnimationAccessor16findKeyFrameNoExItLi30EEEbiRKNS_3res6vectorIiEEfRiRf
// Demangled: bool glitch::collada::SAnimationAccessor::findKeyFrameNoEx<unsigned short,30>(int,glitch::res::vector<int> const&,float,int &,float &)const
// ============================================================================
static bool g4_findKeyFrameNoEx_u16_d83080(
        int a1,
        int a2,
        uint32_t *a3,
        float a4,
        int *a5,
        float *a6)
{
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  int v10;
  int v11;
  int v12;
  bool result;
  int v14;
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17;

  v17 = (*a3 >> 1) - 1;
  v6 = v17;
  if ( *a3 >> 1 > 1u )
  {
    v7 = 1;
    do
    {
      v8 = (v7 + v6) >> 1;
      v9 = (float)*(uint16_t *)((char *)a3 + 2 * v8 + a3[1] + 4);
      v10 = v8 - 1;
      v11 = v8 + 1;
      if ( v9 > (float)(0.030000001f * a4) )
        v6 = v10;
      else
        v7 = v11;
    }
    while ( v6 >= v7 );
  }
  *a5 = v6;
  v12 = (int)(uintptr_t)a3 + a3[1] + 4;
  result = false;
  v14 = (int)(float)((float)((float)*(uint16_t *)(v12 + 2 * v6) * 33.333332f) + 0.5);
  if ( (int)a4 != v14 && v6 != v17 && *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 8) + *(uint32_t *)a1 + 32 * a2 + 8) != 0 )
  {
    v15 = (float)((float)*(uint16_t *)(v12 + 2 * v6 + 2) * 33.333332f) + 0.5;
    if ( (int)v15 != v14 )
    {
      v16 = fminf(fmaxf((float)(a4 - (float)v14) / (float)((int)v15 - v14), 0.0), 1.0);
      *a6 = v16;
      if ( v16 == 1.0 )
        ++*a5;
      else
        return v16 != 0.0;
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd831b0 (size: 264 bytes)
// Symbol:    _ZNK6glitch7collada18SAnimationAccessor16findKeyFrameNoExIiLi1000EEEbiRKNS_3res6vectorIiEEfRiRf
// Demangled: bool glitch::collada::SAnimationAccessor::findKeyFrameNoEx<int,1000>(int,glitch::res::vector<int> const&,float,int &,float &)const
// ============================================================================
static bool g4_findKeyFrameNoEx_i32_d831b0(
        int a1,
        int a2,
        uint32_t *a3,
        float a4,
        int *a5,
        float *a6)
{
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  int v10;
  int v11;
  int v12;
  bool result;
  int v14;
  float v15; // xmm0_4
  float v16; // xmm1_4
  int v17;

  v17 = (*a3 >> 2) - 1;
  v6 = v17;
  if ( *a3 >> 2 > 1u )
  {
    v7 = 1;
    do
    {
      v8 = (v7 + v6) >> 1;
      v9 = (float)*(int *)((char *)&a3[v8 + 1] + a3[1]);
      v10 = v8 - 1;
      v11 = v8 + 1;
      if ( v9 > a4 )
        v6 = v10;
      else
        v7 = v11;
    }
    while ( v6 >= v7 );
  }
  *a5 = v6;
  v12 = (int)(uintptr_t)a3 + a3[1] + 4;
  result = false;
  v14 = (int)(float)((float)*(int *)(v12 + 4 * v6) + 0.5);
  if ( (int)a4 != v14 && v6 != v17 && *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 8) + *(uint32_t *)a1 + 32 * a2 + 8) != 0 )
  {
    v15 = (float)*(int *)(v12 + 4 * v6 + 4) + 0.5;
    if ( (int)v15 != v14 )
    {
      v16 = fminf(fmaxf((float)(a4 - (float)v14) / (float)((int)v15 - v14), 0.0), 1.0);
      *a6 = v16;
      if ( v16 == 1.0 )
        ++*a5;
      else
        return v16 != 0.0;
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd83890 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada17CLODMeshSceneNodeD1Ev
// Demangled: g4_thunk_0xd83890_85()
// ============================================================================
void g4_thunk_0xd83890_86(
        glitch::collada::CLODMeshSceneNode::Self *self)
{
  g4_CLODMeshSceneNode_Destroy_d838b0((glitch::collada::CLODMeshSceneNode::Self *)((char *)self
                                                                                              + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd838a0 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada17CLODMeshSceneNodeD1Ev
// Demangled: g4_thunk_0xd838a0_87()
// ============================================================================
void g4_thunk_0xd838a0_88(
        glitch::collada::CLODMeshSceneNode::Self *self)
{
  g4_CLODMeshSceneNode_Destroy_d838b0((glitch::collada::CLODMeshSceneNode::Self *)((char *)self
                                                                                              + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd838b0 (size: 145 bytes)
// Symbol:    _ZN6glitch7collada17CLODMeshSceneNodeD1Ev
// Demangled: glitch::collada::CLODMeshSceneNode::Destroy()
// ============================================================================
static void g4_CLODMeshSceneNode_Destroy_d838b0(glitch::collada::CLODMeshSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20741D0);
  *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)(&off_207430C);
  *((uint32_t *)self + 81) = ((uint32_t)(uintptr_t)&off_207432C);
  boost::scoped_array_vector_intrusive_ptr_col_98b346::Destroy((boost::scoped_array<std::vector<boost::intrusive_ptr<glitch::collada::IMesh::Self>, glitch::core::SAllocator<boost::intrusive_ptr<glitch::collada::IMesh::Self>, (int)0>>> *)((char *)self + 316));
  if ( *((uint32_t *)self + 69) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 69));
  glitch::collada::CMeshSceneNode::Destroy(
    (volatile int32_t **)self,
    (volatile int32_t **)&off_2074184);
  *((uint32_t *)self + 80) = ((uint32_t)(uintptr_t)&off_2073CCC);
  *((uint32_t *)self + 81) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd83950 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada17CLODMeshSceneNodeD0Ev
// Demangled: g4_thunk_0xd83950_89()
// ============================================================================
void g4_thunk_0xd83950_90(
        glitch::collada::CLODMeshSceneNode::Self *self)
{
  g4_CLODMeshSceneNode_Destroy_d838b0((glitch::collada::CLODMeshSceneNode::Self *)((char *)self
                                                                                              + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd83960 (size: 15 bytes)
// Symbol:    _ZTv0_n24_N6glitch7collada17CLODMeshSceneNodeD0Ev
// Demangled: g4_thunk_0xd83960_91()
// ============================================================================
void g4_thunk_0xd83960_92(
        glitch::collada::CLODMeshSceneNode::Self *self)
{
  g4_CLODMeshSceneNode_Destroy_d838b0((glitch::collada::CLODMeshSceneNode::Self *)((char *)self
                                                                                              + *(uint32_t *)(*(uint32_t *)self - 24)));
}


// ============================================================================
// Address:   0xd83970 (size: 153 bytes)
// Symbol:    _ZN6glitch7collada17CLODMeshSceneNodeD0Ev
// Demangled: glitch::collada::CLODMeshSceneNode::Destroy()
// ============================================================================
void glitch::collada::CLODMeshSceneNode::DestroyDeleting(glitch::collada::CLODMeshSceneNode::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20741D0);
  *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)(&off_207430C);
  *((uint32_t *)self + 81) = ((uint32_t)(uintptr_t)&off_207432C);
  boost::scoped_array_vector_intrusive_ptr_col_98b346::Destroy((boost::scoped_array<std::vector<boost::intrusive_ptr<glitch::collada::IMesh::Self>, glitch::core::SAllocator<boost::intrusive_ptr<glitch::collada::IMesh::Self>, (int)0>>> *)((char *)self + 316));
  if ( *((uint32_t *)self + 69) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 69));
  glitch::collada::CMeshSceneNode::Destroy(
    (volatile int32_t **)self,
    (volatile int32_t **)&off_2074184);
  *((uint32_t *)self + 80) = ((uint32_t)(uintptr_t)&off_2073CCC);
  *((uint32_t *)self + 81) = (uint32_t)(uintptr_t)(&off_20483C0);
  operator delete(self);
}


// ============================================================================
// Address:   0xd83df0 (size: 140 bytes)
// Symbol:    _ZN6glitch7collada20CAnimationTreeCookie9setTargetIN5boost13intrusive_ptrINS0_31CParticleSystemEmitterSceneNodeEEEEEviPvRKT_
// Demangled: void glitch::collada::CAnimationTreeCookie::setTarget<boost::intrusive_ptr<glitch::collada::CParticleSystemEmitterSceneNode>>(int,void *,boost::intrusive_ptr<glitch::collada::CParticleSystemEmitterSceneNode> const&)
// ============================================================================
static int g4_CAnimationTreeCookie_setTarget_d83df0(
        int a1,
        int a2,
        int a3,
        uint32_t *a4)
{
  volatile int32_t *v4;
  int result;

  if ( *a4 != 0 && (v4 = (volatile int32_t *)(*(uint32_t *)(*(uint32_t *)*a4 - 16) + *a4)) != nullptr )
  {
    sub_8B1B00(v4 + 1);
    *(uint32_t *)(*(uint32_t *)(a1 + 60) + 4 * a2) = a3;
    *(uint32_t *)(*(uint32_t *)(a1 + 72) + 4 * a2) = 0;
    return sub_5459C0(v4);
  }
  else
  {
    *(uint32_t *)(*(uint32_t *)(a1 + 60) + 4 * a2) = a3;
    result = *(uint32_t *)(a1 + 72);
    *(uint32_t *)(result + 4 * a2) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0xd85e50 (size: 426 bytes)
// Symbol:    _ZN6glitch7collada28CParametricControllerBlender23SDelegateControllerSlotaSERKS2_
// Demangled: glitch::collada::CParametricControllerBlender::SDelegateControllerSlot::operator=(glitch::collada::CParametricControllerBlender::SDelegateControllerSlot const&)
// ============================================================================
static void *g4_SDelegateControllerSlot_opAssign_d85e50(
        void *self,
        const void *a2)
{
  int v2;
  volatile int32_t *v3;
  char *v4;
  uint32_t *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;

  v2 = *(uint32_t *)a2;
  if ( *(uint32_t *)a2 != 0 )
    sub_8B1B00((volatile int32_t *)(v2 + 4));
  v3 = *(volatile int32_t **)self;
  *(uint32_t *)self = v2;
  if ( v3 != nullptr )
    sub_5459C0(v3);
  if ( a2 != self )
  {
    v4 = *((char **)self + 1);
    v5 = *((uint32_t **)a2 + 1);
    v19 = *((uint32_t **)a2 + 2);
    v6 = v19 - v5;
    v18 = v6;
    if ( v6 > (unsigned int)((*((uint32_t *)self + 3) - (int)(uintptr_t)v4) >> 2) )
    {
      v12 = 0;
      v13 = 0;
      if ( v6 != 0 )
      {
        v16 = 4 * v6;
        v13 = sub_4EBDC0(4 * v6);
        v12 = v16;
      }
      if ( v5 != v19 )
      {
        v14 = (uint32_t *)v13;
        do
        {
          if ( v14 != nullptr )
            *v14 = *v5;
          ++v5;
          ++v14;
        }
        while ( v19 != v5 );
      }
      v15 = *((uint32_t *)self + 1);
      if ( v15 != 0 )
      {
        v17 = v12;
        gll_operator_delete_arr(v15);
        v12 = v17;
      }
      *((uint32_t *)self + 1) = v13;
      v9 = v12 + v13;
      *((uint32_t *)self + 3) = v9;
      goto LABEL_11;
    }
    v7 = *((char **)self + 2);
    v8 = (v7 - v4) >> 2;
    if ( v6 > (unsigned int)v8 )
    {
      v11 = &v5[v8];
      if ( v8 > 0 )
      {
        do
        {
          --v8;
          *(uint32_t *)v4 = *v5++;
          v4 += 4;
        }
        while ( v8 != 0 );
        v7 = *((char **)self + 2);
        v4 = *((char **)self + 1);
        v19 = *((uint32_t **)a2 + 2);
        v11 = (uint32_t *)(*((uint32_t *)a2 + 1) + ((v7 - v4) & 0xFFFFFFFC));
      }
      if ( v19 == v11 )
      {
        v9 = (int)(uintptr_t)&v4[4 * v18];
        goto LABEL_11;
      }
      do
      {
        if ( v7 != nullptr )
          *(uint32_t *)v7 = *v11;
        ++v11;
        v7 += 4;
      }
      while ( v11 != v19 );
    }
    else
    {
      if ( v6 <= 0 )
      {
        v9 = (int)(uintptr_t)&v4[4 * v6];
        goto LABEL_11;
      }
      do
      {
        --v6;
        *(uint32_t *)v4 = *v5++;
        v4 += 4;
      }
      while ( v6 != 0 );
    }
    v9 = *((uint32_t *)self + 1) + 4 * v18;
LABEL_11:
    *((uint32_t *)self + 2) = v9;
  }
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  return self;
}


// ============================================================================
// Address:   0xd86060 (size: 582 bytes)
// Symbol:    _ZN6glitch7collada25CSceneNodeAnimatorBlender11addAnimatorERKN5boost13intrusive_ptrINS0_18ISceneNodeAnimatorEEE
// Demangled: glitch::collada::CSceneNodeAnimatorBlender::addAnimator(boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&)
// ============================================================================
unsigned int glitch::collada::CSceneNodeAnimatorBlender::addAnimator(
        glitch::collada::CSceneNodeAnimatorBlender::Self *self,
        volatile int32_t **a2)
{
  int *v2;
  volatile int32_t **v3;
  int v4;
  volatile int32_t *v5;
  bool v6;
  uint32_t *v7;
  char *v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  char *v12;
  int v13;
  int v14;
  unsigned int result;
  unsigned int v16;
  int v17;
  int v18;
  boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self> *v19;
  uint32_t *v20;
  uint32_t **v21;
  uint32_t **v22;
  typedef boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self> *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef int _g4_t_v27[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v27)) > _g4_s4 ? (44u + sizeof(_g4_t_v27)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);

  v2 = (int *)self;
  v3 = *((volatile int32_t ***)self + 17);
  if ( v3 == *((volatile int32_t ***)self + 18) )
  {
    v7 = nullptr;
    v17 = g4_std::vector_intrusive_ptr_collada_IS_ff7afa::M_check_len(
            (std::vector<boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self>, glitch::core::SAllocator<boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)self + 64),
            1u,
            (char *)"vector::_M_insert_aux");
    v18 = ((int)(uintptr_t)v3 - *((uint32_t *)self + 16)) >> 2;
    v25 = 0;
    if ( v17 != 0 )
    {
      v24 = ((int)(uintptr_t)v3 - *((uint32_t *)self + 16)) >> 2;
      v25 = v17;
      v23 = nullptr;
      v7 = (uint32_t *)sub_4EBDC0(4 * v17);
      v18 = v24;
    }
    v19 = (boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self> *)&v7[v18];
    if ( v19 != nullptr )
      boost::intrusive_ptr_collada_ISceneNodeAnimat_d6ad6b::Construct(v19, a2);
    v20 = sub_D45F20(*((uint32_t ***)self + 16), (uint32_t **)v3, v7);
    v26 = sub_D45F20((uint32_t **)v3, *((uint32_t ***)self + 17), v20 + 1);
    v21 = *((uint32_t ***)self + 16);
    if ( *((uint32_t ***)self + 17) != v21 )
    {
      v22 = *((uint32_t ***)self + 17);
      do
      {
        if ( *v21 != nullptr )
          sub_5459C0((uint32_t *)((char *)*v21 + *(uint32_t *)(**v21 - 12)));
        ++v21;
      }
      while ( v22 != v21 );
      v2 = (int *)self;
      v21 = *((uint32_t ***)self + 16);
    }
    if ( v21 != nullptr )
      gll_operator_delete_arr((int)(uintptr_t)v21);
    v2[16] = (int)(uintptr_t)v7;
    v2[17] = (int)(uintptr_t)v26;
    v2[18] = (int)(uintptr_t)&v7[v25];
  }
  else
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      v5 = *a2;
      v6 = *a2 == nullptr;
      *v3 = *a2;
      if ( !v6 )
        sub_8B1B00((volatile int32_t *)((char *)v5 + *(uint32_t *)(*v5 - 12) + 4));
      v4 = *((uint32_t *)self + 17);
    }
    v7 = *((uint32_t **)self + 16);
    *((uint32_t *)self + 17) = v4 + 4;
  }
  (*(void (**)(uint32_t, boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self> *))(*(uint32_t *)*v7 + 84))(
    *v7,
    v23);
  (*(void (**)(volatile int32_t *))(**a2 + 84))(*a2);
  v8 = (char *)v2[11];
  v9 = v2[10];
  v10 = (v2[17] - v2[16]) >> 2;
  v27[0] = 0;
  v11 = (int)(uintptr_t)&v8[-v9] >> 2;
  if ( v10 > v11 )
  {
    g4_std_compat::vector_fill_insert(
      v2 + 10,
      v8,
      v10 - v11,
      v27);
    v9 = v2[10];
    v10 = (v2[17] - v2[16]) >> 2;
  }
  else if ( v10 < v11 )
  {
    v2[11] = v9 + 4 * v10;
  }
  *(uint32_t *)(v9 + 4 * v10 - 4) = 0;
  v12 = (char *)v2[14];
  v13 = v2[13];
  v14 = v2[17] - v2[16];
  v27[0] = 0;
  result = v14 >> 2;
  v16 = (int)(uintptr_t)&v12[-v13] >> 2;
  if ( result > v16 )
  {
    g4_std_compat::vector_fill_insert(
      v2 + 13,
      v12,
      result - v16,
      v27);
    v13 = v2[13];
    result = (v2[17] - v2[16]) >> 2;
  }
  else if ( result < v16 )
  {
    v2[14] = v13 + 4 * result;
  }
  *(uint32_t *)(v13 + 4 * result - 4) = 0;
  return result;
}


// ============================================================================
// Address:   0xd895e0 (size: 734 bytes)
// Symbol:    _ZN6glitch7collada15CAnimationGraph5SNodeaSERKS2_
// Demangled: glitch::collada::CAnimationGraph::SNode::operator=(glitch::collada::CAnimationGraph::SNode const&)
// ============================================================================
static void *g4_CAnimationGraph_SNode_opAssign_d895e0(
        void *self,
        const void *a2)
{
  void *v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  volatile int32_t *v6;
  volatile int32_t **v7;
  int *v8;
  int *v9;
  int v10;
  volatile int32_t **v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  int v14;
  unsigned int v16;
  volatile int32_t **v17;
  volatile int32_t *v18;
  volatile int32_t *v19;
  char *v20;
  int *v21;
  int *v22;
  int v23;
  bool v24;
  int *v25;
  int *v26;
  int v27;
  volatile int32_t **v28;
  volatile int32_t **v29;
  int *v30;
  unsigned int v31;
  int v32;
  void *v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  char *v38;

  v2 = self;
  *(uint32_t *)self = *(uint32_t *)a2;
  v3 = *((uint32_t **)a2 + 1);
  if ( v3 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v3 + *(uint32_t *)(*v3 - 12) + 4));
  v4 = *((uint32_t **)self + 1);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
  if ( v4 != nullptr )
    sub_5459C0((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 12)));
  v5 = *((uint32_t *)a2 + 2);
  if ( v5 != 0 )
    sub_8B1B00((volatile int32_t *)(v5 + 4));
  v6 = *((volatile int32_t **)self + 2);
  *((uint32_t *)self + 2) = v5;
  if ( v6 != nullptr )
    sub_5459C0(v6);
  if ( a2 != self )
  {
    v7 = *((volatile int32_t ***)self + 3);
    v8 = *((int **)a2 + 4);
    v9 = *((int **)a2 + 3);
    v37 = v8 - v9;
    v31 = v37;
    if ( v37 > (*((uint32_t *)self + 5) - (int)(uintptr_t)v7) >> 2 )
    {
      if ( v37 != 0 )
      {
        if ( v37 > 0x3FFFFFFF )
          sub_18FFEE0(v8, a2);
        v30 = *((int **)a2 + 4);
        v36 = 4 * v37;
        v34 = (int)(uintptr_t)(operator new(4 * v37));
        v8 = v30;
      }
      else
      {
        v36 = 0;
        v34 = 0;
      }
      if ( v9 != v8 )
      {
        v25 = (int *)v34;
        v26 = v8;
        do
        {
          if ( v25 != nullptr )
          {
            v27 = *v9;
            v24 = *v9 == 0;
            *v25 = *v9;
            if ( !v24 )
              sub_8B1B00((volatile int32_t *)(v27 + 4));
          }
          ++v9;
          ++v25;
        }
        while ( v26 != v9 );
        v2 = self;
      }
      v28 = *((volatile int32_t ***)v2 + 4);
      v29 = *((volatile int32_t ***)v2 + 3);
      if ( v28 != v29 )
      {
        do
        {
          if ( *v29 != nullptr )
            sub_5459C0(*v29);
          ++v29;
        }
        while ( v28 != v29 );
        v29 = *((volatile int32_t ***)v2 + 3);
      }
      if ( v29 != nullptr )
        operator delete(v29);
      *((uint32_t *)v2 + 3) = v34;
      v14 = v36 + v34;
      *((uint32_t *)v2 + 5) = v36 + v34;
      goto LABEL_25;
    }
    v38 = *((char **)self + 4);
    v10 = (v38 - (char *)v7) >> 2;
    if ( v37 > v10 )
    {
      v16 = (unsigned int)(uintptr_t)&v9[v10];
      v32 = (v38 - (char *)v7) >> 2;
      if ( v10 > 0 )
      {
        v17 = *((volatile int32_t ***)a2 + 3);
        do
        {
          v18 = *v17;
          if ( *v17 != nullptr )
            sub_8B1B00(v18 + 1);
          v19 = *v7;
          *v7 = v18;
          if ( v19 != nullptr )
            sub_5459C0(v19);
          ++v17;
          ++v7;
          --v32;
        }
        while ( v32 != 0 );
        v2 = self;
        v8 = *((int **)a2 + 4);
        v38 = *((char **)self + 4);
        v7 = *((volatile int32_t ***)self + 3);
        v16 = *((uint32_t *)a2 + 3) + ((v38 - (char *)v7) & 0xFFFFFFFC);
      }
      if ( v8 == (int *)v16 )
      {
        v14 = (int)(uintptr_t)&v7[v37];
        goto LABEL_25;
      }
      v33 = v2;
      v20 = v38;
      v21 = (int *)v16;
      v22 = v8;
      do
      {
        if ( v20 != nullptr )
        {
          v23 = *v21;
          v24 = *v21 == 0;
          *(uint32_t *)v20 = *v21;
          if ( !v24 )
            sub_8B1B00((volatile int32_t *)(v23 + 4));
        }
        ++v21;
        v20 += 4;
      }
      while ( v21 != v22 );
      v2 = v33;
    }
    else
    {
      if ( (int)v37 > 0 )
      {
        v35 = *((uint32_t *)self + 3);
        v11 = *((volatile int32_t ***)a2 + 3);
        do
        {
          v12 = *v11;
          if ( *v11 != nullptr )
            sub_8B1B00(v12 + 1);
          v13 = *v7;
          *v7 = v12;
          if ( v13 != nullptr )
            sub_5459C0(v13);
          ++v11;
          ++v7;
          --v31;
        }
        while ( v31 != 0 );
        v2 = self;
        v7 = (volatile int32_t **)(v35 + 4 * v37);
      }
      for ( ; v38 != (char *)v7; ++v7 )
      {
        if ( *v7 != nullptr )
          sub_5459C0(*v7);
      }
    }
    v14 = *((uint32_t *)v2 + 3) + 4 * v37;
LABEL_25:
    *((uint32_t *)v2 + 4) = v14;
  }
  return v2;
}


// ============================================================================
// Address:   0xd898c0 (size: 536 bytes)
// Symbol:    _ZN6glitch7collada15CMotionListenerIN5boost13intrusive_ptrINS_5scene10ISceneNodeEEEvE6rotateERNS_4core10quaternionE
// Demangled: glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::rotate(glitch::core::quaternion &)
// ============================================================================
static int g4_CMotionListener_rotate_d898c0(
        void *self,
        glitch::core::quaternion::Self *a2)
{
  void *v2;
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm5_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float *RelativeTransformation;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef uint32_t _g4_t_v20[16];
  typedef float _g4_t_v21[22];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v21)) > _g4_s3 ? (72u + sizeof(_g4_t_v21)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);

  LODWORD(v21[19]) = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = *(float *)a2;
  v4 = *((float *)a2 + 3);
  v5 = *((float *)a2 + 2);
  v6 = (float)(v5 * v5) + (float)(v5 * v5);
  v19 = (float)(*(float *)a2 * v3) + (float)(*(float *)a2 * v3);
  v7 = (float)(v3 * v5) + (float)(v3 * v5);
  v8 = *((float *)a2 + 1);
  v18 = (float)(v3 * v4) + (float)(v3 * v4);
  v9 = *(float *)a2 * v8;
  *((uint32_t *)self + 21) = 0;
  v10 = v8 * v5;
  *((uint32_t *)v2 + 25) = 0;
  v11 = v9 + v9;
  v12 = (float)(v8 * v4) + (float)(v8 * v4);
  v13 = (float)(v5 * v4) + (float)(v5 * v4);
  v14 = v10 + v10;
  v15 = -(float)((float)(v8 * v8) + (float)(v8 * v8));
  *((float *)v2 + 18) = (float)(v15 - v6) + 1.0;
  *((float *)v2 + 19) = v13 + v11;
  *((float *)v2 + 22) = v11 - v13;
  *((float *)v2 + 23) = 1.0 - (float)(v6 + v19);
  *((float *)v2 + 24) = v18 + v14;
  *((float *)v2 + 27) = v14 - v18;
  *((float *)v2 + 20) = v7 - v12;
  *((float *)v2 + 26) = v7 + v12;
  *((float *)v2 + 28) = (float)(v15 - v19) + 1.0;
  *((uint32_t *)v2 + 29) = 0;
  *((uint32_t *)v2 + 30) = 0;
  *((uint32_t *)v2 + 31) = 0;
  *((uint32_t *)v2 + 32) = 0;
  *((uint32_t *)v2 + 33) = 1065353216;
  RelativeTransformation = (float *)glitch::scene::ISceneNode::getRelativeTransformation(*((glitch::scene::ISceneNode::Self **)v2
                                                                                         + 34));
  sub_5F87C0(v21, RelativeTransformation, (float *)v2 + 18);
  std::memcpy(v20, v21, sizeof(v20));
  return glitch::scene::ISceneNode::setRelativeTransformation(
           *((glitch::scene::ISceneNode::Self **)v2 + 34),
           (const glitch::core::CMatrix4<float> *)v20);
}


// ============================================================================
// Address:   0xd89ae0 (size: 264 bytes)
// Symbol:    _ZN6glitch7collada15CMotionListenerIN5boost13intrusive_ptrINS_5scene10ISceneNodeEEEvE4moveERNS_4core8vector3dIfEE
// Demangled: glitch::collada::CMotionListener<boost::intrusive_ptr<glitch::scene::ISceneNode>,void>::move(glitch::core::vector3d<float> &)
// ============================================================================
static int g4_CMotionListener_move_d89ae0(
        int a1,
        uint32_t *a2)
{
  float *RelativeTransformation;
  typedef uint32_t _g4_t_v4[16];
  typedef float _g4_t_v5[19];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v5)) > _g4_s1 ? (64u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 64u);

  *(uint32_t *)(a1 + 56) = *a2;
  *(uint32_t *)(a1 + 60) = a2[1];
  *(uint32_t *)(a1 + 64) = a2[2];
  RelativeTransformation = (float *)glitch::scene::ISceneNode::getRelativeTransformation(*(glitch::scene::ISceneNode::Self **)(a1 + 136));
  sub_5F87C0(v5, RelativeTransformation, (float *)(a1 + 8));
  std::memcpy(v4, v5, sizeof(v4));
  return glitch::scene::ISceneNode::setRelativeTransformation(
           *(glitch::scene::ISceneNode::Self **)(a1 + 136),
           (const glitch::core::CMatrix4<float> *)v4);
}


// ============================================================================
// Address:   0xd8a5b0 (size: 16 bytes)
// Symbol:    _ZN6glitch7collada14CEventsManager10onTimeJumpEv
// Demangled: glitch::collada::CEventsManager::onTimeJump(void)
// ============================================================================
glitch::collada::CEventsManager::Self *glitch::collada::CEventsManager::onTimeJump(
        glitch::collada::CEventsManager::Self *self)
{
  *((uint32_t *)self + 4) = -1;
  return self;
}


// ============================================================================
// Address:   0xd8a5c0 (size: 69 bytes)
// Symbol:    _ZN6glitch7collada15COnDemandReader4readEiiPv
// Demangled: glitch::collada::COnDemandReader::read(int,int,void *)
// ============================================================================
int glitch::collada::COnDemandReader::read(glitch::collada::COnDemandReader::Self *self, int a2, int a3, void *a4)
{
  (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)self + 1) + 24))(*((uint32_t *)self + 1), a3, 0);
  return (*(int (**)(uint32_t, void *, int))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1), a4, a2);
}


// ============================================================================
// Address:   0xd8a610 (size: 69 bytes)
// Symbol:    _ZN6glitch7collada15COnDemandReader4readEiiPvPFviiS2_S2_ES2_
// Demangled: glitch::collada::COnDemandReader::read(int,int,void *,void (*)(int,int,void *,void *),void *)
// ============================================================================
int glitch::collada::COnDemandReader::read_ead8a610(glitch::collada::COnDemandReader::Self *self, int a2, int a3, void *a4)
{
  (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)self + 1) + 24))(*((uint32_t *)self + 1), a3, 0);
  return (*(int (**)(uint32_t, void *, int))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1), a4, a2);
}


// ============================================================================
// Address:   0xd8a660 (size: 24 bytes)
// Symbol:    _ZN6glitch7collada14CResFileReader4tellEv
// Demangled: glitch::collada::CResFileReader::tell(void)
// ============================================================================
int glitch::collada::CResFileReader::tell(glitch::collada::CResFileReader::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 36))(*((uint32_t *)self + 1));
}


// ============================================================================
// Address:   0xd8a680 (size: 40 bytes)
// Symbol:    _ZN6glitch7collada14CResFileReader4readEPvj
// Demangled: glitch::collada::CResFileReader::read(void *,unsigned int)
// ============================================================================
int glitch::collada::CResFileReader::read(glitch::collada::CResFileReader::Self *self, void *a2, unsigned int a3)
{
  return (*(int (**)(uint32_t, void *, unsigned int))(**((uint32_t **)self + 1) + 12))(
           *((uint32_t *)self + 1),
           a2,
           a3);
}


// ============================================================================
// Address:   0xd8a6b0 (size: 44 bytes)
// Symbol:    _ZN6glitch7collada14CResFileReader4seekElb
// Demangled: glitch::collada::CResFileReader::seek(long,bool)
// ============================================================================
int glitch::collada::CResFileReader::seek(glitch::collada::CResFileReader::Self *self, int a2, bool a3)
{
  return (*(uint8_t (**)(uint32_t, int, bool))(**((uint32_t **)self + 1) + 24))(
           *((uint32_t *)self + 1),
           a2,
           a3);
}


// ============================================================================
// Address:   0xd8a6e0 (size: 24 bytes)
// Symbol:    _ZN6glitch7collada14CResFileReader7getSizeEv
// Demangled: glitch::collada::CResFileReader::getSize(void)
// ============================================================================
int glitch::collada::CResFileReader::getSize(glitch::collada::CResFileReader::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 32))(*((uint32_t *)self + 1));
}


// ============================================================================
// Address:   0xd8a700 (size: 48 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController16willReachClipEndEf
// Demangled: glitch::collada::CTimelineController::willReachClipEnd(float)
// ============================================================================
bool glitch::collada::CTimelineController::willReachClipEnd(
        glitch::collada::CTimelineController::Self *self,
        float a2)
{
  float v2; // xmm0_4
  bool v3; // cc
  float v4; // xmm0_4

  v2 = a2 * *((float *)self + 9);
  v3 = v2 >= 0.0;
  v4 = v2 + *((float *)self + 1);
  if ( v3 )
    return v4 > *((float *)self + 5);
  else
    return v4 < *((float *)self + 4);
}


// ============================================================================
// Address:   0xd8a730 (size: 55 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController7setClipEPKc
// Demangled: glitch::collada::CTimelineController::setClip(char const*)
// ============================================================================
int glitch::collada::CTimelineController::setClip(glitch::collada::CTimelineController::Self *self, const char *a2)
{
  int result;
  int v3;

  result = (*(int (**)(glitch::collada::CTimelineController::Self *, const char *))(*(uint32_t *)self + 28))(self, a2);
  if ( result >= 0 )
  {
    v3 = result;
    (*(void (**)(glitch::collada::CTimelineController::Self *, int))(*(uint32_t *)self + 20))(self, result);
    return v3;
  }
  return result;
}


// ============================================================================
// Address:   0xd8a770 (size: 16 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController12getClipCountEv
// Demangled: glitch::collada::CTimelineController::getClipCount(void)const
// ============================================================================
int glitch::collada::CTimelineController::getClipCount(glitch::collada::CTimelineController::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 10);
  result = 0;
  if ( v1 != 0 )
    return *(uint32_t *)v1;
  return result;
}


// ============================================================================
// Address:   0xd8a780 (size: 66 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController12getClipStartEi
// Demangled: glitch::collada::CTimelineController::getClipStart(int)const
// ============================================================================
long double glitch::collada::CTimelineController::getClipStart(
        glitch::collada::CTimelineController::Self *self,
        int a2)
{
  int v2;

  v2 = *((uint32_t *)self + 10);
  if ( v2 != 0 )
    return (float)*(int *)(*(uint32_t *)(v2 + 4) + v2 + 16 * a2 + 8);
  else
    return *((float *)self + 4);
}


// ============================================================================
// Address:   0xd8a7d0 (size: 66 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController10getClipEndEi
// Demangled: glitch::collada::CTimelineController::getClipEnd(int)const
// ============================================================================
long double glitch::collada::CTimelineController::getClipEnd(
        glitch::collada::CTimelineController::Self *self,
        int a2)
{
  int v2;

  v2 = *((uint32_t *)self + 10);
  if ( v2 != 0 )
    return (float)*(int *)(*(uint32_t *)(v2 + 4) + v2 + 16 * a2 + 12);
  else
    return *((float *)self + 5);
}


// ============================================================================
// Address:   0xd8a820 (size: 103 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController13getClipLengthEi
// Demangled: glitch::collada::CTimelineController::getClipLength(int)const
// ============================================================================
long double glitch::collada::CTimelineController::getClipLength(
        glitch::collada::CTimelineController::Self *self,
        int a2)
{
  float v3;
  float v4;
  float v5;

  v3 = ((long double (*)(glitch::collada::CTimelineController::Self *, int))*(uint32_t *)(*(uint32_t *)self + 40))(
         self,
         a2);
  v5 = v3;
  v4 = ((long double (*)(glitch::collada::CTimelineController::Self *, int))*(uint32_t *)(*(uint32_t *)self + 36))(
         self,
         a2);
  return (float)(v5 - v4);
}


// ============================================================================
// Address:   0xd8a890 (size: 28 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController19getCurrentClipStartEv
// Demangled: glitch::collada::CTimelineController::getCurrentClipStart(void)const
// ============================================================================
int glitch::collada::CTimelineController::getCurrentClipStart(glitch::collada::CTimelineController::Self *self)
{
  return (*(int (**)(glitch::collada::CTimelineController::Self *, uint32_t))(*(uint32_t *)self + 36))(
           self,
           *((uint32_t *)self + 11));
}


// ============================================================================
// Address:   0xd8a8b0 (size: 28 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController17getCurrentClipEndEv
// Demangled: glitch::collada::CTimelineController::getCurrentClipEnd(void)const
// ============================================================================
int glitch::collada::CTimelineController::getCurrentClipEnd(glitch::collada::CTimelineController::Self *self)
{
  return (*(int (**)(glitch::collada::CTimelineController::Self *, uint32_t))(*(uint32_t *)self + 40))(
           self,
           *((uint32_t *)self + 11));
}


// ============================================================================
// Address:   0xd8a8d0 (size: 28 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController20getCurrentClipLengthEv
// Demangled: glitch::collada::CTimelineController::getCurrentClipLength(void)const
// ============================================================================
int glitch::collada::CTimelineController::getCurrentClipLength(glitch::collada::CTimelineController::Self *self)
{
  return (*(int (**)(glitch::collada::CTimelineController::Self *, uint32_t))(*(uint32_t *)self + 44))(
           self,
           *((uint32_t *)self + 11));
}


// ============================================================================
// Address:   0xd8a8f0 (size: 12 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController19getCurrentClipIndexEv
// Demangled: glitch::collada::CTimelineController::getCurrentClipIndex(void)const
// ============================================================================
int glitch::collada::CTimelineController::getCurrentClipIndex(glitch::collada::CTimelineController::Self *self)
{
  return *((uint32_t *)self + 11);
}


// ============================================================================
// Address:   0xd8a900 (size: 40 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController27getCurrentClipReferenceTimeEv
// Demangled: glitch::collada::CTimelineController::getCurrentClipReferenceTime(void)const
// ============================================================================
long double glitch::collada::CTimelineController::getCurrentClipReferenceTime(
        glitch::collada::CTimelineController::Self *self)
{
  return (float)*(int *)(*(uint32_t *)(*((uint32_t *)self + 10) + 4)
                       + *((uint32_t *)self + 10)
                       + 16 * *((uint32_t *)self + 11)
                       + 16);
}


// ============================================================================
// Address:   0xd8a930 (size: 44 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController11getClipNameEi
// Demangled: glitch::collada::CTimelineController::getClipName(int)const
// ============================================================================
void *glitch::collada::CTimelineController::getClipName(glitch::collada::CTimelineController::Self *self, int a2)
{
  int v2;
  void *result;

  v2 = *((uint32_t *)self + 10);
  result = &unk_1B15112;
  if ( v2 != 0 )
    return *(void **)(*(uint32_t *)(v2 + 4) + v2 + 16 * a2 + 4);
  return result;
}


// ============================================================================
// Address:   0xd8a960 (size: 14 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController7setLoopEb
// Demangled: glitch::collada::CTimelineController::setLoop(bool)
// ============================================================================
glitch::collada::CTimelineController::Self *glitch::collada::CTimelineController::setLoop(
        glitch::collada::CTimelineController::Self *self,
        bool a2)
{
  *((uint8_t *)self + 25) = a2;
  return self;
}


// ============================================================================
// Address:   0xd8a970 (size: 13 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController7getLoopEv
// Demangled: glitch::collada::CTimelineController::getLoop(void)const
// ============================================================================
int glitch::collada::CTimelineController::getLoop(glitch::collada::CTimelineController::Self *self)
{
  return *((uint8_t *)self + 25);
}


// ============================================================================
// Address:   0xd8a980 (size: 12 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController8getScaleEv
// Demangled: glitch::collada::CTimelineController::getScale(void)const
// ============================================================================
long double glitch::collada::CTimelineController::getScale(glitch::collada::CTimelineController::Self *self)
{
  return *((float *)self + 9);
}


// ============================================================================
// Address:   0xd8a990 (size: 14 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController8setScaleEf
// Demangled: glitch::collada::CTimelineController::setScale(float)
// ============================================================================
glitch::collada::CTimelineController::Self *glitch::collada::CTimelineController::setScale(
        glitch::collada::CTimelineController::Self *self,
        float a2)
{
  *((float *)self + 9) = a2;
  return self;
}


// ============================================================================
// Address:   0xd8a9a0 (size: 19 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController17setEventsCallbackEPFvRKNS_5scene15STriggeredEventEPvES6_
// Demangled: glitch::collada::CTimelineController::setEventsCallback(void (*)(glitch::scene::STriggeredEvent const&,void *),void *)
// ============================================================================
int glitch::collada::CTimelineController::setEventsCallback(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 56) = a2;
  *(uint32_t *)(a1 + 60) = a3;
  return a1;
}


// ============================================================================
// Address:   0xd8aec0 (size: 809 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController6updateEf
// Demangled: glitch::collada::CTimelineController::update(float)
// ============================================================================
int glitch::collada::CTimelineController::update(glitch::collada::CTimelineController::Self *self, float a2)
{
  float v3; // xmm5_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8;
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11; // xmm4_4
  bool v12;
  bool v13;
  long double v14; // fst6
  char v16; // c2
  int v17;
  void (*v18)(glitch::collada::CTimelineController::Self *, uint32_t);
  int result;
  float v20; // xmm3_4
  int v21;
  void (*v22)(glitch::collada::CTimelineController::Self *, uint32_t);
  float v23;
  int v24;

  v24 = 0;
  v3 = *((float *)self + 1);
  *((uint8_t *)self + 26) = 0;
  while ( 1 )
  {
    v4 = a2 + *((float *)self + 8);
    v5 = *((float *)self + 9);
    *((uint8_t *)self + 24) = 0;
    *((uint32_t *)self + 8) = 0;
    v6 = v4 * v5;
    v7 = v6 + v3;
    if ( v6 < 0.0 )
    {
      v8 = *((float *)self + 5);
      v11 = v8;
      *((float *)self + 7) = -v6;
      v9 = *((float *)self + 4);
      v10 = v9;
      v12 = v9 > v7;
    }
    else
    {
      *((float *)self + 7) = v6;
      v8 = *((float *)self + 4);
      v9 = *((float *)self + 5);
      v10 = v8;
      v11 = v9;
      v12 = v7 > v9;
    }
    if ( !v12 )
      break;
    v13 = *((uint8_t *)self + 25) == 0;
    *((uint8_t *)self + 26) = 1;
    if ( v13 )
    {
      if ( v5 != 0.0 )
        *((float *)self + 8) = (float)(v7 - v9) / v5;
      v21 = *((uint32_t *)self + 13);
      if ( v21 != 0 )
        (*(void (**)(uint32_t, float, float, float, float))(*(uint32_t *)v21 + 16))(
          *((uint32_t *)self + 13),
          COERCE_FLOAT(LODWORD(v3)),
          COERCE_FLOAT(LODWORD(v9)),
          COERCE_FLOAT(LODWORD(v10)),
          COERCE_FLOAT(LODWORD(v11)));
      if ( *((uint8_t *)self + 48) != 0 )
      {
        *((uint32_t *)self + 8) = 0;
        v7 = v9;
        result = *((uint8_t *)self + 24);
        v20 = 0.0;
      }
      else
      {
        v22 = *((void (**)(glitch::collada::CTimelineController::Self *, uint32_t))self + 2);
        *((uint8_t *)self + 48) = 1;
        if ( v22 != nullptr )
          v22(self, *((uint32_t *)self + 3));
        result = *((uint8_t *)self + 24);
        v7 = v9;
        v20 = *((float *)self + 8);
      }
    }
    else
    {
      if ( (float)(v11 - v10) == 0.0 )
      {
        v23 = 0.0;
      }
      else
      {
        v14 = (float)(v7 - v9);
        do
          v14 = __FPREM__(v14, (float)(v11 - v10));
        while ( v16 != 0 );
        v23 = v14;
      }
      if ( v5 != 0.0 )
        *((float *)self + 8) = v23 / v5;
      v17 = *((uint32_t *)self + 13);
      if ( v17 != 0 )
      {
        (*(void (**)(uint32_t, float, float, float, float))(*(uint32_t *)v17 + 16))(
          *((uint32_t *)self + 13),
          COERCE_FLOAT(LODWORD(v3)),
          COERCE_FLOAT(LODWORD(v11)),
          COERCE_FLOAT(LODWORD(v10)),
          COERCE_FLOAT(LODWORD(v11)));
        (*(void (**)(uint32_t, uint32_t, float, uint32_t, uint32_t))(**((uint32_t **)self + 13) + 16))(
          *((uint32_t *)self + 13),
          *((uint32_t *)self + 4),
          COERCE_FLOAT(LODWORD(v8)),
          *((uint32_t *)self + 4),
          *((uint32_t *)self + 5));
      }
      v18 = *((void (**)(glitch::collada::CTimelineController::Self *, uint32_t))self + 2);
      if ( v18 != nullptr )
        v18(self, *((uint32_t *)self + 3));
      result = *((uint8_t *)self + 24);
      v7 = v8;
      v20 = *((float *)self + 8);
    }
LABEL_17:
    if ( (uint8_t)result != 0 )
      v7 = *((float *)self + 1);
    *((float *)self + 1) = v7;
    if ( v20 <= 0.0 || v24 != 0 )
    {
      *((uint32_t *)self + 8) = 0;
      return result;
    }
    v3 = v7;
    v24 = 1;
    a2 = 0.0;
  }
  result = *((uint32_t *)self + 13);
  if ( result != 0 )
  {
    (*(void (**)(uint32_t, float, float, float, float))(*(uint32_t *)result + 16))(
      *((uint32_t *)self + 13),
      COERCE_FLOAT(LODWORD(v3)),
      COERCE_FLOAT(LODWORD(v7)),
      COERCE_FLOAT(LODWORD(v10)),
      COERCE_FLOAT(LODWORD(v11)));
    result = *((uint8_t *)self + 24);
    v20 = *((float *)self + 8);
    goto LABEL_17;
  }
  *((float *)self + 1) = v7;
  *((uint32_t *)self + 8) = 0;
  return result;
}


// ============================================================================
// Address:   0xd8baf0 (size: 64 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController8setRangeEffb
// Demangled: glitch::collada::CTimelineController::setRange(float,float,bool)
// ============================================================================
glitch::collada::CTimelineController::Self *glitch::collada::CTimelineController::setRange(
        glitch::collada::CTimelineController::Self *self,
        float a2,
        float a3,
        bool a4)
{
  glitch::collada::CTimelineController::Self *result;

  result = self;
  if ( *((uint32_t *)self + 10) == 0 )
  {
    *((float *)self + 4) = a2;
    *((float *)self + 5) = a3;
  }
  if ( a4 )
    return (glitch::collada::CTimelineController::Self *)(*(int (**)(glitch::collada::CTimelineController::Self *, uint32_t))(*(uint32_t *)self + 16))(
                                                     self,
                                                     *((uint32_t *)self + 4));
  return result;
}


// ============================================================================
// Address:   0xd8bbd0 (size: 77 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController7setClipEi
// Demangled: glitch::collada::CTimelineController::setClip(int)
// ============================================================================
int glitch::collada::CTimelineController::setClip(glitch::collada::CTimelineController::Self *self, int a2)
{
  int v2;
  int v3;
  long double v4; // fst7
  int v5;
  long double v6; // fst7
  int v7;
  int result;

  v2 = 0;
  v3 = *((uint32_t *)self + 10);
  *((uint8_t *)self + 48) = 0;
  if ( v3 != 0 )
    v2 = a2;
  *((uint32_t *)self + 11) = v2;
  v4 = ((long double (*)(glitch::collada::CTimelineController::Self *))*(uint32_t *)(*(uint32_t *)self + 48))(self);
  v5 = *(uint32_t *)self;
  *((float *)self + 4) = v4;
  v6 = ((long double (*)(glitch::collada::CTimelineController::Self *))*(uint32_t *)(v5 + 52))(self);
  v7 = *((uint32_t *)self + 4);
  *((float *)self + 5) = v6;
  *((uint32_t *)self + 1) = v7;
  result = *((uint32_t *)self + 13);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 20))(*((uint32_t *)self + 13));
  return result;
}


// ============================================================================
// Address:   0xd8bc20 (size: 43 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController6jumpToEf
// Demangled: glitch::collada::CTimelineController::jumpTo(float)
// ============================================================================
int glitch::collada::CTimelineController::jumpTo(glitch::collada::CTimelineController::Self *self, float a2)
{
  int result;

  *((float *)self + 1) = a2;
  *((uint8_t *)self + 24) = 1;
  *((uint8_t *)self + 48) = 0;
  result = *((uint32_t *)self + 13);
  if ( result != 0 )
    return (*(int (**)(int))(*(uint32_t *)result + 20))(result);
  return result;
}


// ============================================================================
// Address:   0xd8bcf0 (size: 154 bytes)
// Symbol:    _ZNK6glitch7collada19CTimelineController12getClipIndexEPKc
// Demangled: glitch::collada::CTimelineController::getClipIndex(char const*)const
// ============================================================================
int glitch::collada::CTimelineController::getClipIndex(glitch::collada::CTimelineController::Self *self, char *s2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v2 = 0;
  v3 = *((int **)self + 10);
  if ( v3 == nullptr )
    return v2;
  v8 = *v3;
  if ( *v3 > 0 )
  {
    v4 = v3[1] + 4;
    do
    {
      v7 = v4;
      v5 = strcasecmp(*(const char **)((char *)&v3[4 * v2] + v4), s2);
      v4 = v7;
      if ( v5 == 0 )
        return v2;
    }
    while ( ++v2 != v8 );
  }
  glitch::os::Printer::logf(3, (int)(uintptr_t)"Unknown animation clip: %s", s2);
  return -1;
}


// ============================================================================
// Address:   0xd8bd90 (size: 629 bytes)
// Symbol:    _ZN6glitch7collada14CEventsManager25getEventTimeFromEventNameEPKc
// Demangled: glitch::collada::CEventsManager::getEventTimeFromEventName(char const*)
// ============================================================================
int glitch::collada::CEventsManager::getEventTimeFromEventName(
        glitch::collada::CEventsManager::Self *self,
        const char *s1)
{
  int *v2;
  int v3;
  int *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v2 = *((int **)self + 5);
  v3 = *v2;
  if ( *v2 == 3 )
  {
    v13 = v2[4];
    v21 = -1;
    if ( v13 <= 0 )
      return v21;
    v27 = 2 * v13;
    v24 = 0;
    v20 = *((uint32_t *)self + 5);
    v30 = (int)(uintptr_t)v2 + v2[5] + 20;
    do
    {
      v14 = (int *)(v30 + 4 * v24);
      v15 = *v14;
      if ( *v14 > 0 )
      {
        v16 = 0;
        v17 = (int)(uintptr_t)v14 + v14[1] + 4;
        do
        {
          if ( strcmp(s1, *(const char **)(v17 + 4 * v16)) == 0 )
            v21 = (int)(float)((float)*(uint16_t *)(*(uint32_t *)(v20 + 12) + v24 + v20 + 12) * 33.333332f);
          ++v16;
        }
        while ( v16 != v15 );
      }
      v24 += 2;
    }
    while ( v24 != v27 );
    return v21;
  }
  else if ( v3 == 4 )
  {
    v21 = -1;
    v26 = v2[4];
    if ( v26 <= 0 )
      return v21;
    v23 = 0;
    v19 = *((uint32_t *)self + 5);
    v29 = (int)(uintptr_t)v2 + v2[5] + 20;
    do
    {
      v9 = (int *)(v29 + 8 * v23);
      v10 = *v9;
      if ( *v9 > 0 )
      {
        v11 = 0;
        v12 = (int)(uintptr_t)v9 + v9[1] + 4;
        do
        {
          if ( strcmp(s1, *(const char **)(v12 + 4 * v11)) == 0 )
            v21 = (int)(float)*(int *)(*(uint32_t *)(v19 + 12) + v19 + 4 * v23 + 12);
          ++v11;
        }
        while ( v11 != v10 );
      }
      ++v23;
    }
    while ( v23 != v26 );
    return v21;
  }
  else
  {
    if ( v3 != 1 )
      return 0;
    v21 = -1;
    v25 = v2[4];
    if ( v25 <= 0 )
      return v21;
    v22 = 0;
    v18 = *((uint32_t *)self + 5);
    v28 = (int)(uintptr_t)v2 + v2[5] + 20;
    do
    {
      v5 = (int *)(v28 + 8 * v22);
      v6 = *v5;
      if ( *v5 > 0 )
      {
        v7 = 0;
        v8 = (int)(uintptr_t)v5 + v5[1] + 4;
        do
        {
          if ( strcmp(s1, *(const char **)(v8 + 4 * v7)) == 0 )
            v21 = (int)(float)((float)*(uint8_t *)(*(uint32_t *)(v18 + 12) + v22 + v18 + 12) * 33.333332f);
          ++v7;
        }
        while ( v7 != v6 );
      }
      ++v22;
    }
    while ( v22 != v25 );
    return v21;
  }
}


// ============================================================================
// Address:   0xd8ea10 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada19CTimelineControllerD1Ev
// Demangled: g4_thunk_0xd8ea10_93()
// ============================================================================
void g4_thunk_0xd8ea10_94(
        glitch::collada::CTimelineController::Self *self)
{
  glitch::collada::CTimelineController::Destroy((glitch::collada::CTimelineController::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd8ea20 (size: 95 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineControllerD1Ev
// Demangled: glitch::collada::CTimelineController::Destroy()
// ============================================================================
void glitch::collada::CTimelineController::Destroy(glitch::collada::CTimelineController::Self *self)
{
  volatile int32_t *v1;

  *((uint32_t *)self + 16) = ((uint32_t)(uintptr_t)&off_207BAE0);
  v1 = *((volatile int32_t **)self + 13);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207BA6C);
  if ( v1 != nullptr )
    sub_5459C0(v1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207B96C);
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xd8ea80 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada19CTimelineControllerD0Ev
// Demangled: g4_thunk_0xd8ea80_95()
// ============================================================================
void g4_thunk_0xd8ea80_96(
        glitch::collada::CTimelineController::Self *self)
{
  glitch::collada::CTimelineController::Destroy((glitch::collada::CTimelineController::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd8ea90 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineControllerD0Ev
// Demangled: glitch::collada::CTimelineController::Destroy()
// ============================================================================
void glitch::collada::CTimelineController::DestroyDeleting(glitch::collada::CTimelineController::Self *self)
{
  glitch::collada::CTimelineController::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd8ead0 (size: 85 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController16setEventsManagerEPNS_5scene14IEventsManagerE
// Demangled: glitch::collada::CTimelineController::setEventsManager(glitch::scene::IEventsManager *)
// ============================================================================
volatile int32_t *glitch::collada::CTimelineController::setEventsManager(
        glitch::collada::CTimelineController::Self *self,
        glitch::scene::IEventsManager::Self *a2)
{
  volatile int32_t *result;

  if ( a2 != nullptr )
    sub_8B1B00((volatile int32_t *)a2 + 1);
  result = *((volatile int32_t **)self + 13);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(a2);
  if ( result != nullptr )
    return (volatile int32_t *)sub_5459C0(result);
  return result;
}


// ============================================================================
// Address:   0xd8f060 (size: 77 bytes)
// Symbol:    _ZN6glitch7collada15COnDemandReaderD1Ev
// Demangled: glitch::collada::COnDemandReader::Destroy()
// ============================================================================
// Alternative name is '_ZN6glitch7collada15COnDemandReaderD2Ev'
void glitch::collada::COnDemandReader::Destroy(volatile int32_t **self)
{
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_207B8F0);
  if ( *(self + 1) != nullptr )
    sub_5459C0(*(self + 1));
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_207FF78);
}


// ============================================================================
// Address:   0xd8f0b0 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada15COnDemandReaderD0Ev
// Demangled: glitch::collada::COnDemandReader::Destroy()
// ============================================================================
void glitch::collada::COnDemandReader::DestroyDeleting(volatile int32_t **self)
{
  glitch::collada::COnDemandReader::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd90e00 (size: 1454 bytes)
// Symbol:    _ZN6glitch7collada14CEventsManager8onUpdateEffff
// Demangled: glitch::collada::CEventsManager::onUpdate(float,float,float,float)
// ============================================================================
void glitch::collada::CEventsManager::onUpdate(
        glitch::collada::CEventsManager::Self *self,
        float a2,
        float a3,
        float a4,
        float a5)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint8_t v18;
  int v19;
  int v20;
  int *v21;
  int v22;
  int v23;
  int EntryFrom;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  uint16_t v40; // di
  int v41;
  int v42;
  int v43;
  int v44;
  uint16_t v45;
  int v46;
  int v47;
  int v48;
  int v49;
  uint8_t v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  uint16_t v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;

  if ( a2 != a3 && *((uint32_t *)self + 2) != 0 )
  {
    v5 = *((uint32_t **)self + 5);
    v6 = *v5;
    if ( *v5 != 3 )
    {
      if ( v6 == 4 )
      {
        v25 = v5[2] - 1;
        v69 = v5[2];
        v71 = v69;
        if ( v25 >= 0 )
        {
          v26 = 0;
          do
          {
            v27 = (v26 + v25) >> 1;
            v28 = *(uint32_t *)((char *)&v5[v27 + 3] + v5[3]);
            v29 = v27 - 1;
            v30 = v27 + 1;
            if ( (int)(a2 + 0.5) > v28 )
              v26 = v30;
            else
              v25 = v29;
          }
          while ( v25 >= v26 );
          v71 = v25 + 1;
        }
        v7 = v69 - 1;
        if ( v69 - 1 >= 0 )
        {
          v31 = 0;
          v63 = v5[3] + 4;
          do
          {
            v32 = (v31 + v7) >> 1;
            v33 = *(uint32_t *)(v63 + *((uint32_t *)self + 5) + 4 * v32 + 8);
            v34 = v32 - 1;
            v35 = v32 + 1;
            if ( (int)(a3 + 0.5) < v33 )
              v7 = v34;
            else
              v31 = v35;
          }
          while ( v7 >= v31 );
        }
      }
      else
      {
        if ( v6 != 1 )
        {
          v71 = 1;
          if ( v6 != 3 )
          {
            v7 = 0;
            goto LABEL_8;
          }
          v36 = v5[2];
          goto LABEL_52;
        }
        v67 = v5[2];
        v8 = v67;
        v9 = v67 - 1;
        v71 = v67;
        if ( v67 - 1 >= 0 )
        {
          v10 = 0;
          v73 = v5[3] + 4;
          do
          {
            v11 = (v10 + v9) >> 1;
            v12 = *(uint8_t *)(v73 + *((uint32_t *)self + 5) + v11 + 8);
            v13 = v11 - 1;
            v14 = v11 + 1;
            if ( (uint8_t)(int)((a2 + 0.5) * 0.030000001144409223) > v12 )
              v10 = v14;
            else
              v9 = v13;
          }
          while ( v9 >= v10 );
          v5 = *((uint32_t **)self + 5);
          v71 = v9 + 1;
          v8 = v67;
        }
        v7 = v8 - 1;
        if ( v7 >= 0 )
        {
          v15 = 0;
          v16 = v5;
          v68 = v5[3] + 4;
          do
          {
            v17 = (v15 + v7) >> 1;
            v18 = *((uint8_t *)v16 + v17 + v68 + 8);
            v19 = v17 - 1;
            v20 = v17 + 1;
            if ( (uint8_t)(int)((a3 + 0.5) * 0.030000001144409223) >= v18 )
              v15 = v20;
            else
              v7 = v19;
          }
          while ( v7 >= v15 );
        }
      }
LABEL_8:
      v72 = (*((uint32_t *)self + 4) == v71) + v71;
      sub_8B1B00((volatile int32_t *)self + 1);
      if ( a3 >= a2 )
      {
        glitch::collada::CEventsManager::dispatchEvents(self, v72, v7, a3);
LABEL_10:
        *((uint32_t *)self + 4) = v7;
        sub_5459C0((volatile int32_t *)self);
        return;
      }
      v21 = *((int **)self + 5);
      v22 = *v21;
      if ( *v21 == 3 )
      {
        v23 = v21[2] - 1;
        if ( v23 < 0 )
          goto LABEL_30;
        v75 = v7;
        v58 = 0;
        v66 = v21[3] + 4;
        do
        {
          v59 = (v58 + v23) >> 1;
          v60 = *(uint16_t *)(v66 + *((uint32_t *)self + 5) + 2 * v59 + 8);
          v61 = v59 - 1;
          v62 = v59 + 1;
          if ( (uint16_t)(int)((a5 + 0.5) * 0.030000001144409223) < v60 )
            v23 = v61;
          else
            v58 = v62;
        }
        while ( v23 >= v58 );
      }
      else
      {
        if ( v22 != 4 )
        {
          if ( v22 == 1 )
          {
            v23 = v21[2] - 1;
            if ( v23 >= 0 )
            {
              v48 = 0;
              v74 = v7;
              v70 = v21[3] + 4;
              do
              {
                v49 = (v48 + v23) >> 1;
                v50 = *(uint8_t *)(v70 + *((uint32_t *)self + 5) + v49 + 8);
                v51 = v49 - 1;
                v52 = v49 + 1;
                if ( (uint8_t)(int)((a5 + 0.5) * 0.030000001144409223) >= v50 )
                  v48 = v52;
                else
                  v23 = v51;
              }
              while ( v23 >= v48 );
              v7 = v74;
            }
          }
          else
          {
            v23 = 0;
          }
          goto LABEL_30;
        }
        v23 = v21[2] - 1;
        if ( v23 < 0 )
        {
LABEL_30:
          glitch::collada::CEventsManager::dispatchEvents(self, v72, v23, (float)(a5 - a4) + a3);
          EntryFrom = glitch::collada::CEventsManager::findEntryFrom(self, a4);
          glitch::collada::CEventsManager::dispatchEvents(self, EntryFrom, v7, a3);
          goto LABEL_10;
        }
        v75 = v7;
        v53 = 0;
        v65 = v21[3] + 4;
        do
        {
          v54 = (v53 + v23) >> 1;
          v55 = *(uint32_t *)(v65 + *((uint32_t *)self + 5) + 4 * v54 + 8);
          v56 = v54 - 1;
          v57 = v54 + 1;
          if ( (int)(a5 + 0.5) < v55 )
            v23 = v56;
          else
            v53 = v57;
        }
        while ( v23 >= v53 );
      }
      v7 = v75;
      goto LABEL_30;
    }
    v36 = v5[2];
    v37 = v36 - 1;
    v71 = v36;
    if ( v36 - 1 >= 0 )
    {
      v38 = 0;
      do
      {
        v39 = (v38 + v37) >> 1;
        v40 = *(uint16_t *)((char *)v5 + 2 * v39 + v5[3] + 12);
        v41 = v39 - 1;
        v42 = v39 + 1;
        if ( (uint16_t)(int)((a2 + 0.5) * 0.030000001144409223) > v40 )
          v38 = v42;
        else
          v37 = v41;
      }
      while ( v37 >= v38 );
      v36 = v5[2];
      v71 = v37 + 1;
    }
LABEL_52:
    v7 = v36 - 1;
    if ( v7 >= 0 )
    {
      v43 = 0;
      v64 = v5[3] + 4;
      do
      {
        v44 = (v43 + v7) >> 1;
        v45 = *(uint16_t *)(v64 + *((uint32_t *)self + 5) + 2 * v44 + 8);
        v46 = v44 - 1;
        v47 = v44 + 1;
        if ( (uint16_t)(int)((a3 + 0.5) * 0.030000001144409223) < v45 )
          v7 = v46;
        else
          v43 = v47;
      }
      while ( v7 >= v43 );
    }
    goto LABEL_8;
  }
}


// ============================================================================
// Address:   0xd913b0 (size: 892 bytes)
// Symbol:    _ZN6glitch7collada14CEventsManager8onUpdateEff
// Demangled: glitch::collada::CEventsManager::onUpdate(float,float)
// ============================================================================
glitch::collada::CEventsManager::Self *glitch::collada::CEventsManager::onUpdate(
        glitch::collada::CEventsManager::Self *self,
        float a2,
        float a3)
{
  glitch::collada::CEventsManager::Self *result;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint8_t v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint16_t v21; // di
  int v22;
  int v23;
  int v24;
  int v25;
  uint16_t v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;

  result = self;
  if ( *((uint32_t *)self + 2) != 0 )
  {
    sub_8B1B00((volatile int32_t *)self + 1);
    v4 = *((uint32_t **)self + 5);
    v5 = *v4;
    if ( *v4 != 3 )
    {
      if ( v5 == 4 )
      {
        v6 = v4[2] - 1;
        v43 = v4[2];
        if ( v6 >= 0 )
        {
          v29 = 0;
          do
          {
            v30 = (v29 + v6) >> 1;
            v31 = *(uint32_t *)((char *)&v4[v30 + 3] + v4[3]);
            v32 = v30 - 1;
            v33 = v30 + 1;
            if ( (int)(a3 + 0.5) >= v31 )
              v29 = v33;
            else
              v6 = v32;
          }
          while ( v6 >= v29 );
        }
        v7 = v4[2];
        v13 = v43 - 1;
        if ( v43 - 1 < 0 )
          goto LABEL_21;
        v34 = 0;
        v40 = v4[3] + 4;
        v45 = v6;
        do
        {
          v35 = (v34 + v13) >> 1;
          v36 = *(uint32_t *)(v40 + *((uint32_t *)self + 5) + 4 * v35 + 8);
          v37 = v35 - 1;
          v38 = v35 + 1;
          if ( (int)(a2 + 0.5) <= v36 )
            v13 = v37;
          else
            v34 = v38;
        }
        while ( v13 >= v34 );
      }
      else
      {
        if ( v5 != 1 )
        {
          v6 = 0;
          if ( v5 != 3 )
          {
            v7 = 1;
LABEL_21:
            glitch::collada::CEventsManager::dispatchEvents(self, v7, v6, a3);
            return (glitch::collada::CEventsManager::Self *)sub_5459C0((volatile int32_t *)self);
          }
          v42 = v4[2];
          goto LABEL_29;
        }
        v41 = v4[2];
        v6 = v41 - 1;
        if ( v41 - 1 >= 0 )
        {
          v8 = 0;
          v44 = v4[3] + 4;
          do
          {
            v9 = (v8 + v6) >> 1;
            v10 = *(uint8_t *)(v44 + *((uint32_t *)self + 5) + v9 + 8);
            v11 = v9 - 1;
            v12 = v9 + 1;
            if ( (uint8_t)(int)((a3 + 0.5) * 0.030000001144409223) >= v10 )
              v8 = v12;
            else
              v6 = v11;
          }
          while ( v6 >= v8 );
          v4 = *((uint32_t **)self + 5);
        }
        v7 = v41;
        v13 = v41 - 1;
        if ( v41 - 1 < 0 )
          goto LABEL_21;
        v14 = 0;
        v45 = v6;
        do
        {
          v15 = (v14 + v13) >> 1;
          v16 = *((uint8_t *)v4 + v15 + v4[3] + 12);
          v17 = v15 - 1;
          v18 = v15 + 1;
          if ( (uint8_t)(int)((a2 + 0.5) * 0.030000001144409223) > v16 )
            v14 = v18;
          else
            v13 = v17;
        }
        while ( v13 >= v14 );
      }
LABEL_20:
      v6 = v45;
      v7 = v13 + 1;
      goto LABEL_21;
    }
    v42 = v4[2];
    v6 = v42 - 1;
    if ( v42 - 1 >= 0 )
    {
      v19 = 0;
      do
      {
        v20 = (v19 + v6) >> 1;
        v21 = *(uint16_t *)((char *)v4 + 2 * v20 + v4[3] + 12);
        v22 = v20 - 1;
        v23 = v20 + 1;
        if ( (uint16_t)(int)((a3 + 0.5) * 0.030000001144409223) >= v21 )
          v19 = v23;
        else
          v6 = v22;
      }
      while ( v6 >= v19 );
    }
LABEL_29:
    v7 = v42;
    v13 = v42 - 1;
    if ( v42 - 1 < 0 )
      goto LABEL_21;
    v24 = 0;
    v39 = v4[3] + 4;
    v45 = v6;
    do
    {
      v25 = (v24 + v13) >> 1;
      v26 = *(uint16_t *)(v39 + *((uint32_t *)self + 5) + 2 * v25 + 8);
      v27 = v25 - 1;
      v28 = v25 + 1;
      if ( (uint16_t)(int)((a2 + 0.5) * 0.030000001144409223) <= v26 )
        v13 = v27;
      else
        v24 = v28;
    }
    while ( v13 >= v24 );
    goto LABEL_20;
  }
  return result;
}


// ============================================================================
// Address:   0xda8130 (size: 12 bytes)
// Symbol:    _ZN6glitch7collada15convertMAX2BDAEEPKcS2_
// Demangled: glitch::collada::convertMAX2BDAE(char const*,char const*)
// ============================================================================
int glitch::collada::convertMAX2BDAE()
{
  return -1;
}


// ============================================================================
// Address:   0xda8140 (size: 12 bytes)
// Symbol:    _ZN6glitch7collada15convertDAE2BDAEEPKcS2_
// Demangled: glitch::collada::convertDAE2BDAE(char const*,char const*)
// ============================================================================
int glitch::collada::convertDAE2BDAE()
{
  return -1;
}


// ============================================================================
// Address:   0xda8150 (size: 70 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20linkInstanceMaterialEPNS0_17SInstanceMaterialE
// Demangled: glitch::collada::CColladaDatabase::linkInstanceMaterial(glitch::collada::SInstanceMaterial *)const
// ============================================================================
int glitch::collada::CColladaDatabase::linkInstanceMaterial(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v2 = 0;
  result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 16) + 32);
  v4 = *(uint32_t *)(result + 8);
  v5 = result + 8;
  if ( v4 != 0 )
  {
    v6 = v5 + v4;
    if ( v6 != 0 )
      v2 = v6 - (a2 + 56);
  }
  *(uint32_t *)(a2 + 56) = v2;
  *(uint32_t *)(result + 8) = a2 - v5;
  return result;
}


// ============================================================================
// Address:   0xda81a0 (size: 15 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase10getVersionEv
// Demangled: glitch::collada::CColladaDatabase::getVersion(void)const
// ============================================================================
int glitch::collada::CColladaDatabase::getVersion(glitch::collada::CColladaDatabase::Self *self)
{
  return **(uint32_t **)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
}


// ============================================================================
// Address:   0xda81b0 (size: 117 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase12getAnimationEPKc
// Demangled: glitch::collada::CColladaDatabase::getAnimation(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getAnimation(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 40);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 44) + 44); strcmp(*i, s2) != 0; i += 8 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8230 (size: 117 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase16getAnimationClipEPKc
// Demangled: glitch::collada::CColladaDatabase::getAnimationClip(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getAnimationClip(
        glitch::collada::CColladaDatabase::Self *self,
        char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 60);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 64) + 64); strcmp(*i, s2) != 0; i += 4 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda82b0 (size: 141 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20getArticulatedSystemEPKc
// Demangled: glitch::collada::CColladaDatabase::getArticulatedSystem(char const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getArticulatedSystem(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;

  v2 = 0;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v10 = *(uint32_t *)(v3 + 76);
  if ( v10 > 0 )
  {
    v4 = 0;
    v9 = v3 + *(uint32_t *)(v3 + 80) + 80;
    v2 = v9;
    v5 = v3 + *(uint32_t *)(v3 + 80) + 84;
    while ( 1 )
    {
      v8 = v5;
      v6 = strcmp(*(const char **)(v5 + v2 - v9), s2);
      v5 = v8;
      if ( v6 == 0 )
        break;
      ++v4;
      v2 += 16;
      if ( v4 == v10 )
        return 0;
    }
  }
  return v2;
}


// ============================================================================
// Address:   0xda8340 (size: 77 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase11getJointDOFEPKNS0_16SKinematicsModelEii
// Demangled: glitch::collada::CColladaDatabase::getJointDOF(glitch::collada::SKinematicsModel const*,int,int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getJointDOF(int a1, int a2, int a3, int a4)
{
  int result;
  int *v5;

  result = 0;
  if ( a3 >= 0 && a3 < *(uint32_t *)(a2 + 8) && a4 >= 0 )
  {
    v5 = (int *)(a2 + *(uint32_t *)(a2 + 12) + 12 + 8 * a3);
    if ( a4 < *v5 )
      return (int)(uintptr_t)&v5[6 * a4 + 1] + v5[1];
  }
  return result;
}


// ============================================================================
// Address:   0xda8390 (size: 117 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase18getKinematicsModelEPKc
// Demangled: glitch::collada::CColladaDatabase::getKinematicsModel(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getKinematicsModel(
        glitch::collada::CColladaDatabase::Self *self,
        char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 92);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 96) + 96); strcmp(*i, s2) != 0; i += 4 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8410 (size: 119 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase19getAnimationSegmentEi
// Demangled: glitch::collada::CColladaDatabase::getAnimationSegment(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getAnimationSegment(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 52);
  v5 = v3 + v4 + 52;
  if ( v4 != 0 )
    v2 = (uint32_t *)v5;
  result = 0;
  if ( *v2 != 0 )
  {
    v7 = *v2 - 1;
    v13 = (int)(uintptr_t)v2 + v2[1] + 4;
    v8 = 1;
    if ( v7 > 0 )
    {
      do
      {
        v9 = (v8 + v7) >> 1;
        v10 = *(uint32_t *)(v13 + 28 * v9);
        v11 = v9 - 1;
        v12 = v9 + 1;
        if ( v10 > a2 )
          v7 = v11;
        else
          v8 = v12;
      }
      while ( v8 <= v7 );
    }
    return v13 + 28 * v7;
  }
  return result;
}


// ============================================================================
// Address:   0xda8490 (size: 16 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase23getAnimationClipLibraryEv
// Demangled: glitch::collada::CColladaDatabase::getAnimationClipLibrary(void)const
// ============================================================================
int glitch::collada::CColladaDatabase::getAnimationClipLibrary(glitch::collada::CColladaDatabase::Self *self)
{
  return *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32) + 60;
}


// ============================================================================
// Address:   0xda84a0 (size: 117 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase9getCameraEPKc
// Demangled: glitch::collada::CColladaDatabase::getCamera(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getCamera(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 84);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 88) + 88); strcmp(*i, s2) != 0; i += 13 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8520 (size: 117 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase8getLightEPKc
// Demangled: glitch::collada::CColladaDatabase::getLight(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getLight(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 100);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 104) + 104); strcmp(*i, s2) != 0; i += 12 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda85a0 (size: 117 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase8getImageEPKc
// Demangled: glitch::collada::CColladaDatabase::getImage(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getImage(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 108);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 112) + 112); strcmp(*i, s2) != 0; i += 3 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8620 (size: 117 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase9getEffectEPKc
// Demangled: glitch::collada::CColladaDatabase::getEffect(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getEffect(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 116);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 120) + 120); strcmp(*i, s2) != 0; i += 53 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda86a0 (size: 125 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase11getMaterialEPKc
// Demangled: glitch::collada::CColladaDatabase::getMaterial(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getMaterial(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 124);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 128) + 128); strcmp(*i, s2) != 0; i += 9 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8720 (size: 246 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase8getDummyEPKcRNS0_5SNodeE
// Demangled: glitch::collada::CColladaDatabase::getDummy(char const*,glitch::collada::SNode &)const
// ============================================================================
int glitch::collada::CColladaDatabase::getDummy(int a1, char *s2, uint32_t *a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int result;
  int v9;
  int i;
  int v11;
  int v12;
  int v13;

  v12 = a3[16];
  if ( v12 <= 0 )
  {
LABEL_11:
    result = 0;
    v13 = a3[14];
    if ( v13 > 0 )
    {
      v9 = 0;
      for ( i = 0; i != v13; ++i )
      {
        result = glitch::collada::CColladaDatabase::getDummy(a1, s2, (int)(uintptr_t)a3 + a3[15] + v9 + 60);
        if ( result != 0 )
          break;
        v9 += 80;
      }
    }
  }
  else
  {
    v3 = 0;
    v4 = (int)(uintptr_t)a3 + a3[17] + 68;
    while ( 1 )
    {
      v5 = (uint32_t *)(v4 + 8 * v3);
      if ( *v5 == 10 )
      {
        v6 = v5[1];
        v7 = 0;
        if ( v6 != 0 )
          v7 = (int)(uintptr_t)v5 + v6 + 4;
        v11 = v4;
        result = strcmp((const char *)(*(uint32_t *)(v7 + 4) + 1), s2);
        v4 = v11;
        if ( result == 0 )
          break;
      }
      if ( ++v3 == v12 )
        goto LABEL_11;
    }
    if ( v6 != 0 )
      return (int)(uintptr_t)v5 + v6 + 4;
  }
  return result;
}


// ============================================================================
// Address:   0xda8820 (size: 142 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase7getNodeEPKcRNS0_5SNodeE
// Demangled: glitch::collada::CColladaDatabase::getNode(char const*,glitch::collada::SNode &)const
// ============================================================================
int glitch::collada::CColladaDatabase::getNode(int a1, char *s2, int a3)
{
  int v3;
  int result;
  int v5;
  int i;
  int v7;

  v3 = strcmp(*(const char **)a3, s2);
  result = a3;
  if ( v3 != 0 )
  {
    result = 0;
    v7 = *(uint32_t *)(a3 + 56);
    if ( v7 > 0 )
    {
      v5 = 0;
      for ( i = 0; i != v7; ++i )
      {
        result = glitch::collada::CColladaDatabase::getNode(a1, s2, v5 + a3 + 56 + *(uint32_t *)(a3 + 60) + 4);
        if ( result != 0 )
          break;
        v5 += 80;
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xda88b0 (size: 125 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase11getGeometryEPKc
// Demangled: glitch::collada::CColladaDatabase::getGeometry(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getGeometry(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 136);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 140) + 140); strcmp(*i, s2) != 0; i += 4 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8930 (size: 149 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase13getControllerEPKc
// Demangled: glitch::collada::CColladaDatabase::getController(char const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getController(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;

  v2 = 0;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v10 = *(uint32_t *)(v3 + 148);
  if ( v10 > 0 )
  {
    v4 = 0;
    v9 = v3 + *(uint32_t *)(v3 + 152) + 152;
    v2 = v9;
    v5 = v3 + *(uint32_t *)(v3 + 152) + 156;
    while ( 1 )
    {
      v8 = v5;
      v6 = strcmp(*(const char **)(v5 + v2 - v9), s2);
      v5 = v8;
      if ( v6 == 0 )
        break;
      ++v4;
      v2 += 12;
      if ( v4 == v10 )
        return 0;
    }
  }
  return v2;
}


// ============================================================================
// Address:   0xda89d0 (size: 125 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase8getForceEPKc
// Demangled: glitch::collada::CColladaDatabase::getForce(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getForce(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 164);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 168) + 168); strcmp(*i, s2) != 0; i += 4 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8a50 (size: 125 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase10getCoronasEPKc
// Demangled: glitch::collada::CColladaDatabase::getCoronas(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getCoronas(glitch::collada::CColladaDatabase::Self *self, char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 172);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 176) + 176); strcmp(*i, s2) != 0; i += 9 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8ad0 (size: 125 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14getVisualSceneEPKc
// Demangled: glitch::collada::CColladaDatabase::getVisualScene(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getVisualScene(
        glitch::collada::CColladaDatabase::Self *self,
        char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 180);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 184) + 184); strcmp(*i, s2) != 0; i += 4 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8b50 (size: 439 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase4findEPKcRj
// Demangled: glitch::collada::CColladaDatabase::find(char const*,unsigned int &)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::find(
        glitch::collada::CColladaDatabase::Self *self,
        char *a2,
        unsigned int *a3)
{
  int v3;
  const char **result;

  v3 = *a3;
  if ( (*a3 & 1) != 0 )
  {
    result = glitch::collada::CColladaDatabase::getAnimation(self, a2);
    if ( result != nullptr )
    {
      *a3 = 1;
      return result;
    }
    v3 = *a3;
  }
  if ( (v3 & 2) != 0 )
  {
    result = glitch::collada::CColladaDatabase::getAnimationClip(self, a2);
    if ( result != nullptr )
    {
      *a3 = 2;
      return result;
    }
    v3 = *a3;
  }
  if ( (v3 & 4) != 0 )
  {
    result = glitch::collada::CColladaDatabase::getImage(self, a2);
    if ( result != nullptr )
    {
      *a3 = 4;
      return result;
    }
    v3 = *a3;
  }
  if ( (v3 & 8) != 0 )
  {
    result = glitch::collada::CColladaDatabase::getEffect(self, a2);
    if ( result != nullptr )
    {
      *a3 = 8;
      return result;
    }
    v3 = *a3;
  }
  if ( (v3 & 0x10) != 0 )
  {
    result = glitch::collada::CColladaDatabase::getMaterial(self, a2);
    if ( result != nullptr )
    {
      *a3 = 16;
      return result;
    }
    v3 = *a3;
  }
  if ( (v3 & 0x20) != 0 )
  {
    result = glitch::collada::CColladaDatabase::getGeometry(self, a2);
    if ( result != nullptr )
    {
      *a3 = 32;
      return result;
    }
    v3 = *a3;
  }
  if ( (v3 & 0x40) != 0 )
  {
    result = (const char **)glitch::collada::CColladaDatabase::getController(self, a2);
    if ( result != nullptr )
    {
      *a3 = 64;
      return result;
    }
    v3 = *a3;
  }
  result = nullptr;
  if ( (v3 & 0x80) != 0 )
  {
    result = glitch::collada::CColladaDatabase::getVisualScene(self, a2);
    if ( result != nullptr )
      *a3 = 128;
  }
  return result;
}


// ============================================================================
// Address:   0xda8d10 (size: 117 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase19getAnimationPackageEPKc
// Demangled: glitch::collada::CColladaDatabase::getAnimationPackage(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getAnimationPackage(
        glitch::collada::CColladaDatabase::Self *self,
        char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 68);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 72) + 72); strcmp(*i, s2) != 0; i += 11 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda8d90 (size: 18 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase8getSceneEv
// Demangled: glitch::collada::CColladaDatabase::getScene(void)const
// ============================================================================
int glitch::collada::CColladaDatabase::getScene(glitch::collada::CColladaDatabase::Self *self)
{
  return *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32) + 212;
}


// ============================================================================
// Address:   0xda8db0 (size: 33 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase19getStreamingCommandEi
// Demangled: glitch::collada::CColladaDatabase::getStreamingCommand(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getStreamingCommand(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 208) + v2 + 32 * a2 + 208;
}


// ============================================================================
// Address:   0xda8de0 (size: 27 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase12getAnimationEi
// Demangled: glitch::collada::CColladaDatabase::getAnimation(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getAnimation(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 44) + v2 + 32 * a2 + 44;
}


// ============================================================================
// Address:   0xda8e00 (size: 357 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase12getAnimationEPKcNS0_8SChannel4TypeEPKNS4_9SReservedE
// Demangled: glitch::collada::CColladaDatabase::getAnimation(char const*,glitch::collada::SChannel::Type,glitch::collada::SChannel::SReserved const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getAnimation(
        glitch::collada::CColladaDatabase::Self *a1,
        char *s2,
        unsigned int a3,
        const char **a4)
{
  int v4;
  int Animation;
  int v6;
  const char **v7;
  int v9;
  int v10;

  v10 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 16) + 32) + 40);
  if ( v10 > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      Animation = glitch::collada::CColladaDatabase::getAnimation(a1, v4);
      v6 = *(uint32_t *)(Animation + 16);
      v7 = (const char **)(Animation + v6 + 16);
      if ( a3 == 9 )
        goto LABEL_22;
      if ( a3 <= 9 )
      {
        if ( a3 == 0 )
          goto LABEL_6;
        if ( a3 <= 4 )
        {
          if ( (unsigned int)(*(uint32_t *)(Animation + v6 + 20) - 1) > 3 )
            goto LABEL_7;
          goto LABEL_14;
        }
        if ( a3 != 5 )
          goto LABEL_6;
LABEL_22:
        v9 = *(uint32_t *)(Animation + v6 + 20);
        if ( v9 == 5 || v9 == 9 )
        {
LABEL_14:
          if ( strcmp(*v7, s2) == 0 )
            return Animation;
        }
LABEL_7:
        if ( ++v4 == v10 )
          return 0;
      }
      else
      {
        if ( a3 != 109 )
        {
          if ( a3 >= 0x6D && a3 <= 0x72 )
          {
            if ( (unsigned int)(*(uint32_t *)(Animation + v6 + 20) - 110) > 4 )
              goto LABEL_7;
            goto LABEL_14;
          }
LABEL_6:
          if ( *(uint32_t *)(Animation + v6 + 20) != a3 || *(uint8_t *)(Animation + v6 + 24) != *(uint8_t *)a4 )
            goto LABEL_7;
          goto LABEL_14;
        }
        if ( *(uint32_t *)(Animation + v6 + 20) != 109 )
          goto LABEL_7;
        if ( strcmp(*(const char **)(Animation + v6 + 24), *a4) == 0 )
          goto LABEL_14;
        if ( ++v4 == v10 )
          return 0;
      }
    }
  }
  return 0;
}


// ============================================================================
// Address:   0xda8f70 (size: 64 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase21getBlendableAnimationEPKNS0_8SChannelE
// Demangled: glitch::collada::CColladaDatabase::getBlendableAnimation(glitch::collada::SChannel const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getBlendableAnimation(glitch::collada::CColladaDatabase::Self *a1, int a2)
{
  int result;

  result = 0;
  if ( a2 != 0 )
    return glitch::collada::CColladaDatabase::getAnimation(
             a1,
             *(char **)a2,
             *(uint32_t *)(a2 + 4),
             (const char **)(a2 + 8));
  return result;
}


// ============================================================================
// Address:   0xda8fb0 (size: 55 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase21getBlendableAnimationEPKNS0_10SAnimationE
// Demangled: glitch::collada::CColladaDatabase::getBlendableAnimation(glitch::collada::SAnimation const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getBlendableAnimation_ead8fb0(glitch::collada::CColladaDatabase::Self *a1, int a2)
{
  int result;

  result = 0;
  if ( a2 != 0 )
    return glitch::collada::CColladaDatabase::getBlendableAnimation(a1, a2 + *(uint32_t *)(a2 + 16) + 16);
  return result;
}


// ============================================================================
// Address:   0xda8ff0 (size: 165 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase12getAnimationEPKcNS0_8SChannel4TypeES3_
// Demangled: glitch::collada::CColladaDatabase::getAnimation(char const*,glitch::collada::SChannel::Type,char const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getAnimation(
        glitch::collada::CColladaDatabase::Self *a1,
        char *a2,
        int a3,
        char *s2)
{
  int Animation;
  int v5;
  int v6;
  const char **v7;
  int v9;

  Animation = 0;
  v9 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 16) + 32) + 40);
  if ( v9 > 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      Animation = glitch::collada::CColladaDatabase::getAnimation(a1, v5);
      v6 = *(uint32_t *)(Animation + 16);
      v7 = (const char **)(Animation + v6 + 16);
      if ( *(uint32_t *)(Animation + v6 + 20) == a3
        && strcasecmp(*(const char **)(Animation + v6 + 24), s2) == 0
        && strcmp(*v7, a2) == 0 )
      {
        break;
      }
      if ( ++v5 == v9 )
        return 0;
    }
  }
  return Animation;
}


// ============================================================================
// Address:   0xda90a0 (size: 27 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase16getAnimationClipEi
// Demangled: glitch::collada::CColladaDatabase::getAnimationClip(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getAnimationClip(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 64) + v2 + 16 * a2 + 64;
}


// ============================================================================
// Address:   0xda90c0 (size: 27 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20getArticulatedSystemEi
// Demangled: glitch::collada::CColladaDatabase::getArticulatedSystem(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getArticulatedSystem(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 80) + v2 + 16 * a2 + 80;
}


// ============================================================================
// Address:   0xda90e0 (size: 27 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase18getKinematicsModelEi
// Demangled: glitch::collada::CColladaDatabase::getKinematicsModel(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getKinematicsModel(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 96) + v2 + 16 * a2 + 96;
}


// ============================================================================
// Address:   0xda9100 (size: 25 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase9getCameraEi
// Demangled: glitch::collada::CColladaDatabase::getCamera(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getCamera(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 88) + v2 + 52 * a2 + 88;
}


// ============================================================================
// Address:   0xda9120 (size: 30 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase8getLightEi
// Demangled: glitch::collada::CColladaDatabase::getLight(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getLight(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 104) + v2 + 48 * a2 + 104;
}


// ============================================================================
// Address:   0xda9140 (size: 30 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase8getImageEi
// Demangled: glitch::collada::CColladaDatabase::getImage(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getImage(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return v2 + *(uint32_t *)(v2 + 112) + 112 + 12 * a2;
}


// ============================================================================
// Address:   0xda9160 (size: 28 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase9getEffectEi
// Demangled: glitch::collada::CColladaDatabase::getEffect(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getEffect(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 120) + v2 + 212 * a2 + 120;
}


// ============================================================================
// Address:   0xda9180 (size: 36 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase11getMaterialEi
// Demangled: glitch::collada::CColladaDatabase::getMaterial(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getMaterial(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return v2 + *(uint32_t *)(v2 + 128) + 128 + 36 * a2;
}


// ============================================================================
// Address:   0xda91b0 (size: 33 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase11getGeometryEi
// Demangled: glitch::collada::CColladaDatabase::getGeometry(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getGeometry(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 140) + v2 + 16 * a2 + 140;
}


// ============================================================================
// Address:   0xda91e0 (size: 36 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase13getControllerEi
// Demangled: glitch::collada::CColladaDatabase::getController(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getController(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return v2 + *(uint32_t *)(v2 + 152) + 152 + 12 * a2;
}


// ============================================================================
// Address:   0xda9210 (size: 33 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase8getForceEi
// Demangled: glitch::collada::CColladaDatabase::getForce(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getForce(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 168) + v2 + 16 * a2 + 168;
}


// ============================================================================
// Address:   0xda9240 (size: 25 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase19getAnimationPackageEi
// Demangled: glitch::collada::CColladaDatabase::getAnimationPackage(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getAnimationPackage(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 72) + v2 + 44 * a2 + 72;
}


// ============================================================================
// Address:   0xda9260 (size: 125 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14getGNPSEmitterEPKc
// Demangled: glitch::collada::CColladaDatabase::getGNPSEmitter(char const*)const
// ============================================================================
const char **glitch::collada::CColladaDatabase::getGNPSEmitter(
        glitch::collada::CColladaDatabase::Self *self,
        char *s2)
{
  const char **i;
  int v3;
  int v4;
  int v5;

  i = nullptr;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  v4 = *(uint32_t *)(v3 + 156);
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = (const char **)(v3 + *(uint32_t *)(v3 + 160) + 160); strcmp(*i, s2) != 0; i += 94 )
    {
      if ( ++v5 == v4 )
        return nullptr;
    }
  }
  return i;
}


// ============================================================================
// Address:   0xda92e0 (size: 34 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14getGNPSEmitterEi
// Demangled: glitch::collada::CColladaDatabase::getGNPSEmitter(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getGNPSEmitter(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return *(uint32_t *)(v2 + 160) + v2 + 376 * a2 + 160;
}


// ============================================================================
// Address:   0xda9310 (size: 36 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase10getCoronasEi
// Demangled: glitch::collada::CColladaDatabase::getCoronas(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getCoronas(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return v2 + *(uint32_t *)(v2 + 176) + 176 + 36 * a2;
}


// ============================================================================
// Address:   0xda9340 (size: 33 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase11getExternalEi
// Demangled: glitch::collada::CColladaDatabase::getExternal(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getExternal(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return v2 + *(uint32_t *)(v2 + 192) + 192 + 4 * a2;
}


// ============================================================================
// Address:   0xda9370 (size: 33 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase18getExternalBindingEi
// Demangled: glitch::collada::CColladaDatabase::getExternalBinding(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getExternalBinding(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  return v2 + *(uint32_t *)(v2 + 200) + 200 + 8 * a2;
}


// ============================================================================
// Address:   0xda93a0 (size: 104 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase25getExternalLightSceneNodeERKN5boost13intrusive_ptrIKNS_5video9CMaterialEEEtjPKc
// Demangled: glitch::collada::CColladaDatabase::getExternalLightSceneNode(boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned short,unsigned int,char const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getExternalLightSceneNode(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 224))(a1);
  return a1;
}


// ============================================================================
// Address:   0xda9410 (size: 104 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase25getExternalLightSceneNodeERKN5boost13intrusive_ptrIKNS_5video17CMaterialRendererEEEtjPKc
// Demangled: glitch::collada::CColladaDatabase::getExternalLightSceneNode(boost::intrusive_ptr<glitch::video::CMaterialRenderer const> const&,unsigned short,unsigned int,char const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getExternalLightSceneNode_ead9410(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 228))(a1);
  return a1;
}


// ============================================================================
// Address:   0xda9480 (size: 45 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14getVisualSceneEi
// Demangled: glitch::collada::CColladaDatabase::getVisualScene(int)const
// ============================================================================
int glitch::collada::CColladaDatabase::getVisualScene(glitch::collada::CColladaDatabase::Self *self, int a2)
{
  int v2;
  int result;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32);
  result = 0;
  if ( *(int *)(v2 + 180) > 0 )
    return *(uint32_t *)(v2 + 184) + v2 + 16 * a2 + 184;
  return result;
}


// ============================================================================
// Address:   0xda94b0 (size: 138 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase8getDummyEPKc
// Demangled: glitch::collada::CColladaDatabase::getDummy(char const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getDummy(glitch::collada::CColladaDatabase::Self *self, char *a2)
{
  int VisualScene;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  VisualScene = glitch::collada::CColladaDatabase::getVisualScene(self, 0);
  v3 = VisualScene;
  if ( VisualScene == 0 )
    return 0;
  v9 = VisualScene + 8;
  v4 = *(uint32_t *)(VisualScene + 8);
  result = 0;
  v8 = v4;
  if ( v4 > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      result = glitch::collada::CColladaDatabase::getDummy(
                 (int)(uintptr_t)self,
                 a2,
                 (uint32_t *)(v6 + v9 + *(uint32_t *)(v3 + 12) + 4));
      if ( result != 0 )
        break;
      ++v7;
      v6 += 80;
    }
    while ( v7 != v8 );
  }
  return result;
}


// ============================================================================
// Address:   0xda9540 (size: 138 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase7getNodeEPKc
// Demangled: glitch::collada::CColladaDatabase::getNode(char const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getNode(glitch::collada::CColladaDatabase::Self *self, char *a2)
{
  int VisualScene;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  VisualScene = glitch::collada::CColladaDatabase::getVisualScene(self, 0);
  v3 = VisualScene;
  if ( VisualScene == 0 )
    return 0;
  v9 = VisualScene + 8;
  v4 = *(uint32_t *)(VisualScene + 8);
  result = 0;
  v8 = v4;
  if ( v4 > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      result = glitch::collada::CColladaDatabase::getNode((int)(uintptr_t)self, a2, v6 + v9 + *(uint32_t *)(v3 + 12) + 4);
      if ( result != 0 )
        break;
      ++v7;
      v6 += 80;
    }
    while ( v7 != v8 );
  }
  return result;
}


// ============================================================================
// Address:   0xda95d0 (size: 1106 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15getDefaultValueEPKcNS0_8SChannel4TypeEPPvPKNS4_9SReservedE
// Demangled: glitch::collada::CColladaDatabase::getDefaultValue(char const*,glitch::collada::SChannel::Type,void **,glitch::collada::SChannel::SReserved const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::getDefaultValue(
        glitch::collada::CColladaDatabase::Self *a1,
        char *s2,
        int a3,
        int *a4,
        char **a5)
{
  int *v5;
  const char **Camera;
  const char **Light;
  const char **v9;
  int Controller;
  int v11;
  int v12;
  int v13;
  const char **Node;
  const char **Material;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char *s1;
  int v25;
  int v26;

  v5 = a4;
  switch ( a3 )
  {
    case 0:
      glitch::collada::CColladaDatabase::getNode(a1, s2);
      goto LABEL_2;
    case 1:
    case 2:
    case 3:
    case 4:
      Node = (const char **)glitch::collada::CColladaDatabase::getNode(a1, s2);
      if ( Node != nullptr )
        goto LABEL_15;
      if ( strcmp(s2, glitch::collada::GlitchMotionNodeUID) != 0 )
        goto LABEL_2;
      if ( byte_20E06B0 == 0 && _cxa_guard_acquire((__guard *)&byte_20E06B0) != 0 )
      {
        dword_20E06B8 = 0;
        dword_20E06BC = 0;
        dword_20E06C0 = 0;
        _cxa_guard_release((__guard *)&byte_20E06B0);
      }
      *a4 = (int)(uintptr_t)&dword_20E06B8;
      return 1;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      v21 = glitch::collada::CColladaDatabase::getNode(a1, s2);
      if ( v21 != 0 )
      {
        *a4 = v21 + 24;
        return 1;
      }
      if ( strcmp(s2, glitch::collada::GlitchMotionNodeUID) != 0 )
        goto LABEL_2;
      if ( byte_20E06D0 == 0 && _cxa_guard_acquire((__guard *)&byte_20E06D0) != 0 )
      {
        dword_20E06D8 = 0;
        dword_20E06DC = 0;
        dword_20E06E0 = 0;
        dword_20E06E4 = 1065353216;
        _cxa_guard_release((__guard *)&byte_20E06D0);
      }
      *a4 = (int)(uintptr_t)&dword_20E06D8;
      return 1;
    case 10:
    case 11:
    case 12:
    case 13:
      v22 = glitch::collada::CColladaDatabase::getNode(a1, s2);
      if ( v22 != 0 )
      {
        *a4 = v22 + 40;
        return 1;
      }
      if ( strcmp(s2, glitch::collada::GlitchMotionNodeUID) != 0 )
        goto LABEL_2;
      if ( byte_20E06F0 == 0 && _cxa_guard_acquire((__guard *)&byte_20E06F0) != 0 )
      {
        dword_20E06F8 = 0;
        dword_20E06FC = 0;
        dword_20E0700 = 0;
        _cxa_guard_release((__guard *)&byte_20E06F0);
      }
      *a4 = (int)(uintptr_t)&dword_20E06F8;
      return 1;
    case 14:
    case 15:
      Camera = glitch::collada::CColladaDatabase::getCamera(a1, s2);
      if ( Camera == nullptr )
        goto LABEL_2;
      *a4 = (int)(uintptr_t)(Camera + 2);
      return 1;
    case 16:
      Light = glitch::collada::CColladaDatabase::getCamera(a1, s2);
      if ( Light != nullptr )
        goto LABEL_7;
      goto LABEL_2;
    case 17:
      v9 = glitch::collada::CColladaDatabase::getCamera(a1, s2);
      if ( v9 == nullptr )
        goto LABEL_2;
      *a4 = (int)(uintptr_t)(v9 + 5);
      return 1;
    case 18:
      Controller = glitch::collada::CColladaDatabase::getController(a1, s2);
      if ( Controller == 0 )
        goto LABEL_2;
      v11 = 0;
      v12 = *(uint32_t *)(Controller + 8);
      v13 = Controller + v12 + 8;
      if ( v12 != 0 )
        v11 = v13;
      *a4 = v11 + *(uint32_t *)(v11 + 28) + 28 + 4 * *(uint8_t *)a5;
      return 1;
    case 19:
      Node = glitch::collada::CColladaDatabase::getLight(a1, s2);
      if ( Node == nullptr )
        goto LABEL_2;
LABEL_15:
      *a4 = (int)(uintptr_t)(Node + 3);
      return 1;
    case 20:
      Light = glitch::collada::CColladaDatabase::getLight(a1, s2);
      if ( Light == nullptr )
        goto LABEL_2;
LABEL_7:
      *a4 = (int)(uintptr_t)(Light + 4);
      return 1;
    case 24:
      v23 = glitch::collada::CColladaDatabase::getNode(a1, s2);
      if ( v23 == 0 )
        goto LABEL_2;
      *a4 = v23 + 52;
      return 1;
    case 109:
      Material = glitch::collada::CColladaDatabase::getMaterial(a1, s2);
      if ( Material == nullptr )
      {
        if ( *(uint32_t *)a1 != 0 )
          Material = *(const char ***)(*(uint32_t *)a1 + 12);
        glitch::os::Printer::logf(2, (int)(uintptr_t)"database %s: material \"%s\" not found", Material, s2);
        goto LABEL_2;
      }
      v25 = (int)(uintptr_t)Material[4];
      if ( v25 <= 0 )
        goto LABEL_2;
      v16 = 0;
      v17 = 0;
      s1 = *a5;
      v26 = (int)(uintptr_t)&Material[5][(uint32_t)(uintptr_t)Material + 20];
      while ( 1 )
      {
        v18 = v26 + v16;
        v19 = strcmp(s1, *(const char **)(v26 + v16));
        if ( v19 == 0 )
          break;
        ++v17;
        v16 += 24;
        if ( v17 == v25 )
        {
          v5 = a4;
LABEL_2:
          *v5 = 0;
          return 0;
        }
      }
      v20 = *(uint32_t *)(v18 + 20);
      if ( v20 != 0 )
        v19 = v18 + v20 + 20;
      *a4 = v19;
      return 1;
    default:
      goto LABEL_2;
  }
}


// ============================================================================
// Address:   0xda9a30 (size: 66 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15getDefaultValueEPKNS0_8SChannelEPPv
// Demangled: glitch::collada::CColladaDatabase::getDefaultValue(glitch::collada::SChannel const*,void **)const
// ============================================================================
int glitch::collada::CColladaDatabase::getDefaultValue(glitch::collada::CColladaDatabase::Self *a1, int a2, int *a3)
{
  return glitch::collada::CColladaDatabase::getDefaultValue(
           a1,
           *(char **)a2,
           *(uint32_t *)(a2 + 4),
           a3,
           (char **)(a2 + 8));
}


// ============================================================================
// Address:   0xda9a80 (size: 57 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15getDefaultValueEPKNS0_10SAnimationEPPv
// Demangled: glitch::collada::CColladaDatabase::getDefaultValue(glitch::collada::SAnimation const*,void **)const
// ============================================================================
int glitch::collada::CColladaDatabase::getDefaultValue_ead9a80(glitch::collada::CColladaDatabase::Self *a1, int a2, int *a3)
{
  return glitch::collada::CColladaDatabase::getDefaultValue(a1, a2 + *(uint32_t *)(a2 + 16) + 16, a3);
}


// ============================================================================
// Address:   0xda9ac0 (size: 154 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15constructEffectEPNS_5video12IVideoDriverEPNS0_7SEffectERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructEffect(glitch::video::IVideoDriver *,glitch::collada::SEffect *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
int glitch::collada::CColladaDatabase::constructEffect(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 52))(a1);
  return a1;
}


// ============================================================================
// Address:   0xda9b60 (size: 108 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15constructEffectEPNS_5video12IVideoDriverEiRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructEffect(glitch::video::IVideoDriver *,int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
int glitch::collada::CColladaDatabase::constructEffect(
        int a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3,
        int a4)
{
  glitch::collada::CColladaDatabase::getEffect(a2, a4);
  glitch::collada::CColladaDatabase::constructEffect(a1, (int)(uintptr_t)a2);
  return a1;
}


// ============================================================================
// Address:   0xda9bd0 (size: 171 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15constructEffectEPNS_5video12IVideoDriverEPKcRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructEffect(glitch::video::IVideoDriver *,char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
int glitch::collada::CColladaDatabase::constructEffect(
        int a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3,
        char *a4)
{
  int v5;

  if ( glitch::collada::CColladaDatabase::getEffect(a2, a4) == nullptr )
  {
    v5 = 0;
    if ( *(uint32_t *)a2 != 0 )
      v5 = *(uint32_t *)(*(uint32_t *)a2 + 12);
    glitch::os::Printer::logf(3, (int)(uintptr_t)"Effect \"%s\" not found in databease \"%s\", using pink wireframe.", a4, v5);
  }
  glitch::collada::CColladaDatabase::constructEffect(a1, (int)(uintptr_t)a2);
  return a1;
}


// ============================================================================
// Address:   0xda9c80 (size: 744 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase17constructMaterialEPNS_5video12IVideoDriverEPNS0_9SMaterialERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructMaterial(glitch::video::IVideoDriver *,glitch::collada::SMaterial *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::video::Self **glitch::collada::CColladaDatabase::constructMaterial(
        glitch::video::Self **a1,
        uint32_t **a2,
        int a3,
        int a4)
{
  int v4;
  const char *v5;
  const char *v6;
  char *v7;
  int v8;
  int v9;
  volatile int32_t *v10;
  bool v11;
  int v12;
  char *v13;
  int v15;
  typedef int _g4_t_v16;
  typedef glitch::video::Self **_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef void (*_g4_t_v20)(int *, int, char **);
  typedef char _g4_t_v21;
  typedef uint32_t **_g4_t_v22;
  typedef glitch::video::Self **_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25[4];
  typedef glitch::video::Self *_g4_t_v26[3];
  typedef char *_g4_t_v27[7];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v18)) > _g4_s2 ? (32u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v19)) > _g4_s3 ? (36u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v20)) > _g4_s4 ? (48u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v22)) > _g4_s6 ? (52u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v23)) > _g4_s7 ? (56u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v24)) > _g4_s8 ? (60u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v25)) > _g4_s9 ? (76u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v26)) > _g4_s10 ? (92u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v27)) > _g4_s11 ? (104u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);

  v27[3] = (char *)&a1;
  v22 = a2;
  v23 = a1;
  if ( a4 != 0 )
  {
    v4 = *(uint32_t *)(*(uint32_t *)(a3 + 444) + 32);
    v5 = (const char *)(*(int (**)(int, int))(*(uint32_t *)v4 + 48))(v4, v16);
    sub_D8D940(&v24, v5);
    v6 = nullptr;
    v20 = *(void (**)(int *, int, char **))(*(uint32_t *)v4 + 60);
    if ( *v22 != nullptr )
      v6 = (const char *)(*v22)[3];
    sub_D8D940(v27, v6);
    v20(v25, v4, v27);
    v7 = v27[0] - 12;
    if ( (int *)v27[0] - 3 != (int *)(&dword_20D3E6C)
      && __sync_fetch_and_add((volatile int32_t *)v27[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr((int)(uintptr_t)v7);
    }
    v8 = v25[0];
    v9 = *(uint32_t *)(v25[0] - 12);
    if ( v9 != 0 )
    {
      if ( *(int *)(v25[0] - 4) >= 0 && (int *)(v25[0] - 12) != (int *)(&dword_20D3E6C) )
      {
        if ( *(uint32_t *)(v25[0] - 4) != 0 )
        {
          v19 = *(uint32_t *)(v25[0] - 12);
          sub_D8DAA0(v25, 0, 0);
          v8 = v25[0];
          v9 = v19;
        }
        *(uint32_t *)(v8 - 4) = -1;
        v8 = v25[0];
      }
      if ( *(uint8_t *)(v8 + v9 - 1) != 92 )
      {
        v15 = *(uint32_t *)(v8 - 4);
        v18 = *(uint32_t *)(v8 - 12) - 1;
        if ( v15 >= 0 && (int *)(v8 - 12) != (int *)(&dword_20D3E6C) )
        {
          if ( v15 != 0 )
          {
            sub_D8DAA0(v25, 0, 0);
            v8 = v25[0];
          }
          *(uint32_t *)(v8 - 4) = -1;
          v8 = v25[0];
        }
        if ( *(uint8_t *)(v8 + v18) != 47 )
        {
          if ( *(uint32_t *)(v8 - 12) == 1073741820 )
            sub_1900180("basic_string::append");
          sub_D8D710((unsigned int *)v25, "/", 1u);
          v8 = v25[0];
        }
      }
      v21 = (*(int (**)(int, int, int, int))(*(uint32_t *)v4 + 32))(v4, v8, 1, 1);
      v17 = v26;
      (*(void (**)(void))(*v22[1] + 56))();
      if ( v21 != 0 )
      {
        v17 = (glitch::video::Self **)v25[0];
        (*(void (**)(int))(*(uint32_t *)v4 + 44))(v4);
      }
    }
    else
    {
      v17 = v26;
      (*(void (**)(void))(*v22[1] + 56))();
    }
    v10 = (volatile int32_t *)v26[0];
    v11 = v26[0] == nullptr;
    *v23 = v26[0];
    if ( !v11 )
    {
      sub_8B1B00(v10);
      if ( v26[0] != nullptr )
        glitch::video::intrusive_ptr_release(v26[0], (const glitch::video::CMaterial::Self *)v17);
    }
    v12 = v25[0] - 12;
    if ( (int *)(v25[0] - 12) != (int *)(&dword_20D3E6C)
      && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr(v12);
    }
    v13 = v24 - 12;
    if ( v24 - 12 != (char *)&dword_20D3E6C && __sync_fetch_and_add((volatile int32_t *)v24 - 1, 0xFFFFFFFF) <= 0 )
      gll_operator_delete_arr((int)(uintptr_t)v13);
  }
  else
  {
    *a1 = nullptr;
  }
  return v23;
}


// ============================================================================
// Address:   0xda9f70 (size: 108 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase17constructMaterialEPNS_5video12IVideoDriverEPKcRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructMaterial(glitch::video::IVideoDriver *,char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::video::Self **glitch::collada::CColladaDatabase::constructMaterial(
        glitch::video::Self **a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3,
        char *a4)
{
  const char **Material;

  Material = glitch::collada::CColladaDatabase::getMaterial(a2, a4);
  glitch::collada::CColladaDatabase::constructMaterial(a1, (uint32_t **)a2, a3, (int)(uintptr_t)Material);
  return a1;
}


// ============================================================================
// Address:   0xda9fe0 (size: 108 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase17constructMaterialEPNS_5video12IVideoDriverEiRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructMaterial(glitch::video::IVideoDriver *,int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::video::Self **glitch::collada::CColladaDatabase::constructMaterial(
        glitch::video::Self **a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3,
        int a4)
{
  int Material;

  Material = glitch::collada::CColladaDatabase::getMaterial(a2, a4);
  glitch::collada::CColladaDatabase::constructMaterial(a1, (uint32_t **)a2, a3, Material);
  return a1;
}


// ============================================================================
// Address:   0xdaa050 (size: 192 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructLightEPNS0_6SLightERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructLight(glitch::collada::SLight *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::scene::CLightSceneNode::Self **glitch::collada::CColladaDatabase::constructLight(
        glitch::scene::CLightSceneNode::Self **a1,
        int a2,
        int a3,
        glitch::collada::CRootSceneNode::Self **a4)
{
  glitch::scene::CLightSceneNode::Self *v4;
  bool v5;
  typedef glitch::scene::CLightSceneNode::Self *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);

  if ( a3 != 0 )
  {
    (*(void (**)(glitch::scene::CLightSceneNode::Self **))(**(uint32_t **)(a2 + 4) + 16))(&v7);
    glitch::collada::CRootSceneNode::addLight(*a4, v7);
    v4 = v7;
    v5 = v7 == nullptr;
    *a1 = v7;
    if ( !v5 )
    {
      sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
      if ( v7 != nullptr )
        sub_5459C0((volatile int32_t *)((char *)v7 + *(uint32_t *)(*(uint32_t *)v7 - 16)));
    }
  }
  else
  {
    *a1 = nullptr;
  }
  return a1;
}


// ============================================================================
// Address:   0xdaa110 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructLightEiRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructLight(int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::scene::CLightSceneNode::Self **glitch::collada::CColladaDatabase::constructLight(
        glitch::scene::CLightSceneNode::Self **a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3,
        glitch::collada::CRootSceneNode::Self **a4)
{
  int Light;

  Light = glitch::collada::CColladaDatabase::getLight(a2, a3);
  glitch::collada::CColladaDatabase::constructLight(a1, (int)(uintptr_t)a2, Light, a4);
  return a1;
}


// ============================================================================
// Address:   0xdaa180 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructLightEPKcRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructLight(char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::scene::CLightSceneNode::Self **glitch::collada::CColladaDatabase::constructLight(
        glitch::scene::CLightSceneNode::Self **a1,
        glitch::collada::CColladaDatabase::Self *a2,
        char *a3,
        glitch::collada::CRootSceneNode::Self **a4)
{
  const char **Light;

  Light = glitch::collada::CColladaDatabase::getLight(a2, a3);
  glitch::collada::CColladaDatabase::constructLight(a1, (int)(uintptr_t)a2, (int)(uintptr_t)Light, a4);
  return a1;
}


// ============================================================================
// Address:   0xdaa1f0 (size: 192 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15constructCameraEPNS0_7SCameraERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructCamera(glitch::collada::SCamera *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::collada::CCameraSceneNode **glitch::collada::CColladaDatabase::constructCamera(
        glitch::collada::CCameraSceneNode **a1,
        int a2,
        int a3,
        glitch::collada::CRootSceneNode::Self **a4)
{
  glitch::collada::CCameraSceneNode *v4;
  bool v5;
  typedef glitch::collada::CCameraSceneNode *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);

  if ( a3 != 0 )
  {
    (*(void (**)(glitch::collada::CCameraSceneNode **))(**(uint32_t **)(a2 + 4) + 144))(&v7);
    glitch::collada::CRootSceneNode::addCamera(*a4, v7);
    v4 = v7;
    v5 = v7 == nullptr;
    *a1 = v7;
    if ( !v5 )
    {
      sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
      if ( v7 != nullptr )
        sub_5459C0((volatile int32_t *)((char *)v7 + *(uint32_t *)(*(uint32_t *)v7 - 16)));
    }
  }
  else
  {
    *a1 = nullptr;
  }
  return a1;
}


// ============================================================================
// Address:   0xdaa2b0 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15constructCameraEiRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructCamera(int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::collada::CCameraSceneNode **glitch::collada::CColladaDatabase::constructCamera(
        glitch::collada::CCameraSceneNode **a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3,
        glitch::collada::CRootSceneNode::Self **a4)
{
  int Camera;

  Camera = glitch::collada::CColladaDatabase::getCamera(a2, a3);
  glitch::collada::CColladaDatabase::constructCamera(a1, (int)(uintptr_t)a2, Camera, a4);
  return a1;
}


// ============================================================================
// Address:   0xdaa320 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15constructCameraEPKcRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructCamera(char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::collada::CCameraSceneNode **glitch::collada::CColladaDatabase::constructCamera(
        glitch::collada::CCameraSceneNode **a1,
        glitch::collada::CColladaDatabase::Self *a2,
        char *a3,
        glitch::collada::CRootSceneNode::Self **a4)
{
  const char **Camera;

  Camera = glitch::collada::CColladaDatabase::getCamera(a2, a3);
  glitch::collada::CColladaDatabase::constructCamera(a1, (int)(uintptr_t)a2, (int)(uintptr_t)Camera, a4);
  return a1;
}


// ============================================================================
// Address:   0xdaa390 (size: 13 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase15constructCameraEPNS0_15SInstanceCameraERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructCamera(glitch::collada::SInstanceCamera *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructCamera(uint32_t *a1)
{
  *a1 = 0;
  return a1;
}


// ============================================================================
// Address:   0xdaa3a0 (size: 192 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase17constructGeometryEPNS_5video12IVideoDriverEPNS0_9SGeometryE
// Demangled: glitch::collada::CColladaDatabase::constructGeometry(glitch::video::IVideoDriver *,glitch::collada::SGeometry *)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructGeometry(uint32_t *a1, int a2, int a3, int a4)
{
  uint32_t *result;
  volatile int32_t *v5;
  bool v6;
  typedef volatile int32_t *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);

  result = a1;
  if ( a4 != 0 && *(uint32_t *)(a4 + 8) == 0 )
  {
    (*(void (**)(volatile int32_t **))(**(uint32_t **)(a2 + 4) + 128))(&v7);
    result = a1;
    v5 = v7;
    v6 = v7 == nullptr;
    *a1 = (uint32_t)(uintptr_t)(v7);
    if ( !v6 )
    {
      sub_8B1B00(v5 + 1);
      result = a1;
      if ( v7 != nullptr )
      {
        sub_5459C0(v7);
        return a1;
      }
    }
  }
  else
  {
    *a1 = 0;
  }
  return result;
}


// ============================================================================
// Address:   0xdaa460 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase17constructGeometryEPNS_5video12IVideoDriverEi
// Demangled: glitch::collada::CColladaDatabase::constructGeometry(glitch::video::IVideoDriver *,int)const
// ============================================================================
glitch::collada::CColladaDatabase::Self *glitch::collada::CColladaDatabase::constructGeometry(
        glitch::collada::CColladaDatabase::Self *self,
        glitch::video::IVideoDriver::Self *a2,
        int a3,
        int a4)
{
  int Geometry;

  Geometry = glitch::collada::CColladaDatabase::getGeometry(a2, a4);
  glitch::collada::CColladaDatabase::constructGeometry((uint32_t *)self, (int)(uintptr_t)a2, a3, Geometry);
  return self;
}


// ============================================================================
// Address:   0xdaa4d0 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase17constructGeometryEPNS_5video12IVideoDriverEPKc
// Demangled: glitch::collada::CColladaDatabase::constructGeometry(glitch::video::IVideoDriver *,char const*)const
// ============================================================================
glitch::collada::CColladaDatabase::Self *glitch::collada::CColladaDatabase::constructGeometry(
        glitch::collada::CColladaDatabase::Self *self,
        glitch::video::IVideoDriver::Self *a2,
        const char *a3,
        char *a4)
{
  const char **Geometry;

  Geometry = (const char **)(uintptr_t)(glitch::collada::CColladaDatabase::getGeometry(a2, a4));
  glitch::collada::CColladaDatabase::constructGeometry((uint32_t *)self, (int)(uintptr_t)a2, (int)(uintptr_t)a3, (int)(uintptr_t)Geometry);
  return self;
}


// ============================================================================
// Address:   0xdaa540 (size: 80 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase17constructAnimatorEv
// Demangled: glitch::collada::CColladaDatabase::constructAnimator(void)const
// ============================================================================
glitch::collada::CColladaDatabase::Self *glitch::collada::CColladaDatabase::constructAnimator(
        glitch::collada::CColladaDatabase::Self *self,
        uint32_t **a2)
{
  int v2;

  v2 = *(uint32_t *)((*a2)[4] + 32);
  if ( *(uint32_t *)(v2 + 40) != 0 || *(uint32_t *)(v2 + 48) != 0 )
    (*(void (**)(glitch::collada::CColladaDatabase::Self *))(*a2[1] + 12))(self);
  else
    *(uint32_t *)self = 0;
  return self;
}


// ============================================================================
// Address:   0xdaa590 (size: 179 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructMorphEPNS_5video12IVideoDriverEPNS0_11SControllerERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructMorph(glitch::video::IVideoDriver *,glitch::collada::SController *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::collada::CMorphingMesh::Self **glitch::collada::CColladaDatabase::constructMorph(
        glitch::collada::CMorphingMesh::Self **a1,
        int a2,
        int a3,
        int a4,
        glitch::collada::CRootSceneNode::Self **a5)
{
  glitch::collada::CMorphingMesh::Self *v5;
  bool v6;
  typedef glitch::collada::CMorphingMesh::Self *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);

  (*(void (**)(glitch::collada::CMorphingMesh::Self **))(**(uint32_t **)(a2 + 4) + 132))(&v8);
  glitch::collada::CRootSceneNode::addMorphingMesh(*a5, v8);
  v5 = v8;
  v6 = v8 == nullptr;
  *a1 = v8;
  if ( !v6 )
  {
    sub_8B1B00((volatile int32_t *)v5 + 1);
    if ( v8 != nullptr )
      sub_5459C0((volatile int32_t *)v8);
  }
  return a1;
}


// ============================================================================
// Address:   0xdaa650 (size: 179 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase13constructSkinEPNS_5video12IVideoDriverEPNS0_11SControllerERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructSkin(glitch::video::IVideoDriver *,glitch::collada::SController *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::collada::CSkinnedMesh::Self **glitch::collada::CColladaDatabase::constructSkin(
        glitch::collada::CSkinnedMesh::Self **a1,
        int a2,
        int a3,
        int a4,
        glitch::collada::CRootSceneNode::Self **a5)
{
  glitch::collada::CSkinnedMesh::Self *v5;
  bool v6;
  typedef glitch::collada::CSkinnedMesh::Self *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);

  (*(void (**)(glitch::collada::CSkinnedMesh::Self **))(**(uint32_t **)(a2 + 4) + 164))(&v8);
  glitch::collada::CRootSceneNode::attachSkin(*a5, v8);
  v5 = v8;
  v6 = v8 == nullptr;
  *a1 = v8;
  if ( !v6 )
  {
    sub_8B1B00((volatile int32_t *)v5 + 1);
    if ( v8 != nullptr )
      sub_5459C0((volatile int32_t *)v8);
  }
  return a1;
}


// ============================================================================
// Address:   0xdaa710 (size: 310 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20constructLodSelectorEPNS0_11SControllerERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructLodSelector(glitch::collada::SController *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::collada::CRootSceneNode::Self *glitch::collada::CColladaDatabase::constructLodSelector(
        glitch::collada::CRootSceneNode::Self *a1,
        int a2,
        int a3,
        const char **a4)
{
  int v4;
  glitch::collada::CRootSceneNode::Self *v5;
  char *v6;
  volatile int32_t *v8;
  volatile int32_t *v9;
  typedef volatile int32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef const char **_g4_t_v12;
  typedef char *_g4_t_v13;
  typedef volatile int32_t *_g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v14[6] = (volatile int32_t *)&a1;
  v4 = a3;
  v5 = a1;
  v11 = a2;
  v12 = a4;
  sub_D8D940(&v13, *(const char **)(a3 + 4));
  glitch::collada::CRootSceneNode::getLodSelector(v5, *v12, *(uint32_t *)(v4 + 4));
  if ( *(uint32_t *)v5 == 0 )
  {
    (*(void (**)(volatile int32_t **))(**(uint32_t **)(v11 + 4) + 168))(v14);
    v8 = v14[0];
    if ( v14[0] != nullptr )
    {
      v10 = v14[0];
      sub_8B1B00(v14[0] + 1);
      v8 = v10;
    }
    v9 = *(volatile int32_t **)v5;
    *(uint32_t *)v5 = (uint32_t)(uintptr_t)(v8);
    if ( v9 != nullptr )
      sub_5459C0(v9);
    if ( v14[0] != nullptr )
      sub_5459C0(v14[0]);
    glitch::collada::CRootSceneNode::addLodSelector((uint32_t *)(*v12), (int *)v5, *(uint32_t *)(v4 + 4));
  }
  v6 = v13 - 12;
  if ( v13 - 12 != (char *)&dword_20D3E6C && __sync_fetch_and_add((volatile int32_t *)v13 - 1, 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr((int)(uintptr_t)v6);
  return v5;
}


// ============================================================================
// Address:   0xdaa850 (size: 158 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20constructModularSkinEPNS_5video12IVideoDriverEPNS0_20SInstanceModularSkinERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructModularSkin(glitch::video::IVideoDriver *,glitch::collada::SInstanceModularSkin *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructModularSkin(uint32_t *a1, int a2)
{
  volatile int32_t *v2;
  bool v3;
  typedef volatile int32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  (*(void (**)(volatile int32_t **))(**(uint32_t **)(a2 + 4) + 176))(&v5);
  v2 = v5;
  v3 = v5 == nullptr;
  *a1 = (uint32_t)(uintptr_t)(v5);
  if ( !v3 )
  {
    sub_8B1B00(v2 + 1);
    if ( v5 != nullptr )
      sub_5459C0(v5);
  }
  return a1;
}


// ============================================================================
// Address:   0xdaa8f0 (size: 213 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase19constructControllerEPNS_5video12IVideoDriverEPNS0_11SControllerERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructController(glitch::video::IVideoDriver *,glitch::collada::SController *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::collada::CMorphingMesh::Self **glitch::collada::CColladaDatabase::constructController(
        glitch::collada::CMorphingMesh::Self **a1,
        int a2,
        int a3,
        uint32_t *a4,
        glitch::collada::CRootSceneNode::Self **a5)
{
  typedef volatile int32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  if ( *a4 == 1 )
  {
    glitch::collada::CColladaDatabase::constructMorph(a1, a2, a3, (int)(uintptr_t)a4, a5);
  }
  else if ( *a4 != 0 )
  {
    if ( *a4 == 3 )
    {
      glitch::collada::CColladaDatabase::constructLodSelector(
        (glitch::collada::CRootSceneNode::Self *)&v6,
        a2,
        (int)(uintptr_t)a4,
        (const char **)a5);
      if ( v6 != nullptr )
        sub_5459C0(v6);
    }
    *a1 = nullptr;
  }
  else
  {
    glitch::collada::CColladaDatabase::constructSkin((glitch::collada::CSkinnedMesh::Self **)a1, a2, a3, (int)(uintptr_t)a4, a5);
  }
  return a1;
}


// ============================================================================
// Address:   0xdaa9d0 (size: 108 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase19constructControllerEPNS_5video12IVideoDriverEiRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructController(glitch::video::IVideoDriver *,int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::collada::CMorphingMesh::Self **glitch::collada::CColladaDatabase::constructController(
        glitch::collada::CMorphingMesh::Self **a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3,
        int a4,
        glitch::collada::CRootSceneNode::Self **a5)
{
  uint32_t *Controller;

  Controller = (uint32_t *)glitch::collada::CColladaDatabase::getController(a2, a4);
  glitch::collada::CColladaDatabase::constructController(a1, (int)(uintptr_t)a2, a3, Controller, a5);
  return a1;
}


// ============================================================================
// Address:   0xdaaa40 (size: 108 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase19constructControllerEPNS_5video12IVideoDriverEPKcRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructController(glitch::video::IVideoDriver *,char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
glitch::collada::CMorphingMesh::Self **glitch::collada::CColladaDatabase::constructController(
        glitch::collada::CMorphingMesh::Self **a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3,
        char *a4,
        glitch::collada::CRootSceneNode::Self **a5)
{
  uint32_t *Controller;

  Controller = (uint32_t *)glitch::collada::CColladaDatabase::getController(a2, a4);
  glitch::collada::CColladaDatabase::constructController(a1, (int)(uintptr_t)a2, a3, Controller, a5);
  return a1;
}


// ============================================================================
// Address:   0xdaaab0 (size: 120 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase16constructCoronasEPNS0_8SCoronasEPNS_5video12IVideoDriverERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructCoronas(glitch::collada::SCoronas *,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructCoronas(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;

  result = a1;
  if ( a3 != 0 )
  {
    (*(void (**)(uint32_t *))(**(uint32_t **)(a2 + 4) + 180))(a1);
    return a1;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}


// ============================================================================
// Address:   0xdaab30 (size: 108 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase16constructCoronasEPKcPNS_5video12IVideoDriverERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructCoronas(char const*,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructCoronas(
        uint32_t *a1,
        glitch::collada::CColladaDatabase::Self *a2,
        char *a3)
{
  const char **Coronas;

  Coronas = glitch::collada::CColladaDatabase::getCoronas(a2, a3);
  glitch::collada::CColladaDatabase::constructCoronas(a1, (int)(uintptr_t)a2, (int)(uintptr_t)Coronas);
  return a1;
}


// ============================================================================
// Address:   0xdaaba0 (size: 183 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase16constructCoronasEPNS0_16SInstanceCoronasEPNS_5video12IVideoDriverERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructCoronas(glitch::collada::SInstanceCoronas *,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
int *glitch::collada::CColladaDatabase::constructCoronas(
        int *a1,
        glitch::collada::CColladaDatabase::Self *a2,
        uint32_t *a3,
        int a4)
{
  int v4;
  int v5;
  int v6;
  char **Material;
  int v9;

  glitch::collada::CColladaDatabase::constructCoronas((uint32_t *)a1, a2, (char *)(a3[1] + 1));
  if ( *a1 != 0 )
  {
    v9 = a3[3];
    if ( v9 > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (int)(uintptr_t)&a3[v4] + a3[4];
        ++v5;
        v4 += 15;
        Material = (char **)glitch::collada::CColladaDatabase::getMaterial(a2, *(uint32_t *)(v6 + 24));
        glitch::collada::CCoronasSceneNode::setMaterial(*a1, Material, a4);
      }
      while ( v5 != v9 );
    }
  }
  return a1;
}


// ============================================================================
// Address:   0xdaac60 (size: 128 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20constructGNPSEmitterEPNS0_12SGNPSEmitterEPNS_5video12IVideoDriverEPNS_3res6vectorINS7_6StringEEERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructGNPSEmitter(glitch::collada::SGNPSEmitter *,glitch::video::IVideoDriver *,glitch::res::vector<glitch::res::String> *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructGNPSEmitter(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;

  result = a1;
  if ( a3 != 0 )
  {
    (*(void (**)(uint32_t *))(**(uint32_t **)(a2 + 4) + 204))(a1);
    return a1;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}


// ============================================================================
// Address:   0xdaace0 (size: 116 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20constructGNPSEmitterEiPNS_5video12IVideoDriverEPNS_3res6vectorINS5_6StringEEERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructGNPSEmitter(int,glitch::video::IVideoDriver *,glitch::res::vector<glitch::res::String> *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructGNPSEmitter(
        uint32_t *a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3)
{
  int GNPSEmitter;

  GNPSEmitter = glitch::collada::CColladaDatabase::getGNPSEmitter(a2, a3);
  glitch::collada::CColladaDatabase::constructGNPSEmitter(a1, (int)(uintptr_t)a2, GNPSEmitter);
  return a1;
}


// ============================================================================
// Address:   0xdaad60 (size: 116 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20constructGNPSEmitterEPKcPNS_5video12IVideoDriverEPNS_3res6vectorINS7_6StringEEERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructGNPSEmitter(char const*,glitch::video::IVideoDriver *,glitch::res::vector<glitch::res::String> *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructGNPSEmitter(
        uint32_t *a1,
        glitch::collada::CColladaDatabase::Self *a2,
        char *a3)
{
  const char **GNPSEmitter;

  GNPSEmitter = glitch::collada::CColladaDatabase::getGNPSEmitter(a2, a3);
  glitch::collada::CColladaDatabase::constructGNPSEmitter(a1, (int)(uintptr_t)a2, (int)(uintptr_t)GNPSEmitter);
  return a1;
}


// ============================================================================
// Address:   0xdaade0 (size: 443 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20constructGNPSEmitterEPNS0_20SInstanceGNPSEmitterEPNS_5video12IVideoDriverERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructGNPSEmitter(glitch::collada::SInstanceGNPSEmitter *,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
int *glitch::collada::CColladaDatabase::constructGNPSEmitter(
        int *a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3,
        int a4,
        uint32_t **a5)
{
  int v5;
  int v6;
  glitch::video::CMaterial::Self *v7;
  bool v8;
  int Material;
  glitch::video::CMaterial::Self *v10;
  int v11;
  glitch::video::CMaterial::Self *v12;
  typedef glitch::video::CMaterial::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef glitch::video::CMaterial::Self *_g4_t_v18;
  typedef glitch::video::CMaterial::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t **_g4_t_v21;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v22;
  typedef int *_g4_t_v23;
  typedef int _g4_t_i;
  typedef glitch::video::CMaterial::Self *_g4_t_v25[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v16)) > _g4_s2 ? (4u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v17)) > _g4_s3 ? (4u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v18)) > _g4_s4 ? (4u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v19)) > _g4_s5 ? (4u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v20)) > _g4_s6 ? (8u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v21)) > _g4_s7 ? (12u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v22)) > _g4_s8 ? (20u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v23)) > _g4_s9 ? (24u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_i)) > _g4_s10 ? (28u + sizeof(_g4_t_i)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v25)) > _g4_s11 ? (32u + sizeof(_g4_t_v25)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);

  v25[6] = (glitch::video::CMaterial::Self *)&a1;
  v5 = a3;
  v22 = a2;
  v23 = a1;
  v21 = a5;
  glitch::collada::CColladaDatabase::constructGNPSEmitter((uint32_t *)a1, a2, (char *)(*(uint32_t *)(a3 + 4) + 1));
  if ( *v23 != 0 )
  {
    v20 = *(uint32_t *)(v5 + 12);
    if ( v20 > 0 )
    {
      v6 = 0;
      for ( i = 0; i != v20; ++i )
      {
        Material = (int)(uintptr_t)(glitch::collada::CColladaDatabase::getMaterial(v22, *(uint32_t *)(*(uint32_t *)(v5 + 16) + v5 + v6 + 24)));
        glitch::collada::CRootSceneNode::addMaterial((volatile int32_t **)v25, *v21, Material);
        v10 = v25[0];
        v11 = *v23;
        if ( v25[0] != nullptr )
        {
          v14 = v25[0];
          v17 = *v23;
          sub_8B1B00((volatile int32_t *)v25[0]);
          v11 = v17;
          v10 = v14;
        }
        v12 = *(glitch::video::CMaterial::Self **)(v11 + 296);
        *(uint32_t *)(v11 + 296) = (uint32_t)(uintptr_t)(v10);
        if ( v12 != nullptr )
        {
          v8 = *(uint32_t *)v12 == 2;
          _mm_mfence();
          if ( v8 )
          {
            v18 = v12;
            glitch::video::CMaterial::removeFromRootSceneNode(v12);
            v12 = v18;
          }
          if ( __sync_fetch_and_add((volatile int32_t *)v12, 0xFFFFFFFF) == 1 )
          {
            v15 = (int)(uintptr_t)v12;
            glitch::video::CMaterial::Destroy(v12);
            gll_operator_delete_arr(v15);
          }
        }
        v7 = v25[0];
        if ( v25[0] != nullptr )
        {
          v8 = *(uint32_t *)v25[0] == 2;
          _mm_mfence();
          if ( v8 )
          {
            v19 = v7;
            glitch::video::CMaterial::removeFromRootSceneNode(v7);
            v7 = v19;
          }
          if ( __sync_fetch_and_add((volatile int32_t *)v7, 0xFFFFFFFF) == 1 )
          {
            v16 = (int)(uintptr_t)v7;
            glitch::video::CMaterial::Destroy(v7);
            gll_operator_delete_arr(v16);
          }
        }
        v6 += 60;
      }
    }
  }
  return v23;
}


// ============================================================================
// Address:   0xdaafa0 (size: 259 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructForceEPNS0_6SForceERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructForce(glitch::collada::SForce *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructForce(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;
  char v4;

  result = a1;
  if ( a3 != 0 )
  {
    v4 = *(uint8_t *)(a3 + 8);
    switch ( v4 )
    {
      case 1:
        (*(void (**)(uint32_t *))(**(uint32_t **)(a2 + 4) + 212))(a1);
        return a1;
      case 0:
        (*(void (**)(uint32_t *))(**(uint32_t **)(a2 + 4) + 208))(a1);
        return a1;
      case 2:
        (*(void (**)(uint32_t *))(**(uint32_t **)(a2 + 4) + 216))(a1);
        return a1;
      case 3:
        (*(void (**)(uint32_t *))(**(uint32_t **)(a2 + 4) + 220))(a1);
        return a1;
      default:
        break;
    }
  }
  *a1 = 0;
  return result;
}


// ============================================================================
// Address:   0xdab0b0 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructForceEiRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructForce(int,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructForce(
        uint32_t *a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3)
{
  int Force;

  Force = glitch::collada::CColladaDatabase::getForce(a2, a3);
  glitch::collada::CColladaDatabase::constructForce(a1, (int)(uintptr_t)a2, Force);
  return a1;
}


// ============================================================================
// Address:   0xdab120 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructForceEPKcRKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructForce(char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructForce(
        uint32_t *a1,
        glitch::collada::CColladaDatabase::Self *a2,
        char *a3)
{
  const char **Force;

  Force = glitch::collada::CColladaDatabase::getForce(a2, a3);
  glitch::collada::CColladaDatabase::constructForce(a1, (int)(uintptr_t)a2, (int)(uintptr_t)Force);
  return a1;
}


// ============================================================================
// Address:   0xdab190 (size: 86 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructForceEPNS0_14SInstanceForceERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CColladaDatabase::constructForce(glitch::collada::SInstanceForce *,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructForce_eadab190(
        uint32_t *a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int a3)
{
  glitch::collada::CColladaDatabase::constructForce(a1, a2, (char *)(*(uint32_t *)(a3 + 4) + 1));
  return a1;
}


// ============================================================================
// Address:   0xdab1f0 (size: 174 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase25constructAnimationPackageEPKc
// Demangled: glitch::collada::CColladaDatabase::constructAnimationPackage(char const*)const
// ============================================================================
volatile int32_t **glitch::collada::CColladaDatabase::constructAnimationPackage(
        volatile int32_t **self,
        char *a2,
        char *a3)
{
  volatile int32_t **v3;
  char *v4;
  char *v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  volatile int32_t *v9[7];

  v9[6] = (volatile int32_t *)&self;
  v3 = self;
  v4 = a2;
  v5 = a3;
  *self = nullptr;
  if ( glitch::collada::CColladaDatabase::getAnimationPackage((glitch::collada::CColladaDatabase::Self *)v4, v5) != nullptr )
  {
    (*(void (**)(volatile int32_t **))(**((uint32_t **)v4 + 1) + 188))(v9);
    v6 = v9[0];
    if ( v9[0] != nullptr )
      sub_8B1B00(v9[0] + 1);
    v7 = *v3;
    *v3 = v6;
    if ( v7 != nullptr )
      sub_5459C0(v7);
    if ( v9[0] != nullptr )
      sub_5459C0(v9[0]);
  }
  return v3;
}


// ============================================================================
// Address:   0xdab2a0 (size: 79 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase21constructAnimatorNodeERKN5boost13intrusive_ptrINS0_13CAnimationSetEEERKNS0_9anim_pack19SAnimationGraphNodeE
// Demangled: glitch::collada::CColladaDatabase::constructAnimatorNode(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&,glitch::collada::anim_pack::SAnimationGraphNode const&)const
// ============================================================================
int glitch::collada::CColladaDatabase::constructAnimatorNode(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 192))(a1);
  return a1;
}


// ============================================================================
// Address:   0xdab2f0 (size: 162 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase21constructAnimationSetEPNS0_9anim_pack17SAnimationPackageE
// Demangled: glitch::collada::CColladaDatabase::constructAnimationSet(glitch::collada::anim_pack::SAnimationPackage *)const
// ============================================================================
volatile int32_t **glitch::collada::CColladaDatabase::constructAnimationSet(
        volatile int32_t **a1,
        int a2,
        int a3)
{
  volatile int32_t **v3;
  int v4;
  int v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  volatile int32_t *v9[7];

  v9[6] = (volatile int32_t *)&a1;
  v3 = a1;
  v4 = a3;
  v5 = a2;
  *a1 = nullptr;
  if ( v4 != 0 )
  {
    (*(void (**)(volatile int32_t **))(**(uint32_t **)(v5 + 4) + 196))(v9);
    v6 = v9[0];
    if ( v9[0] != nullptr )
      sub_8B1B00(v9[0] + 1);
    v7 = *v3;
    *v3 = v6;
    if ( v7 != nullptr )
      sub_5459C0(v7);
    if ( v9[0] != nullptr )
      sub_5459C0(v9[0]);
  }
  return v3;
}


// ============================================================================
// Address:   0xdab3a0 (size: 92 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase21constructAnimationSetEPKc
// Demangled: glitch::collada::CColladaDatabase::constructAnimationSet(char const*)const
// ============================================================================
volatile int32_t **glitch::collada::CColladaDatabase::constructAnimationSet(
        volatile int32_t **self,
        glitch::collada::CColladaDatabase::Self *a2,
        char *a3)
{
  const char **AnimationPackage;

  AnimationPackage = glitch::collada::CColladaDatabase::getAnimationPackage(a2, a3);
  glitch::collada::CColladaDatabase::constructAnimationSet(self, (int)(uintptr_t)a2, (int)(uintptr_t)AnimationPackage);
  return self;
}


// ============================================================================
// Address:   0xdab400 (size: 71 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase17constructIKSolverEPKNS0_18SArticulatedSystemE
// Demangled: glitch::collada::CColladaDatabase::constructIKSolver(glitch::collada::SArticulatedSystem const*)const
// ============================================================================
int glitch::collada::CColladaDatabase::constructIKSolver(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 200))(a1);
  return a1;
}


// ============================================================================
// Address:   0xdab450 (size: 112 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase20constructCommandNodeEPNS0_25SInstanceStreamingCommandEPNS_5video12IVideoDriverE
// Demangled: glitch::collada::CColladaDatabase::constructCommandNode(glitch::collada::SInstanceStreamingCommand *,glitch::video::IVideoDriver *)const
// ============================================================================
int glitch::collada::CColladaDatabase::constructCommandNode(
        int a1,
        glitch::collada::CColladaDatabase::Self *a2,
        int *a3)
{
  glitch::collada::CColladaDatabase::getStreamingCommand(a2, *a3);
  (*(void (**)(int))(**((uint32_t **)a2 + 1) + 184))(a1);
  return a1;
}


// ============================================================================
// Address:   0xdab4c0 (size: 61 bytes)
// Symbol:    _ZN6glitch7collada15COnDemandReaderC1ERKN5boost13intrusive_ptrINS_2io9IReadFileEEE
// Demangled: glitch::collada::COnDemandReader::COnDemandReader(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada15COnDemandReaderC2ERKN5boost13intrusive_ptrINS_2io9IReadFileEEE'
volatile int32_t *glitch::collada::COnDemandReader::COnDemandReader(
        glitch::collada::COnDemandReader::Self *self,
        volatile int32_t **a2)
{
  volatile int32_t *result;
  bool v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207B8F0);
  result = *a2;
  v3 = *a2 == nullptr;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(*a2);
  if ( !v3 )
    return sub_8B1B00(result + 1);
  return result;
}


// ============================================================================
// Address:   0xdab500 (size: 131 bytes)
// Symbol:    _ZN6glitch7collada8CResFile13releaseBufferERN5boost13intrusive_ptrINS_5video7IBufferEEE
// Demangled: glitch::collada::CResFile::releaseBuffer(boost::intrusive_ptr<glitch::video::IBuffer> &)
// ============================================================================
glitch::video::IBuffer::Self *glitch::collada::CResFile::releaseBuffer(int a1, glitch::video::IBuffer::Self **a2)
{
  glitch::video::IBuffer::Self *result;
  bool v3; // cc

  result = nullptr;
  if ( *a2 != nullptr )
  {
    v3 = *((uint32_t *)*a2 + 1) <= 1u;
    _mm_mfence();
    result = *a2;
    if ( !v3 )
    {
      if ( (*((uint8_t *)result + 34) & 4) != 0 )
        glitch::video::IBuffer::reset(result, *((uint32_t *)result + 5), nullptr, true);
      else
        glitch::video::IBuffer::copy(*a2);
      result = *a2;
    }
  }
  *a2 = nullptr;
  if ( result != nullptr )
    return (glitch::video::IBuffer::Self *)sub_5459C0((volatile int32_t *)result);
  return result;
}


// ============================================================================
// Address:   0xdab590 (size: 649 bytes)
// Symbol:    _ZN6glitch7collada8CResFile14releaseObjectsEv
// Demangled: glitch::collada::CResFile::releaseObjects(void)
// ============================================================================
glitch::video::IBuffer::Self *glitch::collada::CResFile::releaseObjects(glitch::collada::CResFile *self)
{
  glitch::video::IBuffer::Self *result;
  uint32_t *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  int v10;
  int j;
  char *v12;
  volatile int32_t *v13;
  volatile int32_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  glitch::video::CMaterialVertexAttributeMap::Self *v21;
  int v22;
  uint32_t *v23;
  int v24;
  int i;
  int v26;
  uint32_t *v27;
  int v28;

  result = (glitch::video::IBuffer::Self *)(self);
  if ( *((uint8_t *)self + 20) != 0 )
  {
    v27 = *(uint32_t **)(*((uint32_t *)self + 4) + 32);
    v2 = (uint32_t *)v27[1];
    if ( v2 != nullptr )
    {
      v3 = (int *)(*v2 - 12);
      if ( v3 != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(*v2 - 4), 0xFFFFFFFF) <= 0 )
        gll_operator_delete_arr((int)(uintptr_t)v3);
      operator delete(v2);
    }
    v4 = v27[2];
    if ( v4 != 0 )
    {
      v20 = (int)(uintptr_t)v27 + v4 + 8;
      v21 = *(glitch::video::CMaterialVertexAttributeMap::Self **)((char *)v27 + v4 + 60);
      if ( v21 != nullptr )
      {
LABEL_32:
        *(uint32_t *)(v20 + 52) = 0;
        if ( __sync_fetch_and_add((volatile int32_t *)v21, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterialVertexAttributeMap::Destroy(v21);
          gll_operator_delete_arr((int)(uintptr_t)v21);
        }
      }
      while ( 1 )
      {
        v22 = *(uint32_t *)(v20 + 56);
        if ( v22 == 0 )
          break;
        v20 += v22 + 56;
        v21 = *(glitch::video::CMaterialVertexAttributeMap::Self **)(v20 + 52);
        if ( v21 != nullptr )
          goto LABEL_32;
      }
    }
    v28 = v27[34];
    if ( v28 > 0 )
    {
      for ( i = 0; i != v28; ++i )
      {
        if ( v27[33] == 0 )
        {
          v5 = (int)(uintptr_t)v27 + v27[35] + 136;
          v6 = v5 + 16 * i + 4;
          if ( *(uint32_t *)(v5 + 16 * i + 12) == 0 )
          {
            v7 = *(uint32_t *)(v5 + 16 * i + 16);
            v8 = v6 + v7 + 12;
            if ( v7 == 0 )
              v8 = 0;
            v23 = (uint32_t *)v8;
            glitch::collada::CResFile::releaseBuffer((int)(uintptr_t)self, (glitch::video::IBuffer::Self **)(v8 + 52));
            v9 = (volatile int32_t *)v23[13];
            v23[13] = 0;
            if ( v9 != nullptr )
              sub_5459C0(v9);
            v26 = v23[14];
            if ( v26 > 0 )
            {
              v10 = 0;
              for ( j = 0; j != v26; ++j )
              {
                v12 = (char *)v23 + v23[15] + v10 + 60;
                glitch::collada::CResFile::releaseBuffer((int)(uintptr_t)self, (glitch::video::IBuffer::Self **)v12 + 12);
                v13 = *((volatile int32_t **)v12 + 12);
                *((uint32_t *)v12 + 12) = 0;
                if ( v13 != nullptr )
                  sub_5459C0(v13);
                v14 = *((volatile int32_t **)v12 + 13);
                *((uint32_t *)v12 + 13) = 0;
                if ( v14 != nullptr )
                  sub_5459C0(v14);
                v10 += 56;
              }
            }
          }
        }
      }
    }
    result = (glitch::video::IBuffer::Self *)v27;
    if ( (int)v27[37] > 0 )
    {
      result = (glitch::video::IBuffer::Self *)(v27 + 37);
      v24 = v27[37];
      v15 = 0;
      v16 = 0;
      do
      {
        if ( v27[36] == 0 )
        {
          result = (glitch::video::IBuffer::Self *)((char *)v27 + v27[38] + v15 + 152);
          if ( *(uint32_t *)result == 0 )
          {
            v17 = *((uint32_t *)result + 2);
            v18 = 0;
            v19 = (int)(uintptr_t)result + v17 + 8;
            if ( v17 != 0 )
              v18 = v19;
            result = glitch::collada::CResFile::releaseBuffer((int)(uintptr_t)self, (glitch::video::IBuffer::Self **)(v18 + 108));
          }
        }
        ++v16;
        v15 += 12;
      }
      while ( v16 != v24 );
    }
  }
  return result;
}


// ============================================================================
// Address:   0xdab820 (size: 118 bytes)
// Symbol:    _ZN6glitch7collada15CResFileManagerC1EPNS_7IDeviceE
// Demangled: glitch::collada::CResFileManager::CResFileManager(glitch::IDevice *)
// ============================================================================
// Alternative name is '_ZN6glitch7collada15CResFileManagerC2EPNS_7IDeviceE'
struct glitch::collada::CResFileManager::Self *glitch::collada::CResFileManager::CResFileManager(
        glitch::collada::CResFileManager::Self *self,
        glitch::IDevice::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207B940);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint8_t *)self + 36) = 0;
  *((uint8_t *)self + 37) = 1;
  *((uint8_t *)self + 38) = 0;
  *((uint8_t *)self + 39) = 0;
  glf::ReadWriteSpinLock::ReadWriteSpinLock((glitch::collada::CResFileManager::Self *)((char *)self + 40));
  glitch::collada::CResFileManager::Inst = (uintptr_t)(uintptr_t)(self);
  return (struct glitch::collada::CResFileManager::Self *)&glitch::collada::CResFileManager::Inst;
}


// ============================================================================
// Address:   0xdab8a0 (size: 769 bytes)
// Symbol:    _ZN6glitch7collada15CResFileManager11getReadFileERKN5boost13intrusive_ptrINS_2io9IReadFileEEE
// Demangled: glitch::collada::CResFileManager::getReadFile(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// ============================================================================
glitch::collada::CResFileManager::Self *glitch::collada::CResFileManager::getReadFile(
        glitch::collada::CResFileManager::Self *self,
        const boost::intrusive_ptr<glitch::io::IReadFile> *a2,
        boost::intrusive_ptr<glitch::io::IReadFile> *a3)
{
  const boost::intrusive_ptr<glitch::io::IReadFile> *v3;
  glitch::collada::CResFileManager::Self *v4;
  boost::intrusive_ptr<glitch::io::IReadFile> *v5;
  int v6;
  bool v7;
  char isValid;
  volatile int32_t *v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  volatile int32_t *v14;
  volatile int32_t *v15;
  volatile int32_t *v16;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v17;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v18;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v19;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v20;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v21;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v22;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef volatile int32_t *_g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  typedef volatile int32_t *_g4_t_v27;
  typedef uint32_t _g4_t_v28[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v20)) > _g4_s3 ? (8u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v21)) > _g4_s4 ? (8u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v22)) > _g4_s5 ? (8u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v23)) > _g4_s6 ? (8u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v24)) > _g4_s7 ? (12u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v25)) > _g4_s8 ? (16u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v26)) > _g4_s9 ? (32u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v27)) > _g4_s10 ? (40u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v28)) > _g4_s11 ? (44u + sizeof(_g4_t_v28)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);

  v28[3] = (uint32_t)(uintptr_t)(&self);
  v3 = a2;
  v4 = self;
  v5 = a3;
  if ( *((uint8_t *)a2 + 37) == 0 )
    goto LABEL_2;
  v18 = a3;
  isValid = glitch::io::CZipReader::isValid(*(uint32_t *)a3);
  v5 = v18;
  if ( isValid == 0 )
  {
    if ( *((uint8_t *)v3 + 37) != 0 )
    {
      if ( *((uint8_t *)v3 + 38) == 0 )
      {
LABEL_3:
        v6 = *(uint32_t *)v5;
        v7 = *(uint32_t *)v5 == 0;
        *(uint32_t *)v4 = *(uint32_t *)v5;
        if ( !v7 )
          sub_8B1B00((volatile int32_t *)(v6 + 4));
        return v4;
      }
LABEL_6:
      if ( *((uint8_t *)v3 + 37) != 0 )
        *((uint8_t *)v3 + 37) = 0;
      goto LABEL_3;
    }
LABEL_2:
    v17 = v5;
    glitch::io::CZipReader::isValid(*(uint32_t *)v5);
    v5 = v17;
    if ( *((uint8_t *)v3 + 38) == 0 )
      goto LABEL_3;
    goto LABEL_6;
  }
  (*(void (**)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)v18 + 24))(*(uint32_t *)v18, 0, 0);
  v24 = (volatile int32_t *)operator new(0x2Cu);
  glitch::io::CZipReader::Construct((glitch::io::CZipReader::Self *)v24, v18, true, true, 1u, false, false);
  if ( v24 != nullptr )
    sub_8B1B00(v24 + 1);
  if ( *((uint8_t *)v3 + 39) != 0 )
  {
    v27 = nullptr;
    (*(void (**)(volatile int32_t **, volatile int32_t *, const char *))(*v24 + 12))(&v27, v24, "little_endian_quantized.bdae");
    v10 = v27;
    if ( v27 != nullptr )
    {
      v19 = (boost::intrusive_ptr<glitch::io::IReadFile> *)v27;
      sub_8B1B00(v27 + 1);
      v11 = v27;
      v10 = (volatile int32_t *)v19;
      if ( v27 != nullptr )
      {
LABEL_14:
        sub_5459C0(v11);
        v10 = (volatile int32_t *)v19;
      }
    }
  }
  else
  {
    v28[0] = 0;
    (*(void (**)(uint32_t *, volatile int32_t *, const char *))(*v24 + 12))(v28, v24, "little_endian_not_quantized.bdae");
    v10 = (volatile int32_t *)v28[0];
    if ( v28[0] != 0 )
    {
      v19 = (boost::intrusive_ptr<glitch::io::IReadFile> *)v28[0];
      sub_8B1B00((volatile int32_t *)(v28[0] + 4));
      v11 = (volatile int32_t *)v28[0];
      v10 = (volatile int32_t *)v19;
      if ( v28[0] != 0 )
        goto LABEL_14;
    }
  }
  if ( v24 == nullptr )
  {
    if ( *((uint8_t *)v3 + 39) != 0 )
    {
      v21 = (boost::intrusive_ptr<glitch::io::IReadFile> *)v10;
      v25 = nullptr;
      v12 = v25;
      v13 = (volatile int32_t *)v21;
      if ( v25 != nullptr )
      {
        sub_8B1B00(v25 + 1);
        v13 = (volatile int32_t *)v21;
      }
      if ( v13 != nullptr )
        sub_5459C0(v13);
      v14 = v25;
      v10 = v12;
      if ( v25 == nullptr )
        goto LABEL_16;
    }
    else
    {
      v23 = (boost::intrusive_ptr<glitch::io::IReadFile> *)v10;
      v26 = nullptr;
      v15 = v26;
      v16 = (volatile int32_t *)v23;
      if ( v26 != nullptr )
      {
        sub_8B1B00(v26 + 1);
        v16 = (volatile int32_t *)v23;
      }
      if ( v16 != nullptr )
        sub_5459C0(v16);
      v14 = v26;
      v10 = v15;
      if ( v26 == nullptr )
        goto LABEL_16;
    }
    v22 = (boost::intrusive_ptr<glitch::io::IReadFile> *)v10;
    sub_5459C0(v14);
    v10 = (volatile int32_t *)v22;
  }
LABEL_16:
  *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v10);
  if ( v10 != nullptr )
  {
    v20 = (boost::intrusive_ptr<glitch::io::IReadFile> *)v10;
    sub_8B1B00(v10 + 1);
    sub_5459C0((volatile int32_t *)v20);
  }
  if ( v24 != nullptr )
    sub_5459C0(v24);
  return v4;
}


// ============================================================================
// Address:   0xdabbb0 (size: 9 bytes)
// Symbol:    _ZN6glitch7collada15CResFileManager12checkVersionERKN5boost13intrusive_ptrINS_2io9IReadFileEEE
// Demangled: glitch::collada::CResFileManager::checkVersion(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// ============================================================================
int glitch::collada::CResFileManager::checkVersion()
{
  return 0;
}


// ============================================================================
// Address:   0xdabbc0 (size: 114 bytes)
// Symbol:    _ZN6glitch7collada15CResFileManager12checkVersionEPKc
// Demangled: glitch::collada::CResFileManager::checkVersion(char const*)
// ============================================================================
int glitch::collada::CResFileManager::checkVersion(glitch::collada::CResFileManager::Self *self)
{
  int v1;
  typedef volatile int32_t *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 80u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);

  (*(void (**)(volatile int32_t **))(**(uint32_t **)(*((uint32_t *)self + 8) + 32) + 12))(&v3);
  v1 = glitch::collada::CResFileManager::checkVersion();
  if ( v3 != nullptr )
    sub_5459C0(v3);
  return v1;
}


// ============================================================================
// Address:   0xdabc40 (size: 333 bytes)
// Symbol:    _ZN6glitch7collada15CResFileManager3getEPKc
// Demangled: glitch::collada::CResFileManager::get(char const*)
// ============================================================================
glitch::collada::CResFileManager::Self *glitch::collada::CResFileManager::get(
        glitch::collada::CResFileManager::Self *self,
        const char *a2,
        const char *a3)
{
  const char *v3;
  char *v4;
  int v5;
  char *v6;
  uint32_t *v7;
  int v8;
  typedef const char *_g4_t_v10;
  typedef char *_g4_t_v11[3];
  typedef void *_g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  sub_D8D940((char **)v12, a3);
  sub_D8D4D0((uint32_t *)&v10, (int)(uintptr_t)(a2 + 8), v12);
  v3 = v10;
  v4 = (char *)v12[0] - 12;
  if ( (char *)v12[0] - 12 != (char *)&dword_20D3E6C
    && __sync_fetch_and_add((volatile int32_t *)v12[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr((int)(uintptr_t)v4);
  }
  if ( a2 + 12 == v3 )
  {
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
    sub_D8D940(v11, a3);
    v5 = *(uint32_t *)sub_D8F3A0((uint32_t *)a2 + 2, (const void **)v11);
    if ( v5 != 0 )
      sub_8B1B00((volatile int32_t *)(v5 + 4));
    v6 = v11[0] - 12;
    if ( (int *)v11[0] - 3 != (int *)(&dword_20D3E6C)
      && __sync_fetch_and_add((volatile int32_t *)v11[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr((int)(uintptr_t)v6);
    }
    v7 = *(uint32_t **)(v5 + 16);
    v8 = v7[5] >> 31;
    glitch::res::File::ExternalFilePtr[v8] = (uintptr_t)(uintptr_t)(v7);
    glitch::res::File::ExternalFileOffsetTableSize[v8] = glitch::res::File::SizeOfHeader + 4 * v7[4];
    glitch::res::File::SizeOfHeader = v7[2];
    *(uint32_t *)self = v5;
    sub_8B1B00((volatile int32_t *)(v5 + 4));
    sub_5459C0((volatile int32_t *)v5);
    return self;
  }
}


// ============================================================================
// Address:   0xdabd90 (size: 248 bytes)
// Symbol:    _ZN6glitch7collada15CResFileManager6unloadESt17_Rb_tree_iteratorISt4pairIKSbIcSt11char_traitsIcENS_4core10SAllocatorIcLNS_6memory13E_MEMORY_HINTE0EEEEN5boost13intrusive_ptrINS0_8CResFileEEEEEb
// Demangled: glitch::collada::CResFileManager::unload(std::_Rb_tree_iterator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::collada::CResFile>>>,bool)
// ============================================================================
int glitch::collada::CResFileManager::unload(int a1, int a2, char a3)
{
  unsigned int v3;
  int v5;
  volatile int32_t *v6;
  int v7;
  int v8;

  glf::ReadWriteSpinLock::writeLockImpl((glf::ReadWriteSpinLock::Self *)(a1 + 40), 0xFFFFFFFF);
  v8 = 3;
  if ( a1 + 12 != a2 )
  {
    v3 = *(uint32_t *)(*(uint32_t *)(a2 + 20) + 4);
    _mm_mfence();
    if ( v3 <= 1 )
    {
      v8 = 0;
    }
    else
    {
      v8 = 2;
      if ( a3 == 0 )
        goto LABEL_4;
      v8 = 1;
    }
    v5 = sub_1904AE0(a2, a1 + 12);
    v6 = *(volatile int32_t **)(v5 + 20);
    if ( v6 != nullptr )
      sub_5459C0(v6);
    v7 = *(uint32_t *)(v5 + 16);
    if ( (int *)(v7 - 12) != (int *)(&dword_20D3E6C)
      && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr(v7 - 12);
    }
    gll_operator_delete_arr(v5);
    --*(uint32_t *)(a1 + 28);
  }
LABEL_4:
  glf::ReadWriteSpinLock::writeUnlock((glf::ReadWriteSpinLock::Self *)(a1 + 40));
  return v8;
}


// ============================================================================
// Address:   0xdabe90 (size: 287 bytes)
// Symbol:    _ZN6glitch7collada15CResFileManager6unloadEPKcb
// Demangled: glitch::collada::CResFileManager::unload(char const*,bool)
// ============================================================================
int glitch::collada::CResFileManager::unload(glitch::collada::CResFileManager::Self *self, const char *a2, char a3)
{
  glitch::collada::CResFileManager::Self *v3;
  int v4;
  glf::ReadWriteSpinLock::Self *v5;
  char *v6;
  char *v7;
  typedef glf::ReadWriteSpinLock::Self *_g4_t_v9;
  typedef glf::ReadWriteSpinLock::Self *_g4_t_v10;
  typedef const char *_g4_t_v11;
  typedef char _g4_t_v12;
  typedef void (*_g4_t_v13)(void **);
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef void *_g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (23u + sizeof(_g4_t_v12)) > _g4_s3 ? (23u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v16)) > _g4_s7 ? (44u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 23u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v16[3] = &self;
  v3 = self;
  v12 = a3;
  v11 = a2;
  v9 = (glf::ReadWriteSpinLock::Self *)((glitch::collada::CResFileManager::Self *)((char *)self + 40));
  glf::ReadWriteSpinLock::writeLockImpl((glf::ReadWriteSpinLock::Self *)((glitch::collada::CResFileManager::Self *)((char *)self + 40)), 0xFFFFFFFF);
  v13 = *(void (**)(void **))(**(uint32_t **)(*((uint32_t *)v3 + 8) + 32) + 56);
  sub_D8D940(&v15, v11);
  v13(v16);
  sub_D8D4D0((uint32_t *)&v14, (int)(uintptr_t)v3 + 8, v16);
  v4 = glitch::collada::CResFileManager::unload((int)(uintptr_t)v3, v14, v12);
  v5 = v9;
  v6 = (char *)v16[0] - 12;
  if ( (char *)v16[0] - 12 != (char *)&dword_20D3E6C
    && __sync_fetch_and_add((volatile int32_t *)v16[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr((int)(uintptr_t)v6);
    v5 = v9;
  }
  v7 = v15 - 12;
  if ( v15 - 12 != (char *)&dword_20D3E6C && __sync_fetch_and_add((volatile int32_t *)v15 - 1, 0xFFFFFFFF) <= 0 )
  {
    v10 = v5;
    gll_operator_delete_arr((int)(uintptr_t)v7);
    v5 = v10;
  }
  glf::ReadWriteSpinLock::writeUnlock(v5);
  return v4;
}


// ============================================================================
// Address:   0xdabfb0 (size: 167 bytes)
// Symbol:    _ZN6glitch7collada15CResFileManager6unloadEPNS0_8SColladaEb
// Demangled: glitch::collada::CResFileManager::unload(glitch::collada::SCollada *,bool)
// ============================================================================
int glitch::collada::CResFileManager::unload(glitch::collada::CResFileManager::Self *a1, int a2, char a3)
{
  int v3;
  int v4;
  int v6;

  glf::ReadWriteSpinLock::writeLockImpl((glf::ReadWriteSpinLock::Self *)((glitch::collada::CResFileManager::Self *)((char *)a1 + 40)), 0xFFFFFFFF);
  v3 = *((uint32_t *)a1 + 5);
  v4 = 3;
  if ( (glitch::collada::CResFileManager::Self *)v3 != (glitch::collada::CResFileManager::Self *)((char *)a1 + 12) )
  {
    do
    {
      if ( a2 == *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v3 + 20) + 16) + 32) )
      {
        v4 = glitch::collada::CResFileManager::unload(a1, *(const char **)(v3 + 16), a3);
        goto LABEL_6;
      }
      v3 = sub_1904890(v3);
    }
    while ( (glitch::collada::CResFileManager::Self *)v3 != (glitch::collada::CResFileManager::Self *)((char *)a1 + 12) );
    v4 = 3;
  }
LABEL_6:
  v6 = v4;
  glf::ReadWriteSpinLock::writeUnlock((glf::ReadWriteSpinLock::Self *)((glitch::collada::CResFileManager::Self *)((char *)a1 + 40)));
  return v6;
}


// ============================================================================
// Address:   0xdac060 (size: 196 bytes)
// Symbol:    _ZN6glitch7collada16CColladaDatabaseD1Ev
// Demangled: glitch::collada::CColladaDatabase::Destroy()
// ============================================================================
// Alternative name is '_ZN6glitch7collada16CColladaDatabaseD2Ev'
void glitch::collada::CColladaDatabase::Destroy(volatile int32_t ***self)
{
  volatile int32_t *v1;
  volatile int32_t **v2;
  volatile int32_t **v3;
  volatile int32_t **v4;

  if ( *self != nullptr )
  {
    _mm_mfence();
    v1 = (*self)[1];
    _mm_mfence();
    if ( v1 == (int *)((char *)&dword_0 + 2) )
    {
      glitch::collada::CAnimationStreamingManager::release(
        (glitch::collada::CAnimationStreamingManager::Self *)glitch::collada::CAnimationStreamingManager::Instance,
        (glitch::collada::CColladaDatabase::Self *)self);
      v4 = *self;
      *self = nullptr;
      if ( v4 != nullptr )
        sub_5459C0((volatile int32_t *)v4);
      glitch::collada::CResFileManager::unload(
        (glitch::collada::CResFileManager::Self *)glitch::collada::CResFileManager::Inst,
        (const char *)v4[3],
        0);
    }
  }
  v2 = *(self + 3);
  v3 = *(self + 2);
  if ( v2 != v3 )
  {
    do
    {
      if ( *v3 != nullptr )
        sub_5459C0(*v3);
      ++v3;
    }
    while ( v2 != v3 );
    v3 = *(self + 2);
  }
  if ( v3 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)v3);
  if ( *self != nullptr )
    sub_5459C0((volatile int32_t *)*self);
}


// ============================================================================
// Address:   0xdac130 (size: 138 bytes)
// Symbol:    _ZN6glitch7collada15CResFileManager9unloadAllEv
// Demangled: glitch::collada::CResFileManager::unloadAll(void)
// ============================================================================
int glitch::collada::CResFileManager::unloadAll(glitch::collada::CResFileManager::Self *self)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  const char *v4;

  v1 = 0;
  glf::ReadWriteSpinLock::writeLockImpl((glf::ReadWriteSpinLock::Self *)((glitch::collada::CResFileManager::Self *)((char *)self + 40)), 0xFFFFFFFF);
  v2 = *((uint32_t **)self + 5);
  while ( v2 != (uint32_t *)((char *)self + 12) )
  {
    v3 = (uint32_t *)sub_1904890(v2);
    v4 = (const char *)v2[4];
    v2 = v3;
    v1 += glitch::collada::CResFileManager::unload(self, v4, 0) == 0;
  }
  glf::ReadWriteSpinLock::writeUnlock((glf::ReadWriteSpinLock::Self *)((glitch::collada::CResFileManager::Self *)((char *)self + 40)));
  return v1;
}


// ============================================================================
// Address:   0xdac1c0 (size: 142 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineControllerC2Ev
// Demangled: glitch::collada::CTimelineController::CTimelineController(void)
// ============================================================================
glitch::collada::CTimelineController::Self *glitch::collada::CTimelineController::Construct(
        glitch::collada::CTimelineController::Self *self,
        int *a2)
{
  int v2;

  glitch::scene::ITimelineController::ITimelineController(self);
  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[5];
  *((uint8_t *)self + 25) = 1;
  *((uint8_t *)self + 26) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint8_t *)self + 48) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  return nullptr;
}


// ============================================================================
// Address:   0xdac250 (size: 147 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineControllerC1Ev
// Demangled: glitch::collada::CTimelineController::CTimelineController(void)
// ============================================================================
glitch::collada::CTimelineController::Self *glitch::collada::CTimelineController::Construct(
        glitch::collada::CTimelineController::Self *self)
{
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(&off_20483C0);
  *((uint32_t *)self + 17) = 0;
  glitch::scene::ITimelineController::ITimelineController(self);
  *((uint8_t *)self + 25) = 1;
  *((uint8_t *)self + 26) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint8_t *)self + 48) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 16) = ((uint32_t)(uintptr_t)&off_207BAE0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207BA6C);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  return nullptr;
}


// ============================================================================
// Address:   0xdac2f0 (size: 108 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineControllerD2Ev
// Demangled: glitch::collada::CTimelineController::Destroy()
// ============================================================================
void glitch::collada::CTimelineController::Destroy(
        volatile int32_t **self,
        volatile int32_t **a2)
{
  volatile int32_t *v2;
  volatile int32_t *v3;
  volatile int32_t *v4;

  v2 = *a2;
  *self = *a2;
  *(volatile int32_t **)((char *)self + *((uint32_t *)v2 - 3)) = a2[5];
  if ( *(self + 13) != nullptr )
    sub_5459C0(*(self + 13));
  v3 = a2[1];
  *self = v3;
  *(volatile int32_t **)((char *)self + *((uint32_t *)v3 - 3)) = a2[4];
  v4 = a2[2];
  *self = v4;
  *(volatile int32_t **)((char *)self + *((uint32_t *)v4 - 3)) = a2[3];
}


// ============================================================================
// Address:   0xdac360 (size: 19 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController4initEff
// Demangled: glitch::collada::CTimelineController::init(float,float)
// ============================================================================
glitch::collada::CTimelineController::Self *glitch::collada::CTimelineController::init(
        glitch::collada::CTimelineController::Self *self,
        float a2,
        float a3)
{
  *((float *)self + 4) = a2;
  *((float *)self + 5) = a3;
  return self;
}


// ============================================================================
// Address:   0xdac380 (size: 70 bytes)
// Symbol:    _ZN6glitch7collada19CTimelineController17setAnimationClipsEPKNS0_22SLibraryAnimationClipsE
// Demangled: glitch::collada::CTimelineController::setAnimationClips(glitch::collada::SLibraryAnimationClips const*)
// ============================================================================
int glitch::collada::CTimelineController::setAnimationClips(uint32_t *a1, uint32_t *a2)
{
  int result;

  result = (int)(uintptr_t)a1;
  a1[10] = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr && *a2 != 0 )
    return (*(int (**)(uint32_t *, uint32_t))(*a1 + 20))(a1, 0);
  a1[4] = 0;
  a1[5] = 1065353216;
  return result;
}


// ============================================================================
// Address:   0xdacf10 (size: 403 bytes)
// Symbol:    _ZN6glitch7collada8CResFileC2EPKcRKN5boost13intrusive_ptrINS_2io9IReadFileEEEb
// Demangled: glitch::collada::CResFile::CResFile(char const*,boost::intrusive_ptr<glitch::io::IReadFile> const&,bool)
// ============================================================================
// Alternative name is '_ZN6glitch7collada8CResFileC1EPKcRKN5boost13intrusive_ptrINS_2io9IReadFileEEEb'
glitch::collada::CResFile *glitch::collada::CResFile::Construct(
        glitch::collada::CResFile *self,
        const char *a2,
        const boost::intrusive_ptr<glitch::io::IReadFile> *a3,
        bool a4)
{
  glitch::collada::CResFile *v4;
  const char *v5;
  const boost::intrusive_ptr<glitch::io::IReadFile> *v6;
  bool v7;
  glitch::collada::CResFile *result;
  volatile int32_t *v9;
  volatile int32_t *v10;
  void *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18[4];
  typedef void (**_g4_t_v19)(glitch::collada::CResFileReader::Self *__hidden);
  typedef volatile int32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef glitch::collada::CResFile **_g4_t_v24;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v19)) > _g4_s7 ? (52u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v20)) > _g4_s8 ? (56u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v21)) > _g4_s9 ? (60u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v22)) > _g4_s10 ? (64u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v23)) > _g4_s11 ? (68u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v24)) > _g4_s12 ? (76u + sizeof(_g4_t_v24)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);

  v24 = &self;
  v4 = self;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207B928);
  *((uint32_t *)v4 + 1) = 0;
  *((uint32_t *)v4 + 2) = 0;
  LOBYTE(v17) = v7;
  sub_D8D940((char **)v4 + 3, v5);
  *((uint32_t *)v4 + 4) = 0;
  *((uint8_t *)v4 + 20) = 0;
  *((uint32_t *)v4 + 6) = 0;
  *((uint32_t *)v4 + 7) = 0;
  *((uint32_t *)v4 + 9) = 0;
  *((uint32_t *)v4 + 10) = 0;
  *((uint32_t *)v4 + 11) = 0;
  *((uint32_t *)v4 + 15) = 0;
  *((uint32_t *)v4 + 16) = 0;
  *((uint32_t *)v4 + 17) = 0;
  if ( (uint8_t)v17 != 0 && (*(uint8_t (**)(uint32_t))(**(uint32_t **)v6 + 60))(*(uint32_t *)v6) != 0 )
  {
    v9 = *(volatile int32_t **)v6;
    if ( v9 != nullptr )
      sub_8B1B00(v9 + 1);
    v10 = *((volatile int32_t **)v4 + 2);
    *((uint32_t *)v4 + 2) = (uint32_t)(uintptr_t)(v9);
    if ( v10 != nullptr )
    {
      sub_5459C0(v10);
      v9 = *((volatile int32_t **)v4 + 2);
    }
    v11 = (void *)(*(int (**)(volatile int32_t *, uint32_t, int, int, int, int, int, int, volatile int32_t *, volatile int32_t *, volatile int32_t *, volatile int32_t *, void (**)(glitch::collada::CResFileReader::Self *__hidden), volatile int32_t *, int, int, int))(*v9 + 52))(
                    v9,
                    0,
                    v12,
                    v13,
                    v14,
                    v15,
                    v16,
                    v17,
                    v18[0],
                    v18[1],
                    v18[2],
                    v18[3],
                    v19,
                    v20,
                    v21,
                    v22,
                    v23);
    return (glitch::collada::CResFile *)glitch::res::File::Init((glitch::res::File::Self *)((char *)v4 + 16), v11);
  }
  else
  {
    glitch::collada::CResFileManager::getReadFile(
      (glitch::collada::CResFileManager::Self *)v18,
      (const boost::intrusive_ptr<glitch::io::IReadFile> *)glitch::collada::CResFileManager::Inst,
      (boost::intrusive_ptr<glitch::io::IReadFile> *)(v6));
    v19 = (void (**)(glitch::collada::CResFileReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_207B908));
    v20 = v18[0];
    if ( v18[0] != nullptr )
      sub_8B1B00(v18[0] + 1);
    glitch::res::File::Init((glitch::res::File::Self *)((char *)v4 + 16), (glitch::res::FileReader::Self *)&v19);
    v19 = (void (**)(glitch::collada::CResFileReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_207B908));
    if ( v20 != nullptr )
      sub_5459C0(v20);
    v19 = (void (**)(glitch::collada::CResFileReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_207BB08));
    result = (glitch::collada::CResFile *)v18[0];
    if ( v18[0] != nullptr )
      return (glitch::collada::CResFile *)sub_5459C0(v18[0]);
  }
  return result;
}


// ============================================================================
// Address:   0xdad290 (size: 351 bytes)
// Symbol:    _ZN6glitch7collada8CResFileD2Ev
// Demangled: glitch::collada::CResFile::~CResFile()
// ============================================================================
// Alternative name is '_ZN6glitch7collada8CResFileD1Ev'
static void g4_CResFile_dtor_dad290(glitch::collada::CResFile *self)
{
  volatile int32_t **v1;
  volatile int32_t **v2;
  int v3;
  volatile int32_t *v4;
  volatile int32_t **v5;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v6;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v7;
  int v8;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v9;
  volatile int32_t *v10;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207B928);
  glitch::collada::CResFile::releaseObjects(self);
  if ( *((uint32_t *)self + 2) == 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  v1 = *((volatile int32_t ***)self + 15);
  v2 = *((volatile int32_t ***)self + 16);
  if ( v1 != v2 )
  {
    do
    {
      while ( 1 )
      {
        if ( *v1 != nullptr )
        {
          v3 = *((uint32_t *)*v1 + 1);
          _mm_mfence();
          if ( v3 == 2 )
            break;
        }
        if ( v2 == ++v1 )
          goto LABEL_11;
      }
      v4 = *v1;
      *v1 = nullptr;
      if ( v4 != nullptr )
      {
        v10 = v4;
        sub_5459C0(v4);
        v4 = v10;
      }
      ++v1;
      glitch::collada::CResFileManager::unload(
        (glitch::collada::CResFileManager::Self *)glitch::collada::CResFileManager::Inst,
        *((const char **)v4 + 3),
        0);
    }
    while ( v2 != v1 );
LABEL_11:
    v5 = *((volatile int32_t ***)self + 16);
    v1 = *((volatile int32_t ***)self + 15);
    if ( v1 != v5 )
    {
      do
      {
        if ( *v1 != nullptr )
          sub_5459C0(*v1);
        ++v1;
      }
      while ( v1 != v5 );
      v1 = *((volatile int32_t ***)self + 15);
    }
  }
  if ( v1 != nullptr )
    operator delete(v1);
  v6 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 10);
  v7 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 9);
  if ( v6 != v7 )
  {
    do
    {
      v9 = v7++;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v9);
    }
    while ( v6 != v7 );
    v7 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 9);
  }
  if ( v7 != nullptr )
    operator delete(v7);
  v8 = *((uint32_t *)self + 3);
  if ( (int *)(v8 - 12) != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v8 - 12);
  if ( *((uint32_t *)self + 2) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 2));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}


// ============================================================================
// Address:   0xdad3f0 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada8CResFileD0Ev
// Demangled: glitch::collada::CResFile::~CResFile()
// ============================================================================
static void g4_CResFile_dtor_dad3f0(glitch::collada::CResFile *self)
{
  g4_CResFile_dtor_dad290(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xdb1220 (size: 152 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructImageEPNS_5video12IVideoDriverEPNS0_6SImageE
// Demangled: glitch::collada::CColladaDatabase::constructImage(glitch::video::IVideoDriver *,glitch::collada::SImage *)const
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::constructImage(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  bool v5;
  int v7[4];

  if ( a4 != 0 )
  {
    (*(void (**)(int *))(**(uint32_t **)(a2 + 4) + 24))(v7);
    v4 = v7[0];
    v5 = v7[0] == 0;
    *a1 = v7[0];
    if ( !v5 )
      sub_8B1B00((volatile int32_t *)(v4 + 4));
    sub_5ED480(v7);
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}


// ============================================================================
// Address:   0xdb12c0 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructImageEPNS_5video12IVideoDriverEi
// Demangled: glitch::collada::CColladaDatabase::constructImage(glitch::video::IVideoDriver *,int)const
// ============================================================================
glitch::collada::CColladaDatabase::Self *glitch::collada::CColladaDatabase::constructImage(
        glitch::collada::CColladaDatabase::Self *self,
        glitch::video::IVideoDriver::Self *a2,
        int a3,
        int a4)
{
  int Image;

  Image = glitch::collada::CColladaDatabase::getImage((glitch::collada::CColladaDatabase::Self *)a2, a4);
  glitch::collada::CColladaDatabase::constructImage(self, (int)(uintptr_t)a2, a3, Image);
  return self;
}


// ============================================================================
// Address:   0xdb1330 (size: 100 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase14constructImageEPNS_5video12IVideoDriverEPKc
// Demangled: glitch::collada::CColladaDatabase::constructImage(glitch::video::IVideoDriver *,char const*)const
// ============================================================================
glitch::collada::CColladaDatabase::Self *glitch::collada::CColladaDatabase::constructImage(
        glitch::collada::CColladaDatabase::Self *self,
        glitch::video::IVideoDriver::Self *a2,
        const char *a3,
        char *a4)
{
  const char **Image;

  Image = glitch::collada::CColladaDatabase::getImage((glitch::collada::CColladaDatabase::Self *)a2, a4);
  glitch::collada::CColladaDatabase::constructImage(self, (int)(uintptr_t)a2, (int)(uintptr_t)a3, (int)(uintptr_t)Image);
  return self;
}


// ============================================================================
// Address:   0xdb13a0 (size: 278 bytes)
// Symbol:    _ZNK6glitch7collada16CColladaDatabase18constructAllImagesEPNS_5video12IVideoDriverEPN5boost13intrusive_ptrINS2_8ITextureEEE
// Demangled: glitch::collada::CColladaDatabase::constructAllImages(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> *)const
// ============================================================================
glitch::collada::CColladaDatabase::Self *glitch::collada::CColladaDatabase::constructAllImages(
        glitch::collada::CColladaDatabase::Self *self,
        glitch::video::IVideoDriver::Self *a2,
        boost::intrusive_ptr<glitch::video::ITexture::Self> *a3)
{
  glitch::collada::CColladaDatabase::Self *result;
  int v4;
  int v5;
  int v6;
  glitch::video::ITexture::Self *v7;
  int32_t v8;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v9;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v10;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v11;
  typedef boost::intrusive_ptr<glitch::video::ITexture::Self> *_g4_t_v12;
  typedef glitch::video::ITexture::Self *_g4_t_v13;
  typedef int _g4_t_v14[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v14[6] = (int)(uintptr_t)&self;
  v10 = self;
  v9 = a2;
  v12 = a3;
  result = *(glitch::collada::CColladaDatabase::Self **)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 16) + 32) + 108);
  v11 = result;
  if ( (int)(uintptr_t)result > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
LABEL_3:
      result = glitch::collada::CColladaDatabase::constructImage(
                 (glitch::collada::CColladaDatabase::Self *)&v13,
                 (glitch::video::IVideoDriver::Self *)v10,
                 (int)(uintptr_t)v9,
                 v4);
      if ( v12 != nullptr )
      {
        v5 = 0;
        v14[0] = (int)(uintptr_t)v13;
        if ( v13 != nullptr )
        {
          sub_8B1B00((volatile int32_t *)v13 + 1);
          v5 = v14[0];
        }
        v6 = *((uint32_t *)v12 + v4);
        *((uint32_t *)v12 + v4) = v5;
        v14[0] = v6;
        result = (glitch::collada::CColladaDatabase::Self *)sub_5ED480(v14);
      }
      v7 = v13;
      if ( v13 != nullptr )
        break;
LABEL_11:
      if ( (glitch::collada::CColladaDatabase::Self *)++v4 == v11 )
        return result;
    }
    while ( 1 )
    {
      v8 = *((uint32_t *)v7 + 1);
      _mm_mfence();
      if ( v8 == 2 )
      {
        if ( *((uint16_t *)v7 + 16) == 0xFFFF )
          goto LABEL_10;
        glitch::video::ITexture::removeFromTextureManager(v7);
      }
      else
      {
        if ( v8 == 1 )
        {
          ++v4;
          result = (glitch::collada::CColladaDatabase::Self *)(*(int (**)(glitch::video::ITexture::Self *))(*(uint32_t *)v7 + 4))(v7);
          if ( (glitch::collada::CColladaDatabase::Self *)v4 == v11 )
            return result;
          goto LABEL_3;
        }
LABEL_10:
        result = (glitch::collada::CColladaDatabase::Self *)__sync_val_compare_and_swap(
                                                        (volatile int32_t *)v7 + 1,
                                                        v8,
                                                        v8 - 1);
        if ( (glitch::collada::CColladaDatabase::Self *)v8 == result )
          goto LABEL_11;
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xdb4fb0 (size: 7631 bytes)
// Symbol:    _ZN6glitch7collada16CColladaDatabase19getAnimationTrackExEPKNS0_10SAnimationE
// Demangled: glitch::collada::CColladaDatabase::getAnimationTrackEx(glitch::collada::SAnimation const*)
// ============================================================================
uint32_t *glitch::collada::CColladaDatabase::getAnimationTrackEx(uint32_t *a1)
{
  uint32_t *v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint32_t *v32;
  __guard *v33;
  __guard *v34;
  __guard *v35;
  __guard *v36;
  __guard *v37;
  __guard *v38;
  __guard *v39;
  __guard *v40;
  __guard *v41;

  if ( a1 == nullptr )
    return nullptr;
  switch ( *(uint32_t *)((char *)a1 + a1[4] + 20) )
  {
    case 1:
      v3 = a1[7];
      if ( v3 == 0 )
        goto LABEL_7;
      v14 = *(uint32_t *)((char *)a1 + v3 + 28);
      if ( v14 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_aeb7d31a03);
        if ( LOBYTE(g4_guard_bbe27213b1[0]) == 0
          && _cxa_guard_acquire(g4_guard_bbe27213b1) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_aeb7d31a03,
            6u,
            3u);
          g4_fnstatic_aeb7d31a03[0] = ((uint32_t)(uintptr_t)&off_207C8E8);
          _cxa_guard_release(g4_guard_bbe27213b1);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::Destroy,
            g4_fnstatic_aeb7d31a03,
            &unk_20D1280);
        }
      }
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
else if (v14 != 0)
{
        v1 = nullptr;
        if ( v14 == 2 )
        {
LABEL_7:
          v1 = (uint32_t *)(g4_fnstatic_5544d82de2);
          if ( LOBYTE(g4_guard_5fdf878a50[0]) == 0
            && _cxa_guard_acquire(g4_guard_5fdf878a50) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_5544d82de2,
              6u,
              3u);
            g4_fnstatic_5544d82de2[0] = ((uint32_t)(uintptr_t)&off_207C868);
            _cxa_guard_release(g4_guard_5fdf878a50);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::Destroy,
              g4_fnstatic_5544d82de2,
              &unk_20D1280);
          }
        }
      }
      else
      {
        v1 = (uint32_t *)(g4_fnstatic_97debe3d22);
        if ( LOBYTE(g4_guard_4e136e763d[0]) == 0
          && _cxa_guard_acquire(g4_guard_4e136e763d) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_97debe3d22,
            6u,
            3u);
          g4_fnstatic_97debe3d22[0] = ((uint32_t)(uintptr_t)&off_207C968);
          _cxa_guard_release(g4_guard_4e136e763d);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::Destroy,
            g4_fnstatic_97debe3d22,
            &unk_20D1280);
        }
      }
      return v1;
    case 2:
      v4 = a1[7];
      if ( v4 == 0 )
        goto LABEL_11;
      v15 = *(uint32_t *)((char *)a1 + v4 + 28);
      if ( v15 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_69eabb6420);
        if ( LOBYTE(g4_guard_20716627e5[0]) == 0
          && _cxa_guard_acquire(g4_guard_20716627e5) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_69eabb6420,
            6u,
            3u);
          g4_fnstatic_69eabb6420[0] = ((uint32_t)(uintptr_t)&off_207CA68);
          _cxa_guard_release(g4_guard_20716627e5);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::Destroy,
            g4_fnstatic_69eabb6420,
            &unk_20D1280);
        }
      }
      else if ( v15 != 0 )
      {
        v1 = nullptr;
        if ( v15 == 2 )
        {
LABEL_11:
          v1 = (uint32_t *)(g4_fnstatic_bc409eceb7);
          if ( LOBYTE(g4_guard_8fa4f899e0[0]) == 0
            && _cxa_guard_acquire(g4_guard_8fa4f899e0) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_bc409eceb7,
              6u,
              3u);
            g4_fnstatic_bc409eceb7[0] = ((uint32_t)(uintptr_t)&off_207C9E8);
            _cxa_guard_release(g4_guard_8fa4f899e0);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::Destroy,
              g4_fnstatic_bc409eceb7,
              &unk_20D1280);
          }
        }
      }

      else
      {
        v1 = (uint32_t *)(g4_fnstatic_4b6500fd46);
        if ( LOBYTE(g4_guard_2f8f0e9404[0]) == 0
          && _cxa_guard_acquire(g4_guard_2f8f0e9404) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_4b6500fd46,
            6u,
            3u);
          g4_fnstatic_4b6500fd46[0] = ((uint32_t)(uintptr_t)&off_207CAE8);
          _cxa_guard_release(g4_guard_2f8f0e9404);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::Destroy,
            g4_fnstatic_4b6500fd46,
            &unk_20D1280);
        }
      }
      return v1;
    case 3:
      v5 = a1[7];
      if ( v5 == 0 )
        goto LABEL_15;
      v16 = *(uint32_t *)((char *)a1 + v5 + 28);
      if ( v16 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_febf7ad827);
        if ( LOBYTE(g4_guard_1a42350f82[0]) == 0
          && _cxa_guard_acquire(g4_guard_1a42350f82) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_febf7ad827,
            6u,
            3u);
          g4_fnstatic_febf7ad827[0] = ((uint32_t)(uintptr_t)&off_207CBE8);
          _cxa_guard_release(g4_guard_1a42350f82);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::Destroy,
            g4_fnstatic_febf7ad827,
            &unk_20D1280);
        }
      }
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
else if (v16 != 0)
{
        v1 = nullptr;
        if ( v16 == 2 )
        {
LABEL_15:
          v1 = (uint32_t *)(g4_fnstatic_48b6cb2f9d);
          if ( LOBYTE(g4_guard_6be2da90f8[0]) == 0
            && _cxa_guard_acquire(g4_guard_6be2da90f8) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_48b6cb2f9d,
              6u,
              3u);
            g4_fnstatic_48b6cb2f9d[0] = ((uint32_t)(uintptr_t)&off_207CB68);
            _cxa_guard_release(g4_guard_6be2da90f8);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::Destroy,
              g4_fnstatic_48b6cb2f9d,
              &unk_20D1280);
          }
        }
      }
      else
      {
        v1 = (uint32_t *)(g4_fnstatic_e1769be281);
        if ( LOBYTE(g4_guard_a55326097d[0]) == 0
          && _cxa_guard_acquire(g4_guard_a55326097d) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_e1769be281,
            6u,
            3u);
          g4_fnstatic_e1769be281[0] = ((uint32_t)(uintptr_t)&off_207CC68);
          _cxa_guard_release(g4_guard_a55326097d);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::Destroy,
            g4_fnstatic_e1769be281,
            &unk_20D1280);
        }
      }
      return v1;
    case 4:
      v6 = a1[7];
      if ( v6 == 0 )
        goto LABEL_19;
      v18 = *(uint32_t *)((char *)a1 + v6 + 28);
      if ( v18 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_7f64e3fac5);
        if ( LOBYTE(g4_guard_6a05856dd9[0]) == 0
          && _cxa_guard_acquire(g4_guard_6a05856dd9) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_7f64e3fac5,
            6u,
            3u);
          g4_fnstatic_7f64e3fac5[0] = ((uint32_t)(uintptr_t)&off_207CD68);
          _cxa_guard_release(g4_guard_6a05856dd9);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::Destroy,
            g4_fnstatic_7f64e3fac5,
            &unk_20D1280);
        }
      }
      else if ( v18 != 0 )
      {
        v1 = nullptr;
        if ( v18 == 2 )
        {
LABEL_19:
          v1 = (uint32_t *)(g4_fnstatic_6af7250dec);
          if ( LOBYTE(g4_guard_9d50405a99[0]) == 0
            && _cxa_guard_acquire(g4_guard_9d50405a99) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_6af7250dec,
              6u,
              3u);
            g4_fnstatic_6af7250dec[0] = ((uint32_t)(uintptr_t)&off_207CCE8);
            _cxa_guard_release(g4_guard_9d50405a99);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::Destroy,
              g4_fnstatic_6af7250dec,
              &unk_20D1280);
          }
        }
      }

      else
      {
        v1 = (uint32_t *)(g4_fnstatic_b977fcf5e3);
        if ( LOBYTE(g4_guard_450c649db7[0]) == 0
          && _cxa_guard_acquire(g4_guard_450c649db7) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_b977fcf5e3,
            6u,
            3u);
          g4_fnstatic_b977fcf5e3[0] = ((uint32_t)(uintptr_t)&off_207CDE8);
          _cxa_guard_release(g4_guard_450c649db7);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::Destroy,
            g4_fnstatic_b977fcf5e3,
            &unk_20D1280);
        }
      }
      return v1;
    case 5:
      v10 = a1[7];
      if ( v10 == 0 )
        goto LABEL_35;
      v19 = *(uint32_t *)((char *)a1 + v10 + 28);
      if ( v19 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_a5392085d9);
        if ( LOBYTE(g4_guard_10e35f043d[0]) == 0
          && _cxa_guard_acquire(g4_guard_10e35f043d) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_a5392085d9,
            6u,
            4u);
          g4_fnstatic_a5392085d9[0] = ((uint32_t)(uintptr_t)&off_207C5E8);
          _cxa_guard_release(g4_guard_10e35f043d);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::Destroy,
            g4_fnstatic_a5392085d9,
            &unk_20D1280);
        }
      }
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
else if (v19 != 0)
{
        v1 = nullptr;
        if ( v19 == 2 )
        {
LABEL_35:
          v1 = (uint32_t *)(g4_fnstatic_ed04fc2e38);
          if ( LOBYTE(g4_guard_c5287139c9[0]) == 0
            && _cxa_guard_acquire(g4_guard_c5287139c9) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_ed04fc2e38,
              6u,
              4u);
            g4_fnstatic_ed04fc2e38[0] = ((uint32_t)(uintptr_t)&off_207C568);
            _cxa_guard_release(g4_guard_c5287139c9);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::Destroy,
              g4_fnstatic_ed04fc2e38,
              &unk_20D1280);
          }
        }
      }
      else
      {
        v1 = (uint32_t *)(g4_fnstatic_accde38ab3);
        if ( LOBYTE(g4_guard_d6159abe9e[0]) == 0
          && _cxa_guard_acquire(g4_guard_d6159abe9e) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_accde38ab3,
            6u,
            4u);
          g4_fnstatic_accde38ab3[0] = ((uint32_t)(uintptr_t)&off_207C668);
          _cxa_guard_release(g4_guard_d6159abe9e);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::Destroy,
            g4_fnstatic_accde38ab3,
            &unk_20D1280);
        }
      }
      return v1;
    case 6:
    case 7:
    case 8:
    case 9:
      v8 = a1[7];
      if ( v8 == 0 )
        goto LABEL_27;
      v22 = *(uint32_t *)((char *)a1 + v8 + 28);
      if ( v22 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_1ad28c918c);
        if ( LOBYTE(g4_guard_f7c1b3579d[0]) == 0
          && _cxa_guard_acquire(g4_guard_f7c1b3579d) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_1ad28c918c,
            6u,
            4u);
          g4_fnstatic_1ad28c918c[0] = ((uint32_t)(uintptr_t)&off_207C768);
          _cxa_guard_release(g4_guard_f7c1b3579d);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::Destroy,
            g4_fnstatic_1ad28c918c,
            &unk_20D1280);
        }
      }
      else if ( v22 != 0 )
      {
        v1 = nullptr;
        if ( v22 == 2 )
        {
LABEL_27:
          v1 = (uint32_t *)(g4_fnstatic_9d08110647);
          if ( LOBYTE(g4_guard_d26ed6d212[0]) == 0
            && _cxa_guard_acquire(g4_guard_d26ed6d212) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_9d08110647,
              6u,
              4u);
            g4_fnstatic_9d08110647[0] = ((uint32_t)(uintptr_t)&off_207C6E8);
            _cxa_guard_release(g4_guard_d26ed6d212);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::Destroy,
              g4_fnstatic_9d08110647,
              &unk_20D1280);
          }
        }
      }

      else
      {
        v1 = (uint32_t *)(g4_fnstatic_b9a2892b88);
        if ( LOBYTE(g4_guard_476a6fbc82[0]) == 0
          && _cxa_guard_acquire(g4_guard_476a6fbc82) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_b9a2892b88,
            6u,
            4u);
          g4_fnstatic_b9a2892b88[0] = ((uint32_t)(uintptr_t)&off_207C7E8);
          _cxa_guard_release(g4_guard_476a6fbc82);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::Destroy,
            g4_fnstatic_b9a2892b88,
            &unk_20D1280);
        }
      }
      return v1;
    case 0xA:
      v12 = a1[7];
      if ( v12 == 0 )
        goto LABEL_43;
      v23 = *(uint32_t *)((char *)a1 + v12 + 28);
      if ( v23 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_91a89bb5b6);
        if ( LOBYTE(g4_guard_f1d54dc057[0]) == 0
          && _cxa_guard_acquire(g4_guard_f1d54dc057) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_91a89bb5b6,
            6u,
            3u);
          g4_fnstatic_91a89bb5b6[0] = ((uint32_t)(uintptr_t)&off_207CEE8);
          _cxa_guard_release(g4_guard_f1d54dc057);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::Destroy,
            g4_fnstatic_91a89bb5b6,
            &unk_20D1280);
        }
      }
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
else if (v23 != 0)
{
        v1 = nullptr;
        if ( v23 == 2 )
        {
LABEL_43:
          v1 = (uint32_t *)(g4_fnstatic_b0a8e9b6f5);
          if ( LOBYTE(g4_guard_8818c87b43[0]) == 0
            && _cxa_guard_acquire(g4_guard_8818c87b43) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_b0a8e9b6f5,
              6u,
              3u);
            g4_fnstatic_b0a8e9b6f5[0] = ((uint32_t)(uintptr_t)&off_207CE68);
            _cxa_guard_release(g4_guard_8818c87b43);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::Destroy,
              g4_fnstatic_b0a8e9b6f5,
              &unk_20D1280);
          }
        }
      }
      else
      {
        v1 = (uint32_t *)(g4_fnstatic_5edc344fd2);
        if ( LOBYTE(g4_guard_281706ad0c[0]) == 0
          && _cxa_guard_acquire(g4_guard_281706ad0c) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_5edc344fd2,
            6u,
            3u);
          g4_fnstatic_5edc344fd2[0] = ((uint32_t)(uintptr_t)&off_207CF68);
          _cxa_guard_release(g4_guard_281706ad0c);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::Destroy,
            g4_fnstatic_5edc344fd2,
            &unk_20D1280);
        }
      }
      return v1;
    case 0xB:
      v7 = a1[7];
      if ( v7 == 0 )
        goto LABEL_23;
      v20 = *(uint32_t *)((char *)a1 + v7 + 28);
      if ( v20 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_e1f1954ca7);
        if ( LOBYTE(g4_guard_f45bbf2aff[0]) == 0
          && _cxa_guard_acquire(g4_guard_f45bbf2aff) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_e1f1954ca7,
            6u,
            3u);
          g4_fnstatic_e1f1954ca7[0] = ((uint32_t)(uintptr_t)&off_207D068);
          _cxa_guard_release(g4_guard_f45bbf2aff);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::Destroy,
            g4_fnstatic_e1f1954ca7,
            &unk_20D1280);
        }
      }
      else if ( v20 != 0 )
      {
        v1 = nullptr;
        if ( v20 == 2 )
        {
LABEL_23:
          v1 = (uint32_t *)(g4_fnstatic_c402463645);
          if ( LOBYTE(g4_guard_839a7afbda[0]) == 0
            && _cxa_guard_acquire(g4_guard_839a7afbda) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_c402463645,
              6u,
              3u);
            g4_fnstatic_c402463645[0] = ((uint32_t)(uintptr_t)&off_207CFE8);
            _cxa_guard_release(g4_guard_839a7afbda);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::Destroy,
              g4_fnstatic_c402463645,
              &unk_20D1280);
          }
        }
      }

      else
      {
        v1 = (uint32_t *)(g4_fnstatic_8bd640cfa7);
        if ( LOBYTE(g4_guard_7d7fad3f29[0]) == 0
          && _cxa_guard_acquire(g4_guard_7d7fad3f29) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_8bd640cfa7,
            6u,
            3u);
          g4_fnstatic_8bd640cfa7[0] = ((uint32_t)(uintptr_t)&off_207D0E8);
          _cxa_guard_release(g4_guard_7d7fad3f29);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::Destroy,
            g4_fnstatic_8bd640cfa7,
            &unk_20D1280);
        }
      }
      return v1;
    case 0xC:
      v11 = a1[7];
      if ( v11 == 0 )
        goto LABEL_39;
      v21 = *(uint32_t *)((char *)a1 + v11 + 28);
      if ( v21 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_4313606cc3);
        if ( LOBYTE(g4_guard_613c3a121a[0]) == 0
          && _cxa_guard_acquire(g4_guard_613c3a121a) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_4313606cc3,
            6u,
            3u);
          g4_fnstatic_4313606cc3[0] = ((uint32_t)(uintptr_t)&off_207D1E8);
          _cxa_guard_release(g4_guard_613c3a121a);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::Destroy,
            g4_fnstatic_4313606cc3,
            &unk_20D1280);
        }
      }
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
else if (v21 != 0)
{
        v1 = nullptr;
        if ( v21 == 2 )
        {
LABEL_39:
          v1 = (uint32_t *)(g4_fnstatic_243e8f3061);
          if ( LOBYTE(g4_guard_c719774b25[0]) == 0
            && _cxa_guard_acquire(g4_guard_c719774b25) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_243e8f3061,
              6u,
              3u);
            g4_fnstatic_243e8f3061[0] = ((uint32_t)(uintptr_t)&off_207D168);
            _cxa_guard_release(g4_guard_c719774b25);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::Destroy,
              g4_fnstatic_243e8f3061,
              &unk_20D1280);
          }
        }
      }
      else
      {
        v1 = (uint32_t *)(g4_fnstatic_872eb036c0);
        if ( LOBYTE(g4_guard_a998351c92[0]) == 0
          && _cxa_guard_acquire(g4_guard_a998351c92) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_872eb036c0,
            6u,
            3u);
          g4_fnstatic_872eb036c0[0] = ((uint32_t)(uintptr_t)&off_207D268);
          _cxa_guard_release(g4_guard_a998351c92);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::Destroy,
            g4_fnstatic_872eb036c0,
            &unk_20D1280);
        }
      }
      return v1;
    case 0xD:
      v9 = a1[7];
      if ( v9 == 0 )
        goto LABEL_31;
      v17 = *(uint32_t *)((char *)a1 + v9 + 28);
      if ( v17 == 1 )
      {
        v1 = (uint32_t *)(g4_fnstatic_f1af529e8e);
        if ( LOBYTE(g4_guard_2705629b60[0]) == 0
          && _cxa_guard_acquire(g4_guard_2705629b60) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_f1af529e8e,
            6u,
            3u);
          g4_fnstatic_f1af529e8e[0] = ((uint32_t)(uintptr_t)&off_207D368);
          _cxa_guard_release(g4_guard_2705629b60);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::Destroy,
            g4_fnstatic_f1af529e8e,
            &unk_20D1280);
        }
      }
      else if ( v17 != 0 )
      {
        v1 = nullptr;
        if ( v17 == 2 )
        {
LABEL_31:
          v1 = (uint32_t *)(g4_fnstatic_581b20a6bd);
          if ( LOBYTE(g4_guard_e254b606f5[0]) == 0
            && _cxa_guard_acquire(g4_guard_e254b606f5) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_581b20a6bd,
              6u,
              3u);
            g4_fnstatic_581b20a6bd[0] = ((uint32_t)(uintptr_t)&off_207D2E8);
            _cxa_guard_release(g4_guard_e254b606f5);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::Destroy,
              g4_fnstatic_581b20a6bd,
              &unk_20D1280);
          }
        }
      }

      else
      {
        v1 = (uint32_t *)(g4_fnstatic_8f79b6c075);
        if ( LOBYTE(g4_guard_0cceb7df69[0]) == 0
          && _cxa_guard_acquire(g4_guard_0cceb7df69) != 0 )
        {
          glitch::collada::CAnimationTrackEx::Construct(
            (int)(uintptr_t)g4_fnstatic_8f79b6c075,
            6u,
            3u);
          g4_fnstatic_8f79b6c075[0] = ((uint32_t)(uintptr_t)&off_207D3E8);
          _cxa_guard_release(g4_guard_0cceb7df69);
          __cxa_atexit(
            (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::Destroy,
            g4_fnstatic_8f79b6c075,
            &unk_20D1280);
        }
      }
      return v1;
    case 0xE:
      v1 = (uint32_t *)(g4_fnstatic_70fec2a8b9);
      if ( LOBYTE(g4_guard_16f6f7130f[0]) == 0
        && _cxa_guard_acquire(g4_guard_16f6f7130f) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_70fec2a8b9,
          6u,
          1u);
        g4_fnstatic_70fec2a8b9[0] = ((uint32_t)(uintptr_t)&off_207D468);
        _cxa_guard_release(g4_guard_16f6f7130f);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::Destroy,
          g4_fnstatic_70fec2a8b9,
          &unk_20D1280);
      }
      return v1;
    case 0xF:
      v1 = (uint32_t *)(g4_fnstatic_89dbeab342);
      if ( LOBYTE(g4_guard_c0776f3132[0]) == 0
        && _cxa_guard_acquire(g4_guard_c0776f3132) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_89dbeab342,
          6u,
          1u);
        g4_fnstatic_89dbeab342[0] = ((uint32_t)(uintptr_t)&off_207D4E8);
        _cxa_guard_release(g4_guard_c0776f3132);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::Destroy,
          g4_fnstatic_89dbeab342,
          &unk_20D1280);
      }
      return v1;
    case 0x10:
      v1 = (uint32_t *)(g4_fnstatic_235f268a89);
      if ( LOBYTE(g4_guard_7f941fccff[0]) == 0
        && _cxa_guard_acquire(g4_guard_7f941fccff) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_235f268a89,
          6u,
          1u);
        g4_fnstatic_235f268a89[0] = ((uint32_t)(uintptr_t)&off_207D568);
        _cxa_guard_release(g4_guard_7f941fccff);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::Destroy,
          g4_fnstatic_235f268a89,
          &unk_20D1280);
      }
      return v1;
    case 0x11:
      v1 = (uint32_t *)(g4_fnstatic_a53f21ef0d);
      if ( LOBYTE(g4_guard_68c84cedc0[0]) == 0
        && _cxa_guard_acquire(g4_guard_68c84cedc0) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_a53f21ef0d,
          6u,
          1u);
        g4_fnstatic_a53f21ef0d[0] = ((uint32_t)(uintptr_t)&off_207D5E8);
        _cxa_guard_release(g4_guard_68c84cedc0);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::Destroy,
          g4_fnstatic_a53f21ef0d,
          &unk_20D1280);
      }
      return v1;
    case 0x12:
      return (uint32_t *)(glitch::collada::animation_track::CWeightEx::s_Instance);
    case 0x13:
      v1 = (uint32_t *)(g4_fnstatic_84828ebece);
      if ( LOBYTE(g4_guard_7f8a583c96[0]) == 0
        && _cxa_guard_acquire(g4_guard_7f8a583c96) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_84828ebece,
          0,
          3u);
        g4_fnstatic_84828ebece[0] = ((uint32_t)(uintptr_t)&off_207D668);
        _cxa_guard_release(g4_guard_7f8a583c96);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::Destroy,
          g4_fnstatic_84828ebece,
          &unk_20D1280);
      }
      return v1;
    case 0x14:
      v1 = (uint32_t *)(g4_fnstatic_76e1cf7686);
      if ( LOBYTE(g4_guard_7ec2fba7aa[0]) == 0
        && _cxa_guard_acquire(g4_guard_7ec2fba7aa) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_76e1cf7686,
          6u,
          1u);
        g4_fnstatic_76e1cf7686[0] = ((uint32_t)(uintptr_t)&off_207D6E8);
        _cxa_guard_release(g4_guard_7ec2fba7aa);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::Destroy,
          g4_fnstatic_76e1cf7686,
          &unk_20D1280);
      }
      return v1;
    case 0x18:
      return (uint32_t *)(glitch::collada::animation_track::CVisibilityEx::s_Instance);
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x58:
    case 0x5D:
      return (uint32_t *)(glitch::collada::animation_track::CFloatEx::s_Instance);
    case 0x24:
    case 0x28:
    case 0x2C:
    case 0x33:
    case 0x37:
    case 0x44:
    case 0x59:
      v1 = (uint32_t *)(g4_fnstatic_afcd01af5d);
      if ( LOBYTE(g4_guard_73080c4b44[0]) == 0
        && _cxa_guard_acquire(g4_guard_73080c4b44) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_afcd01af5d,
          6u,
          3u);
        g4_fnstatic_afcd01af5d[0] = ((uint32_t)(uintptr_t)&off_207D768);
        _cxa_guard_release(g4_guard_73080c4b44);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::Destroy,
          g4_fnstatic_afcd01af5d,
          &unk_20D1280);
      }
      return v1;
    case 0x25:
    case 0x29:
    case 0x2D:
    case 0x34:
    case 0x38:
    case 0x45:
    case 0x5A:
      v1 = (uint32_t *)(g4_fnstatic_69f150382b);
      if ( LOBYTE(g4_guard_14268a6891[0]) == 0
        && _cxa_guard_acquire(g4_guard_14268a6891) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_69f150382b,
          6u,
          3u);
        g4_fnstatic_69f150382b[0] = ((uint32_t)(uintptr_t)&off_207D7E8);
        _cxa_guard_release(g4_guard_14268a6891);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::Destroy,
          g4_fnstatic_69f150382b,
          &unk_20D1280);
      }
      return v1;
    case 0x26:
    case 0x2A:
    case 0x2E:
    case 0x35:
    case 0x39:
    case 0x46:
    case 0x5B:
      v1 = (uint32_t *)(g4_fnstatic_88b0a933d7);
      if ( LOBYTE(g4_guard_b28e034c24[0]) == 0
        && _cxa_guard_acquire(g4_guard_b28e034c24) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_88b0a933d7,
          6u,
          3u);
        g4_fnstatic_88b0a933d7[0] = ((uint32_t)(uintptr_t)&off_207D868);
        _cxa_guard_release(g4_guard_b28e034c24);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::Destroy,
          g4_fnstatic_88b0a933d7,
          &unk_20D1280);
      }
      return v1;
    case 0x27:
    case 0x2B:
    case 0x2F:
    case 0x36:
    case 0x3A:
    case 0x47:
    case 0x5C:
      v1 = (uint32_t *)(g4_fnstatic_a7a194b715);
      if ( LOBYTE(g4_guard_a049dd8ea2[0]) == 0
        && _cxa_guard_acquire(g4_guard_a049dd8ea2) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_a7a194b715,
          6u,
          3u);
        g4_fnstatic_a7a194b715[0] = ((uint32_t)(uintptr_t)&off_207D8E8);
        _cxa_guard_release(g4_guard_a049dd8ea2);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::Destroy,
          g4_fnstatic_a7a194b715,
          &unk_20D1280);
      }
      return v1;
    case 0x4D:
      v1 = (uint32_t *)(g4_fnstatic_2469f3fa0d);
      if ( LOBYTE(g4_guard_9fadcc1f37[0]) == 0
        && _cxa_guard_acquire(g4_guard_9fadcc1f37) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_2469f3fa0d,
          6u,
          5u);
        g4_fnstatic_2469f3fa0d[0] = ((uint32_t)(uintptr_t)&off_207D968);
        _cxa_guard_release(g4_guard_9fadcc1f37);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::Destroy,
          g4_fnstatic_2469f3fa0d,
          &unk_20D1280);
      }
      return v1;
    case 0x53:
      v1 = (uint32_t *)(g4_fnstatic_4002a44d4d);
      if ( LOBYTE(g4_guard_e61c70a77d[0]) == 0
        && _cxa_guard_acquire(g4_guard_7ce07a8398) != 0 )
      {
        glitch::collada::CAnimationTrackEx::Construct(
          (int)(uintptr_t)g4_fnstatic_4002a44d4d,
          0,
          4u);
        g4_fnstatic_4002a44d4d[0] = ((uint32_t)(uintptr_t)&off_207F988);
        _cxa_guard_release(g4_guard_e61c70a77d);
        __cxa_atexit(
          (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::Destroy,
          g4_fnstatic_4ba97c92f5,
          &unk_20D1280);
      }
      return v1;
    case 0x6D:
      v13 = *(uint32_t *)((char *)a1 + a1[2] + 24);
      if ( v13 != 1 )
      {
        if ( v13 != 6 )
          return nullptr;
        v24 = *(uint32_t *)((char *)a1 + a1[2] + 28);
        switch ( v24 )
        {
          case 1:
            if ( byte_20E0710 == 0 && _cxa_guard_acquire((__guard *)&byte_20E0710) != 0 )
            {
              dword_20E0720[0] = (uint32_t)(uintptr_t)(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getInstance());
              dword_20E0724 = (uint32_t)(uintptr_t)(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getInstance());
              dword_20E0734 = (uint32_t)(uintptr_t)(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::getInstance());
              if ( LOBYTE(g4_guard_1f391104a6[0]) == 0
                && _cxa_guard_acquire(g4_guard_1f391104a6) != 0 )
              {
                glitch::collada::CAnimationTrackEx::Construct(
                  (int)(uintptr_t)g4_fnstatic_cf9b0cf2a5,
                  6u,
                  2u);
                g4_fnstatic_cf9b0cf2a5[0] = ((uint32_t)(uintptr_t)&off_207D9E8);
                _cxa_guard_release(g4_guard_1f391104a6);
                __cxa_atexit(
                  (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_bd9a4d::Destroy,
                  g4_fnstatic_cf9b0cf2a5,
                  &unk_20D1280);
              }
              dword_20E0738 = (int)(uintptr_t)g4_fnstatic_cf9b0cf2a5;
              if ( LOBYTE(g4_guard_e36021604b[0]) == 0
                && _cxa_guard_acquire(g4_guard_e36021604b) != 0 )
              {
                glitch::collada::CAnimationTrackEx::Construct(
                  (int)(uintptr_t)g4_fnstatic_5bd04e6586,
                  6u,
                  2u);
                g4_fnstatic_5bd04e6586[0] = ((uint32_t)(uintptr_t)&off_207DA68);
                _cxa_guard_release(g4_guard_e36021604b);
                __cxa_atexit(
                  (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::Destroy,
                  g4_fnstatic_5bd04e6586,
                  &unk_20D1280);
              }
              dword_20E073C = (int)(uintptr_t)g4_fnstatic_5bd04e6586;
              dword_20E0748 = (uint32_t)(uintptr_t)(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getInstance());
              dword_20E074C = (uint32_t)(uintptr_t)(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getInstance());
              dword_20E0750 = (uint32_t)(uintptr_t)(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getInstance());
              dword_20E0754 = (uint32_t)(uintptr_t)(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getInstance());
              dword_20E075C = (uint32_t)(uintptr_t)(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getInstance());
              if ( LOBYTE(g4_guard_aa26127318[0]) == 0
                && _cxa_guard_acquire(g4_guard_aa26127318) != 0 )
              {
                glitch::collada::CAnimationTrackEx::Construct(
                  (int)(uintptr_t)g4_fnstatic_eb19216e30,
                  6u,
                  4u);
                g4_fnstatic_eb19216e30[0] = ((uint32_t)(uintptr_t)&off_207DAE8);
                _cxa_guard_release(g4_guard_aa26127318);
                __cxa_atexit(
                  (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::Destroy,
                  g4_fnstatic_eb19216e30,
                  &unk_20D1280);
              }
              dword_20E0760 = (int)(uintptr_t)g4_fnstatic_eb19216e30;
              if ( LOBYTE(g4_guard_08c50a3f8f[0]) == 0
                && _cxa_guard_acquire(g4_guard_08c50a3f8f) != 0 )
              {
                glitch::collada::CAnimationTrackEx::Construct(
                  (int)(uintptr_t)g4_fnstatic_e3b7d65eb2,
                  6u,
                  4u);
                g4_fnstatic_e3b7d65eb2[0] = ((uint32_t)(uintptr_t)&off_207DB68);
                _cxa_guard_release(g4_guard_08c50a3f8f);
                __cxa_atexit(
                  (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::Destroy,
                  g4_fnstatic_e3b7d65eb2,
                  &unk_20D1280);
              }
              dword_20E0764 = (int)(uintptr_t)g4_fnstatic_e3b7d65eb2;
              if ( LOBYTE(g4_guard_5d6eb59b7e[0]) == 0
                && _cxa_guard_acquire(g4_guard_5d6eb59b7e) != 0 )
              {
                glitch::collada::CAnimationTrackEx::Construct(
                  (int)(uintptr_t)g4_fnstatic_279a76c190,
                  6u,
                  4u);
                g4_fnstatic_279a76c190[0] = ((uint32_t)(uintptr_t)&off_207DBE8);
                _cxa_guard_release(g4_guard_5d6eb59b7e);
                __cxa_atexit(
                  (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::Destroy,
                  g4_fnstatic_279a76c190,
                  &unk_20D1280);
              }
              dword_20E0768 = (int)(uintptr_t)g4_fnstatic_279a76c190;
              if ( LOBYTE(g4_guard_21358398fc[0]) == 0
                && _cxa_guard_acquire(g4_guard_21358398fc) != 0 )
              {
                glitch::collada::CAnimationTrackEx::Construct(
                  (int)(uintptr_t)g4_fnstatic_3e0698616f,
                  6u,
                  4u);
                g4_fnstatic_3e0698616f[0] = ((uint32_t)(uintptr_t)&off_207DC68);
                _cxa_guard_release(g4_guard_21358398fc);
                __cxa_atexit(
                  (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::Destroy,
                  g4_fnstatic_3e0698616f,
                  &unk_20D1280);
              }
              dword_20E076C = (int)(uintptr_t)g4_fnstatic_3e0698616f;
              _cxa_guard_release((__guard *)&byte_20E0710);
            }
            v25 = a1[6];
            v26 = 0;
            v27 = 0;
            if ( v25 != 0 )
            {
              v28 = *(uint32_t *)((char *)a1 + v25 + 28);
              v29 = *(uint32_t *)((char *)a1 + v25 + 24);
              v27 = 2;
              v26 = v28 - 1;
              if ( v29 != 2 )
              {
                if ( v29 > 2 )
                {
                  v27 = 3;
                  if ( v29 == 4 )
                    return (uint32_t *)dword_20E0720[5 * v26 + v27];
                  LOBYTE(v27) = 4;
                  if ( v29 == 8 )
                    return (uint32_t *)dword_20E0720[5 * v26 + v27];
                  goto LABEL_139;
                }
                LOBYTE(v27) = 1;
                if ( v29 != 1 )
                {
LABEL_139:
                  v26 = v28 - 1;
                  v27 = 0;
                }
              }
            }
            return (uint32_t *)dword_20E0720[5 * v26 + v27];
          case 2:
            return (uint32_t *)glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::getInstance();
          case 3:
            return (uint32_t *)glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getInstance();
          case 4:
            return (uint32_t *)glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getInstance();
          default:
            return nullptr;
        }
      }
      v30 = *(uint32_t *)((char *)a1 + a1[2] + 28);
      switch ( v30 )
      {
        case 1:
          v31 = a1[6];
          v32 = nullptr;
          if ( v31 != 0 )
            v32 = (uint32_t *)((char *)a1 + v31 + 24);
          v1 = nullptr;
          if ( (int)v32[1] > 1 )
          {
            switch ( *v32 )
            {
              case 1:
                if ( LOBYTE(g4_guard_7cb03fd517[0]) != 0 )
                {
                  v1 = (uint32_t *)(g4_fnstatic_adef253ceb);
                }
                else
                {
                  v1 = (uint32_t *)(g4_fnstatic_adef253ceb);
                  if ( _cxa_guard_acquire(g4_guard_7cb03fd517) != 0 )
                  {
                    glitch::collada::CAnimationTrackEx::Construct(
                      (int)(uintptr_t)g4_fnstatic_adef253ceb,
                      0,
                      4u);
                    g4_fnstatic_adef253ceb[0] = ((uint32_t)(uintptr_t)&off_207DCE8);
                    _cxa_guard_release(g4_guard_7cb03fd517);
                    __cxa_atexit(
                      (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::Destroy,
                      g4_fnstatic_adef253ceb,
                      &unk_20D1280);
                  }
                }
                break;
              case 2:
                if ( LOBYTE(g4_guard_f66a5bf45c[0]) != 0 )
                {
                  v1 = (uint32_t *)(g4_fnstatic_c8b8ad8588);
                }
                else
                {
                  v1 = (uint32_t *)(g4_fnstatic_c8b8ad8588);
                  if ( _cxa_guard_acquire(g4_guard_f66a5bf45c) != 0 )
                  {
                    glitch::collada::CAnimationTrackEx::Construct(
                      (int)(uintptr_t)g4_fnstatic_c8b8ad8588,
                      0,
                      4u);
                    g4_fnstatic_c8b8ad8588[0] = ((uint32_t)(uintptr_t)&off_207DD68);
                    _cxa_guard_release(g4_guard_f66a5bf45c);
                    __cxa_atexit(
                      (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::Destroy,
                      g4_fnstatic_c8b8ad8588,
                      &unk_20D1280);
                  }
                }
                break;
              case 4:
                if ( LOBYTE(g4_guard_e52183e4b6[0]) != 0 )
                {
                  v1 = (uint32_t *)(g4_fnstatic_b10aa8ac17);
                }
                else
                {
                  v1 = (uint32_t *)(g4_fnstatic_b10aa8ac17);
                  if ( _cxa_guard_acquire(g4_guard_e52183e4b6) != 0 )
                  {
                    glitch::collada::CAnimationTrackEx::Construct(
                      (int)(uintptr_t)g4_fnstatic_b10aa8ac17,
                      0,
                      4u);
                    g4_fnstatic_b10aa8ac17[0] = ((uint32_t)(uintptr_t)&off_207DDE8);
                    _cxa_guard_release(g4_guard_e52183e4b6);
                    __cxa_atexit(
                      (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::Destroy,
                      g4_fnstatic_b10aa8ac17,
                      &unk_20D1280);
                  }
                }
                break;
              case 8:
                if ( LOBYTE(g4_guard_6e8171b07e[0]) != 0 )
                {
                  v1 = (uint32_t *)(g4_fnstatic_605b953bf5);
                }
                else
                {
                  v1 = (uint32_t *)(g4_fnstatic_605b953bf5);
                  if ( _cxa_guard_acquire(g4_guard_6e8171b07e) != 0 )
                  {
                    glitch::collada::CAnimationTrackEx::Construct(
                      (int)(uintptr_t)g4_fnstatic_605b953bf5,
                      0,
                      4u);
                    g4_fnstatic_605b953bf5[0] = ((uint32_t)(uintptr_t)&off_207DE68);
                    _cxa_guard_release(g4_guard_6e8171b07e);
                    __cxa_atexit(
                      (void (*)(void *))glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::Destroy,
                      g4_fnstatic_605b953bf5,
                      &unk_20D1280);
                  }
                }
                break;
              case 0xF:
                return (uint32_t *)glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getInstance();
              default:
                v1 = nullptr;
                break;
            }
          }
          break;
        case 3:
          v1 = (uint32_t *)(g4_fnstatic_634bba05a6);
          if ( LOBYTE(g4_guard_02c382a3d1[0]) == 0
            && _cxa_guard_acquire(g4_guard_02c382a3d1) != 0 )
          {
            glitch::collada::CAnimationTrackEx::Construct(
              (int)(uintptr_t)g4_fnstatic_634bba05a6,
              0,
              3u);
            g4_fnstatic_634bba05a6[0] = ((uint32_t)(uintptr_t)&off_207DEE8);
            _cxa_guard_release(g4_guard_02c382a3d1);
            __cxa_atexit(
              (void (*)(void *))glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::Destroy,
              g4_fnstatic_634bba05a6,
              &unk_20D1280);
          }
          break;
        case 4:
          return (uint32_t *)glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getInstance();
        default:
          return nullptr;
      }
      return v1;
    case 0x6E:
    case 0x6F:
    case 0x70:
    case 0x71:
    case 0x72:
      return (uint32_t *)(glitch::collada::animation_track::CTextureTransformEx::Instance);
    default:
      return nullptr;
  }
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::postLoadProcess  (binary VA: 0xdb6d80)
// Original: glitch::collada::CResFileManager::postLoadProcess
// ----------------------------------------------------------------------------
int glitch::collada::CResFileManager::postLoadProcess(glitch::collada::CResFileManager::Self *self, volatile int32_t ***a2, glitch::collada::CColladaDatabase::Self *a3, const boost::intrusive_ptr<glitch::io::IReadFile> *a4)
{
  uint32_t *v5;
  int i;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  int k;
  char *v13;
  unsigned int v14;
  int v15;
  char *v16;
  int *v17;
  uint32_t *v18;
  int v19;
  char *v20;
  bool v21;
  char *v22;
  int v23;
  int *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  int m;
  char *v32;
  unsigned int v33;
  int v34;
  int *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  int *v40;
  int v41;
  uint32_t *v42;
  bool v43;
  uint32_t *v44;
  int v45;
  int *v46;
  int v47;
  int v48;
  int v49;
  int n;
  char *v51;
  unsigned int v52;
  int v53;
  int *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  int *v59;
  int v60;
  uint32_t *v61;
  bool v62;
  uint32_t *v63;
  int v64;
  int *v65;
  int v66;
  int v67;
  int v68;
  int ii;
  char *v70;
  unsigned int v71;
  int v72;
  int *v73;
  uint32_t *v74;
  uint32_t *v75;
  uint32_t *v76;
  uint32_t *v77;
  int *v78;
  int v79;
  uint32_t *v80;
  bool v81;
  uint32_t *v82;
  int v83;
  int *v84;
  int v85;
  int v86;
  int v87;
  int jj;
  char *v89;
  unsigned int v90;
  int v91;
  int *v92;
  uint32_t *v93;
  uint32_t *v94;
  uint32_t *v95;
  uint32_t *v96;
  int *v97;
  int v98;
  uint32_t *v99;
  bool v100;
  uint32_t *v101;
  int v102;
  int *v103;
  int v104;
  int v105;
  uint32_t *v106;
  int v107;
  uint32_t *Controller;
  int v109;
  int v110;
  int v111;
  int kk;
  int *v113;
  int v114;
  int mm;
  int GNPSEmitter;
  int v117;
  char *v118;
  int v119;
  char *v120;
  int Node;
  int v122;
  char *v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int VisualScene;
  int v129;
  int v130;
  uint32_t *v131;
  uint32_t *v132;
  uint32_t *v133;
  uint32_t *v134;
  uint32_t *v135;
  uint32_t *v136;
  uint32_t *v137;
  uint32_t *v138;
  char *v139;
  const char *v140;
  const char **Effect;
  int v142;
  int Version;
  const char *v144;
  char **v145;
  char *v146;
  char *v147;
  char *v148;
  int v149;
  volatile int32_t **v150;
  char *v151;
  typedef int _g4_t_v152;
  typedef char *_g4_t_v153;
  typedef char *_g4_t_v154;
  typedef char *_g4_t_v155;
  typedef char *_g4_t_v156;
  typedef char *_g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_j;
  typedef int _g4_t_v163;
  typedef uint32_t *_g4_t_v164;
  typedef uint32_t *_g4_t_v165;
  typedef glitch::collada::CResFileManager::Self *_g4_t_v166;
  typedef const boost::intrusive_ptr<glitch::collada::CResFile> *_g4_t_v167;
  typedef int _g4_t_Geometry;
  typedef uint32_t *_g4_t_v169;
  typedef char *_g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef int _g4_t_v181;
  typedef int _g4_t_v182;
  typedef int _g4_t_v183;
  typedef int _g4_t_v184;
  typedef int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef int _g4_t_nn;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef int _g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef int *_g4_t_v193;
  typedef const boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef int *_g4_t_v197;
  typedef int _g4_t_v198;
  typedef int *_g4_t_v199;
  typedef int _g4_t_v200;
  typedef int *_g4_t_v201;
  typedef int _g4_t_v202;
  typedef int *_g4_t_v203;
  typedef int _g4_t_v204;
  typedef int *_g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef void (*_g4_t_v209)(char **);
  typedef int *_g4_t_v210;
  typedef char *_g4_t_v211[4];
  typedef int _g4_t_v212[4];
  typedef char *_g4_t_v213;
  typedef char *_g4_t_v214;
  typedef volatile int32_t **_g4_t_v215[8];
  typedef volatile int32_t **_g4_t_v216;
  typedef volatile int32_t **_g4_t_v217;
  typedef volatile int32_t **_g4_t_v218[5];
  typedef volatile int32_t **_g4_t_v219[11];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v152)) > _g4_s0 ? (4u + sizeof(_g4_t_v152)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v153)) > _g4_s1 ? (32u + sizeof(_g4_t_v153)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v154)) > _g4_s2 ? (32u + sizeof(_g4_t_v154)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v155)) > _g4_s3 ? (32u + sizeof(_g4_t_v155)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v156)) > _g4_s4 ? (32u + sizeof(_g4_t_v156)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v157)) > _g4_s5 ? (32u + sizeof(_g4_t_v157)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v158)) > _g4_s6 ? (40u + sizeof(_g4_t_v158)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v159)) > _g4_s7 ? (40u + sizeof(_g4_t_v159)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v160)) > _g4_s8 ? (44u + sizeof(_g4_t_v160)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v161)) > _g4_s9 ? (44u + sizeof(_g4_t_v161)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_j)) > _g4_s10 ? (48u + sizeof(_g4_t_j)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v163)) > _g4_s11 ? (48u + sizeof(_g4_t_v163)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v164)) > _g4_s12 ? (52u + sizeof(_g4_t_v164)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v165)) > _g4_s13 ? (52u + sizeof(_g4_t_v165)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v166)) > _g4_s14 ? (56u + sizeof(_g4_t_v166)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v167)) > _g4_s15 ? (60u + sizeof(_g4_t_v167)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_Geometry)) > _g4_s16 ? (64u + sizeof(_g4_t_Geometry)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v169)) > _g4_s17 ? (68u + sizeof(_g4_t_v169)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v170)) > _g4_s18 ? (72u + sizeof(_g4_t_v170)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v171)) > _g4_s19 ? (72u + sizeof(_g4_t_v171)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v172)) > _g4_s20 ? (76u + sizeof(_g4_t_v172)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v173)) > _g4_s21 ? (76u + sizeof(_g4_t_v173)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v174)) > _g4_s22 ? (76u + sizeof(_g4_t_v174)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v175)) > _g4_s23 ? (76u + sizeof(_g4_t_v175)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v176)) > _g4_s24 ? (76u + sizeof(_g4_t_v176)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v177)) > _g4_s25 ? (76u + sizeof(_g4_t_v177)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v178)) > _g4_s26 ? (76u + sizeof(_g4_t_v178)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v179)) > _g4_s27 ? (80u + sizeof(_g4_t_v179)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v180)) > _g4_s28 ? (80u + sizeof(_g4_t_v180)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v181)) > _g4_s29 ? (80u + sizeof(_g4_t_v181)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v182)) > _g4_s30 ? (80u + sizeof(_g4_t_v182)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v183)) > _g4_s31 ? (80u + sizeof(_g4_t_v183)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v184)) > _g4_s32 ? (80u + sizeof(_g4_t_v184)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v185)) > _g4_s33 ? (80u + sizeof(_g4_t_v185)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v186)) > _g4_s34 ? (80u + sizeof(_g4_t_v186)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_nn)) > _g4_s35 ? (80u + sizeof(_g4_t_nn)) : _g4_s35,
    _g4_s37 = (84u + sizeof(_g4_t_v188)) > _g4_s36 ? (84u + sizeof(_g4_t_v188)) : _g4_s36,
    _g4_s38 = (84u + sizeof(_g4_t_v189)) > _g4_s37 ? (84u + sizeof(_g4_t_v189)) : _g4_s37,
    _g4_s39 = (84u + sizeof(_g4_t_v190)) > _g4_s38 ? (84u + sizeof(_g4_t_v190)) : _g4_s38,
    _g4_s40 = (84u + sizeof(_g4_t_v191)) > _g4_s39 ? (84u + sizeof(_g4_t_v191)) : _g4_s39,
    _g4_s41 = (84u + sizeof(_g4_t_v192)) > _g4_s40 ? (84u + sizeof(_g4_t_v192)) : _g4_s40,
    _g4_s42 = (84u + sizeof(_g4_t_v193)) > _g4_s41 ? (84u + sizeof(_g4_t_v193)) : _g4_s41,
    _g4_s43 = (88u + sizeof(_g4_t_v194)) > _g4_s42 ? (88u + sizeof(_g4_t_v194)) : _g4_s42,
    _g4_s44 = (88u + sizeof(_g4_t_v195)) > _g4_s43 ? (88u + sizeof(_g4_t_v195)) : _g4_s43,
    _g4_s45 = (88u + sizeof(_g4_t_v196)) > _g4_s44 ? (88u + sizeof(_g4_t_v196)) : _g4_s44,
    _g4_s46 = (88u + sizeof(_g4_t_v197)) > _g4_s45 ? (88u + sizeof(_g4_t_v197)) : _g4_s45,
    _g4_s47 = (88u + sizeof(_g4_t_v198)) > _g4_s46 ? (88u + sizeof(_g4_t_v198)) : _g4_s46,
    _g4_s48 = (88u + sizeof(_g4_t_v199)) > _g4_s47 ? (88u + sizeof(_g4_t_v199)) : _g4_s47,
    _g4_s49 = (88u + sizeof(_g4_t_v200)) > _g4_s48 ? (88u + sizeof(_g4_t_v200)) : _g4_s48,
    _g4_s50 = (88u + sizeof(_g4_t_v201)) > _g4_s49 ? (88u + sizeof(_g4_t_v201)) : _g4_s49,
    _g4_s51 = (88u + sizeof(_g4_t_v202)) > _g4_s50 ? (88u + sizeof(_g4_t_v202)) : _g4_s50,
    _g4_s52 = (88u + sizeof(_g4_t_v203)) > _g4_s51 ? (88u + sizeof(_g4_t_v203)) : _g4_s51,
    _g4_s53 = (88u + sizeof(_g4_t_v204)) > _g4_s52 ? (88u + sizeof(_g4_t_v204)) : _g4_s52,
    _g4_s54 = (88u + sizeof(_g4_t_v205)) > _g4_s53 ? (88u + sizeof(_g4_t_v205)) : _g4_s53,
    _g4_s55 = (88u + sizeof(_g4_t_v206)) > _g4_s54 ? (88u + sizeof(_g4_t_v206)) : _g4_s54,
    _g4_s56 = (88u + sizeof(_g4_t_v207)) > _g4_s55 ? (88u + sizeof(_g4_t_v207)) : _g4_s55,
    _g4_s57 = (88u + sizeof(_g4_t_v208)) > _g4_s56 ? (88u + sizeof(_g4_t_v208)) : _g4_s56,
    _g4_s58 = (88u + sizeof(_g4_t_v209)) > _g4_s57 ? (88u + sizeof(_g4_t_v209)) : _g4_s57,
    _g4_s59 = (88u + sizeof(_g4_t_v210)) > _g4_s58 ? (88u + sizeof(_g4_t_v210)) : _g4_s58,
    _g4_s60 = (92u + sizeof(_g4_t_v211)) > _g4_s59 ? (92u + sizeof(_g4_t_v211)) : _g4_s59,
    _g4_s61 = (108u + sizeof(_g4_t_v212)) > _g4_s60 ? (108u + sizeof(_g4_t_v212)) : _g4_s60,
    _g4_s62 = (124u + sizeof(_g4_t_v213)) > _g4_s61 ? (124u + sizeof(_g4_t_v213)) : _g4_s61,
    _g4_s63 = (136u + sizeof(_g4_t_v214)) > _g4_s62 ? (136u + sizeof(_g4_t_v214)) : _g4_s62,
    _g4_s64 = (140u + sizeof(_g4_t_v215)) > _g4_s63 ? (140u + sizeof(_g4_t_v215)) : _g4_s63,
    _g4_s65 = (172u + sizeof(_g4_t_v216)) > _g4_s64 ? (172u + sizeof(_g4_t_v216)) : _g4_s64,
    _g4_s66 = (176u + sizeof(_g4_t_v217)) > _g4_s65 ? (176u + sizeof(_g4_t_v217)) : _g4_s65,
    _g4_s67 = (196u + sizeof(_g4_t_v218)) > _g4_s66 ? (196u + sizeof(_g4_t_v218)) : _g4_s66,
    _g4_s68 = (216u + sizeof(_g4_t_v219)) > _g4_s67 ? (216u + sizeof(_g4_t_v219)) : _g4_s67
  };
  alignas(16) uint8_t _g4_sf[_g4_s68];
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 4u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 32u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 32u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 32u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 32u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 32u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 40u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 40u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 44u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 44u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 48u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 48u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 52u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 52u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 56u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 60u);
  _g4_t_Geometry &Geometry = *reinterpret_cast<_g4_t_Geometry *>(_g4_sf + 64u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 68u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 72u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 72u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 76u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 76u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 76u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 76u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 76u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 76u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 76u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 80u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 80u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 80u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 80u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 80u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 80u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 80u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 80u);
  _g4_t_nn &nn = *reinterpret_cast<_g4_t_nn *>(_g4_sf + 80u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 84u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 84u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 84u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 84u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 84u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 84u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 88u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 88u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 88u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 88u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 88u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 88u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 88u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 88u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 88u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 88u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 88u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 88u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 88u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 88u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 88u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 88u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 88u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 92u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 108u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 124u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 136u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 140u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 172u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 176u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 196u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 216u);

  v219[7] = (volatile int32_t **)&self;
  v167 = (const boost::intrusive_ptr<glitch::collada::CResFile> *)a2;
  v166 = self;
  v194 = a4;
  v215[0] = *a2;
  v169 = *((uint32_t **)v215[0][4] + 8);
  sub_8B1B00((volatile int32_t *)v215[0] + 1);
  v215[1] = (volatile int32_t **)&glitch::collada::CColladaDatabase::DefaultFactory;
  memset(&v215[2], 0, 12);
  if ( v169[4] != 0 )
    goto LABEL_2;
  if ( strcmp(
         (const char *)glitch::collada::CColladaDatabase::getVersion((glitch::collada::CColladaDatabase::Self *)v215),
         "0,0,0,876") == 0 )
  {
    if ( *(uint32_t *)(*(uint32_t *)v167 + 56) == 0 )
    {
LABEL_5:
      v5 = v169;
      v169[1] = 0;
      goto LABEL_6;
    }
  }
  else
  {
    glitch::os::Printer::log((int)(uintptr_t)"- Error - Collada binary version check failed -----", 2);
    glitch::os::Printer::log((int)(uintptr_t)"- Expected versions : 0,0,0,876", 2);
    glitch::os::Printer::log(*(uint32_t *)(*(uint32_t *)v167 + 12), 2);
    Version = glitch::collada::CColladaDatabase::getVersion((glitch::collada::CColladaDatabase::Self *)v215);
    glitch::os::Printer::log(Version, 2);
    glitch::os::Printer::log((int)(uintptr_t)"- The file will be loaded                         -", 2);
    if ( *(uint32_t *)(*(uint32_t *)v167 + 56) == 0 )
      goto LABEL_5;
  }
  v144 = (const char *)(*(int (**)(uint32_t))(**(uint32_t **)v194 + 48))(*(uint32_t *)v194);
  v145 = (char **)opNew(4u);
  sub_D8D940(v145, v144);
  v5 = v169;
  v169[1] = (uint32_t)(uintptr_t)(v145);
LABEL_6:
  v195 = v5[10];
  if ( v195 > 0 )
  {
    for ( i = 0; i != v195; ++i )
    {
      v7 = 32 * i;
      v8 = (uint32_t *)((char *)v169 + v169[11] + v7 + 44);
      v8[5] = (uint32_t)(uintptr_t)(glitch::collada::CColladaDatabase::getAnimationTrackEx(v8));
    }
  }
  v158 = v169[31];
  if ( v158 > 0 )
  {
    v160 = 0;
    for ( j = 0; j != v158; ++j )
    {
      v9 = (uint32_t *)((char *)v169 + v169[32] + v160 + 128);
      v10 = v9[6];
      if ( v10 <= v169[29] )
      {
        v172 = v9[4];
        if ( v172 > 0 )
        {
          v11 = 0;
          for ( k = 0; k != v172; ++k )
          {
            v13 = (char *)v9 + v9[5] + v11 + 20;
            v14 = *((uint32_t *)v13 + 2);
            if ( v14 > 0xB && v14 <= 0x10 )
            {
              v15 = *((uint32_t *)v13 + 5);
              v21 = v15 == 0;
              v196 = v15;
              v16 = &v13[v15 + 20];
              v17 = nullptr;
              if ( !v21 )
                v17 = (int *)v16;
              v188 = *v17;
              v164 = (uint32_t *)((int *)((char *)v17 + *v17));
              v18 = nullptr;
              if ( v188 != 0 )
                v18 = v164;
              if ( *v18 == -1 )
              {
                if ( v196 == 0 )
                  v16 = nullptr;
                v139 = &v16[*(uint32_t *)v16];
                if ( *(uint32_t *)v16 == 0 )
                  v139 = nullptr;
                *(uint32_t *)v139 = 0;
              }
              else
              {
                if ( v196 == 0 )
                  v16 = nullptr;
                v19 = *(uint32_t *)v16;
                v20 = &v16[*(uint32_t *)v16];
                v21 = v19 == 0;
                v22 = nullptr;
                v170 = v20;
                if ( !v21 )
                  v22 = v20;
                v23 = (int)(uintptr_t)&v169[3 * *(uint32_t *)v22 + 28] + v169[28];
                v24 = nullptr;
                if ( !v21 )
                  v24 = (int *)v170;
                v197 = v24;
                v25 = v23 - (uint32_t)(uintptr_t)v24;
                v21 = v23 == 0;
                v26 = 0;
                if ( !v21 )
                  v26 = v25;
                *v197 = v26;
              }
            }
            v11 += 24;
          }
          v10 = v9[6];
        }
        if ( v10 != -1 )
        {
          v27 = (int)(uintptr_t)&v169[53 * v10 + 30] + v169[30];
          v28 = 0;
          if ( v27 != 0 )
            v28 = v27 - (uint32_t)(uintptr_t)(v9 + 6);
          v9[6] = v28;
          goto LABEL_36;
        }
        v140 = (const char *)v9[2];
        if ( v140 != nullptr )
        {
          glitch::collada::CColladaDatabase::Construct((glitch::collada::CColladaDatabase::Self *)&v216, v140, nullptr);
          if ( v216 != nullptr )
            goto LABEL_204;
          v209 = *(void (**)(char **))(**(uint32_t **)(*((uint32_t *)v166 + 8) + 32) + 60);
          sub_D8D940(&v214, *(const char **)(*(uint32_t *)v167 + 12));
          v209(v211);
          v146 = v214 - 12;
          if ( v214 - 12 != (char *)&dword_20D3E6C
            && __sync_fetch_and_add((volatile int32_t *)v214 - 1, 0xFFFFFFFF) <= 0 )
          {
            gll_operator_delete_arr((int)(uintptr_t)v146);
          }
          v156 = (char *)v9[2];
          sub_D8E030(v212, (int *)v211, "/");
          sub_D8E030((int *)&v213, v212, v156);
          v147 = v211[0];
          v148 = v213;
          v193 = (int *)(v213 - 12);
          v210 = (int *)(v211[0] - 12);
          if ( v213 - 12 != v211[0] - 12 )
          {
            if ( *((int *)v213 - 1) < 0 )
            {
              v148 = (char *)sub_D8D830((int)(uintptr_t)v193);
              v147 = v211[0];
              v210 = (int *)(v211[0] - 12);
            }
            else if ( v193 != (int *)(&dword_20D3E6C) )
            {
              __sync_add_and_fetch((volatile int32_t *)v213 - 1, 1u);
              v147 = v211[0];
              v210 = (int *)(v211[0] - 12);
            }
            if ( v210 != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)v147 - 1, 0xFFFFFFFF) <= 0 )
            {
              v157 = v148;
              gll_operator_delete_arr((int)(uintptr_t)v210);
              v148 = v157;
            }
            v211[0] = v148;
            v148 = v213;
            v193 = (int *)(v213 - 12);
          }
          if ( v193 != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)v148 - 1, 0xFFFFFFFF) <= 0 )
            gll_operator_delete_arr((int)(uintptr_t)v193);
          v149 = v212[0] - 12;
          if ( (int *)(v212[0] - 12) != (int *)(&dword_20D3E6C)
            && __sync_fetch_and_add((volatile int32_t *)(v212[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            gll_operator_delete_arr(v149);
          }
          glitch::collada::CColladaDatabase::Construct(
            (glitch::collada::CColladaDatabase::Self *)v218,
            v211[0],
            nullptr);
          v150 = nullptr;
          v219[0] = v218[0];
          if ( v218[0] != nullptr )
          {
            sub_8B1B00((volatile int32_t *)v218[0] + 1);
            v150 = v219[0];
          }
          memset(&v219[2], 0, 12);
          v219[0] = v216;
          v219[1] = v217;
          v216 = v150;
          v217 = v218[1];
          glitch::collada::CColladaDatabase::Destroy(v219);
          glitch::collada::CColladaDatabase::Destroy(v218);
          v151 = v211[0] - 12;
          if ( (int *)v211[0] - 3 != (int *)(&dword_20D3E6C)
            && __sync_fetch_and_add((volatile int32_t *)v211[0] - 1, 0xFFFFFFFF) <= 0 )
          {
            gll_operator_delete_arr((int)(uintptr_t)v151);
          }
          if ( v216 != nullptr )
          {
LABEL_204:
            sub_D8F0F0(*(uint32_t **)v167, (int *)&v216);
            Effect = glitch::collada::CColladaDatabase::getEffect(
                       (glitch::collada::CColladaDatabase::Self *)&v216,
                       (char *)(v9[3] + 1));
            v142 = 0;
            if ( Effect != nullptr )
              v142 = (char *)Effect - (char *)(v9 + 6);
            v9[6] = v142;
          }
          else
          {
            glitch::os::Printer::logf(3, (int)(uintptr_t)"File : [%s] not found", v9[2]);
            v9[6] = 0;
          }
          glitch::collada::CColladaDatabase::Destroy(&v216);
          goto LABEL_36;
        }
      }
      v9[6] = 0;
LABEL_36:
      v160 += 36;
    }
  }
  v159 = v169[29];
  if ( v159 > 0 )
  {
    v161 = 0;
    v163 = 0;
    v165 = v169 + 27;
    do
    {
      v29 = (uint32_t *)((char *)v169 + v169[30] + v161 + 120);
      if ( v29 != (uint32_t *)-8 )
      {
        v173 = v29[4];
        if ( v173 > 0 )
        {
          v30 = 0;
          for ( m = 0; m != v173; ++m )
          {
            v32 = (char *)v29 + v29[5] + v30 + 20;
            v33 = *((uint32_t *)v32 + 1);
            if ( v33 > 0xB && v33 <= 0x10 )
            {
              v34 = *((uint32_t *)v32 + 5);
              v198 = v34;
              v179 = (int)(uintptr_t)&v32[v34 + 20];
              v35 = nullptr;
              if ( v34 != 0 )
                v35 = (int *)v179;
              v189 = *v35;
              v36 = (uint32_t *)((int *)((char *)v35 + *v35));
              v37 = nullptr;
              if ( v189 == 0 )
                v36 = nullptr;
              if ( *v36 == -1 )
              {
                v137 = nullptr;
                if ( v198 != 0 )
                  v137 = (uint32_t *)v179;
                v138 = (uint32_t *)((char *)v137 + *v137);
                if ( *v137 == 0 )
                  v138 = nullptr;
                *v138 = 0;
              }
              else
              {
                if ( v198 != 0 )
                  v37 = (uint32_t *)v179;
                v38 = (uint32_t *)((char *)v37 + *v37);
                v39 = nullptr;
                if ( v189 != 0 )
                  v39 = v38;
                if ( *v39 < v169[27] )
                {
                  v40 = nullptr;
                  if ( v198 != 0 )
                    v40 = (int *)v179;
                  v41 = *v40;
                  v42 = (uint32_t *)((int *)((char *)v40 + *v40));
                  v43 = v41 == 0;
                  v44 = nullptr;
                  v180 = (int)(uintptr_t)v42;
                  if ( !v43 )
                    v44 = v42;
                  v45 = (int)(uintptr_t)&v165[3 * *v44 + 1] + v169[28];
                  v46 = nullptr;
                  if ( !v43 )
                    v46 = (int *)v180;
                  v199 = v46;
                  v47 = v45 - (uint32_t)(uintptr_t)v46;
                  v21 = v45 == 0;
                  v48 = 0;
                  if ( !v21 )
                    v48 = v47;
                  *v199 = v48;
                }
              }
            }
            v30 += 24;
          }
        }
      }
      if ( v29 != (uint32_t *)-56 )
      {
        v174 = v29[16];
        if ( v174 > 0 )
        {
          v49 = 0;
          for ( n = 0; n != v174; ++n )
          {
            v51 = (char *)v29 + v29[17] + v49 + 68;
            v52 = *((uint32_t *)v51 + 1);
            if ( v52 > 0xB && v52 <= 0x10 )
            {
              v53 = *((uint32_t *)v51 + 5);
              v200 = v53;
              v181 = (int)(uintptr_t)&v51[v53 + 20];
              v54 = nullptr;
              if ( v53 != 0 )
                v54 = (int *)v181;
              v190 = *v54;
              v55 = (uint32_t *)((int *)((char *)v54 + *v54));
              v56 = nullptr;
              if ( v190 == 0 )
                v55 = nullptr;
              if ( *v55 == -1 )
              {
                v133 = nullptr;
                if ( v200 != 0 )
                  v133 = (uint32_t *)v181;
                v134 = (uint32_t *)((char *)v133 + *v133);
                if ( *v133 == 0 )
                  v134 = nullptr;
                *v134 = 0;
              }
              else
              {
                if ( v200 != 0 )
                  v56 = (uint32_t *)v181;
                v57 = (uint32_t *)((char *)v56 + *v56);
                v58 = nullptr;
                if ( v190 != 0 )
                  v58 = v57;
                if ( *v58 < v169[27] )
                {
                  v59 = nullptr;
                  if ( v200 != 0 )
                    v59 = (int *)v181;
                  v60 = *v59;
                  v61 = (uint32_t *)((int *)((char *)v59 + *v59));
                  v62 = v60 == 0;
                  v63 = nullptr;
                  v182 = (int)(uintptr_t)v61;
                  if ( !v62 )
                    v63 = v61;
                  v64 = (int)(uintptr_t)&v165[3 * *v63 + 1] + v169[28];
                  v65 = nullptr;
                  if ( !v62 )
                    v65 = (int *)v182;
                  v201 = v65;
                  v66 = v64 - (uint32_t)(uintptr_t)v65;
                  v21 = v64 == 0;
                  v67 = 0;
                  if ( !v21 )
                    v67 = v66;
                  *v201 = v67;
                }
              }
            }
            v49 += 24;
          }
        }
      }
      if ( v29 != (uint32_t *)-108 )
      {
        v175 = v29[29];
        if ( v175 > 0 )
        {
          v68 = 0;
          for ( ii = 0; ii != v175; ++ii )
          {
            v70 = (char *)v29 + v29[30] + v68 + 120;
            v71 = *((uint32_t *)v70 + 1);
            if ( v71 > 0xB && v71 <= 0x10 )
            {
              v72 = *((uint32_t *)v70 + 5);
              v202 = v72;
              v183 = (int)(uintptr_t)&v70[v72 + 20];
              v73 = nullptr;
              if ( v72 != 0 )
                v73 = (int *)v183;
              v191 = *v73;
              v74 = (uint32_t *)((int *)((char *)v73 + *v73));
              v75 = nullptr;
              if ( v191 == 0 )
                v74 = nullptr;
              if ( *v74 == -1 )
              {
                v131 = nullptr;
                if ( v202 != 0 )
                  v131 = (uint32_t *)v183;
                v132 = (uint32_t *)((char *)v131 + *v131);
                if ( *v131 == 0 )
                  v132 = nullptr;
                *v132 = 0;
              }
              else
              {
                if ( v202 != 0 )
                  v75 = (uint32_t *)v183;
                v76 = (uint32_t *)((char *)v75 + *v75);
                v77 = nullptr;
                if ( v191 != 0 )
                  v77 = v76;
                if ( *v77 < v169[27] )
                {
                  v78 = nullptr;
                  if ( v202 != 0 )
                    v78 = (int *)v183;
                  v79 = *v78;
                  v80 = (uint32_t *)((int *)((char *)v78 + *v78));
                  v81 = v79 == 0;
                  v82 = nullptr;
                  v184 = (int)(uintptr_t)v80;
                  if ( !v81 )
                    v82 = v80;
                  v83 = (int)(uintptr_t)&v165[3 * *v82 + 1] + v169[28];
                  v84 = nullptr;
                  if ( !v81 )
                    v84 = (int *)v184;
                  v203 = v84;
                  v85 = v83 - (uint32_t)(uintptr_t)v84;
                  v21 = v83 == 0;
                  v86 = 0;
                  if ( !v21 )
                    v86 = v85;
                  *v203 = v86;
                }
              }
            }
            v68 += 24;
          }
        }
      }
      if ( v29 != (uint32_t *)-160 )
      {
        v176 = v29[42];
        if ( v176 > 0 )
        {
          v87 = 0;
          for ( jj = 0; jj != v176; ++jj )
          {
            v89 = (char *)v29 + v29[43] + v87 + 172;
            v90 = *((uint32_t *)v89 + 1);
            if ( v90 > 0xB && v90 <= 0x10 )
            {
              v91 = *((uint32_t *)v89 + 5);
              v204 = v91;
              v185 = (int)(uintptr_t)&v89[v91 + 20];
              v92 = nullptr;
              if ( v91 != 0 )
                v92 = (int *)v185;
              v192 = *v92;
              v93 = (uint32_t *)((int *)((char *)v92 + *v92));
              v94 = nullptr;
              if ( v192 == 0 )
                v93 = nullptr;
              if ( *v93 == -1 )
              {
                v135 = nullptr;
                if ( v204 != 0 )
                  v135 = (uint32_t *)v185;
                v136 = (uint32_t *)((char *)v135 + *v135);
                if ( *v135 == 0 )
                  v136 = nullptr;
                *v136 = 0;
              }
              else
              {
                if ( v204 != 0 )
                  v94 = (uint32_t *)v185;
                v95 = (uint32_t *)((char *)v94 + *v94);
                v96 = nullptr;
                if ( v192 != 0 )
                  v96 = v95;
                if ( *v96 < v169[27] )
                {
                  v97 = nullptr;
                  if ( v204 != 0 )
                    v97 = (int *)v185;
                  v98 = *v97;
                  v99 = (uint32_t *)((int *)((char *)v97 + *v97));
                  v100 = v98 == 0;
                  v101 = nullptr;
                  v186 = (int)(uintptr_t)v99;
                  if ( !v100 )
                    v101 = v99;
                  v102 = (int)(uintptr_t)&v165[3 * *v101 + 1] + v169[28];
                  v103 = nullptr;
                  if ( !v100 )
                    v103 = (int *)v186;
                  v205 = v103;
                  v104 = v102 - (uint32_t)(uintptr_t)v103;
                  v21 = v102 == 0;
                  v105 = 0;
                  if ( !v21 )
                    v105 = v104;
                  *v205 = v105;
                }
              }
            }
            v87 += 24;
          }
        }
      }
      ++v163;
      v161 += 212;
    }
    while ( v163 != v159 );
  }
  v106 = *((uint32_t **)v215[0][4] + 8);
  v177 = v106[37];
  if ( v177 > 0 )
  {
    v107 = 0;
    do
    {
      while ( 1 )
      {
        v153 = (char *)v107;
        Controller = (uint32_t *)glitch::collada::CColladaDatabase::getController(
                                 (glitch::collada::CColladaDatabase::Self *)v215,
                                 v107);
        if ( *Controller == 1 && v169[36] == 0 )
        {
          v109 = Controller[2];
          v110 = 0;
          v111 = (int)(uintptr_t)Controller + v109 + 8;
          if ( v109 != 0 )
            v110 = v111;
          v206 = *(uint32_t *)(v110 + 16);
          if ( v206 > 0 )
            break;
        }
        v107 = (int)(uintptr_t)(v153 + 1);
        if ( v153 + 1 == (char *)v177 )
          goto LABEL_155;
      }
      for ( kk = 0; kk != v206; ++kk )
      {
        while ( *(uint32_t *)(*(uint32_t *)(v110 + 20) + v110 + 4 * kk + 20) > *(uint32_t *)(*((uint32_t *)v215[0][4] + 8) + 136) )
        {
          if ( ++kk == v206 )
            goto LABEL_154;
        }
        Geometry = glitch::collada::CColladaDatabase::getGeometry(
                     (glitch::collada::CColladaDatabase::Self *)v215,
                     *(uint32_t *)(*(uint32_t *)(v110 + 20) + v110 + 4 * kk + 20));
        v113 = (int *)(v110 + 16 + *(uint32_t *)(v110 + 20) + 4 + 4 * kk);
        v114 = 0;
        if ( Geometry != 0 )
          v114 = Geometry - (uint32_t)(uintptr_t)v113;
        *v113 = v114;
      }
LABEL_154:
      v107 = (int)(uintptr_t)(v153 + 1);
    }
    while ( v153 + 1 != (char *)v177 );
LABEL_155:
    v106 = *((uint32_t **)v215[0][4] + 8);
  }
  v207 = v106[39];
  if ( v207 > 0 )
  {
    for ( mm = 0; mm != v207; ++mm )
    {
      while ( 1 )
      {
        GNPSEmitter = glitch::collada::CColladaDatabase::getGNPSEmitter((glitch::collada::CColladaDatabase::Self *)v215, mm);
        v117 = GNPSEmitter;
        if ( *(uint8_t *)(GNPSEmitter + 92) == 1 )
        {
          v118 = (char *)(GNPSEmitter + 96);
          v119 = *(uint32_t *)(GNPSEmitter + 96);
          v120 = &v118[v119];
          if ( v119 == 0 )
            v120 = nullptr;
          v154 = v118;
          Node = glitch::collada::CColladaDatabase::getNode(
                   (glitch::collada::CColladaDatabase::Self *)v215,
                   (char *)(*(uint32_t *)v120 + 1));
          if ( Node != 0 )
            break;
        }
        if ( ++mm == v207 )
          goto LABEL_168;
      }
      v122 = *(uint32_t *)(v117 + 96);
      v123 = &v154[v122];
      if ( v122 == 0 )
        v123 = nullptr;
      v124 = Node + *(uint32_t *)(Node + 68) + 68;
      v125 = 0;
      v126 = *(uint32_t *)(v124 + 4);
      v127 = v124 + v126 + 4;
      if ( v126 != 0 )
        v125 = v127;
      *(uint32_t *)v123 = *(uint32_t *)(v125 + 4);
    }
LABEL_168:
    v106 = *((uint32_t **)v215[0][4] + 8);
  }
  v171 = v106[45];
  if ( v171 > 0 )
  {
    for ( nn = 0; nn != v171; ++nn )
    {
      VisualScene = glitch::collada::CColladaDatabase::getVisualScene((glitch::collada::CColladaDatabase::Self *)v215, nn);
      v208 = *(uint32_t *)(VisualScene + 8);
      if ( v208 > 0 )
      {
        v129 = 0;
        v130 = 0;
        v178 = VisualScene + 8;
        do
        {
          v155 = (char *)VisualScene;
          ++v130;
          v152 = v129 + v178 + *(uint32_t *)(VisualScene + 12) + 4;
          v129 += 80;
          glitch::collada::CResFileManager::loadLodResFiles((int)(uintptr_t)v166, (uint32_t **)v167, v152);
          VisualScene = (int)(uintptr_t)v155;
        }
        while ( v130 != v208 );
      }
    }
  }
  v169[4] = 1;
LABEL_2:
  glitch::collada::CColladaDatabase::Destroy(v215);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::get  (binary VA: 0xdb7f00)
// Original: glitch::collada::CResFileManager::get
// ----------------------------------------------------------------------------
volatile int32_t *** glitch::collada::CResFileManager::get(glitch::collada::CResFileManager::Self *self, char *a2, glitch::collada::CColladaDatabase::Self *a3, glitch::collada::CColladaDatabase::Self *a4, char a5)
{
  char *v5;
  int v6;
  char *v7;
  volatile int32_t **v8;
  volatile int32_t *v9;
  volatile int32_t **v10;
  char *v11;
  volatile int32_t **v13;
  volatile int32_t **v14;
  int v15;
  volatile int32_t *v16;
  volatile int32_t *v17;
  glitch::collada::CResFile *v18;
  const char *v19;
  boost::intrusive_ptr<glitch::io::IReadFile> *v20;
  boost::intrusive_ptr<glitch::collada::CResFile> *v21;
  char *v22;
  volatile int32_t **v23;
  bool v24;
  int Process;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v30;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v31;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v34;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v35;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v36;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef char _g4_t_v39;
  typedef void (*_g4_t_v40)(char **, int, char **, int, int, int, int, char **, glitch::collada::CColladaDatabase::Self *, int, uint32_t, glitch::collada::CResFileManager::Self *, uint32_t, volatile int32_t **, volatile int32_t **, volatile int32_t **);
  typedef glitch::collada::CResFileManager::Self *_g4_t_v41;
  typedef volatile int32_t ***_g4_t_v42;
  typedef volatile int32_t **_g4_t_v43[4];
  typedef char *_g4_t_v44;
  typedef volatile int32_t *_g4_t_v45;
  typedef volatile int32_t *_g4_t_v46[4];
  typedef volatile int32_t *_g4_t_v47;
  typedef volatile int32_t *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef volatile int32_t *_g4_t_v51[4];
  typedef int _g4_t_v52;
  typedef char *_g4_t_v53;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v30)) > _g4_s4 ? (16u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v31)) > _g4_s5 ? (16u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v32)) > _g4_s6 ? (16u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v33)) > _g4_s7 ? (16u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v34)) > _g4_s8 ? (16u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v35)) > _g4_s9 ? (16u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v36)) > _g4_s10 ? (20u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v37)) > _g4_s11 ? (20u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v38)) > _g4_s12 ? (24u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (27u + sizeof(_g4_t_v39)) > _g4_s13 ? (27u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v40)) > _g4_s14 ? (28u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v41)) > _g4_s15 ? (32u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v42)) > _g4_s16 ? (32u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v43)) > _g4_s17 ? (36u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v44)) > _g4_s18 ? (52u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v45)) > _g4_s19 ? (68u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v46)) > _g4_s20 ? (84u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v47)) > _g4_s21 ? (100u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v48)) > _g4_s22 ? (116u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v49)) > _g4_s23 ? (120u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v50)) > _g4_s24 ? (124u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v51)) > _g4_s25 ? (128u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v52)) > _g4_s26 ? (144u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v53)) > _g4_s27 ? (148u + sizeof(_g4_t_v53)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 27u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 116u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 128u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 144u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 148u);

  v51[3] = (volatile int32_t *)&self;
  v5 = a2;
  v43[0] = nullptr;
  v41 = self;
  v36 = a4;
  HIBYTE(v38) = a5;
  v6 = *(uint32_t *)(*((uint32_t *)a2 + 8) + 32);
  v40 = *(void (**)(char **, int, char **, int, int, int, int, char **, glitch::collada::CColladaDatabase::Self *, int, uint32_t, glitch::collada::CResFileManager::Self *, uint32_t, volatile int32_t **, volatile int32_t **, volatile int32_t **))(*(uint32_t *)v6 + 56);
  sub_D8D940(&v49, (const char *)a3);
  v40(&v44, v6, &v49, v26, v27, v28, v29, &v49, v36, v38, (uint32_t)(uintptr_t)(v40), v41, 0, v43[1], v43[2], v43[3]);
  v7 = v49 - 12;
  if ( v49 - 12 != (char *)&dword_20D3E6C && __sync_fetch_and_add((volatile int32_t *)v49 - 1, 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr((int)(uintptr_t)v7);
  glf::ReadWriteSpinLock::readLockImpl((glf::ReadWriteSpinLock::Self *)(v5 + 40), 0xFFFFFFFF);
  glitch::collada::CResFileManager::get((glitch::collada::CResFileManager::Self *)&v45, v5, v44);
  v8 = (volatile int32_t **)v45;
  if ( v45 != nullptr )
  {
    v30 = (boost::intrusive_ptr<glitch::io::IReadFile> *)v45;
    sub_8B1B00(v45 + 1);
    v8 = (volatile int32_t **)v30;
  }
  v9 = (volatile int32_t *)v43[0];
  v43[0] = v8;
  if ( v9 != nullptr )
    sub_5459C0(v9);
  if ( v45 != nullptr )
    sub_5459C0(v45);
  v10 = v43[0];
  if ( v43[0] != nullptr )
  {
    *v42 = v43[0];
    sub_8B1B00((volatile int32_t *)v10 + 1);
    glf::ReadWriteSpinLock::readUnlock((glf::ReadWriteSpinLock::Self *)(v5 + 40));
    goto LABEL_10;
  }
  glf::ReadWriteSpinLock::readUnlock((glf::ReadWriteSpinLock::Self *)(v5 + 40));
  v46[0] = nullptr;
  glf::ReadWriteSpinLock::writeLockImpl((glf::ReadWriteSpinLock::Self *)(v5 + 40), 0xFFFFFFFF);
  glitch::collada::CResFileManager::get((glitch::collada::CResFileManager::Self *)&v47, v5, v44);
  v13 = (volatile int32_t **)v47;
  if ( v47 != nullptr )
  {
    v31 = (boost::intrusive_ptr<glitch::io::IReadFile> *)v47;
    sub_8B1B00(v47 + 1);
    v13 = (volatile int32_t **)v31;
  }
  v43[0] = v13;
  if ( v47 != nullptr )
    sub_5459C0(v47);
  v14 = v43[0];
  if ( v43[0] != nullptr )
  {
    *v42 = v43[0];
    sub_8B1B00((volatile int32_t *)v14 + 1);
  }
  else
  {
    if ( v39 != 0 )
    {
      v15 = **(uint32_t **)(*((uint32_t *)v5 + 8) + 32);
      v52 = *(uint32_t *)(*((uint32_t *)v5 + 8) + 32);
      v53 = v44;
      (*(void (**)(volatile int32_t **))(v15 + 12))(&v48);
      v16 = v48;
      if ( v48 != nullptr )
      {
        v32 = (boost::intrusive_ptr<glitch::io::IReadFile> *)v48;
        sub_8B1B00(v48 + 1);
        v16 = (volatile int32_t *)v32;
      }
      v17 = v46[0];
      v46[0] = v16;
      if ( v17 != nullptr )
        sub_5459C0(v17);
      if ( v48 != nullptr )
        sub_5459C0(v48);
      if ( v46[0] == nullptr )
      {
        glitch::os::Printer::logf(2, (int)(uintptr_t)"File not found: %s", v44);
        *v42 = nullptr;
        goto LABEL_20;
      }
      v52 = 0;
      v33 = v44;
      v18 = (glitch::collada::CResFile *)opNew(0x48u);
      v19 = v33;
      v34 = (boost::intrusive_ptr<glitch::io::IReadFile> *)(v18);
      glitch::collada::CResFile::Construct(v18, v19, (const boost::intrusive_ptr<glitch::io::IReadFile> *)v46, false);
      v20 = v34;
      if ( v34 != nullptr )
      {
        sub_8B1B00((volatile int32_t *)v34 + 1);
        v20 = v34;
      }
      v43[0] = (volatile int32_t **)v20;
      if ( v20 != nullptr && *((uint8_t *)v20 + 20) != 0 )
      {
        sub_D8D940(&v50, v44);
        v21 = (boost::intrusive_ptr<glitch::collada::CResFile> *)sub_D8F3A0((uint32_t *)v5 + 2, (const void **)&v50);
        boost::intrusive_ptr_collada_CResFile_9616fb::opAssign(
          (volatile int32_t **)(v21),
          (volatile int32_t **)v43);
        v22 = v50 - 12;
        if ( v50 - 12 != (char *)&dword_20D3E6C
          && __sync_fetch_and_add((volatile int32_t *)v50 - 1, 0xFFFFFFFF) <= 0 )
        {
          gll_operator_delete_arr((int)(uintptr_t)v22);
        }
        if ( *((uint32_t *)v43[0][4] + 5) != 0 )
          goto LABEL_37;
        glitch::collada::CResFileManager::getReadFile(
          (glitch::collada::CResFileManager::Self *)v51,
          (const boost::intrusive_ptr<glitch::io::IReadFile> *)v5,
          (boost::intrusive_ptr<glitch::io::IReadFile> *)v46);
        Process = glitch::collada::CResFileManager::postLoadProcess(
                    (glitch::collada::CResFileManager::Self *)v5,
                    v43,
                    v37,
                    (const boost::intrusive_ptr<glitch::io::IReadFile> *)v51);
        if ( v51[0] != nullptr )
        {
          v35 = (boost::intrusive_ptr<glitch::io::IReadFile> *)Process;
          sub_5459C0(v51[0]);
          Process = (int)(uintptr_t)v35;
        }
        if ( Process == 0 )
        {
LABEL_37:
          glf::ReadWriteSpinLock::writeUnlock((glf::ReadWriteSpinLock::Self *)(v5 + 40));
          v23 = v43[0];
          v24 = v43[0] == nullptr;
          *v42 = v43[0];
          if ( !v24 )
            sub_8B1B00((volatile int32_t *)v23 + 1);
          goto LABEL_21;
        }
        glitch::collada::CResFileManager::unload((glitch::collada::CResFileManager::Self *)v5, v44, 0);
      }
    }
    *v42 = nullptr;
  }
LABEL_20:
  glf::ReadWriteSpinLock::writeUnlock((glf::ReadWriteSpinLock::Self *)(v5 + 40));
LABEL_21:
  if ( v46[0] != nullptr )
    sub_5459C0(v46[0]);
LABEL_10:
  v11 = v44 - 12;
  if ( v44 - 12 != (char *)&dword_20D3E6C && __sync_fetch_and_add((volatile int32_t *)v44 - 1, 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr((int)(uintptr_t)v11);
  if ( v43[0] != nullptr )
    sub_5459C0((volatile int32_t *)v43[0]);
  return v42;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::load  (binary VA: 0xdb8380)
// Original: glitch::collada::CResFileManager::load
// ----------------------------------------------------------------------------
glitch::collada::CResFileManager::Self * glitch::collada::CResFileManager::load(glitch::collada::CResFileManager::Self *a1, char *a2, glitch::collada::CColladaDatabase::Self *a3, glitch::collada::CColladaDatabase::Self *a4, char a5)
{
  glitch::collada::CResFileManager::Self *result;

  result = a1;
  if ( a5 != 0 )
  {
    *(uint32_t *)a1 = 0;
  }
  else
  {
    glitch::collada::CResFileManager::get(a1, a2, a3, a4, 1);
    return a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructAnimator  (binary VA: 0xdb83f0)
// Original: glitch::collada::CColladaDatabase::constructAnimator
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructAnimator(glitch::collada::CColladaDatabase::Self *self, glitch::collada::CColladaDatabase::Self *a2, glitch::collada::CColladaFactory::Self *a3)
{
  glitch::collada::CColladaFactory::Self *v3;
  volatile int32_t *v4;
  volatile int32_t *v5;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v7;
  typedef volatile int32_t *_g4_t_v8;
  typedef uint32_t *_g4_t_v9[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v9[10] = (uint32_t *)(&self);
  v7 = self;
  v3 = a3;
  if ( a3 == nullptr )
    v3 = (glitch::collada::CColladaFactory::Self *)&glitch::collada::CColladaDatabase::DefaultFactory;
  v9[1] = (uint32_t *)(v3);
  v9[0] = nullptr;
  memset(&v9[2], 0, 12);
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)&v8,
    (char *)glitch::collada::CResFileManager::Inst,
    a2,
    (glitch::collada::CColladaDatabase::Self *)v9,
    0);
  v4 = v8;
  if ( v8 != nullptr )
  {
    sub_8B1B00(v8 + 1);
    v5 = (volatile int32_t *)(v9[0]);
    v9[0] = (uint32_t *)(v4);
    if ( v5 != nullptr )
      sub_5459C0(v5);
    glitch::collada::CColladaDatabase::constructAnimator(v7, v9);
    if ( v8 != nullptr )
      sub_5459C0(v8);
  }
  else
  {
    *(uint32_t *)v7 = 0;
  }
  glitch::collada::CColladaDatabase::Destroy((volatile int32_t ***)v9);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::Construct  (binary VA: 0xdb8500)
// Original: glitch::collada::CColladaDatabase::CColladaDatabase
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::Construct(glitch::collada::CColladaDatabase::Self *self, glitch::collada::CColladaDatabase::Self *a2, glitch::collada::CColladaFactory::Self *a3)
{
  glitch::collada::CColladaDatabase::Self *v3;
  glitch::collada::CColladaFactory::Self *v4;
  glitch::collada::CColladaDatabase::Self *v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  glitch::collada::CColladaDatabase::Self *result;
  volatile int32_t *v9[7];

  v3 = self;
  v9[6] = (volatile int32_t *)&self;
  v4 = a3;
  v5 = a2;
  if ( a3 == nullptr )
    v4 = (glitch::collada::CColladaFactory::Self *)&glitch::collada::CColladaDatabase::DefaultFactory;
  *(uint32_t *)self = 0;
  *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)v3 + 2) = 0;
  *((uint32_t *)v3 + 3) = 0;
  *((uint32_t *)v3 + 4) = 0;
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)v9,
    (char *)glitch::collada::CResFileManager::Inst,
    v5,
    v3,
    0);
  v6 = v9[0];
  if ( v9[0] != nullptr )
    sub_8B1B00(v9[0] + 1);
  v7 = *(volatile int32_t **)v3;
  *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v6);
  if ( v7 != nullptr )
    sub_5459C0(v7);
  result = (glitch::collada::CColladaDatabase::Self *)v9[0];
  if ( v9[0] != nullptr )
    return (glitch::collada::CColladaDatabase::Self *)sub_5459C0(v9[0]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::loadLodResFiles  (binary VA: 0xdb85d0)
// Original: glitch::collada::CResFileManager::loadLodResFiles
// ----------------------------------------------------------------------------
int glitch::collada::CResFileManager::loadLodResFiles(int a1, uint32_t **a2, uint32_t *a3)
{
  int result;
  uint32_t **v4;
  int v5;
  char *v6;
  int v7;
  char *v8;
  int v9;
  char *v10;
  int v11;
  int Controller;
  int v13;
  char *v14;
  char *v15;
  int *v16;
  int v17;
  volatile int32_t **v18;
  char *v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t **_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t **_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void (*_g4_t_v34)(char **);
  typedef int *_g4_t_v35;
  typedef char *_g4_t_v36[4];
  typedef int _g4_t_v37[4];
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef volatile int32_t **_g4_t_v40;
  typedef volatile int32_t **_g4_t_v41;
  typedef volatile int32_t **_g4_t_v42[5];
  typedef volatile int32_t **_g4_t_v43[11];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v22)) > _g4_s2 ? (32u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v23)) > _g4_s3 ? (32u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v24)) > _g4_s4 ? (32u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v26)) > _g4_s6 ? (36u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v27)) > _g4_s7 ? (36u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v28)) > _g4_s8 ? (40u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v29)) > _g4_s9 ? (44u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v30)) > _g4_s10 ? (44u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v31)) > _g4_s11 ? (44u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v32)) > _g4_s12 ? (48u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v33)) > _g4_s13 ? (48u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v34)) > _g4_s14 ? (48u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v35)) > _g4_s15 ? (48u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v36)) > _g4_s16 ? (52u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v37)) > _g4_s17 ? (68u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v38)) > _g4_s18 ? (84u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v39)) > _g4_s19 ? (96u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v40)) > _g4_s20 ? (100u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v41)) > _g4_s21 ? (104u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v42)) > _g4_s22 ? (124u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v43)) > _g4_s23 ? (144u + sizeof(_g4_t_v43)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 124u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);

  v43[7] = (volatile int32_t **)&a1;
  v28 = a1;
  result = (int)(uintptr_t)a3;
  v4 = a2;
  if ( *a3 == 15 )
  {
    v5 = a3[1];
    v6 = nullptr;
    if ( v5 != 0 )
      v6 = (char *)a3 + v5 + 4;
    v22 = *(char **)v6;
    if ( strlen(*(const char **)v6) != 0 )
    {
      glitch::collada::CColladaDatabase::Construct(
        (glitch::collada::CColladaDatabase::Self *)&v40,
        (glitch::collada::CColladaDatabase::Self *)v22,
        nullptr);
      if ( v40 != nullptr )
        goto LABEL_15;
      v34 = *(void (**)(char **))(**(uint32_t **)(*(uint32_t *)(v28 + 32) + 32) + 60);
      sub_D8D940(&v39, (const char *)(*v4)[3]);
      v34(v36);
      v14 = v39 - 12;
      if ( v39 - 12 != (char *)&dword_20D3E6C
        && __sync_fetch_and_add((volatile int32_t *)v39 - 1, 0xFFFFFFFF) <= 0 )
      {
        gll_operator_delete_arr((int)(uintptr_t)v14);
      }
      v24 = *(char **)v6;
      sub_D8E030(v37, (int *)v36, "/");
      sub_D8E030((int *)&v38, v37, v24);
      v31 = v36[0];
      v15 = v38;
      v35 = (int *)(v36[0] - 12);
      v16 = (int *)(v38 - 12);
      if ( v38 - 12 != v36[0] - 12 )
      {
        if ( *((int *)v38 - 1) < 0 )
        {
          v15 = (char *)sub_D8D830((int)(uintptr_t)(v38 - 12));
          v31 = v36[0];
          v35 = (int *)(v36[0] - 12);
        }
        else if ( v16 != (int *)(&dword_20D3E6C) )
        {
          __sync_add_and_fetch((volatile int32_t *)v38 - 1, 1u);
          v31 = v36[0];
          v35 = (int *)(v36[0] - 12);
        }
        if ( v35 != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)v31 - 1, 0xFFFFFFFF) <= 0 )
        {
          v25 = v15;
          gll_operator_delete_arr((int)(uintptr_t)v35);
          v15 = v25;
        }
        v36[0] = v15;
        v15 = v38;
        v16 = (int *)(v38 - 12);
      }
      if ( v16 != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)v15 - 1, 0xFFFFFFFF) <= 0 )
        gll_operator_delete_arr((int)(uintptr_t)v16);
      v17 = v37[0] - 12;
      if ( (int *)(v37[0] - 12) != (int *)(&dword_20D3E6C)
        && __sync_fetch_and_add((volatile int32_t *)(v37[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        gll_operator_delete_arr(v17);
      }
      glitch::collada::CColladaDatabase::Construct(
        (glitch::collada::CColladaDatabase::Self *)v42,
        (glitch::collada::CColladaDatabase::Self *)v36[0],
        nullptr);
      v18 = nullptr;
      v43[0] = v42[0];
      if ( v42[0] != nullptr )
      {
        sub_8B1B00((volatile int32_t *)v42[0] + 1);
        v18 = v43[0];
      }
      memset(&v43[2], 0, 12);
      v43[0] = v40;
      v43[1] = v41;
      v40 = v18;
      v41 = v42[1];
      glitch::collada::CColladaDatabase::Destroy(v43);
      glitch::collada::CColladaDatabase::Destroy(v42);
      v19 = v36[0] - 12;
      if ( (int *)v36[0] - 3 != (int *)(&dword_20D3E6C)
        && __sync_fetch_and_add((volatile int32_t *)v36[0] - 1, 0xFFFFFFFF) <= 0 )
      {
        gll_operator_delete_arr((int)(uintptr_t)v19);
      }
      if ( v40 != nullptr )
      {
LABEL_15:
        sub_D8F0F0(*v4, (int *)&v40);
        Controller = glitch::collada::CColladaDatabase::getController(
                       (glitch::collada::CColladaDatabase::Self *)&v40,
                       (char *)(*((uint32_t *)v6 + 1) + 1));
        v13 = 0;
        if ( Controller != 0 )
          v13 = Controller - (uint32_t)(uintptr_t)(v6 + 104);
        *((uint32_t *)v6 + 26) = v13;
      }
      else
      {
        glitch::os::Printer::logf(3, (int)(uintptr_t)"File : [%s] not found", *(uint32_t *)v6);
        *((uint32_t *)v6 + 26) = 0;
      }
      glitch::collada::CColladaDatabase::Destroy(&v40);
    }
    glitch::collada::CResFileManager::loadLodResFiles(v28, v4, (int)(uintptr_t)(v6 + 8));
    v32 = *((uint32_t *)v6 + 22);
    if ( v32 > 0 )
    {
      v29 = v4;
      v26 = (uint32_t *)(v6 + 88);
      v7 = 0;
      v8 = v6;
      v9 = 0;
      do
      {
        v23 = v8;
        ++v9;
        v20 = (char *)v26 + *((uint32_t *)v8 + 23) + v7 + 4;
        v7 += 80;
        glitch::collada::CResFileManager::loadLodResFiles(v28, v29, (int)(uintptr_t)v20);
        v8 = v23;
      }
      while ( v9 != v32 );
      v6 = v23;
      v4 = v29;
    }
    result = *((uint32_t *)v6 + 24);
    v33 = result;
    if ( result > 0 )
    {
      v27 = v4;
      v30 = (uint32_t *)(v6 + 96);
      v10 = v6;
      v11 = 0;
      do
      {
        v21 = (int)(uintptr_t)&v30[2 * v11++ + 1] + *((uint32_t *)v10 + 25);
        result = glitch::collada::CResFileManager::loadLodResFiles(v28, v27, v21);
      }
      while ( v11 != v33 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::loadLodResFiles  (binary VA: 0xdb8a60)
// Original: glitch::collada::CResFileManager::loadLodResFiles
// ----------------------------------------------------------------------------
int glitch::collada::CResFileManager::loadLodResFiles(int a1, uint32_t **a2, int a3)
{
  int v3;
  int v4;
  int i;
  uint32_t *v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v3 = a3;
  v14 = *(uint32_t *)(a3 + 64);
  if ( v14 > 0 )
  {
    v4 = a3;
    for ( i = 0; i != v14; ++i )
    {
      v12 = v4;
      v6 = (uint32_t *)(a3 + 64 + *(uint32_t *)(v4 + 68) + 4 + 8 * i);
      glitch::collada::CResFileManager::loadLodResFiles(a1, a2, v6);
      v4 = v12;
    }
    v3 = v12;
  }
  result = *(uint32_t *)(v3 + 56);
  v15 = result;
  if ( result > 0 )
  {
    v8 = v3;
    v9 = 0;
    v10 = 0;
    do
    {
      v13 = v8;
      ++v10;
      v11 = v9 + v3 + 56 + *(uint32_t *)(v8 + 60) + 4;
      v9 += 80;
      result = glitch::collada::CResFileManager::loadLodResFiles(a1, a2, v11);
      v8 = v13;
    }
    while ( v10 != v15 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::get  (binary VA: 0xdb8b30)
// Original: glitch::collada::CResFileManager::get
// ----------------------------------------------------------------------------
glitch::collada::CResFileManager::Self * glitch::collada::CResFileManager::get(glitch::collada::CResFileManager::Self *self, const boost::intrusive_ptr<glitch::collada::CResFile> *a2, glitch::collada::CColladaDatabase::Self *a3, glitch::collada::CColladaDatabase::Self *a4, glitch::collada::CColladaDatabase::Self *a5, char a6)
{
  const boost::intrusive_ptr<glitch::collada::CResFile> *v6;
  int v7;
  int v8;
  int v9;
  int v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v16;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v17;
  typedef glitch::collada::CResFileManager::Self *_g4_t_v18;
  typedef int _g4_t_v19[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (19u + sizeof(_g4_t_v15)) > _g4_s3 ? (19u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v19)) > _g4_s7 ? (32u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 19u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  v19[6] = (int)(uintptr_t)&self;
  v6 = a2;
  v18 = self;
  v17 = a4;
  v16 = a5;
  v15 = a6;
  glf::ReadWriteSpinLock::writeLockImpl(
    (glf::ReadWriteSpinLock::Self *)((const boost::intrusive_ptr<glitch::collada::CResFile> *)((char *)a2 + 40)),
    0xFFFFFFFF);
  (*(void (**)(int *))(**(uint32_t **)(*((uint32_t *)v6 + 8) + 32) + 60))(v19);
  v7 = v19[0];
  v8 = *(uint32_t *)(v19[0] - 12);
  if ( v8 != 0 )
  {
    if ( *(int *)(v19[0] - 4) >= 0 && (int *)(v19[0] - 12) != (int *)(&dword_20D3E6C) )
    {
      if ( *(uint32_t *)(v19[0] - 4) != 0 )
      {
        v12 = *(uint32_t *)(v19[0] - 12);
        sub_D8DAA0(v19, 0, 0);
        v7 = v19[0];
        v8 = v12;
      }
      *(uint32_t *)(v7 - 4) = -1;
      v7 = v19[0];
    }
    if ( *(uint8_t *)(v7 + v8 - 1) != 92 )
    {
      v14 = *(uint32_t *)(v7 - 12) - 1;
      v11 = *(uint32_t *)(v7 - 4);
      if ( v11 >= 0 && (int *)(v7 - 12) != (int *)(&dword_20D3E6C) )
      {
        if ( v11 != 0 )
        {
          sub_D8DAA0(v19, 0, 0);
          v7 = v19[0];
        }
        *(uint32_t *)(v7 - 4) = -1;
        v7 = v19[0];
      }
      if ( *(uint8_t *)(v7 + v14) != 47 )
      {
        if ( *(uint32_t *)(v7 - 12) == 1073741820 )
          sub_1900180("basic_string::append");
        sub_D8D710((unsigned int *)v19, "/", 1u);
        v7 = v19[0];
      }
    }
    v13 = (*(int (**)(uint32_t, int, int, int))(**(uint32_t **)(*((uint32_t *)v6 + 8) + 32) + 32))(
            *(uint32_t *)(*((uint32_t *)v6 + 8) + 32),
            v7,
            1,
            1);
    glitch::collada::CResFileManager::get(v18, (char *)v6, v16, v17, v15);
    if ( v13 != 0 )
      (*(void (**)(uint32_t, int))(**(uint32_t **)(*((uint32_t *)v6 + 8) + 32) + 44))(
        *(uint32_t *)(*((uint32_t *)v6 + 8) + 32),
        v19[0]);
  }
  else
  {
    glitch::collada::CResFileManager::get(v18, (char *)v6, v16, v17, v15);
  }
  v9 = v19[0] - 12;
  if ( (int *)(v19[0] - 12) != (int *)(&dword_20D3E6C)
    && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v9);
  }
  glf::ReadWriteSpinLock::writeUnlock((glf::ReadWriteSpinLock::Self *)((const boost::intrusive_ptr<glitch::collada::CResFile> *)((char *)v6 + 40)));
  return v18;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructGeometry  (binary VA: 0xdb8d70)
// Original: glitch::collada::CColladaDatabase::constructGeometry
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructGeometry(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, char *a3, glitch::collada::CColladaDatabase::Self *a4, char *a5)
{
  glitch::video::IVideoDriver::Self *v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  bool v8;
  volatile int32_t *v9;
  typedef volatile int32_t *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_v13;
  typedef const char *_g4_t_v14;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef volatile int32_t *_g4_t_v17;
  typedef char _g4_t_v18[4];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef glitch::collada::CColladaDatabase::Self **_g4_t_v23;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v17)) > _g4_s6 ? (44u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v18)) > _g4_s7 ? (48u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v19)) > _g4_s8 ? (52u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v20)) > _g4_s9 ? (56u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v21)) > _g4_s10 ? (60u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v22)) > _g4_s11 ? (64u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v23)) > _g4_s12 ? (88u + sizeof(_g4_t_v23)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);

  v23 = &self;
  v5 = a2;
  v15 = self;
  v14 = (const char *)a4;
  v19 = *((uint32_t *)a2 + 1);
  v12 = a3;
  v13 = a5;
  *(uint32_t *)v18 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  glitch::collada::CResFileManager::get(
    (glitch::collada::CResFileManager::Self *)&v16,
    (const boost::intrusive_ptr<glitch::collada::CResFile> *)glitch::collada::CResFileManager::Inst,
    (glitch::collada::CColladaDatabase::Self *)a2,
    (glitch::collada::CColladaDatabase::Self *)v18,
    a4,
    1);
  v6 = v16;
  if ( v16 != nullptr )
  {
    v11 = v16;
    sub_8B1B00(v16 + 1);
    v7 = *(volatile int32_t **)v18;
    v8 = *(uint32_t *)v18 == 0;
    *(uint32_t *)v18 = (uint32_t)(uintptr_t)(v11);
    if ( !v8 )
      sub_5459C0(v7);
    glitch::collada::CColladaDatabase::constructGeometry(
      (glitch::collada::CColladaDatabase::Self *)&v17,
      (glitch::video::IVideoDriver::Self *)v18,
      v12,
      v13);
    v9 = v17;
    if ( v17 != nullptr )
    {
      *(uint32_t *)v15 = (uint32_t)(uintptr_t)(v17);
    }
    else
    {
      glitch::os::Printer::log((int)(uintptr_t)"Geometry not found", 3);
      glitch::os::Printer::log((int)(uintptr_t)v14, 3);
      glitch::os::Printer::log((int)(uintptr_t)v13, 3);
      v9 = v17;
      v8 = v17 == nullptr;
      *(uint32_t *)v15 = (uint32_t)(uintptr_t)(v17);
      if ( v8 )
        goto LABEL_8;
    }
    sub_8B1B00(v9 + 1);
    if ( v17 != nullptr )
      sub_5459C0(v17);
  }
  else
  {
    if ( *(uint32_t *)v5 != 0 )
      v6 = *(volatile int32_t **)(*(uint32_t *)v5 + 12);
    glitch::os::Printer::logf(3, (int)(uintptr_t)"database %s: geometry file not found: %s", v6, v14);
    *(uint32_t *)v15 = 0;
  }
LABEL_8:
  if ( v16 != nullptr )
    sub_5459C0(v16);
  glitch::collada::CColladaDatabase::Destroy((volatile int32_t ***)v18);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::Construct  (binary VA: 0xdb8f50)
// Original: glitch::collada::CColladaDatabase::CColladaDatabase
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::Construct(glitch::collada::CColladaDatabase::Self *self, const glitch::collada::CColladaDatabase::Self *a2, glitch::collada::CColladaDatabase::Self *a3, glitch::collada::CColladaFactory::Self *a4)
{
  glitch::collada::CColladaDatabase::Self *v4;
  glitch::collada::CColladaFactory::Self *v5;
  glitch::collada::CColladaDatabase::Self *v6;
  glitch::collada::CColladaDatabase::Self *v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  glitch::collada::CColladaDatabase::Self *result;
  volatile int32_t *v11[7];

  v4 = self;
  v11[6] = (volatile int32_t *)&self;
  v5 = a4;
  v6 = (glitch::collada::CColladaDatabase::Self *)(a2);
  if ( a4 == nullptr )
    v5 = (glitch::collada::CColladaFactory::Self *)&glitch::collada::CColladaDatabase::DefaultFactory;
  v7 = a3;
  *(uint32_t *)self = 0;
  *((uint32_t *)v4 + 1) = (uint32_t)(uintptr_t)(v5);
  *((uint32_t *)v4 + 2) = 0;
  *((uint32_t *)v4 + 3) = 0;
  *((uint32_t *)v4 + 4) = 0;
  glitch::collada::CResFileManager::get(
    (glitch::collada::CResFileManager::Self *)v11,
    (const boost::intrusive_ptr<glitch::collada::CResFile> *)glitch::collada::CResFileManager::Inst,
    v6,
    v4,
    v7,
    1);
  v8 = v11[0];
  if ( v11[0] != nullptr )
    sub_8B1B00(v11[0] + 1);
  v9 = *(volatile int32_t **)v4;
  *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v8);
  if ( v9 != nullptr )
    sub_5459C0(v9);
  result = (glitch::collada::CColladaDatabase::Self *)v11[0];
  if ( v11[0] != nullptr )
    return (glitch::collada::CColladaDatabase::Self *)sub_5459C0(v11[0]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::getMaterial  (binary VA: 0xdb9020)
// Original: glitch::collada::CColladaDatabase::getMaterial
// ----------------------------------------------------------------------------
const char ** glitch::collada::CColladaDatabase::getMaterial(glitch::collada::CColladaDatabase::Self *self, glitch::collada::CColladaDatabase::Self *a2, char *a3)
{
  const char **Material;
  volatile int32_t **v5[5];

  glitch::collada::CColladaDatabase::Construct((glitch::collada::CColladaDatabase::Self *)v5, self, a2, nullptr);
  Material = glitch::collada::CColladaDatabase::getMaterial((glitch::collada::CColladaDatabase::Self *)v5, a3);
  glitch::collada::CColladaDatabase::Destroy(v5);
  return Material;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructController_eadb9090  (binary VA: 0xdb9090)
// Original: glitch::collada::CColladaDatabase::constructController
// ----------------------------------------------------------------------------
glitch::collada::CMorphingMesh::Self ** glitch::collada::CColladaDatabase::constructController_eadb9090(glitch::collada::CMorphingMesh::Self **a1, glitch::collada::CColladaDatabase::Self *a2, int a3, int a4, glitch::collada::CRootSceneNode::Self **a5)
{
  int v5;
  glitch::collada::CMorphingMesh::Self **v6;
  int v7;
  int v8;
  const char **Material;
  glitch::collada::CMorphingMesh::Self *v10;
  int v11;
  glitch::video::CMaterialVertexAttributeMap::Self *v12;
  glitch::video::CMaterial::Self *v13;
  bool v14;
  int v15;
  int i;
  glitch::video::CMaterialVertexAttributeMap::Self *v18;
  glitch::video::CMaterial::Self *v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef glitch::video::CMaterial::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef glitch::video::CMaterial::Self *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef glitch::collada::CMorphingMesh::Self **_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char **_g4_t_v31;
  typedef uint8_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_Controller;
  typedef glitch::video::CMaterial::Self *_g4_t_v38;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v39;
  typedef glitch::video::CMaterial::Self *_g4_t_v40[2];
  typedef uint8_t _g4_t_v41[12];
  typedef uint32_t _g4_t_v42[9];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v22)) > _g4_s2 ? (0u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v23)) > _g4_s3 ? (0u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v24)) > _g4_s4 ? (0u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v25)) > _g4_s5 ? (0u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v26)) > _g4_s6 ? (4u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v27)) > _g4_s7 ? (8u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v28)) > _g4_s8 ? (12u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v29)) > _g4_s9 ? (16u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v30)) > _g4_s10 ? (20u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v31)) > _g4_s11 ? (24u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v32)) > _g4_s12 ? (24u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v33)) > _g4_s13 ? (24u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v34)) > _g4_s14 ? (28u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v35)) > _g4_s15 ? (32u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v36)) > _g4_s16 ? (32u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_Controller)) > _g4_s17 ? (36u + sizeof(_g4_t_Controller)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v38)) > _g4_s18 ? (40u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v39)) > _g4_s19 ? (52u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v40)) > _g4_s20 ? (56u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v41)) > _g4_s21 ? (64u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v42)) > _g4_s22 ? (76u + sizeof(_g4_t_v42)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_Controller &Controller = *reinterpret_cast<_g4_t_Controller *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);

  v42[5] = (uint32_t)(uintptr_t)(&a1);
  v5 = a4;
  v6 = a1;
  v34 = a2;
  v35 = a3;
  v31 = (char **)a5;
  v26 = (char *)(*(uint32_t *)(a4 + 4) + 1);
  glitch::collada::CColladaDatabase::constructController(a1, a2, a3, v26, a5);
  if ( *v6 != nullptr )
  {
    v30 = *(uint32_t *)(v5 + 12);
    if ( v30 > 0 )
    {
      v28 = v6;
      v29 = v5 + 12;
      v27 = v5;
      v7 = 0;
      v8 = 0;
      do
      {
        v15 = v29 + *(uint32_t *)(v27 + 16) + 4 + v8;
        if ( *(uint32_t *)v15 != 0 )
          Material = glitch::collada::CColladaDatabase::getMaterial(
                       v34,
                       *(glitch::collada::CColladaDatabase::Self **)v15,
                       (char *)(*(uint32_t *)(v15 + 4) + 1));
        else
          Material = (const char **)glitch::collada::CColladaDatabase::getMaterial(v34, *(uint32_t *)(v15 + 8));
        glitch::collada::CRootSceneNode::getMaterial(
          (glitch::collada::CRootSceneNode::Self *)v40,
          *v31,
          (char **)Material,
          v35);
        v10 = *v28;
        v11 = *(uint32_t *)*v28;
        v39 = nullptr;
        (*(void (**)(glitch::collada::CMorphingMesh::Self *, int, glitch::video::CMaterial::Self **, glitch::video::CMaterialVertexAttributeMap::Self **))(v11 + 32))(
          v10,
          v7,
          v40,
          &v39);
        v12 = v39;
        if ( v39 != nullptr && __sync_fetch_and_add((volatile int32_t *)v39, 0xFFFFFFFF) == 1 )
        {
          v20 = (int)(uintptr_t)v12;
          glitch::video::CMaterialVertexAttributeMap::Destroy(v12);
          gll_operator_delete_arr(v20);
        }
        v13 = v40[0];
        if ( v40[0] != nullptr )
        {
          v14 = *(uint32_t *)v40[0] == 2;
          _mm_mfence();
          if ( v14 )
          {
            v22 = v13;
            glitch::video::CMaterial::removeFromRootSceneNode(v13);
            v13 = v22;
          }
          if ( __sync_fetch_and_add((volatile int32_t *)v13, 0xFFFFFFFF) == 1 )
          {
            v21 = (int)(uintptr_t)v13;
            glitch::video::CMaterial::Destroy(v13);
            gll_operator_delete_arr(v21);
          }
        }
        ++v7;
        v8 += 60;
      }
      while ( v7 != v30 );
      v6 = v28;
      v5 = v27;
    }
    Controller = (uint32_t *)glitch::collada::CColladaDatabase::getController(v34, v26);
    (*(void (**)(uint8_t *, uint32_t, glitch::collada::CColladaDatabase::Self *, uint32_t *))(**((uint32_t **)v34 + 1) + 76))(
      v41,
      *((uint32_t *)v34 + 1),
      v34,
      Controller);
    (*(void (**)(uint32_t *))(**((uint32_t **)v34 + 1) + 80))(v42);
    v32 = (*(int (**)(uint32_t))(**((uint32_t **)v34 + 1) + 104))(*((uint32_t *)v34 + 1));
    if ( *Controller == 1 )
    {
      G4_VCALL<void>(*v6, 72, v35, v32, v41);
    }
    else if ( *Controller == 0 || *Controller == 2 )
    {
      G4_VCALL<void>(*v6, 76, v35, v32, v41, v42);
    }
    v33 = *(uint32_t *)(v5 + 12);
    if ( v33 > 0 )
    {
      v36 = 0;
      for ( i = 0; i != v33; ++i )
      {
        (*(void (**)(glitch::video::CMaterial::Self **, glitch::collada::CMorphingMesh::Self *, int))(*(uint32_t *)*v6 + 24))(
          &v38,
          *v6,
          i);
        (*(void (**)(glitch::video::CMaterial::Self **))(**((uint32_t **)v34 + 1) + 64))(v40);
        G4_VCALL<void>(*v6, 32);
        v18 = (glitch::video::CMaterialVertexAttributeMap::Self *)(v40[0]);
        if ( v40[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v40[0], 0xFFFFFFFF) == 1 )
        {
          v24 = (int)(uintptr_t)v18;
          glitch::video::CMaterialVertexAttributeMap::Destroy(v18);
          gll_operator_delete_arr(v24);
        }
        v19 = v38;
        if ( v38 != nullptr )
        {
          v14 = *(uint32_t *)v38 == 2;
          _mm_mfence();
          if ( v14 )
          {
            v25 = v19;
            glitch::video::CMaterial::removeFromRootSceneNode(v19);
            v19 = v25;
          }
          if ( __sync_fetch_and_add((volatile int32_t *)v19, 0xFFFFFFFF) == 1 )
          {
            v23 = (int)(uintptr_t)v19;
            glitch::video::CMaterial::Destroy(v19);
            gll_operator_delete_arr(v23);
          }
        }
        v36 += 60;
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructGeometry  (binary VA: 0xdb94b0)
// Original: glitch::collada::CColladaDatabase::constructGeometry
// ----------------------------------------------------------------------------
volatile int32_t ** glitch::collada::CColladaDatabase::constructGeometry(volatile int32_t **a1, glitch::collada::CColladaDatabase::Self *a2, char *a3, int a4, char **a5)
{
  char *v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  int i;
  const char **Material;
  volatile int32_t *v11;
  glitch::video::CMaterialVertexAttributeMap::Self *v12;
  glitch::video::CMaterial::Self *v13;
  bool v14;
  int v15;
  volatile int32_t *v17;
  volatile int32_t *v18;
  typedef void (*_g4_t_v19)(glitch::video::CMaterialVertexAttributeMap::Self **);
  typedef char **_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef volatile int32_t **_g4_t_v24;
  typedef int _g4_t_v25;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v26;
  typedef volatile int32_t *_g4_t_v27;
  typedef volatile int32_t *_g4_t_v28;
  typedef glitch::video::CMaterial::Self *_g4_t_v29[2];
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v30;
  typedef volatile int32_t *_g4_t_v31;
  typedef volatile int32_t ***_g4_t_v32;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v23)) > _g4_s4 ? (24u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v24)) > _g4_s5 ? (28u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v25)) > _g4_s6 ? (32u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v26)) > _g4_s7 ? (36u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v27)) > _g4_s8 ? (40u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v28)) > _g4_s9 ? (56u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v29)) > _g4_s10 ? (72u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v30)) > _g4_s11 ? (80u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v31)) > _g4_s12 ? (84u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v32)) > _g4_s13 ? (96u + sizeof(_g4_t_v32)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);

  v32 = &a1;
  v26 = a2;
  v22 = a3;
  v20 = a5;
  v24 = a1;
  v23 = a4;
  *a1 = nullptr;
  v5 = (char *)(*(uint32_t *)(v23 + 4) + 1);
  if ( *(uint32_t *)v23 != 0 )
  {
    glitch::collada::CColladaDatabase::constructGeometry(
      (glitch::collada::CColladaDatabase::Self *)&v27,
      (glitch::video::IVideoDriver::Self *)v26,
      v22,
      *(glitch::collada::CColladaDatabase::Self **)v23,
      v5);
    v6 = v27;
    if ( v27 != nullptr )
      sub_8B1B00(v27 + 1);
    v7 = *v24;
    *v24 = v6;
    if ( v7 != nullptr )
      sub_5459C0(v7);
    v8 = v27;
    if ( v27 != nullptr )
LABEL_7:
      sub_5459C0(v8);
  }
  else
  {
    glitch::collada::CColladaDatabase::constructGeometry((glitch::collada::CColladaDatabase::Self *)&v28, (glitch::video::IVideoDriver::Self *)v26, v22, v5);
    v17 = v28;
    if ( v28 != nullptr )
      sub_8B1B00(v28 + 1);
    v18 = *v24;
    *v24 = v17;
    if ( v18 != nullptr )
      sub_5459C0(v18);
    v8 = v28;
    if ( v28 != nullptr )
      goto LABEL_7;
  }
  if ( *v24 != nullptr )
  {
    v21 = *(uint32_t *)(v23 + 12);
    if ( v21 > 0 )
    {
      v25 = 0;
      for ( i = 0; i != v21; ++i )
      {
        v15 = v25 + v23 + 12 + *(uint32_t *)(v23 + 16) + 4;
        if ( *(uint32_t *)v15 != 0 )
          Material = glitch::collada::CColladaDatabase::getMaterial(
                       v26,
                       *(glitch::collada::CColladaDatabase::Self **)v15,
                       (char *)(*(uint32_t *)(v15 + 4) + 1));
        else
          Material = (const char **)glitch::collada::CColladaDatabase::getMaterial(v26, *(uint32_t *)(v15 + 8));
        glitch::collada::CRootSceneNode::getMaterial(
          (glitch::collada::CRootSceneNode::Self *)v29,
          *v20,
          (char **)Material,
          (int)(uintptr_t)v22);
        v19 = *(void (**)(glitch::video::CMaterialVertexAttributeMap::Self **))(**((uint32_t **)v26 + 1) + 64);
        v11 = *v24;
        v31 = *v24;
        if ( v31 != nullptr )
          sub_8B1B00(v11 + 1);
        v19(&v30);
        if ( v31 != nullptr )
          sub_5459C0(v31);
        (*(void (**)(volatile int32_t *, int, glitch::video::CMaterial::Self **, glitch::video::CMaterialVertexAttributeMap::Self **))(**v24 + 32))(
          *v24,
          i,
          v29,
          &v30);
        v12 = v30;
        if ( v30 != nullptr && __sync_fetch_and_add((volatile int32_t *)v30, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterialVertexAttributeMap::Destroy(v12);
          gll_operator_delete_arr((int)(uintptr_t)v12);
        }
        v13 = v29[0];
        if ( v29[0] != nullptr )
        {
          v14 = *(uint32_t *)v29[0] == 2;
          _mm_mfence();
          if ( v14 )
            glitch::video::CMaterial::removeFromRootSceneNode(v13);
          if ( __sync_fetch_and_add((volatile int32_t *)v13, 0xFFFFFFFF) == 1 )
          {
            glitch::video::CMaterial::Destroy(v13);
            gll_operator_delete_arr((int)(uintptr_t)v13);
          }
        }
        v25 += 60;
      }
    }
  }
  return v24;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::get  (binary VA: 0xdb9780)
// Original: glitch::collada::CResFileManager::get
// ----------------------------------------------------------------------------
volatile int32_t *** glitch::collada::CResFileManager::get(glitch::collada::CResFileManager::Self *self, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, glitch::collada::CColladaDatabase::Self *a3, glitch::collada::CColladaDatabase::Self *a4, bool a5, char a6)
{
  const boost::intrusive_ptr<glitch::io::IReadFile> *v6;
  int v7;
  int v8;
  const char *v9;
  char *v10;
  int v11;
  volatile int32_t *v12;
  char *v13;
  volatile int32_t **v14;
  volatile int32_t *v15;
  int v16;
  int v17;
  glitch::collada::CResFile *v19;
  const char *v20;
  volatile int32_t **v21;
  volatile int32_t *v22;
  volatile int32_t **v23;
  volatile int32_t **v24;
  volatile int32_t *v25;
  char *v26;
  int Process;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v35;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef bool _g4_t_v38;
  typedef char _g4_t_v39;
  typedef void (*_g4_t_v40)(uint32_t *, int, char **);
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v41;
  typedef boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v42;
  typedef glitch::collada::CResFileManager::Self *_g4_t_v43;
  typedef volatile int32_t ***_g4_t_v44;
  typedef glf::ReadWriteSpinLock::Self *_g4_t_v45;
  typedef glf::ReadWriteSpinLock::Self *_g4_t_v46;
  typedef const boost::intrusive_ptr<glitch::io::IReadFile> *_g4_t_v47;
  typedef volatile int32_t **_g4_t_v48[4];
  typedef uint32_t _g4_t_v49[4];
  typedef const void *_g4_t_v50[4];
  typedef const void *_g4_t_v51[2];
  typedef char *_g4_t_v52;
  typedef volatile int32_t *_g4_t_v53[7];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v32)) > _g4_s4 ? (16u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v33)) > _g4_s5 ? (16u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v34)) > _g4_s6 ? (16u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v35)) > _g4_s7 ? (20u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v36)) > _g4_s8 ? (20u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v37)) > _g4_s9 ? (24u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (26u + sizeof(_g4_t_v38)) > _g4_s10 ? (26u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (27u + sizeof(_g4_t_v39)) > _g4_s11 ? (27u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v40)) > _g4_s12 ? (28u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v41)) > _g4_s13 ? (32u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v42)) > _g4_s14 ? (32u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v43)) > _g4_s15 ? (36u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v44)) > _g4_s16 ? (36u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v45)) > _g4_s17 ? (40u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v46)) > _g4_s18 ? (40u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v47)) > _g4_s19 ? (44u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v48)) > _g4_s20 ? (48u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v49)) > _g4_s21 ? (64u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v50)) > _g4_s22 ? (80u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v51)) > _g4_s23 ? (96u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v52)) > _g4_s24 ? (104u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v53)) > _g4_s25 ? (108u + sizeof(_g4_t_v53)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 26u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 27u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 96u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 104u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 108u);

  v53[3] = (volatile int32_t *)&self;
  v6 = a2;
  v43 = self;
  v41 = (boost::intrusive_ptr<glitch::io::IReadFile> *)(a3);
  v35 = a4;
  BYTE2(v37) = a6;
  HIBYTE(v37) = a5;
  v45 = (glf::ReadWriteSpinLock::Self *)((const boost::intrusive_ptr<glitch::io::IReadFile> *)((char *)a2 + 40));
  glf::ReadWriteSpinLock::writeLockImpl(
    (glf::ReadWriteSpinLock::Self *)((const boost::intrusive_ptr<glitch::io::IReadFile> *)((char *)a2 + 40)),
    0xFFFFFFFF);
  v7 = *((uint32_t *)v6 + 8);
  v48[0] = nullptr;
  v8 = *(uint32_t *)(v7 + 32);
  v9 = (const char *)(*(int (**)(uint32_t, int, int, int, char *, glitch::collada::CColladaDatabase::Self *, int, uint32_t, boost::intrusive_ptr<glitch::io::IReadFile> *, glitch::collada::CResFileManager::Self *, glf::ReadWriteSpinLock::Self *, const boost::intrusive_ptr<glitch::io::IReadFile> *, uint32_t, volatile int32_t **, volatile int32_t **, volatile int32_t **, uint32_t, uint32_t, uint32_t, uint32_t, const void *, const void *, const void *, const void *, const void *, const void *, char *, volatile int32_t *, volatile int32_t *, volatile int32_t *, glitch::collada::CResFileManager::Self **))(**(uint32_t **)v41 + 40))(
                       *(uint32_t *)v41,
                       v28,
                       v29,
                       v30,
                       v31,
                       v35,
                       v37,
                       *(uint32_t *)(*(uint32_t *)v8 + 56),
                       v41,
                       v43,
                       v45,
                       v47,
                       0,
                       v48[1],
                       v48[2],
                       v48[3],
                       v49[0],
                       v49[1],
                       v49[2],
                       v49[3],
                       v50[0],
                       v50[1],
                       v50[2],
                       v50[3],
                       v51[0],
                       v51[1],
                       v52,
                       v53[0],
                       v53[1],
                       v53[2],
                       &self);
  sub_D8D940(&v52, v9);
  v40(v49, v8, &v52);
  v10 = v52 - 12;
  if ( v52 - 12 != (char *)&dword_20D3E6C && __sync_fetch_and_add((volatile int32_t *)v52 - 1, 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr((int)(uintptr_t)v10);
  sub_D8D4D0((uint32_t *)&v47, (int)(uintptr_t)v6 + 8, (void **)v49);
  if ( (const boost::intrusive_ptr<glitch::io::IReadFile> *)((char *)v6 + 12) == v47 )
  {
    if ( v39 == 0 )
      goto LABEL_30;
    v53[4] = nullptr;
    v32 = (char *)v49[0];
    v19 = (glitch::collada::CResFile *)opNew(0x48u);
    v20 = v32;
    v33 = (char *)v19;
    glitch::collada::CResFile::Construct(v19, v20, v42, v38);
    v21 = (volatile int32_t **)v33;
    if ( v33 != nullptr )
    {
      sub_8B1B00((volatile int32_t *)v33 + 1);
      v21 = (volatile int32_t **)v33;
    }
    v22 = (volatile int32_t *)v48[0];
    v48[0] = v21;
    if ( v22 != nullptr )
      sub_5459C0(v22);
    sub_D8D940((char **)v50, (const char *)v49[0]);
    v23 = (volatile int32_t **)sub_D8F3A0((uint32_t *)v6 + 2, v50);
    v24 = v48[0];
    if ( v48[0] != nullptr )
    {
      v34 = (char *)v23;
      sub_8B1B00((volatile int32_t *)v48[0] + 1);
      v23 = (volatile int32_t **)v34;
    }
    v25 = *v23;
    *v23 = (volatile int32_t *)v24;
    if ( v25 != nullptr )
      sub_5459C0(v25);
    v26 = (char *)v50[0] - 12;
    if ( (char *)v50[0] - 12 != (char *)&dword_20D3E6C
      && __sync_fetch_and_add((volatile int32_t *)v50[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr((int)(uintptr_t)v26);
    }
    v14 = v48[0];
    if ( *((uint32_t *)v48[0][4] + 5) != 0 )
      goto LABEL_9;
    glitch::collada::CResFileManager::getReadFile((glitch::collada::CResFileManager::Self *)v53, v6, v42);
    Process = glitch::collada::CResFileManager::postLoadProcess(
                (glitch::collada::CResFileManager::Self *)(v6),
                v48,
                v36,
                (const boost::intrusive_ptr<glitch::io::IReadFile> *)v53);
    if ( v53[0] != nullptr )
      sub_5459C0(v53[0]);
    if ( Process != 0 )
    {
LABEL_30:
      *v44 = nullptr;
      goto LABEL_11;
    }
    v14 = v48[0];
  }
  else
  {
    sub_D8D940((char **)v51, (const char *)v49[0]);
    v11 = *(uint32_t *)sub_D8F3A0((uint32_t *)v6 + 2, v51);
    if ( v11 != 0 )
      sub_8B1B00((volatile int32_t *)(v11 + 4));
    v12 = (volatile int32_t *)v48[0];
    v48[0] = (volatile int32_t **)v11;
    if ( v12 != nullptr )
      sub_5459C0(v12);
    v13 = (char *)v51[0] - 12;
    if ( (char *)v51[0] - 12 != (char *)&dword_20D3E6C
      && __sync_fetch_and_add((volatile int32_t *)v51[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr((int)(uintptr_t)v13);
    }
    v14 = v48[0];
    v15 = v48[0][4];
    v16 = *((uint32_t *)v15 + 5) >> 31;
    glitch::res::File::ExternalFilePtr[v16] = (uintptr_t)(uintptr_t)(v15);
    glitch::res::File::ExternalFileOffsetTableSize[v16] = glitch::res::File::SizeOfHeader + 4 * *((uint32_t *)v15 + 4);
    glitch::res::File::SizeOfHeader = *((uint32_t *)v15 + 2);
  }
LABEL_9:
  *v44 = v14;
  if ( v14 != nullptr )
    sub_8B1B00((volatile int32_t *)v14 + 1);
LABEL_11:
  v17 = v49[0] - 12;
  if ( (int *)(v49[0] - 12) != (int *)(&dword_20D3E6C)
    && __sync_fetch_and_add((volatile int32_t *)(v49[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v17);
  }
  if ( v48[0] != nullptr )
    sub_5459C0((volatile int32_t *)v48[0]);
  glf::ReadWriteSpinLock::writeUnlock(v46);
  return v44;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::load  (binary VA: 0xdb9ad0)
// Original: glitch::collada::CResFileManager::load
// ----------------------------------------------------------------------------
glitch::collada::CResFileManager::Self * glitch::collada::CResFileManager::load(glitch::collada::CResFileManager::Self *a1, boost::intrusive_ptr<glitch::io::IReadFile> *a2, glitch::collada::CColladaDatabase::Self *a3, glitch::collada::CColladaDatabase::Self *a4, char a5, int a6, char a7)
{
  glitch::collada::CResFileManager::Self *result;

  result = a1;
  if ( a5 != 0 )
  {
    *(uint32_t *)a1 = 0;
  }
  else
  {
    glitch::collada::CResFileManager::get(a1, a2, a3, a4, true, a7);
    return a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructAnimator  (binary VA: 0xdb9b50)
// Original: glitch::collada::CColladaDatabase::constructAnimator
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructAnimator(glitch::collada::CColladaDatabase::Self *self, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, char a3, glitch::collada::CColladaFactory::Self *a4)
{
  glitch::collada::CColladaFactory::Self *v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v8;
  typedef volatile int32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v10)) > _g4_s2 ? (32u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);

  v10[10] = (uint32_t *)(&self);
  v4 = a4;
  v8 = self;
  if ( a4 == nullptr )
    v4 = (glitch::collada::CColladaFactory::Self *)&glitch::collada::CColladaDatabase::DefaultFactory;
  v10[1] = (uint32_t *)(v4);
  v10[0] = nullptr;
  memset(&v10[2], 0, 12);
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)&v9,
    (boost::intrusive_ptr<glitch::io::IReadFile> *)glitch::collada::CResFileManager::Inst,
    (glitch::collada::CColladaDatabase::Self *)a2,
    (glitch::collada::CColladaDatabase::Self *)v10,
    0,
    0,
    a3);
  v5 = v9;
  if ( v9 != nullptr )
  {
    sub_8B1B00(v9 + 1);
    v6 = (volatile int32_t *)(v10[0]);
    v10[0] = (uint32_t *)(v5);
    if ( v6 != nullptr )
      sub_5459C0(v6);
    glitch::collada::CColladaDatabase::constructAnimator(v8, v10);
    if ( v9 != nullptr )
      sub_5459C0(v9);
  }
  else
  {
    *(uint32_t *)v8 = 0;
  }
  glitch::collada::CColladaDatabase::Destroy((volatile int32_t ***)v10);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructAnimator  (binary VA: 0xdb9c70)
// Original: glitch::collada::CColladaDatabase::constructAnimator
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructAnimator(glitch::collada::CColladaDatabase::Self *self, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, glitch::collada::CColladaFactory::Self *a3)
{
  glitch::collada::CColladaFactory::Self *v3;
  volatile int32_t *v4;
  volatile int32_t *v5;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v7;
  typedef volatile int32_t *_g4_t_v8;
  typedef uint32_t *_g4_t_v9[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v9[10] = (uint32_t *)(&self);
  v7 = self;
  v3 = a3;
  if ( a3 == nullptr )
    v3 = (glitch::collada::CColladaFactory::Self *)&glitch::collada::CColladaDatabase::DefaultFactory;
  v9[1] = (uint32_t *)(v3);
  v9[0] = nullptr;
  memset(&v9[2], 0, 12);
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)&v8,
    (boost::intrusive_ptr<glitch::io::IReadFile> *)glitch::collada::CResFileManager::Inst,
    (glitch::collada::CColladaDatabase::Self *)a2,
    (glitch::collada::CColladaDatabase::Self *)v9,
    0,
    0,
    0);
  v4 = v8;
  if ( v8 != nullptr )
  {
    sub_8B1B00(v8 + 1);
    v5 = (volatile int32_t *)(v9[0]);
    v9[0] = (uint32_t *)(v4);
    if ( v5 != nullptr )
      sub_5459C0(v5);
    glitch::collada::CColladaDatabase::constructAnimator(v7, v9);
    if ( v8 != nullptr )
      sub_5459C0(v8);
  }
  else
  {
    *(uint32_t *)v7 = 0;
  }
  glitch::collada::CColladaDatabase::Destroy((volatile int32_t ***)v9);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::Construct  (binary VA: 0xdb9d90)
// Original: glitch::collada::CColladaDatabase::CColladaDatabase
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::Construct(glitch::collada::CColladaDatabase::Self *self, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, char a3, glitch::collada::CColladaFactory::Self *a4)
{
  glitch::collada::CColladaDatabase::Self *v4;
  glitch::collada::CColladaFactory::Self *v5;
  glitch::collada::CColladaDatabase::Self *v6;
  char v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  glitch::collada::CColladaDatabase::Self *result;
  volatile int32_t *v11[7];

  v11[6] = (volatile int32_t *)&self;
  v4 = self;
  v5 = a4;
  v6 = (glitch::collada::CColladaDatabase::Self *)(a2);
  if ( a4 == nullptr )
    v5 = (glitch::collada::CColladaFactory::Self *)&glitch::collada::CColladaDatabase::DefaultFactory;
  v7 = a3;
  *(uint32_t *)self = 0;
  *((uint32_t *)v4 + 1) = (uint32_t)(uintptr_t)(v5);
  *((uint32_t *)v4 + 2) = 0;
  *((uint32_t *)v4 + 3) = 0;
  *((uint32_t *)v4 + 4) = 0;
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)v11,
    (boost::intrusive_ptr<glitch::io::IReadFile> *)glitch::collada::CResFileManager::Inst,
    v6,
    v4,
    0,
    0,
    v7);
  v8 = v11[0];
  if ( v11[0] != nullptr )
    sub_8B1B00(v11[0] + 1);
  v9 = *(volatile int32_t **)v4;
  *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v8);
  if ( v9 != nullptr )
    sub_5459C0(v9);
  result = (glitch::collada::CColladaDatabase::Self *)v11[0];
  if ( v11[0] != nullptr )
    return (glitch::collada::CColladaDatabase::Self *)sub_5459C0(v11[0]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::Construct  (binary VA: 0xdb9e70)
// Original: glitch::collada::CColladaDatabase::CColladaDatabase
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::Construct(glitch::collada::CColladaDatabase::Self *self, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, glitch::collada::CColladaFactory::Self *a3)
{
  glitch::collada::CColladaDatabase::Self *v3;
  glitch::collada::CColladaFactory::Self *v4;
  glitch::collada::CColladaDatabase::Self *v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  glitch::collada::CColladaDatabase::Self *result;
  volatile int32_t *v9[7];

  v3 = self;
  v9[6] = (volatile int32_t *)&self;
  v4 = a3;
  v5 = (glitch::collada::CColladaDatabase::Self *)(a2);
  if ( a3 == nullptr )
    v4 = (glitch::collada::CColladaFactory::Self *)&glitch::collada::CColladaDatabase::DefaultFactory;
  *(uint32_t *)self = 0;
  *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)v3 + 2) = 0;
  *((uint32_t *)v3 + 3) = 0;
  *((uint32_t *)v3 + 4) = 0;
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)v9,
    (boost::intrusive_ptr<glitch::io::IReadFile> *)glitch::collada::CResFileManager::Inst,
    v5,
    v3,
    0,
    0,
    0);
  v6 = v9[0];
  if ( v9[0] != nullptr )
    sub_8B1B00(v9[0] + 1);
  v7 = *(volatile int32_t **)v3;
  *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v6);
  if ( v7 != nullptr )
    sub_5459C0(v7);
  result = (glitch::collada::CColladaDatabase::Self *)v9[0];
  if ( v9[0] != nullptr )
    return (glitch::collada::CColladaDatabase::Self *)sub_5459C0(v9[0]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::Destroy  (binary VA: 0xdbd570)
// Original: glitch::collada::CResFileManager::~CResFileManager
// ----------------------------------------------------------------------------
void glitch::collada::CResFileManager::Destroy(glitch::collada::CResFileManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207B940);
  glitch::collada::CResFileManager::Inst = 0;
  g4_std::Rb_tree_basic_string_char_char_t_79b9ea::M_erase(
    (int)(uintptr_t)((char *)self + 8),
    *((uint32_t *)self + 4));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CResFileManager::Destroy_eadbd5d0  (binary VA: 0xdbd5d0)
// Original: glitch::collada::CResFileManager::~CResFileManager
// ----------------------------------------------------------------------------
void glitch::collada::CResFileManager::Destroy_eadbd5d0(glitch::collada::CResFileManager::Self *self)
{
  glitch::collada::CResFileManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::fillLodSceneNode  (binary VA: 0xdc1d80)
// Original: glitch::collada::CColladaDatabase::fillLodSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaDatabase::fillLodSceneNode(int a1, uint32_t *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t **v14;
  int v15;
  uint32_t *v16;
  bool v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  unsigned int v23;
  uint32_t *v24;
  char *v25;
  uint32_t *v26;
  char *v27;
  uint32_t *v28;
  int result;
  unsigned int v30;
  int v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t **v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t **v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef uint32_t **_g4_t_v55;
  typedef uint32_t **_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef uint32_t _g4_t_v67[10];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v41)) > _g4_s0 ? (0u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v42)) > _g4_s1 ? (0u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v43)) > _g4_s2 ? (0u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v44)) > _g4_s3 ? (4u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v45)) > _g4_s4 ? (4u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v46)) > _g4_s5 ? (12u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v47)) > _g4_s6 ? (12u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v48)) > _g4_s7 ? (12u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v49)) > _g4_s8 ? (16u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v50)) > _g4_s9 ? (16u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v51)) > _g4_s10 ? (20u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v52)) > _g4_s11 ? (20u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v53)) > _g4_s12 ? (20u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v54)) > _g4_s13 ? (24u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v55)) > _g4_s14 ? (24u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v56)) > _g4_s15 ? (24u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v57)) > _g4_s16 ? (28u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v58)) > _g4_s17 ? (32u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v59)) > _g4_s18 ? (36u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v60)) > _g4_s19 ? (40u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v61)) > _g4_s20 ? (44u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v62)) > _g4_s21 ? (44u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v63)) > _g4_s22 ? (48u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v64)) > _g4_s23 ? (52u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v65)) > _g4_s24 ? (52u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v66)) > _g4_s25 ? (56u + sizeof(_g4_t_v66)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v67)) > _g4_s26 ? (72u + sizeof(_g4_t_v67)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);

  v67[6] = (uint32_t)(uintptr_t)(&a1);
  v6 = a3;
  v60 = a1;
  v63 = a2;
  v7 = a5;
  v8 = a6;
  *(uint32_t *)(a3 + 4) = a4;
  v59 = v7;
  v58 = v8;
  glitch::collada::CColladaDatabase::constructNode(&v66);
  v9 = v66;
  if ( v66 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v66 + *(uint32_t *)(*v66 - 16) + 4));
  v10 = *(uint32_t **)v6;
  *(uint32_t *)v6 = (uint32_t)(uintptr_t)(v9);
  if ( v10 != nullptr )
    sub_5459C0((uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 16)));
  v11 = v63;
  if ( (int)v63[22] > 0 )
  {
    v61 = 0;
    v64 = 0;
    do
    {
      glitch::collada::CColladaDatabase::constructNode(v67);
      v12 = (uint32_t *)v67[0];
      if ( v67[0] != 0 )
        sub_8B1B00((volatile int32_t *)(v67[0] + *(uint32_t *)(*(uint32_t *)v67[0] - 16) + 4));
      v13 = v66;
      v66 = v12;
      if ( v13 != nullptr )
        sub_5459C0((uint32_t *)((char *)v13 + *(uint32_t *)(*v13 - 16)));
      if ( v67[0] != 0 )
        sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v67[0] - 16) + v67[0]));
      v14 = *(uint32_t ***)(v6 + 12);
      if ( v14 == *(uint32_t ***)(v6 + 16) )
      {
        v50 = 1;
        v30 = ((int)(uintptr_t)v14 - *(uint32_t *)(v6 + 8)) >> 2;
        if ( v30 != 0 )
        {
          if ( v30 > 2 * v30 || 2 * v30 > 0x3FFFFFFF )
            v50 = -1;
          else
            v50 = 2 * v30;
        }
        v45 = ((int)(uintptr_t)v14 - *(uint32_t *)(v6 + 8)) >> 2;
        v31 = sub_4EBDC0(v50 * 4);
        v32 = (uint32_t *)(v31 + 4);
        v53 = (uint32_t *)v31;
        if ( v31 + 4 * v45 != 0 )
        {
          v33 = v66;
          v17 = v66 == nullptr;
          *(uint32_t *)(v31 + 4 * v45) = (uint32_t)(uintptr_t)(v66);
          if ( !v17 )
          {
            v42 = v31 + 4;
            sub_8B1B00((uint32_t *)((char *)v33 + *(uint32_t *)(*v33 - 16) + 4));
            v32 = (uint32_t *)v42;
          }
        }
        if ( v14 != *(uint32_t ***)(v6 + 8) )
        {
          v55 = v14;
          v46 = v6;
          v34 = v53;
          v35 = *(uint32_t ***)(v6 + 8);
          do
          {
            if ( v34 != nullptr )
            {
              v36 = *v35;
              v17 = *v35 == nullptr;
              *v34 = (uint32_t)(uintptr_t)(*v35);
              if ( !v17 )
                sub_8B1B00((uint32_t *)((char *)v36 + *(uint32_t *)(*v36 - 16) + 4));
            }
            ++v35;
            ++v34;
          }
          while ( v55 != v35 );
          v37 = v34;
          v6 = v46;
          v14 = v55;
          v32 = v37 + 1;
        }
        v56 = *(uint32_t ***)(v6 + 12);
        if ( v14 != v56 )
        {
          v47 = v6;
          v38 = v32;
          do
          {
            if ( v38 != nullptr )
            {
              v39 = *v14;
              v17 = *v14 == nullptr;
              *v38 = (uint32_t)(uintptr_t)(*v14);
              if ( !v17 )
                sub_8B1B00((uint32_t *)((char *)v39 + *(uint32_t *)(*v39 - 16) + 4));
            }
            ++v14;
            ++v38;
          }
          while ( v56 != v14 );
          v32 = v38;
          v6 = v47;
          v56 = *(uint32_t ***)(v47 + 12);
        }
        v40 = *(uint32_t ***)(v6 + 8);
        if ( v40 != v56 )
        {
          v48 = v32;
          do
          {
            if ( *v40 != nullptr )
              sub_5459C0((uint32_t *)((char *)*v40 + *(uint32_t *)(**v40 - 16)));
            ++v40;
          }
          while ( v56 != v40 );
          v32 = v48;
          v40 = *(uint32_t ***)(v6 + 8);
        }
        if ( v40 != nullptr )
        {
          v43 = v32;
          gll_operator_delete_arr((int)(uintptr_t)v40);
          v32 = v43;
        }
        *(uint32_t *)(v6 + 12) = (uint32_t)(uintptr_t)(v32);
        *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v53);
        *(uint32_t *)(v6 + 16) = (uint32_t)(uintptr_t)(&v53[v50]);
      }
      else
      {
        v15 = 0;
        if ( v14 != nullptr )
        {
          v16 = v66;
          v17 = v66 == nullptr;
          *v14 = v66;
          if ( !v17 )
            sub_8B1B00((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 16) + 4));
          v15 = *(uint32_t *)(v6 + 12);
        }
        *(uint32_t *)(v6 + 12) = v15 + 4;
      }
      v11 = v63;
      ++v64;
      v61 += 80;
    }
    while ( v63[22] > v64 );
  }
  if ( (int)v11[24] > 0 )
  {
    v65 = 0;
    v62 = v11 + 24;
    do
    {
      v21 = (uint32_t *)glitch::scene::CLODSceneNode::LodNodePool[0];
      if ( v21 != nullptr )
      {
        glitch::scene::CLODSceneNode::LodNodePool[0] = *v21;
      }
      else
      {
        v21 = sub_609270((int)(uintptr_t)&glitch::scene::CLODSceneNode::LodNodePool);
        if ( v21 == nullptr )
          goto LABEL_31;
      }
      *v21 = 0;
      v21[1] = 0;
      v21[2] = 0;
      v21[3] = 0;
      v21[4] = 0;
      v21[5] = 0;
      v21[6] = 0;
      v21[7] = 0;
LABEL_31:
      v22 = *(uint32_t **)(v6 + 24);
      if ( v22 == *(uint32_t **)(v6 + 28) )
      {
        v57 = 4;
        v23 = ((int)(uintptr_t)v22 - *(uint32_t *)(v6 + 20)) >> 2;
        if ( v23 != 0 )
        {
          if ( v23 > 2 * v23 || 2 * v23 > 0x3FFFFFFF )
            v57 = -4;
          else
            v57 = 8 * v23;
        }
        v44 = *(char **)(v6 + 24);
        v41 = ((int)(uintptr_t)v22 - *(uint32_t *)(v6 + 20)) >> 2;
        v49 = sub_4EBDC0(v57);
        v54 = v49 + 4;
        v24 = (uint32_t *)(v49 + 4 * v41);
        if ( v24 != nullptr )
          *v24 = (uint32_t)(uintptr_t)(v21);
        v51 = *(char **)(v6 + 20);
        if ( v44 != v51 )
        {
          v25 = *(char **)(v6 + 20);
          v26 = (uint32_t *)v49;
          do
          {
            if ( v26 != nullptr )
              *v26 = *(uint32_t *)v25;
            v25 += 4;
            ++v26;
          }
          while ( v44 != v25 );
          v54 = v49 + 4 * ((unsigned int)(v44 - (v51 + 4)) >> 2) + 8;
        }
        v52 = *(char **)(v6 + 24);
        if ( v44 != v52 )
        {
          v27 = v44;
          v28 = (uint32_t *)v54;
          do
          {
            if ( v28 != nullptr )
              *v28 = *(uint32_t *)v27;
            v27 += 4;
            ++v28;
          }
          while ( v52 != v27 );
          v54 += 4 * ((unsigned int)(v52 - (v44 + 4)) >> 2) + 4;
        }
        if ( *(uint32_t *)(v6 + 20) != 0 )
          gll_operator_delete_arr(*(uint32_t *)(v6 + 20));
        *(uint32_t *)(v6 + 20) = v49;
        *(uint32_t *)(v6 + 24) = v54;
        *(uint32_t *)(v6 + 28) = v57 + v49;
      }
      else
      {
        v18 = 0;
        if ( v22 != nullptr )
        {
          *v22 = (uint32_t)(uintptr_t)(v21);
          v18 = *(uint32_t *)(v6 + 24);
        }
        *(uint32_t *)(v6 + 24) = v18 + 4;
      }
      v19 = 0;
      v20 = *(uint32_t *)((char *)v62 + v63[25] + 8);
      if ( v20 != 0 )
        v19 = (int)(uintptr_t)v62 + v63[25] + v20 + 8;
      glitch::collada::CColladaDatabase::fillLodSceneNode(v60, v19, v21, v6, v59, v58);
      ++v65;
    }
    while ( v63[24] > v65 );
  }
  result = (int)(uintptr_t)v66;
  if ( v66 != nullptr )
    return sub_5459C0((uint32_t *)((char *)v66 + *(uint32_t *)(*v66 - 16)));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructNode  (binary VA: 0xdc22d0)
// Original: glitch::collada::CColladaDatabase::constructNode
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CColladaDatabase::constructNode(uint32_t *a1, glitch::collada::CColladaDatabase::Self *a2, glitch::video::IVideoDriver::Self *a3, int *a4, glitch::collada::CRootSceneNode::Self **a5)
{
  int *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  char *v9;
  uint32_t *v10;
  int v11;
  char *v12;
  const char *v13;
  char *v14;
  int v15;
  char **v16;
  int v17;
  bool v18;
  int v19;
  glitch::scene::ISceneNode::Self *v20;
  int *v21;
  glitch::scene::CLODSceneNode::Self *v22;
  const char *v23;
  int v24;
  int *v25;
  unsigned int v26;
  const char *v27;
  int v28;
  int v29;
  char *v30;
  const char *v31;
  char *v32;
  int v33;
  char **v34;
  int v35;
  glitch::scene::ISceneNode::Self *v36;
  char *v37;
  int *v38;
  unsigned int v39;
  uint32_t *v40;
  int v41;
  char *v42;
  int v43;
  char *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49; // xmm0_4
  void (*v50)(uint32_t *, uint32_t *);
  int v51;
  char *v52;
  int v53;
  int v55;
  int *v56;
  int v57;
  void (*v58)(uint32_t *, glitch::scene::ISceneNode::Self **);
  glitch::scene::ISceneNode::Self *v59;
  int v60;
  uint32_t *v61;
  int v62;
  int v63;
  glitch::scene::CLODSceneNode::Self *v64;
  glitch::scene::ISceneNode::Self *v65;
  glitch::scene::ISceneNode::Self *v66;
  int v67;
  int v68;
  int v69;
  glitch::scene::CLODSceneNode::Self *v70;
  glitch::scene::CLODSceneNode::Self *v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  glitch::scene::ISceneNode::Self *v79;
  int v80;
  void (*v81)(uint32_t *, glitch::scene::CLODSceneNode::Self **);
  glitch::scene::CLODSceneNode::Self *v82;
  glitch::scene::CLODSceneNode::Self *v83;
  int v84;
  int v85;
  int v86;
  int v87;
  void (*v88)(uint32_t *, glitch::scene::ISceneNode::Self **);
  glitch::scene::ISceneNode::Self *v89;
  glitch::scene::ISceneNode::Self *v90;
  int v91;
  int v92;
  uint32_t *Controller;
  glitch::IObject::Self *v94;
  int v95;
  char *v96;
  int v97;
  int v98;
  int v99;
  volatile int32_t *v100;
  volatile int32_t *v101;
  glitch::scene::CLODSceneNode::Self *v102;
  volatile int32_t **v103;
  int v104;
  int v105;
  glitch::scene::CLODSceneNode::Self *v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  void (*v112)(uint32_t *, glitch::scene::CLODSceneNode::Self **);
  int v113;
  int v114;
  int v115;
  int v116;
  void (*v117)(uint32_t *, glitch::scene::ISceneNode::Self **);
  int v118;
  uint32_t *v119;
  int v120;
  glitch::scene::ISceneNode::Self *v121;
  int v122;
  void (*v123)(uint32_t *, glitch::scene::ISceneNode::Self **);
  int v124;
  int v125;
  int v126;
  void (*v127)(uint32_t *, glitch::scene::ISceneNode::Self **);
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  glitch::scene::ISceneNode::Self *v137;
  glitch::scene::ISceneNode::Self *v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  char v144;
  void (*v145)(uint32_t *, glitch::scene::ISceneNode::Self **);
  int v146;
  int v147;
  int v148;
  glitch::scene::ISceneNode::Self *v149;
  glitch::scene::ISceneNode::Self *v150;
  void (*v151)(uint32_t *, glitch::scene::ISceneNode::Self **);
  int v152;
  void (*v153)(uint32_t *, uint32_t **);
  unsigned int v154;
  glitch::collada::CColladaFactory::Self **v155;
  volatile int32_t **v156;
  volatile int32_t **v157;
  volatile int32_t **v158;
  volatile int32_t *v159;
  uint32_t *v160;
  uint32_t *v161;
  glitch::collada::CColladaFactory::Self *v162;
  int v163;
  int v164;
  volatile int32_t **v165;
  glitch::scene::ISceneNode::Self *v166;
  unsigned int v167;
  int v168;
  bool v169; // cc
  int v170;
  typedef char *_g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef volatile int32_t **_g4_t_v177;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v178;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v179;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v180;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v181;
  typedef glitch::IObject::Self *_g4_t_v182;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v183;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v184;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v185;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v186;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v187;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v188;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v189;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v190;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v191;
  typedef glitch::collada::CColladaFactory::Self **_g4_t_v192;
  typedef int *_g4_t_v193;
  typedef int _g4_t_v194;
  typedef glitch::collada::CColladaFactory::Self **_g4_t_v195;
  typedef volatile int32_t *_g4_t_v196;
  typedef uint32_t *_g4_t_v197;
  typedef volatile int32_t *_g4_t_v198;
  typedef size_t _g4_t_v199;
  typedef unsigned int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef char *_g4_t_dest;
  typedef char *_g4_t_desta;
  typedef int *_g4_t_destb;
  typedef uint32_t *_g4_t_v207;
  typedef char _g4_t_v208;
  typedef char *_g4_t_v209;
  typedef unsigned int _g4_t_v210;
  typedef unsigned int _g4_t_v211;
  typedef unsigned int _g4_t_v212;
  typedef int _g4_t_v213;
  typedef glitch::collada::CColladaFactory::Self *_g4_t_v214;
  typedef volatile int32_t *_g4_t_v215;
  typedef glitch::collada::CColladaFactory::Self *_g4_t_v216;
  typedef glitch::collada::CColladaFactory::Self *_g4_t_v217;
  typedef glitch::collada::CColladaFactory::Self *_g4_t_v218;
  typedef glitch::collada::CColladaFactory::Self *_g4_t_v219;
  typedef glitch::collada::CColladaFactory::Self *_g4_t_v220;
  typedef char *_g4_t_v221;
  typedef char *_g4_t_v222;
  typedef char *_g4_t_v223;
  typedef char *_g4_t_v224;
  typedef char *_g4_t_v225;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v226;
  typedef int _g4_t_v227;
  typedef char *_g4_t_v228;
  typedef char *_g4_t_v229;
  typedef char *_g4_t_v230;
  typedef glitch::collada::CRootSceneNode::Self **_g4_t_v231;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v232;
  typedef uint32_t *_g4_t_v233;
  typedef uint32_t *_g4_t_v234;
  typedef char *_g4_t_s;
  typedef char *_g4_t_sa;
  typedef char *_g4_t_sb;
  typedef char *_g4_t_sc;
  typedef char *_g4_t_sd;
  typedef char *_g4_t_sf;
  typedef char *_g4_t_se;
  typedef char *_g4_t_sg;
  typedef int _g4_t_v243;
  typedef volatile int32_t *_g4_t_v244;
  typedef uint32_t _g4_t_v245[4];
  typedef uint32_t _g4_t_v246[4];
  typedef char *_g4_t_v247;
  typedef char *_g4_t_v248;
  typedef uint32_t _g4_t_v249[4];
  typedef glitch::scene::ISceneNode::Self *_g4_t_v250;
  typedef uint32_t *_g4_t_v251;
  typedef uint32_t *_g4_t_v252;
  typedef uint32_t *_g4_t_v253;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v254;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v255;
  typedef volatile int32_t *_g4_t_v256;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v257;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v258;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v259;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v260;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v261;
  typedef char *_g4_t_v262;
  typedef char *_g4_t_v263;
  typedef char *_g4_t_v264;
  typedef char *_g4_t_v265;
  typedef uint32_t *_g4_t_v266;
  typedef uint32_t *_g4_t_v267;
  typedef uint32_t *_g4_t_v268;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v269;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v270;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v271;
  typedef glitch::scene::CLODSceneNode::Self *_g4_t_v272;
  typedef glitch::collada::CMorphingMesh::Self *_g4_t_v273;
  typedef glitch::collada::CMorphingMesh::Self *_g4_t_v274;
  typedef glitch::collada::CMorphingMesh::Self *_g4_t_v275;
  typedef volatile int32_t *_g4_t_v276;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v277;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v278;
  typedef uint32_t _g4_t_v279[3];
  typedef int _g4_t_v280[3];
  typedef int _g4_t_v281[3];
  typedef uint32_t _g4_t_v282[3];
  typedef uint32_t _g4_t_v283[3];
  typedef int _g4_t_v284[4];
  typedef uint32_t _g4_t_v285[10];
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (0u + sizeof(_g4_t_v171)) > _g4_s0 ? (0u + sizeof(_g4_t_v171)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v172)) > _g4_s1 ? (8u + sizeof(_g4_t_v172)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v173)) > _g4_s2 ? (16u + sizeof(_g4_t_v173)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v174)) > _g4_s3 ? (20u + sizeof(_g4_t_v174)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v175)) > _g4_s4 ? (24u + sizeof(_g4_t_v175)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v176)) > _g4_s5 ? (28u + sizeof(_g4_t_v176)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v177)) > _g4_s6 ? (32u + sizeof(_g4_t_v177)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v178)) > _g4_s7 ? (40u + sizeof(_g4_t_v178)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v179)) > _g4_s8 ? (40u + sizeof(_g4_t_v179)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v180)) > _g4_s9 ? (40u + sizeof(_g4_t_v180)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v181)) > _g4_s10 ? (40u + sizeof(_g4_t_v181)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v182)) > _g4_s11 ? (40u + sizeof(_g4_t_v182)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v183)) > _g4_s12 ? (40u + sizeof(_g4_t_v183)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v184)) > _g4_s13 ? (40u + sizeof(_g4_t_v184)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v185)) > _g4_s14 ? (40u + sizeof(_g4_t_v185)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v186)) > _g4_s15 ? (40u + sizeof(_g4_t_v186)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v187)) > _g4_s16 ? (40u + sizeof(_g4_t_v187)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v188)) > _g4_s17 ? (40u + sizeof(_g4_t_v188)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v189)) > _g4_s18 ? (40u + sizeof(_g4_t_v189)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v190)) > _g4_s19 ? (40u + sizeof(_g4_t_v190)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v191)) > _g4_s20 ? (40u + sizeof(_g4_t_v191)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v192)) > _g4_s21 ? (44u + sizeof(_g4_t_v192)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v193)) > _g4_s22 ? (44u + sizeof(_g4_t_v193)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v194)) > _g4_s23 ? (48u + sizeof(_g4_t_v194)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v195)) > _g4_s24 ? (52u + sizeof(_g4_t_v195)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v196)) > _g4_s25 ? (52u + sizeof(_g4_t_v196)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v197)) > _g4_s26 ? (56u + sizeof(_g4_t_v197)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v198)) > _g4_s27 ? (56u + sizeof(_g4_t_v198)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v199)) > _g4_s28 ? (60u + sizeof(_g4_t_v199)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v200)) > _g4_s29 ? (64u + sizeof(_g4_t_v200)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v201)) > _g4_s30 ? (64u + sizeof(_g4_t_v201)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v202)) > _g4_s31 ? (64u + sizeof(_g4_t_v202)) : _g4_s31,
    _g4_s33 = (64u + sizeof(_g4_t_v203)) > _g4_s32 ? (64u + sizeof(_g4_t_v203)) : _g4_s32,
    _g4_s34 = (68u + sizeof(_g4_t_dest)) > _g4_s33 ? (68u + sizeof(_g4_t_dest)) : _g4_s33,
    _g4_s35 = (68u + sizeof(_g4_t_desta)) > _g4_s34 ? (68u + sizeof(_g4_t_desta)) : _g4_s34,
    _g4_s36 = (68u + sizeof(_g4_t_destb)) > _g4_s35 ? (68u + sizeof(_g4_t_destb)) : _g4_s35,
    _g4_s37 = (72u + sizeof(_g4_t_v207)) > _g4_s36 ? (72u + sizeof(_g4_t_v207)) : _g4_s36,
    _g4_s38 = (79u + sizeof(_g4_t_v208)) > _g4_s37 ? (79u + sizeof(_g4_t_v208)) : _g4_s37,
    _g4_s39 = (80u + sizeof(_g4_t_v209)) > _g4_s38 ? (80u + sizeof(_g4_t_v209)) : _g4_s38,
    _g4_s40 = (80u + sizeof(_g4_t_v210)) > _g4_s39 ? (80u + sizeof(_g4_t_v210)) : _g4_s39,
    _g4_s41 = (84u + sizeof(_g4_t_v211)) > _g4_s40 ? (84u + sizeof(_g4_t_v211)) : _g4_s40,
    _g4_s42 = (84u + sizeof(_g4_t_v212)) > _g4_s41 ? (84u + sizeof(_g4_t_v212)) : _g4_s41,
    _g4_s43 = (84u + sizeof(_g4_t_v213)) > _g4_s42 ? (84u + sizeof(_g4_t_v213)) : _g4_s42,
    _g4_s44 = (88u + sizeof(_g4_t_v214)) > _g4_s43 ? (88u + sizeof(_g4_t_v214)) : _g4_s43,
    _g4_s45 = (88u + sizeof(_g4_t_v215)) > _g4_s44 ? (88u + sizeof(_g4_t_v215)) : _g4_s44,
    _g4_s46 = (88u + sizeof(_g4_t_v216)) > _g4_s45 ? (88u + sizeof(_g4_t_v216)) : _g4_s45,
    _g4_s47 = (92u + sizeof(_g4_t_v217)) > _g4_s46 ? (92u + sizeof(_g4_t_v217)) : _g4_s46,
    _g4_s48 = (92u + sizeof(_g4_t_v218)) > _g4_s47 ? (92u + sizeof(_g4_t_v218)) : _g4_s47,
    _g4_s49 = (92u + sizeof(_g4_t_v219)) > _g4_s48 ? (92u + sizeof(_g4_t_v219)) : _g4_s48,
    _g4_s50 = (92u + sizeof(_g4_t_v220)) > _g4_s49 ? (92u + sizeof(_g4_t_v220)) : _g4_s49,
    _g4_s51 = (96u + sizeof(_g4_t_v221)) > _g4_s50 ? (96u + sizeof(_g4_t_v221)) : _g4_s50,
    _g4_s52 = (96u + sizeof(_g4_t_v222)) > _g4_s51 ? (96u + sizeof(_g4_t_v222)) : _g4_s51,
    _g4_s53 = (96u + sizeof(_g4_t_v223)) > _g4_s52 ? (96u + sizeof(_g4_t_v223)) : _g4_s52,
    _g4_s54 = (96u + sizeof(_g4_t_v224)) > _g4_s53 ? (96u + sizeof(_g4_t_v224)) : _g4_s53,
    _g4_s55 = (96u + sizeof(_g4_t_v225)) > _g4_s54 ? (96u + sizeof(_g4_t_v225)) : _g4_s54,
    _g4_s56 = (100u + sizeof(_g4_t_v226)) > _g4_s55 ? (100u + sizeof(_g4_t_v226)) : _g4_s55,
    _g4_s57 = (104u + sizeof(_g4_t_v227)) > _g4_s56 ? (104u + sizeof(_g4_t_v227)) : _g4_s56,
    _g4_s58 = (104u + sizeof(_g4_t_v228)) > _g4_s57 ? (104u + sizeof(_g4_t_v228)) : _g4_s57,
    _g4_s59 = (108u + sizeof(_g4_t_v229)) > _g4_s58 ? (108u + sizeof(_g4_t_v229)) : _g4_s58,
    _g4_s60 = (108u + sizeof(_g4_t_v230)) > _g4_s59 ? (108u + sizeof(_g4_t_v230)) : _g4_s59,
    _g4_s61 = (112u + sizeof(_g4_t_v231)) > _g4_s60 ? (112u + sizeof(_g4_t_v231)) : _g4_s60,
    _g4_s62 = (116u + sizeof(_g4_t_v232)) > _g4_s61 ? (116u + sizeof(_g4_t_v232)) : _g4_s61,
    _g4_s63 = (120u + sizeof(_g4_t_v233)) > _g4_s62 ? (120u + sizeof(_g4_t_v233)) : _g4_s62,
    _g4_s64 = (120u + sizeof(_g4_t_v234)) > _g4_s63 ? (120u + sizeof(_g4_t_v234)) : _g4_s63,
    _g4_s65 = (124u + sizeof(_g4_t_s)) > _g4_s64 ? (124u + sizeof(_g4_t_s)) : _g4_s64,
    _g4_s66 = (124u + sizeof(_g4_t_sa)) > _g4_s65 ? (124u + sizeof(_g4_t_sa)) : _g4_s65,
    _g4_s67 = (124u + sizeof(_g4_t_sb)) > _g4_s66 ? (124u + sizeof(_g4_t_sb)) : _g4_s66,
    _g4_s68 = (124u + sizeof(_g4_t_sc)) > _g4_s67 ? (124u + sizeof(_g4_t_sc)) : _g4_s67,
    _g4_s69 = (124u + sizeof(_g4_t_sd)) > _g4_s68 ? (124u + sizeof(_g4_t_sd)) : _g4_s68,
    _g4_s70 = (124u + sizeof(_g4_t_sf)) > _g4_s69 ? (124u + sizeof(_g4_t_sf)) : _g4_s69,
    _g4_s71 = (124u + sizeof(_g4_t_se)) > _g4_s70 ? (124u + sizeof(_g4_t_se)) : _g4_s70,
    _g4_s72 = (124u + sizeof(_g4_t_sg)) > _g4_s71 ? (124u + sizeof(_g4_t_sg)) : _g4_s71,
    _g4_s73 = (128u + sizeof(_g4_t_v243)) > _g4_s72 ? (128u + sizeof(_g4_t_v243)) : _g4_s72,
    _g4_s74 = (132u + sizeof(_g4_t_v244)) > _g4_s73 ? (132u + sizeof(_g4_t_v244)) : _g4_s73,
    _g4_s75 = (148u + sizeof(_g4_t_v245)) > _g4_s74 ? (148u + sizeof(_g4_t_v245)) : _g4_s74,
    _g4_s76 = (164u + sizeof(_g4_t_v246)) > _g4_s75 ? (164u + sizeof(_g4_t_v246)) : _g4_s75,
    _g4_s77 = (180u + sizeof(_g4_t_v247)) > _g4_s76 ? (180u + sizeof(_g4_t_v247)) : _g4_s76,
    _g4_s78 = (196u + sizeof(_g4_t_v248)) > _g4_s77 ? (196u + sizeof(_g4_t_v248)) : _g4_s77,
    _g4_s79 = (212u + sizeof(_g4_t_v249)) > _g4_s78 ? (212u + sizeof(_g4_t_v249)) : _g4_s78,
    _g4_s80 = (228u + sizeof(_g4_t_v250)) > _g4_s79 ? (228u + sizeof(_g4_t_v250)) : _g4_s79,
    _g4_s81 = (232u + sizeof(_g4_t_v251)) > _g4_s80 ? (232u + sizeof(_g4_t_v251)) : _g4_s80,
    _g4_s82 = (236u + sizeof(_g4_t_v252)) > _g4_s81 ? (236u + sizeof(_g4_t_v252)) : _g4_s81,
    _g4_s83 = (240u + sizeof(_g4_t_v253)) > _g4_s82 ? (240u + sizeof(_g4_t_v253)) : _g4_s82,
    _g4_s84 = (244u + sizeof(_g4_t_v254)) > _g4_s83 ? (244u + sizeof(_g4_t_v254)) : _g4_s83,
    _g4_s85 = (248u + sizeof(_g4_t_v255)) > _g4_s84 ? (248u + sizeof(_g4_t_v255)) : _g4_s84,
    _g4_s86 = (252u + sizeof(_g4_t_v256)) > _g4_s85 ? (252u + sizeof(_g4_t_v256)) : _g4_s85,
    _g4_s87 = (256u + sizeof(_g4_t_v257)) > _g4_s86 ? (256u + sizeof(_g4_t_v257)) : _g4_s86,
    _g4_s88 = (260u + sizeof(_g4_t_v258)) > _g4_s87 ? (260u + sizeof(_g4_t_v258)) : _g4_s87,
    _g4_s89 = (264u + sizeof(_g4_t_v259)) > _g4_s88 ? (264u + sizeof(_g4_t_v259)) : _g4_s88,
    _g4_s90 = (268u + sizeof(_g4_t_v260)) > _g4_s89 ? (268u + sizeof(_g4_t_v260)) : _g4_s89,
    _g4_s91 = (272u + sizeof(_g4_t_v261)) > _g4_s90 ? (272u + sizeof(_g4_t_v261)) : _g4_s90,
    _g4_s92 = (276u + sizeof(_g4_t_v262)) > _g4_s91 ? (276u + sizeof(_g4_t_v262)) : _g4_s91,
    _g4_s93 = (280u + sizeof(_g4_t_v263)) > _g4_s92 ? (280u + sizeof(_g4_t_v263)) : _g4_s92,
    _g4_s94 = (284u + sizeof(_g4_t_v264)) > _g4_s93 ? (284u + sizeof(_g4_t_v264)) : _g4_s93,
    _g4_s95 = (288u + sizeof(_g4_t_v265)) > _g4_s94 ? (288u + sizeof(_g4_t_v265)) : _g4_s94,
    _g4_s96 = (292u + sizeof(_g4_t_v266)) > _g4_s95 ? (292u + sizeof(_g4_t_v266)) : _g4_s95,
    _g4_s97 = (296u + sizeof(_g4_t_v267)) > _g4_s96 ? (296u + sizeof(_g4_t_v267)) : _g4_s96,
    _g4_s98 = (300u + sizeof(_g4_t_v268)) > _g4_s97 ? (300u + sizeof(_g4_t_v268)) : _g4_s97,
    _g4_s99 = (304u + sizeof(_g4_t_v269)) > _g4_s98 ? (304u + sizeof(_g4_t_v269)) : _g4_s98,
    _g4_s100 = (308u + sizeof(_g4_t_v270)) > _g4_s99 ? (308u + sizeof(_g4_t_v270)) : _g4_s99,
    _g4_s101 = (312u + sizeof(_g4_t_v271)) > _g4_s100 ? (312u + sizeof(_g4_t_v271)) : _g4_s100,
    _g4_s102 = (316u + sizeof(_g4_t_v272)) > _g4_s101 ? (316u + sizeof(_g4_t_v272)) : _g4_s101,
    _g4_s103 = (320u + sizeof(_g4_t_v273)) > _g4_s102 ? (320u + sizeof(_g4_t_v273)) : _g4_s102,
    _g4_s104 = (324u + sizeof(_g4_t_v274)) > _g4_s103 ? (324u + sizeof(_g4_t_v274)) : _g4_s103,
    _g4_s105 = (328u + sizeof(_g4_t_v275)) > _g4_s104 ? (328u + sizeof(_g4_t_v275)) : _g4_s104,
    _g4_s106 = (332u + sizeof(_g4_t_v276)) > _g4_s105 ? (332u + sizeof(_g4_t_v276)) : _g4_s105,
    _g4_s107 = (336u + sizeof(_g4_t_v277)) > _g4_s106 ? (336u + sizeof(_g4_t_v277)) : _g4_s106,
    _g4_s108 = (340u + sizeof(_g4_t_v278)) > _g4_s107 ? (340u + sizeof(_g4_t_v278)) : _g4_s107,
    _g4_s109 = (344u + sizeof(_g4_t_v279)) > _g4_s108 ? (344u + sizeof(_g4_t_v279)) : _g4_s108,
    _g4_s110 = (356u + sizeof(_g4_t_v280)) > _g4_s109 ? (356u + sizeof(_g4_t_v280)) : _g4_s109,
    _g4_s111 = (368u + sizeof(_g4_t_v281)) > _g4_s110 ? (368u + sizeof(_g4_t_v281)) : _g4_s110,
    _g4_s112 = (380u + sizeof(_g4_t_v282)) > _g4_s111 ? (380u + sizeof(_g4_t_v282)) : _g4_s111,
    _g4_s113 = (392u + sizeof(_g4_t_v283)) > _g4_s112 ? (392u + sizeof(_g4_t_v283)) : _g4_s112,
    _g4_s114 = (404u + sizeof(_g4_t_v284)) > _g4_s113 ? (404u + sizeof(_g4_t_v284)) : _g4_s113,
    _g4_s115 = (420u + sizeof(_g4_t_v285)) > _g4_s114 ? (420u + sizeof(_g4_t_v285)) : _g4_s114
  };
  alignas(16) uint8_t _g4_sf[_g4_s115];
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 0u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 8u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 16u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 20u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 24u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 28u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 32u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 40u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 40u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 40u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 40u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 40u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 40u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 40u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 40u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 40u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 40u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 40u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 40u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 40u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 40u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 44u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 44u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 48u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 52u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 52u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 56u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 56u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 60u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 64u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 64u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 64u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 64u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 68u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 68u);
  _g4_t_destb &destb = *reinterpret_cast<_g4_t_destb *>(_g4_sf + 68u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 72u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 79u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 80u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 80u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 84u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 84u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 84u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 88u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 88u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 88u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 92u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 92u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 92u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 92u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 96u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 96u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 96u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 96u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 96u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 100u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 104u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 104u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 108u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 108u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 112u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 116u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 120u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 120u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 124u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 124u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 124u);
  _g4_t_sc &sc = *reinterpret_cast<_g4_t_sc *>(_g4_sf + 124u);
  _g4_t_sd &sd = *reinterpret_cast<_g4_t_sd *>(_g4_sf + 124u);
  _g4_t_sf &sf = *reinterpret_cast<_g4_t_sf *>(_g4_sf + 124u);
  _g4_t_se &se = *reinterpret_cast<_g4_t_se *>(_g4_sf + 124u);
  _g4_t_sg &sg = *reinterpret_cast<_g4_t_sg *>(_g4_sf + 124u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 128u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 132u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 148u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 164u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 180u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 196u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 212u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 228u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 232u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 236u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 240u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 244u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 248u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 252u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 256u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 260u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 264u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 268u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 272u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 276u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 280u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 284u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 288u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 292u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 296u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 300u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 304u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 308u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 312u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 316u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 320u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 324u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 328u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 332u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 336u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 340u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 344u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 356u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 368u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 380u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 392u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 404u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 420u);

  v285[6] = (uint32_t)(uintptr_t)(&a1);
  v5 = a4;
  v232 = a2;
  v207 = a1;
  v226 = a3;
  v231 = a5;
  if ( a4 == nullptr )
  {
    *a1 = 0;
    return v207;
  }
  if ( a4[19] != 0 )
  {
    (*(void (**)(uint32_t **))(**((uint32_t **)a2 + 1) + 140))(&v251);
    v6 = v251;
    if ( v251 != nullptr )
    {
      sub_8B1B00((uint32_t *)((char *)v251 + *(uint32_t *)(*v251 - 16) + 4));
      v7 = v251;
      if ( v251 != nullptr )
      {
LABEL_5:
        sub_5459C0((uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 16)));
        v208 = 0;
        goto LABEL_6;
      }
    }
    goto LABEL_13;
  }
  v10 = *((uint32_t **)a2 + 1);
  if ( a4[16] > 1 )
  {
    (*(void (**)(uint32_t **))(*v10 + 136))(&v252);
    v6 = v252;
    if ( v252 != nullptr )
    {
      sub_8B1B00((uint32_t *)((char *)v252 + *(uint32_t *)(*v252 - 16) + 4));
      v7 = v252;
      if ( v252 != nullptr )
        goto LABEL_5;
    }
LABEL_13:
    v208 = 0;
    goto LABEL_6;
  }
  v208 = G4_VCALL<int>(v10, 116);
  (*(void (**)(uint32_t **, uint32_t, glitch::collada::CColladaDatabase::Self *, int *))(**((uint32_t **)v232 + 1) + 136))(
    &v253,
    *((uint32_t *)v232 + 1),
    v232,
    v5);
  v6 = v253;
  if ( v253 == nullptr )
    goto LABEL_320;
  sub_8B1B00((uint32_t *)((char *)v253 + *(uint32_t *)(*v253 - 16) + 4));
  if ( v253 != nullptr )
    sub_5459C0((uint32_t *)((char *)v253 + *(uint32_t *)(*v253 - 16)));
LABEL_6:
  if ( v6 == nullptr )
  {
LABEL_320:
    *v207 = 0;
    return v207;
  }
  v227 = v5[16];
  if ( v227 > 0 )
  {
    v243 = 0;
    v229 = (char *)(v5 + 16);
    v233 = v6;
    while ( 2 )
    {
      v8 = 8 * v243;
      v9 = &v229[8 * v243 + 4 + v5[17]];
      switch ( *(uint32_t *)v9 )
      {
        case 1:
          v84 = *((uint32_t *)v9 + 1);
          v85 = 0;
          v86 = (int)(uintptr_t)&v9[v84 + 4];
          if ( v84 != 0 )
            v85 = v86;
          glitch::collada::CColladaDatabase::constructCamera((glitch::collada::CCameraSceneNode **)&v278, v232, (char *)(*(uint32_t *)(v85 + 4) + 1), v231);
          if ( v278 == nullptr )
            goto LABEL_91;
          if ( v208 != 0 )
            goto LABEL_304;
          v87 = *v233;
          v255 = v278;
          v88 = *(void (**)(uint32_t *, glitch::scene::ISceneNode::Self **))(v87 + 104);
          sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
          v88(v233, &v255);
          v89 = v255;
          if ( v255 != nullptr )
            goto LABEL_146;
          goto LABEL_147;
        case 2:
          v67 = *((uint32_t *)v9 + 1);
          v68 = 0;
          v172 = 1;
          v69 = (int)(uintptr_t)&v9[v67 + 4];
          if ( v67 != 0 )
            v68 = v69;
          glitch::collada::CColladaDatabase::constructController((glitch::collada::CMorphingMesh::Self **)&v278, v232, (int)(uintptr_t)v226, v68, v231);
          if ( v278 != nullptr
            && (G4_VCALL<int>(v278, 56) == 2
             || G4_VCALL<int>(v278, 56) == 3) )
          {
            (*(void (**)(glitch::scene::CLODSceneNode::Self **))(**((uint32_t **)v232 + 1) + 152))(&v258);
            if ( v258 == nullptr )
              goto LABEL_184;
            v184 = v258;
            sub_8B1B00((volatile int32_t *)((char *)v258 + *(uint32_t *)(*(uint32_t *)v258 - 16) + 4));
            v70 = v258;
            v71 = v184;
            if ( v258 != nullptr )
              goto LABEL_133;
          }
          else
          {
            (*(void (**)(glitch::scene::CLODSceneNode::Self **))(**((uint32_t **)v232 + 1) + 148))(&v259);
            if ( v259 == nullptr )
              goto LABEL_184;
            v184 = v259;
            sub_8B1B00((volatile int32_t *)((char *)v259 + *(uint32_t *)(*(uint32_t *)v259 - 16) + 4));
            v70 = v259;
            v71 = v184;
            if ( v259 != nullptr )
            {
LABEL_133:
              sub_5459C0((volatile int32_t *)((char *)v70 + *(uint32_t *)(*(uint32_t *)v70 - 16)));
              v71 = v184;
            }
          }
          v72 = (int)(uintptr_t)&v229[v5[17] + 4 + v8];
          sf = *(char **)(v72 + 4);
          v73 = (int)(uintptr_t)&sf[v72 + 4];
          v74 = 0;
          if ( sf != nullptr )
            v74 = v73;
          v185 = v71;
          G4_VCALL<void>(v71, 76, *(uint32_t *)(v74 + 24) != 0);
          v75 = (int)(uintptr_t)&v229[v5[17] + 4 + v8];
          v76 = 0;
          v77 = *(uint32_t *)(v75 + 4);
          v78 = v75 + v77 + 4;
          if ( v77 != 0 )
            v76 = v78;
          G4_VCALL<void>(v185, 236, *(uint32_t *)(v76 + 20));
          G4_VCALL<void>(v185, 188, 0, 2, &v278);
          v79 = (glitch::scene::ISceneNode::Self *)(v185);
          if ( v208 != 0 )
          {
LABEL_243:
            glitch::collada::CRootSceneNode::addSceneNodeAlias(
              *v231,
              (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)*v5,
              v79);
            sub_8B1B00((volatile int32_t *)((char *)v185 + *(uint32_t *)(*(uint32_t *)v185 - 16) + 4));
            v83 = v185;
            if ( v233 != nullptr )
            {
              sub_5459C0((uint32_t *)((char *)v233 + *(uint32_t *)(*v233 - 16)));
              v83 = v185;
            }
            v233 = (uint32_t *)(v185);
          }
          else
          {
            v80 = *v233;
            v260 = v185;
            v81 = *(void (**)(uint32_t *, glitch::scene::CLODSceneNode::Self **))(v80 + 104);
            sub_8B1B00((volatile int32_t *)((char *)v185 + *(uint32_t *)(*(uint32_t *)v185 - 16) + 4));
            v81(v233, &v260);
            v82 = v260;
            v83 = v185;
            if ( v260 != nullptr )
            {
LABEL_182:
              sub_5459C0((volatile int32_t *)((char *)v82 + *(uint32_t *)(*(uint32_t *)v82 - 16)));
              v83 = v185;
            }
          }
LABEL_183:
          sub_5459C0((volatile int32_t *)((char *)v83 + *(uint32_t *)(*(uint32_t *)v83 - 16)));
LABEL_184:
          v59 = v278;
          if ( v278 != nullptr )
            goto LABEL_109;
LABEL_91:
          if ( ++v243 != v227 )
            continue;
          v6 = v233;
          goto LABEL_93;
        case 3:
          v128 = *((uint32_t *)v9 + 1);
          v129 = 0;
          v130 = (int)(uintptr_t)&v9[v128 + 4];
          if ( v128 != 0 )
            v129 = v130;
          glitch::collada::CColladaDatabase::constructGeometry(&v256, v232, (char *)v226, v129, (char **)v231);
          v244 = v256;
          if ( v256 != nullptr )
          {
            sub_8B1B00(v256 + 1);
            if ( v256 != nullptr )
              sub_5459C0(v256);
          }
          if ( v244 == nullptr )
            goto LABEL_91;
          (*(void (**)(glitch::scene::ISceneNode::Self **))(**((uint32_t **)v232 + 1) + 148))(&v278);
          if ( v278 != nullptr )
          {
            v131 = (int)(uintptr_t)&v229[v5[17] + 4 + v8];
            sg = *(char **)(v131 + 4);
            v132 = (int)(uintptr_t)&sg[v131 + 4];
            v133 = 0;
            if ( sg != nullptr )
              v133 = v132;
            G4_VCALL<void>(v278, 76, *(uint32_t *)(v133 + 24) != 0);
            v134 = (int)(uintptr_t)&v229[v5[17] + 4 + v8];
            v135 = 0;
            v136 = *(uint32_t *)(v134 + 4);
            if ( v136 != 0 )
              v135 = v134 + v136 + 4;
            G4_VCALL<void>(v278, 236, *(uint32_t *)(v135 + 20));
            if ( v208 != 0 )
            {
              glitch::collada::CRootSceneNode::addSceneNodeAlias(
                *v231,
                (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)*v5,
                v278);
              v137 = v278;
              if ( v278 != nullptr )
                sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
              if ( v233 != nullptr )
                sub_5459C0((uint32_t *)((char *)v233 + *(uint32_t *)(*v233 - 16)));
              v138 = v278;
              v233 = (uint32_t *)(v137);
            }
            else
            {
              v151 = *(void (**)(uint32_t *, glitch::scene::ISceneNode::Self **))(*v233 + 104);
              v257 = v278;
              if ( v278 != nullptr )
                sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
              v151(v233, &v257);
              if ( v257 != nullptr )
                sub_5459C0((volatile int32_t *)((char *)v257 + *(uint32_t *)(*(uint32_t *)v257 - 16)));
              v138 = v278;
            }
            if ( v138 != nullptr )
              sub_5459C0((volatile int32_t *)((char *)v138 + *(uint32_t *)(*(uint32_t *)v138 - 16)));
          }
          v59 = (glitch::scene::ISceneNode::Self *)v244;
          goto LABEL_109;
        case 4:
          v124 = *((uint32_t *)v9 + 1);
          v125 = 0;
          v126 = (int)(uintptr_t)&v9[v124 + 4];
          if ( v124 != 0 )
            v125 = v126;
          glitch::collada::CColladaDatabase::constructLight((glitch::scene::CLightSceneNode::Self **)&v278, v232, (char *)(*(uint32_t *)(v125 + 4) + 1), v231);
          if ( v278 == nullptr )
            goto LABEL_91;
          G4_VCALL<void>(v278, 236, *(uint32_t *)(v125 + 8));
          v121 = v278;
          if ( v208 != 0 )
            goto LABEL_262;
          v127 = *(void (**)(uint32_t *, glitch::scene::ISceneNode::Self **))(*v233 + 104);
          v254 = v278;
          if ( v278 != nullptr )
            sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
          v127(v233, &v254);
          v89 = v254;
          if ( v254 == nullptr )
            goto LABEL_147;
          goto LABEL_146;
        case 9:
          v139 = *((uint32_t *)v9 + 1);
          v140 = 0;
          v141 = (int)(uintptr_t)&v9[v139 + 4];
          if ( v139 != 0 )
            v140 = v141;
          glitch::collada::CColladaDatabase::constructGNPSEmitter((int *)&v278, v232, v140, (int)(uintptr_t)v226, (uint32_t **)v231);
          if ( v278 == nullptr )
            goto LABEL_91;
          G4_VCALL<void>(v278, 236, *(uint32_t *)(v140 + 20));
          v142 = *(uint32_t *)(v140 + 8);
          v143 = 0;
          if ( v142 != 0 )
            v143 = v140 + v142 + 8;
          (*(void (**)(uint32_t *, uint32_t, glitch::collada::CColladaDatabase::Self *, int))(**((uint32_t **)v232 + 1) + 88))(
            v279,
            *((uint32_t *)v232 + 1),
            v232,
            v143);
          v144 = (*(int (**)(uint32_t))(**((uint32_t **)v232 + 1) + 112))(*((uint32_t *)v232 + 1));
          glitch::collada::CParticleSystemEmitterSceneNode::init(v278, v144, v279);
          if ( v208 != 0 )
          {
LABEL_304:
            glitch::collada::CRootSceneNode::addSceneNodeAlias(
              *v231,
              (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)*v5,
              v278);
            goto LABEL_263;
          }
          v145 = *(void (**)(uint32_t *, glitch::scene::ISceneNode::Self **))(*v233 + 104);
          v261 = v278;
          if ( v278 != nullptr )
            sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
          v145(v233, &v261);
          v89 = v261;
          if ( v261 == nullptr )
            goto LABEL_147;
          goto LABEL_146;
        case 0xA:
          v11 = *((uint32_t *)v9 + 1);
          if ( v11 != 0 )
          {
            v12 = &v9[v11 + 4];
            v221 = (char *)(*((uint32_t *)v12 + 1) + 1);
          }
          else
          {
            v12 = nullptr;
            v221 = (char *)(loc_4 + 1);
          }
          if ( *(uint32_t *)v12 == 0 )
          {
            glitch::collada::CColladaDatabase::constructNode(
              (glitch::collada::CColladaDatabase::Self *)&v264,
              v232,
              (const char *)v226);
            sc = v264;
            if ( v264 == nullptr )
              goto LABEL_91;
            sub_8B1B00((volatile int32_t *)&v264[*(uint32_t *)(*(uint32_t *)v264 - 16) + 4]);
            if ( v264 != nullptr )
              sub_5459C0((volatile int32_t *)&v264[*(uint32_t *)(*(uint32_t *)v264 - 16)]);
LABEL_59:
            if ( sc == nullptr )
              goto LABEL_91;
            if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)v232 + 1) + 236))(*((uint32_t *)v232 + 1)) == 0 )
              goto LABEL_86;
            v222 = *(char **)(**(uint32_t **)(*((uint32_t *)v226 + 111) + 32) + 60);
            v31 = nullptr;
            if ( *(uint32_t *)v232 != 0 )
              v31 = *(const char **)(*(uint32_t *)v232 + 12);
            sub_D8D940(&v265, v31);
            ((void (*)(glitch::scene::ISceneNode::Self **))v222)(&v278);
            v32 = v265 - 12;
            if ( v265 - 12 != (char *)&dword_20D3E6C
              && __sync_fetch_and_add((volatile int32_t *)v265 - 1, 0xFFFFFFFF) <= 0 )
            {
              gll_operator_delete_arr((int)(uintptr_t)v32);
            }
            v219 = *((glitch::collada::CColladaFactory::Self **)v232 + 1);
            v33 = (int)(uintptr_t)&v229[v5[17] + 4 + v8];
            v34 = nullptr;
            v35 = *(uint32_t *)(v33 + 4);
            if ( v35 != 0 )
              v34 = (char **)(v33 + v35 + 4);
            v223 = *v34;
            v36 = v278;
            if ( *((int *)v278 - 1) < 0 )
            {
              v36 = (glitch::scene::ISceneNode::Self *)sub_D8D830((int)(uintptr_t)v278 - 12);
            }
            else if ( (int *)((char *)v278 - 12) != (int *)(&dword_20D3E6C) )
            {
              __sync_add_and_fetch((volatile int32_t *)v278 - 1, 1u);
            }
            v247 = (char *)v36;
            if ( *((uint32_t *)v36 - 3) != 1073741820 )
            {
              sub_D8D710((unsigned int *)&v247, "/", 1u);
              v37 = v247;
              v38 = (int *)(v247 - 12);
              if ( *((int *)v247 - 1) < 0 )
              {
                v37 = (char *)sub_D8D830((int)(uintptr_t)v38);
              }
              else if ( v38 != (int *)(&dword_20D3E6C) )
              {
                __sync_add_and_fetch((volatile int32_t *)v247 - 1, 1u);
              }
              v248 = v37;
              v39 = strlen(v223);
              if ( v39 == 0 )
                goto LABEL_76;
              if ( v39 <= 1073741820 - *((uint32_t *)v37 - 3) )
              {
                sub_D8D710((unsigned int *)&v248, v223, v39);
                v37 = v248;
LABEL_76:
                glitch::collada::CColladaDatabase::constructAnimator(
                  (glitch::collada::CColladaDatabase::Self *)&v266,
                  (glitch::collada::CColladaDatabase::Self *)v37,
                  v219);
                v40 = v266;
                if ( v266 != nullptr )
                {
                  sub_8B1B00((uint32_t *)((char *)v266 + *(uint32_t *)(*v266 - 12) + 4));
                  if ( v266 != nullptr )
                    sub_5459C0((uint32_t *)((char *)v266 + *(uint32_t *)(*v266 - 12)));
                }
                v41 = (int)(uintptr_t)(v248 - 12);
                if ( v248 - 12 != (char *)&dword_20D3E6C
                  && __sync_fetch_and_add((volatile int32_t *)v248 - 1, 0xFFFFFFFF) <= 0 )
                {
                  gll_operator_delete_arr(v41);
                }
                v42 = v247 - 12;
                if ( v247 - 12 != (char *)&dword_20D3E6C
                  && __sync_fetch_and_add((volatile int32_t *)v247 - 1, 0xFFFFFFFF) <= 0 )
                {
                  gll_operator_delete_arr((int)(uintptr_t)v42);
                }
                if ( v40 != nullptr )
                {
                  v43 = *(uint32_t *)sc;
                  v267 = v40;
                  v224 = *(char **)(v43 + 144);
                  sub_8B1B00((uint32_t *)((char *)v40 + *(uint32_t *)(*v40 - 12) + 4));
                  ((void (*)(char *, uint32_t **))v224)(sc, &v267);
                  if ( v267 != nullptr )
                    sub_5459C0((uint32_t *)((char *)v267 + *(uint32_t *)(*v267 - 12)));
                  sub_5459C0((uint32_t *)((char *)v40 + *(uint32_t *)(*v40 - 12)));
                }
                v44 = (char *)v278 - 12;
                if ( (int *)((char *)v278 - 12) != (int *)(&dword_20D3E6C)
                  && __sync_fetch_and_add((volatile int32_t *)v278 - 1, 0xFFFFFFFF) <= 0 )
                {
                  gll_operator_delete_arr((int)(uintptr_t)v44);
                }
LABEL_86:
                glitch::collada::CRootSceneNode::addParticleSystem(
                  *v231,
                  *(glitch::collada::CParticleSystemEmitterSceneNode::Self **)(*((uint32_t *)sc + 78) + 8));
                if ( v208 != 0 )
                {
                  glitch::collada::CRootSceneNode::addSceneNodeAlias(
                    *v231,
                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)*v5,
                    (glitch::scene::ISceneNode::Self *)sc);
                  sub_8B1B00((volatile int32_t *)&sc[*(uint32_t *)(*(uint32_t *)sc - 16) + 4]);
                  if ( v233 != nullptr )
                    sub_5459C0((uint32_t *)((char *)v233 + *(uint32_t *)(*v233 - 16)));
                  v233 = (uint32_t *)(sc);
                }
                else
                {
                  v152 = *v233;
                  v268 = (uint32_t *)(sc);
                  v153 = *(void (**)(uint32_t *, uint32_t **))(v152 + 104);
                  sub_8B1B00((volatile int32_t *)&sc[*(uint32_t *)(*(uint32_t *)sc - 16) + 4]);
                  v153(v233, &v268);
                  if ( v268 != nullptr )
                    sub_5459C0((uint32_t *)((char *)v268 + *(uint32_t *)(*v268 - 16)));
                }
                sub_5459C0((volatile int32_t *)&sc[*(uint32_t *)(*(uint32_t *)sc - 16)]);
                goto LABEL_91;
              }
            }
LABEL_352:
            sub_1900180("basic_string::append");
          }
          s = *(char **)(**(uint32_t **)(*((uint32_t *)v226 + 111) + 32) + 60);
          v13 = nullptr;
          if ( *(uint32_t *)v232 != 0 )
            v13 = *(const char **)(*(uint32_t *)v232 + 12);
          sub_D8D940(&v262, v13);
          ((void (*)(glitch::scene::ISceneNode::Self **))s)(&v278);
          v14 = v262 - 12;
          if ( v262 - 12 != (char *)&dword_20D3E6C
            && __sync_fetch_and_add((volatile int32_t *)v262 - 1, 0xFFFFFFFF) <= 0 )
          {
            gll_operator_delete_arr((int)(uintptr_t)v14);
          }
          v214 = *((glitch::collada::CColladaFactory::Self **)v232 + 1);
          v15 = (int)(uintptr_t)&v229[v5[17] + 4 + v8];
          v16 = nullptr;
          v17 = *(uint32_t *)(v15 + 4);
          v18 = v17 == 0;
          v19 = v15 + v17 + 4;
          v20 = v278;
          if ( !v18 )
            v16 = (char **)v19;
          sa = *v16;
          v21 = (int *)((char *)v278 - 12);
          if ( *((int *)v278 - 1) < 0 )
          {
            v20 = (glitch::scene::ISceneNode::Self *)sub_D8D830((int)(uintptr_t)v21);
          }
          else if ( v21 != (int *)(&dword_20D3E6C) )
          {
            __sync_add_and_fetch((volatile int32_t *)v278 - 1, 1u);
          }
          v245[0] = (uint32_t)(uintptr_t)(v20);
          v22 = *((glitch::scene::CLODSceneNode::Self **)v20 - 3);
          if ( v22 == (glitch::scene::CLODSceneNode::Self *)1073741820 )
            goto LABEL_352;
          v217 = (glitch::collada::CColladaFactory::Self *)((glitch::scene::CLODSceneNode::Self *)((char *)v22 + 1));
          v211 = *((uint32_t *)v20 - 2);
          if ( (unsigned int)(uintptr_t)v22 + 1 <= v211 && *((int *)v20 - 1) <= 0 )
          {
            dest = (char *)v20 + (uint32_t)(uintptr_t)v22;
            v23 = "/";
          }
          else if ( v20 > (glitch::scene::ISceneNode::Self *)"/"
                 || (dest = (char *)v22 + (uint32_t)(uintptr_t)v20, (char *)v22 + (int)(uintptr_t)v20 < "/") )
          {
            if ( v217 == (glitch::collada::CColladaFactory::Self *)v211 && *((int *)v20 - 1) <= 0 )
            {
              dest = (char *)v20 + (uint32_t)(uintptr_t)v22;
              v23 = "/";
            }
            else
            {
              v190 = *((glitch::scene::CLODSceneNode::Self **)v20 - 3);
              sub_D8D5B0(v245, (unsigned int)(uintptr_t)v217);
              v22 = v190;
              dest = (char *)(*(uint32_t *)(v245[0] - 12) + v245[0]);
              v23 = "/";
            }
          }
          else
          {
            v209 = (char *)("/" - (char *)v20);
            if ( v217 != (glitch::collada::CColladaFactory::Self *)v211 || *((int *)v20 - 1) > 0 )
            {
              v178 = *((glitch::scene::CLODSceneNode::Self **)v20 - 3);
              sub_D8D5B0(v245, (unsigned int)(uintptr_t)v217);
              v20 = (glitch::scene::ISceneNode::Self *)v245[0];
              v22 = v178;
              dest = (char *)(v245[0] + *(uint32_t *)(v245[0] - 12));
            }
            v23 = (char *)v20 + (uint32_t)(uintptr_t)v209;
          }
          *dest = *v23;
          v24 = v245[0];
          v25 = (int *)(v245[0] - 12);
          if ( (int *)(v245[0] - 12) != (int *)(&dword_20D3E6C) )
          {
            *(uint32_t *)(v245[0] - 4) = 0;
            *(uint32_t *)(v24 - 12) = (uint32_t)(uintptr_t)(v217);
            *((uint8_t *)v22 + v24 + 1) = 0;
            v24 = v245[0];
            v25 = (int *)(v245[0] - 12);
          }
          if ( *(int *)(v24 - 4) < 0 )
          {
            v24 = sub_D8D830((int)(uintptr_t)v25);
          }
          else if ( v25 != (int *)(&dword_20D3E6C) )
          {
            __sync_add_and_fetch((volatile int32_t *)(v24 - 4), 1u);
          }
          v246[0] = v24;
          v179 = (glitch::scene::CLODSceneNode::Self *)v24;
          v26 = strlen(sa);
          v27 = (const char *)v179;
          if ( v26 == 0 )
            goto LABEL_53;
          v218 = *((glitch::collada::CColladaFactory::Self **)v179 - 3);
          if ( v26 > 1073741820 - (int)(uintptr_t)v218 )
            goto LABEL_352;
          v212 = (unsigned int)(uintptr_t)v218 + v26;
          v210 = *((uint32_t *)v179 - 2);
          if ( (unsigned int)(uintptr_t)v218 + v26 <= v210 && *((int *)v179 - 1) <= 0 )
            goto LABEL_322;
          if ( sa < (char *)v179 || (desta = (char *)v218 + (uint32_t)(uintptr_t)v179, sa > (char *)v218 + (int)(uintptr_t)v179) )
          {
            if ( v212 == v210 && *((int *)v179 - 1) <= 0 )
            {
LABEL_322:
              desta = (char *)v179 + (uint32_t)(uintptr_t)v218;
            }
            else
            {
              v191 = (glitch::scene::CLODSceneNode::Self *)v26;
              sub_D8D5B0(v246, v212);
              v26 = (unsigned int)(uintptr_t)v191;
              desta = (char *)(*(uint32_t *)(v246[0] - 12) + v246[0]);
            }
          }
          else
          {
            sb = (char *)(sa - (char *)v179);
            if ( v212 != v210 || *((int *)v179 - 1) > 0 )
            {
              v180 = (glitch::scene::CLODSceneNode::Self *)v26;
              sub_D8D5B0(v246, v212);
              v27 = (const char *)v246[0];
              v26 = (unsigned int)(uintptr_t)v180;
              desta = (char *)(v246[0] + *(uint32_t *)(v246[0] - 12));
            }
            sa = (char *)&v27[(uint32_t)(uintptr_t)sb];
          }
          if ( v26 == 1 )
            *desta = *sa;
          else
            memcpy(desta, sa, v26);
          v27 = (const char *)v246[0];
          if ( (int *)(v246[0] - 12) != (int *)(&dword_20D3E6C) )
          {
            *(uint32_t *)(v246[0] - 4) = 0;
            *((uint32_t *)v27 - 3) = v212;
            ((char *)v27)[v212] = 0;
            v27 = (const char *)v246[0];
          }
LABEL_53:
          glitch::collada::CColladaDatabase::constructNode(
            (glitch::collada::CColladaDatabase::Self *)&v263,
            (glitch::video::IVideoDriver::Self *)v226,
            (glitch::collada::CColladaDatabase::Self *)v27,
            v221,
            (volatile int32_t **)(uintptr_t)v214);
          sc = v263;
          if ( v263 != nullptr )
          {
            sub_8B1B00((volatile int32_t *)&v263[*(uint32_t *)(*(uint32_t *)v263 - 16) + 4]);
            if ( v263 != nullptr )
              sub_5459C0((volatile int32_t *)&v263[*(uint32_t *)(*(uint32_t *)v263 - 16)]);
          }
          v28 = v246[0] - 12;
          if ( (int *)(v246[0] - 12) != (int *)(&dword_20D3E6C)
            && __sync_fetch_and_add((volatile int32_t *)(v246[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            gll_operator_delete_arr(v28);
          }
          v29 = v245[0] - 12;
          if ( (int *)(v245[0] - 12) != (int *)(&dword_20D3E6C)
            && __sync_fetch_and_add((volatile int32_t *)(v245[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            gll_operator_delete_arr(v29);
          }
          v30 = (char *)v278 - 12;
          if ( (int *)((char *)v278 - 12) != (int *)(&dword_20D3E6C)
            && __sync_fetch_and_add((volatile int32_t *)v278 - 1, 0xFFFFFFFF) <= 0 )
          {
            gll_operator_delete_arr((int)(uintptr_t)v30);
          }
          goto LABEL_59;
        case 0xB:
          v118 = *((uint32_t *)v9 + 1);
          v119 = nullptr;
          v120 = (int)(uintptr_t)&v9[v118 + 4];
          if ( v118 != 0 )
            v119 = (uint32_t *)v120;
          glitch::collada::CColladaDatabase::constructCoronas((int *)&v278, v232, v119, (int)(uintptr_t)v226);
          v121 = v278;
          if ( v278 == nullptr )
            goto LABEL_91;
          if ( v208 != 0 )
          {
LABEL_262:
            glitch::collada::CRootSceneNode::addSceneNodeAlias(
              *v231,
              (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)*v5,
              v121);
LABEL_263:
            v150 = v278;
            if ( v278 != nullptr )
              sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
            if ( v233 != nullptr )
              sub_5459C0((uint32_t *)((char *)v233 + *(uint32_t *)(*v233 - 16)));
            v90 = v278;
            v233 = (uint32_t *)(v150);
          }
          else
          {
            v122 = *v233;
            v270 = v278;
            v123 = *(void (**)(uint32_t *, glitch::scene::ISceneNode::Self **))(v122 + 104);
            sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
            v123(v233, &v270);
            v89 = v270;
            if ( v270 != nullptr )
LABEL_146:
              sub_5459C0((volatile int32_t *)((char *)v89 + *(uint32_t *)(*(uint32_t *)v89 - 16)));
LABEL_147:
            v90 = v278;
          }
          if ( v90 != nullptr )
LABEL_149:
            sub_5459C0((volatile int32_t *)((char *)v90 + *(uint32_t *)(*(uint32_t *)v90 - 16)));
          goto LABEL_91;
        case 0xC:
          v113 = *((uint32_t *)v9 + 1);
          v114 = 0;
          v115 = (int)(uintptr_t)&v9[v113 + 4];
          if ( v113 != 0 )
            v114 = v115;
          glitch::collada::CColladaDatabase::constructForce_eadab190((uint32_t *)&v278, v232, v114);
          if ( v278 == nullptr )
            goto LABEL_91;
          if ( v208 != 0 )
          {
            glitch::collada::CRootSceneNode::addSceneNodeAlias(
              *v231,
              (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)*v5,
              v278);
            v166 = v278;
            if ( v278 != nullptr )
              sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
            if ( v233 != nullptr )
              sub_5459C0((uint32_t *)((char *)v233 + *(uint32_t *)(*v233 - 16)));
            v233 = (uint32_t *)(v166);
          }
          else
          {
            v116 = *v233;
            v269 = v278;
            v117 = *(void (**)(uint32_t *, glitch::scene::ISceneNode::Self **))(v116 + 104);
            sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
            v117(v233, &v269);
            if ( v269 != nullptr )
              sub_5459C0((volatile int32_t *)((char *)v269 + *(uint32_t *)(*(uint32_t *)v269 - 16)));
          }
          G4_VCALL<void>(v278, 288, *((uint8_t *)v278 + 288));
          v90 = v278;
          if ( v278 == nullptr )
            goto LABEL_91;
          goto LABEL_149;
        case 0xD:
          glitch::collada::CColladaDatabase::constructModularSkin((uint32_t *)&v278, (int)(uintptr_t)v232);
          G4_VCALL<void>(v278, 56);
          v105 = 0;
          if ( v5[18] != 0 )
            v105 = (int)(uintptr_t)v5 + v5[18] + 72;
          (*(void (**)(glitch::scene::CLODSceneNode::Self **, uint32_t, glitch::collada::CColladaDatabase::Self *, glitch::scene::ISceneNode::Self **, int))(**((uint32_t **)v232 + 1) + 156))(
            &v271,
            *((uint32_t *)v232 + 1),
            v232,
            &v278,
            v105);
          if ( v271 == nullptr )
            goto LABEL_184;
          v187 = v271;
          sub_8B1B00((volatile int32_t *)((char *)v271 + *(uint32_t *)(*(uint32_t *)v271 - 16) + 4));
          v106 = v187;
          if ( v271 != nullptr )
          {
            sub_5459C0((volatile int32_t *)((char *)v271 + *(uint32_t *)(*(uint32_t *)v271 - 16)));
            v106 = v187;
          }
          v107 = (int)(uintptr_t)&v229[v5[17] + 4 + v8];
          v108 = 0;
          v109 = *(uint32_t *)(v107 + 4);
          v110 = v107 + v109 + 4;
          if ( v109 != 0 )
            v108 = v110;
          v185 = v106;
          G4_VCALL<void>(v106, 236, *(uint32_t *)(v108 + 16));
          G4_VCALL<void>(v185, 188, 0, 2);
          v79 = (glitch::scene::ISceneNode::Self *)(v185);
          if ( v208 != 0 )
            goto LABEL_243;
          v111 = *v233;
          v272 = v185;
          v112 = *(void (**)(uint32_t *, glitch::scene::CLODSceneNode::Self **))(v111 + 104);
          sub_8B1B00((volatile int32_t *)((char *)v185 + *(uint32_t *)(*(uint32_t *)v185 - 16) + 4));
          v112(v233, &v272);
          v82 = v272;
          v83 = v185;
          if ( v272 != nullptr )
            goto LABEL_182;
          goto LABEL_183;
        case 0xE:
          v91 = *((uint32_t *)v9 + 1);
          v92 = (int)(uintptr_t)&v9[v91 + 4];
          if ( v91 == 0 )
            v92 = 0;
          v225 = (char *)v92;
          Controller = (uint32_t *)glitch::collada::CColladaDatabase::getController(v232, (char *)(*(uint32_t *)v92 + 1));
          if ( Controller == nullptr )
            goto LABEL_91;
          glitch::collada::CColladaDatabase::constructController(&v274, (int)(uintptr_t)v232, (int)(uintptr_t)v226, Controller, v231);
          if ( v274 != nullptr )
            sub_5459C0((volatile int32_t *)v274);
          glitch::collada::CRootSceneNode::getLodSelector(
            (glitch::collada::CRootSceneNode::Self *)&v250,
            (const char *)*v231,
            Controller[1]);
          memset(v280, 0, sizeof(v280));
          memset(v284, 0, 12);
          v284[3] = 1065353216;
          v281[0] = 1065353216;
          v281[1] = 1065353216;
          v281[2] = 1065353216;
          v94 = (glitch::IObject::Self *)opNew(0x14Cu);
          glitch::collada::CLODMeshSceneNode::CLODMeshSceneNode(
            v94,
            &v250,
            0,
            0,
            (int)(uintptr_t)v280,
            (int)(uintptr_t)v284,
            (int)(uintptr_t)v281,
            v173,
            v174,
            v175,
            v176);
          v278 = (glitch::scene::ISceneNode::Self *)(v94);
          v220 = nullptr;
          if ( v94 != nullptr )
          {
            sub_8B1B00((volatile int32_t *)((char *)v94 + *(uint32_t *)(*(uint32_t *)v94 - 16) + 4));
            v220 = (glitch::collada::CColladaFactory::Self *)(v278);
          }
          v213 = *((uint32_t *)v225 + 1);
          if ( v213 <= 0 )
            goto LABEL_247;
          destb = v5;
          se = nullptr;
          v95 = 0;
          break;
        case 0xF:
          v60 = *((uint32_t *)v9 + 1);
          v61 = nullptr;
          v62 = (int)(uintptr_t)&v9[v60 + 4];
          if ( v60 != 0 )
            v61 = (uint32_t *)v62;
          v63 = v61[26];
          if ( v63 == 0 )
            goto LABEL_91;
          v181 = (glitch::scene::CLODSceneNode::Self *)((char *)v61 + v63 + 104);
          glitch::collada::CColladaDatabase::constructController((glitch::collada::CMorphingMesh::Self **)&v273, (int)(uintptr_t)v232, (int)(uintptr_t)v226, (uint32_t *)v181, v231);
          v64 = v181;
          if ( v273 != nullptr )
          {
            sub_5459C0((volatile int32_t *)v273);
            v64 = v181;
          }
          glitch::collada::CRootSceneNode::getLodSelector(
            (glitch::collada::CRootSceneNode::Self *)v249,
            (const char *)*v231,
            *((uint32_t *)v64 + 1));
          v182 = (glitch::IObject::Self *)opNew(0x154u);
          glitch::scene::CLODSceneNode::Construct(v182, (int *)v249, 0);
          v65 = nullptr;
          v278 = (glitch::scene::ISceneNode::Self *)(v182);
          if ( v182 != nullptr )
          {
            sub_8B1B00((volatile int32_t *)((char *)v182 + *(uint32_t *)(*(uint32_t *)v182 - 16) + 4));
            v65 = v278;
          }
          v183 = (glitch::scene::CLODSceneNode::Self *)(v65);
          glitch::collada::CColladaDatabase::fillLodSceneNode((int)(uintptr_t)v232, v61, (int)(uintptr_t)v65 + 264, 0, (int)(uintptr_t)v226, (int)(uintptr_t)v231);
          glitch::scene::CLODSceneNode::updateLODNodes(v183);
          if ( v208 != 0 )
          {
            glitch::collada::CRootSceneNode::addSceneNodeAlias(
              *v231,
              (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)*v5,
              v278);
            v66 = v278;
            if ( v278 != nullptr )
              sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
            if ( v233 != nullptr )
              sub_5459C0((uint32_t *)((char *)v233 + *(uint32_t *)(*v233 - 16)));
            v233 = (uint32_t *)(v66);
          }
          else
          {
            G4_VCALL<void>(v233, 104, &v278);
          }
          if ( v278 != nullptr )
            sub_5459C0((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16)));
          v59 = (glitch::scene::ISceneNode::Self *)v249[0];
          if ( v249[0] == 0 )
            goto LABEL_91;
          goto LABEL_109;
        case 0x10:
          v55 = *((uint32_t *)v9 + 1);
          v56 = nullptr;
          v57 = (int)(uintptr_t)&v9[v55 + 4];
          if ( v55 != 0 )
            v56 = (int *)v57;
          glitch::collada::CColladaDatabase::constructCommandNode((int)(uintptr_t)&v278, v232, v56);
          v58 = *(void (**)(uint32_t *, glitch::scene::ISceneNode::Self **))(*v233 + 104);
          v277 = v278;
          if ( v278 != nullptr )
            sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
          v58(v233, &v277);
          if ( v277 != nullptr )
            sub_5459C0((volatile int32_t *)((char *)v277 + *(uint32_t *)(*(uint32_t *)v277 - 16)));
          if ( v278 == nullptr )
            goto LABEL_91;
          v59 = (glitch::scene::ISceneNode::Self *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16));
          goto LABEL_109;
        default:
          goto LABEL_91;
      }
      break;
    }
    while ( 1 )
    {
      v96 = &v225[8 * v95 + 8 + *((uint32_t *)v225 + 2)];
      if ( *(uint32_t *)v96 != 2 )
        break;
      v97 = *((uint32_t *)v96 + 1);
      v98 = 0;
      v172 = 1;
      v99 = (int)(uintptr_t)&v96[v97 + 4];
      if ( v97 != 0 )
        v98 = v99;
      glitch::collada::CColladaDatabase::constructController(&v275, v232, (int)(uintptr_t)v226, v98, v231);
      v100 = (volatile int32_t *)v275;
      if ( v275 == nullptr )
        goto LABEL_160;
      v215 = (volatile int32_t *)((char *)v275 + 4);
      sub_8B1B00((volatile int32_t *)v275 + 1);
      v101 = (volatile int32_t *)v275;
      if ( v275 != nullptr )
        goto LABEL_166;
LABEL_167:
      if ( v100 != nullptr )
      {
        (*(void (**)(uint32_t))(**((uint32_t **)v220 + 69) + 20))(*((uint32_t *)v220 + 69));
        v102 = (glitch::scene::CLODSceneNode::Self *)&se[*((uint32_t *)v220 + 79)];
        v103 = *((volatile int32_t ***)v102 + 1);
        v177 = v103;
        if ( v103 == *((volatile int32_t ***)v102 + 2) )
        {
          v154 = ((int)(uintptr_t)v103 - *(uint32_t *)v102) >> 2;
          v199 = 4;
          v200 = v154;
          if ( v154 != 0 )
          {
            v167 = 2 * v154;
            if ( v154 <= 2 * v154 )
            {
              v168 = 8 * v154;
              v169 = v167 <= 0x3FFFFFFF;
              v170 = -4;
              if ( v169 )
                v170 = v168;
              v199 = v170;
            }
            else
            {
              v199 = 0xFFFFFFFC;
            }
          }
          v188 = (glitch::scene::CLODSceneNode::Self *)&se[*((uint32_t *)v220 + 79)];
          v194 = sub_4EBDC0(v199);
          v197 = (uint32_t *)(v194 + 4);
          v155 = (glitch::collada::CColladaFactory::Self **)v188;
          v156 = (volatile int32_t **)(v194 + 4 * v200);
          if ( v156 != nullptr )
          {
            *v156 = v100;
            sub_8B1B00(v215);
            v155 = (glitch::collada::CColladaFactory::Self **)v188;
          }
          if ( v177 != (volatile int32_t **)*v155 )
          {
            v195 = v155;
            v201 = v95;
            v198 = v100;
            v157 = (volatile int32_t **)*v155;
            v158 = (volatile int32_t **)v194;
            do
            {
              if ( v158 != nullptr )
              {
                v159 = *v157;
                v18 = *v157 == nullptr;
                *v158 = *v157;
                if ( !v18 )
                  sub_8B1B00(v159 + 1);
              }
              ++v157;
              ++v158;
            }
            while ( v177 != v157 );
            v160 = (uint32_t *)(v158 + 1);
            v100 = v198;
            v95 = v201;
            v155 = v195;
            v197 = v160;
          }
          v216 = v155[1];
          if ( v177 != (volatile int32_t **)v216 )
          {
            v202 = v95;
            v196 = v100;
            v192 = v155;
            v161 = v197;
            v162 = (glitch::collada::CColladaFactory::Self *)v177;
            do
            {
              if ( v161 != nullptr )
              {
                v163 = *(uint32_t *)v162;
                v18 = *(uint32_t *)v162 == 0;
                *v161 = *(uint32_t *)v162;
                if ( !v18 )
                  sub_8B1B00((volatile int32_t *)(v163 + 4));
              }
              v162 = (glitch::collada::CColladaFactory::Self *)((char *)v162 + 4);
              ++v161;
            }
            while ( v216 != v162 );
            v155 = v192;
            v197 = v161;
            v100 = v196;
            v95 = v202;
            v216 = v192[1];
          }
          v164 = (int)(uintptr_t)*v155;
          if ( *v155 != v216 )
          {
            v203 = v95;
            v193 = (int *)v155;
            v165 = (volatile int32_t **)*v155;
            do
            {
              if ( *v165 != nullptr )
                sub_5459C0(*v165);
              ++v165;
            }
            while ( v165 != (volatile int32_t **)v216 );
            v155 = (glitch::collada::CColladaFactory::Self **)v193;
            v95 = v203;
            v164 = *v193;
          }
          if ( v164 != 0 )
          {
            v189 = (glitch::scene::CLODSceneNode::Self *)v155;
            gll_operator_delete_arr(v164);
            v155 = (glitch::collada::CColladaFactory::Self **)v189;
          }
          *v155 = (glitch::collada::CColladaFactory::Self *)v194;
          v155[1] = (glitch::collada::CColladaFactory::Self *)v197;
          v155[2] = (glitch::collada::CColladaFactory::Self *)(v199 + v194);
        }
        else
        {
          v104 = 0;
          if ( v103 != nullptr )
          {
            *v103 = v100;
            v186 = v102;
            sub_8B1B00(v215);
            v102 = v186;
            v104 = *((uint32_t *)v186 + 1);
          }
          *((uint32_t *)v102 + 1) = v104 + 4;
        }
        sub_5459C0(v100);
      }
LABEL_160:
      ++v95;
      se += 12;
      if ( v95 == v213 )
      {
        v5 = destb;
LABEL_247:
        if ( v208 != 0 )
        {
          glitch::collada::CRootSceneNode::addSceneNodeAlias(
            *v231,
            (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)*v5,
            v278);
          v149 = v278;
          if ( v278 != nullptr )
            sub_8B1B00((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16) + 4));
          if ( v233 != nullptr )
            sub_5459C0((uint32_t *)((char *)v233 + *(uint32_t *)(*v233 - 16)));
          v233 = (uint32_t *)(v149);
        }
        else
        {
          G4_VCALL<void>(v233, 104, &v278);
        }
        if ( v278 != nullptr )
          sub_5459C0((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16)));
        v59 = v250;
        if ( v250 == nullptr )
          goto LABEL_91;
LABEL_109:
        sub_5459C0((volatile int32_t *)v59);
        goto LABEL_91;
      }
    }
    if ( *(uint32_t *)v96 != 3 )
      goto LABEL_160;
    v146 = *((uint32_t *)v96 + 1);
    v147 = 0;
    v148 = (int)(uintptr_t)&v96[v146 + 4];
    if ( v146 != 0 )
      v147 = v148;
    glitch::collada::CColladaDatabase::constructGeometry(&v276, v232, (char *)v226, v147, (char **)v231);
    v100 = v276;
    if ( v276 == nullptr )
      goto LABEL_160;
    v215 = v276 + 1;
    sub_8B1B00(v276 + 1);
    v101 = v276;
    if ( v276 == nullptr )
      goto LABEL_167;
LABEL_166:
    sub_5459C0(v101);
    goto LABEL_167;
  }
LABEL_93:
  G4_VCALL<void>(v6, 52, v5[1]);
  v45 = *v6;
  v282[0] = v5[3];
  v282[1] = v5[4];
  v282[2] = v5[5];
  (*(void (**)(uint32_t *, uint32_t *))(v45 + 184))(v6, v282);
  v46 = *v6;
  v47 = v5[6];
  v48 = v5[7];
  v285[2] = v5[8];
  v285[0] = v47;
  v49 = v5[9];
  v285[1] = v48;
  v50 = *(void (**)(uint32_t *, uint32_t *))(v46 + 176);
  v285[3] = v49;
  v50(v6, v285);
  v51 = *v6;
  v283[0] = v5[10];
  v283[1] = v5[11];
  v283[2] = v5[12];
  (*(void (**)(uint32_t *, uint32_t *))(v51 + 168))(v6, v283);
  G4_VCALL<void>(v6, 76, v5[13] != 0);
  sd = (char *)v5[14];
  if ( (int)(uintptr_t)sd > 0 )
  {
    v234 = v6;
    v228 = (char *)v5;
    v52 = nullptr;
    v230 = (char *)(v5 + 14);
    v53 = 0;
    do
    {
      v171 = &v230[*((uint32_t *)v228 + 15) + 4 + v53];
      glitch::collada::CColladaDatabase::constructNode(&v278);
      if ( v278 != nullptr )
      {
        G4_VCALL<void>(v234, 104, &v278, v226, v171, v231, v172);
        if ( v278 != nullptr )
          sub_5459C0((volatile int32_t *)((char *)v278 + *(uint32_t *)(*(uint32_t *)v278 - 16)));
      }
      ++v52;
      v53 += 80;
    }
    while ( v52 != sd );
    v6 = v234;
  }
  *v207 = (uint32_t)(uintptr_t)(v6);
  sub_8B1B00((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16) + 4));
  sub_5459C0((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16)));
  return v207;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructVisualScene  (binary VA: 0xdc4740)
// Original: glitch::collada::CColladaDatabase::constructVisualScene
// ----------------------------------------------------------------------------
glitch::collada::CRootSceneNode::Self ** glitch::collada::CColladaDatabase::constructVisualScene(glitch::collada::CRootSceneNode::Self **a1, glitch::collada::CColladaDatabase::Self *a2, glitch::video::IVideoDriver::Self *a3, uint32_t *a4, glitch::collada::CRootSceneNode::Self **a5)
{
  glitch::collada::CRootSceneNode::Self *v5;
  int v6;
  int i;
  bool v8;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v5 = *a5;
  if ( a4 == nullptr )
  {
    *a1 = v5;
    if ( v5 == nullptr )
      return a1;
    goto LABEL_9;
  }
  (*(void (**)(glitch::collada::CRootSceneNode::Self *, uint32_t))(*(uint32_t *)v5 + 52))(*a5, a4[1]);
  v10 = a4[2];
  if ( v10 > 0 )
  {
    v6 = 0;
    for ( i = 0; i != v10; ++i )
    {
      glitch::collada::CColladaDatabase::constructNode(v11, a2, a3, (int *)((char *)a4 + a4[3] + v6 + 12), a5);
      if ( v11[0] != 0 )
      {
        G4_VCALL<void>(*a5, 104, v11);
        if ( v11[0] != 0 )
          sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v11[0] - 16) + v11[0]));
      }
      v6 += 80;
    }
  }
  v5 = *a5;
  v8 = *a5 == nullptr;
  *a1 = *a5;
  if ( !v8 )
LABEL_9:
    sub_8B1B00((volatile int32_t *)((char *)v5 + *(uint32_t *)(*(uint32_t *)v5 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructVisualScene  (binary VA: 0xdc4850)
// Original: glitch::collada::CColladaDatabase::constructVisualScene
// ----------------------------------------------------------------------------
glitch::collada::CRootSceneNode::Self ** glitch::collada::CColladaDatabase::constructVisualScene(glitch::collada::CRootSceneNode::Self **a1, glitch::collada::CColladaDatabase::Self *a2, glitch::video::IVideoDriver::Self *a3, uint32_t *a4)
{
  glitch::collada::CRootSceneNode::Self **v4;
  glitch::collada::CColladaDatabase::Self *v5;
  glitch::collada::CRootSceneNode::Self *v6;
  bool v7;
  typedef uint32_t *_g4_t_v9;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v10;
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v11[3];
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v12[3] = (glitch::collada::CRootSceneNode::Self *)&a1;
  v4 = a1;
  v10 = a3;
  v5 = a2;
  if ( a4 != nullptr )
  {
    v9 = a4;
    (*(void (**)(glitch::collada::CRootSceneNode::Self **))(**((uint32_t **)a2 + 1) + 160))(v11);
    glitch::collada::CColladaDatabase::constructVisualScene(v12, v5, v10, v9, v11);
    if ( v12[0] != nullptr )
      sub_5459C0((volatile int32_t *)((char *)v12[0] + *(uint32_t *)(*(uint32_t *)v12[0] - 16)));
    v6 = v11[0];
    v7 = v11[0] == nullptr;
    *v4 = v11[0];
    if ( !v7 )
    {
      sub_8B1B00((volatile int32_t *)((char *)v6 + *(uint32_t *)(*(uint32_t *)v6 - 16) + 4));
      if ( v11[0] != nullptr )
        sub_5459C0((volatile int32_t *)((char *)v11[0] + *(uint32_t *)(*(uint32_t *)v11[0] - 16)));
    }
  }
  else
  {
    *a1 = nullptr;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructVisualScene  (binary VA: 0xdc4940)
// Original: glitch::collada::CColladaDatabase::constructVisualScene
// ----------------------------------------------------------------------------
glitch::collada::CRootSceneNode::Self ** glitch::collada::CColladaDatabase::constructVisualScene(glitch::collada::CRootSceneNode::Self **self, glitch::video::IVideoDriver::Self *a2, glitch::video::IVideoDriver::Self *a3, int a4)
{
  uint32_t *VisualScene;

  VisualScene = (uint32_t *)glitch::collada::CColladaDatabase::getVisualScene((glitch::collada::CColladaDatabase::Self *)a2, a4);
  glitch::collada::CColladaDatabase::constructVisualScene(self, (glitch::collada::CColladaDatabase::Self *)a2, a3, VisualScene);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructVisualScene  (binary VA: 0xdc49b0)
// Original: glitch::collada::CColladaDatabase::constructVisualScene
// ----------------------------------------------------------------------------
glitch::collada::CRootSceneNode::Self ** glitch::collada::CColladaDatabase::constructVisualScene(glitch::collada::CRootSceneNode::Self **self, glitch::video::IVideoDriver::Self *a2, glitch::video::IVideoDriver::Self *a3, char *a4)
{
  const char **VisualScene;

  VisualScene = glitch::collada::CColladaDatabase::getVisualScene((glitch::collada::CColladaDatabase::Self *)a2, a4);
  glitch::collada::CColladaDatabase::constructVisualScene(self, (glitch::collada::CColladaDatabase::Self *)a2, a3, (uint32_t *)VisualScene);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructVisualScene  (binary VA: 0xdc4a20)
// Original: glitch::collada::CColladaDatabase::constructVisualScene
// ----------------------------------------------------------------------------
glitch::collada::CRootSceneNode::Self ** glitch::collada::CColladaDatabase::constructVisualScene(glitch::collada::CRootSceneNode::Self **a1, glitch::collada::CColladaDatabase::Self *a2, glitch::video::IVideoDriver::Self *a3, int a4, glitch::collada::CRootSceneNode::Self **a5)
{
  uint32_t *VisualScene;

  VisualScene = (uint32_t *)glitch::collada::CColladaDatabase::getVisualScene(a2, a4);
  glitch::collada::CColladaDatabase::constructVisualScene(a1, a2, a3, VisualScene, a5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructVisualScene  (binary VA: 0xdc4a90)
// Original: glitch::collada::CColladaDatabase::constructVisualScene
// ----------------------------------------------------------------------------
glitch::collada::CRootSceneNode::Self ** glitch::collada::CColladaDatabase::constructVisualScene(glitch::collada::CRootSceneNode::Self **a1, glitch::collada::CColladaDatabase::Self *a2, glitch::video::IVideoDriver::Self *a3, char *a4, glitch::collada::CRootSceneNode::Self **a5)
{
  const char **VisualScene;

  VisualScene = glitch::collada::CColladaDatabase::getVisualScene(a2, a4);
  glitch::collada::CColladaDatabase::constructVisualScene(a1, a2, a3, (uint32_t *)VisualScene, a5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructScene  (binary VA: 0xdc4b00)
// Original: glitch::collada::CColladaDatabase::constructScene
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructScene(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, glitch::video::IVideoDriver::Self *a3, unsigned int a4)
{
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  glitch::collada::CRootSceneNode::Self *v11;
  glitch::collada::CRootSceneNode::Self *v12;
  bool v13;
  uint32_t *v15;
  glitch::collada::CRootSceneNode::Self *v16;
  int v17;
  typedef unsigned int _g4_t_v18;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v19;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v22;
  typedef void (*_g4_t_v23)(glitch::collada::CRootSceneNode::Self *, uint32_t **);
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v24;
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v27;
  typedef uint32_t _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v23)) > _g4_s5 ? (16u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v24)) > _g4_s6 ? (20u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v25)) > _g4_s7 ? (36u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v26)) > _g4_s8 ? (52u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v27)) > _g4_s9 ? (60u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v28)) > _g4_s10 ? (64u + sizeof(_g4_t_v28)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);

  v28[3] = (uint32_t)(uintptr_t)(&self);
  v19 = self;
  v22 = (glitch::collada::CColladaDatabase::Self *)(a2);
  v20 = a3;
  v18 = a4;
  if ( *(uint32_t *)a2 != 0 )
  {
    if ( (a4 & 2) != 0 )
      glitch::collada::CColladaDatabase::constructAllImages((glitch::collada::CColladaDatabase::Self *)(a2), a3, nullptr);
    (*(void (**)(glitch::collada::CRootSceneNode::Self **))(**((uint32_t **)v22 + 1) + 160))(&v24);
    v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v22 + 16) + 32);
    v21 = *(uint32_t *)(v4 + 212);
    if ( v21 > 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = (uint32_t *)(v4 + *(uint32_t *)(v4 + 216) + 216 + 8 * v5);
        if ( *v6 != 6 )
          goto LABEL_6;
        v7 = v6[1];
        v8 = 0;
        v9 = (int)(uintptr_t)v6 + v7 + 4;
        if ( v7 != 0 )
          v8 = v9;
        v25 = v24;
        v10 = *(uint32_t *)(v8 + 4);
        if ( v24 != nullptr )
          sub_8B1B00((volatile int32_t *)((char *)v24 + *(uint32_t *)(*(uint32_t *)v24 - 16) + 4));
        glitch::collada::CColladaDatabase::constructVisualScene(&v27, v22, v20, (char *)(v10 + 1), &v25);
        v11 = v27;
        if ( v27 != nullptr )
        {
          sub_8B1B00((volatile int32_t *)((char *)v27 + *(uint32_t *)(*(uint32_t *)v27 - 16) + 4));
          if ( v27 != nullptr )
            sub_5459C0((volatile int32_t *)((char *)v27 + *(uint32_t *)(*(uint32_t *)v27 - 16)));
        }
        if ( v25 != nullptr )
          sub_5459C0((volatile int32_t *)((char *)v25 + *(uint32_t *)(*(uint32_t *)v25 - 16)));
        if ( v11 != nullptr )
        {
          ++v5;
          sub_5459C0((volatile int32_t *)((char *)v11 + *(uint32_t *)(*(uint32_t *)v11 - 16)));
          if ( v5 == v21 )
            break;
        }
        else
        {
LABEL_6:
          if ( ++v5 == v21 )
            break;
        }
        v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v22 + 16) + 32);
      }
    }
    glitch::collada::CRootSceneNode::onPostLoad(v24);
    glitch::collada::CRootSceneNode::resolveURLs(v24);
    if ( (v18 & 1) != 0 )
    {
      glitch::collada::CColladaDatabase::constructAnimator((glitch::collada::CColladaDatabase::Self *)v28, (uint32_t **)v22);
      v15 = (uint32_t *)v28[0];
      if ( v28[0] != 0 )
      {
        sub_8B1B00((volatile int32_t *)(v28[0] + *(uint32_t *)(*(uint32_t *)v28[0] - 12) + 4));
        if ( v28[0] != 0 )
          sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v28[0] - 12) + v28[0]));
        v16 = v24;
        v17 = *(uint32_t *)v24;
        v26 = v15;
        v23 = *(void (**)(glitch::collada::CRootSceneNode::Self *, uint32_t **))(v17 + 144);
        sub_8B1B00((uint32_t *)((char *)v15 + *(uint32_t *)(*v15 - 12) + 4));
        v23(v16, &v26);
        if ( v26 != nullptr )
          sub_5459C0((uint32_t *)((char *)v26 + *(uint32_t *)(*v26 - 12)));
        sub_5459C0((uint32_t *)((char *)v15 + *(uint32_t *)(*v15 - 12)));
      }
    }
    glitch::collada::CRootSceneNode::resolveExternals((glitch::collada::CColladaFactory::Self **)v24, v20, v18);
    v12 = v24;
    v13 = v24 == nullptr;
    *(uint32_t *)v19 = (uint32_t)(uintptr_t)(v24);
    if ( !v13 )
    {
      sub_8B1B00((volatile int32_t *)((char *)v12 + *(uint32_t *)(*(uint32_t *)v12 - 16) + 4));
      if ( v24 != nullptr )
        sub_5459C0((volatile int32_t *)((char *)v24 + *(uint32_t *)(*(uint32_t *)v24 - 16)));
    }
  }
  else
  {
    *(uint32_t *)self = 0;
  }
  return v19;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructScene  (binary VA: 0xdc4dc0)
// Original: glitch::collada::CColladaDatabase::constructScene
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructScene(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, glitch::collada::CColladaDatabase::Self *a3, unsigned int a4, volatile int32_t **a5)
{
  volatile int32_t **v5;
  volatile int32_t **v6;
  volatile int32_t *v7;
  typedef unsigned int _g4_t_v9;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v10;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef volatile int32_t **_g4_t_v13[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  v13[10] = (volatile int32_t **)&self;
  v11 = self;
  v10 = a2;
  v9 = a4;
  v5 = a5;
  if ( a5 == nullptr )
    v5 = (volatile int32_t **)&glitch::collada::CColladaDatabase::DefaultFactory;
  v13[1] = v5;
  v13[0] = nullptr;
  memset(&v13[2], 0, 12);
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)&v12,
    (char *)glitch::collada::CResFileManager::Inst,
    a3,
    (glitch::collada::CColladaDatabase::Self *)v13,
    0);
  v6 = (volatile int32_t **)v12;
  if ( v12 != nullptr )
  {
    sub_8B1B00(v12 + 1);
    v7 = (volatile int32_t *)v13[0];
    v13[0] = v6;
    if ( v7 != nullptr )
      sub_5459C0(v7);
    glitch::collada::CColladaDatabase::constructScene(v11, (glitch::video::IVideoDriver::Self *)v13, v10, v9);
    if ( v12 != nullptr )
      sub_5459C0(v12);
  }
  else
  {
    *(uint32_t *)v11 = 0;
  }
  glitch::collada::CColladaDatabase::Destroy(v13);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructScene  (binary VA: 0xdc4ee0)
// Original: glitch::collada::CColladaDatabase::constructScene
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructScene(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, char *a3, volatile int32_t **a4)
{
  glitch::collada::CColladaDatabase::constructScene(self, a2, (glitch::collada::CColladaDatabase::Self *)a3, 1u, a4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructScene  (binary VA: 0xdc4f40)
// Original: glitch::collada::CColladaDatabase::constructScene
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructScene(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, unsigned int a4, volatile int32_t **a5)
{
  volatile int32_t **v5;
  volatile int32_t **v6;
  volatile int32_t *v7;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef volatile int32_t **_g4_t_v13[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  v13[10] = (volatile int32_t **)&self;
  v11 = self;
  v9 = a2;
  v10 = a4;
  v5 = a5;
  if ( a5 == nullptr )
    v5 = (volatile int32_t **)&glitch::collada::CColladaDatabase::DefaultFactory;
  v13[1] = v5;
  v13[0] = nullptr;
  memset(&v13[2], 0, 12);
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)&v12,
    (boost::intrusive_ptr<glitch::io::IReadFile> *)glitch::collada::CResFileManager::Inst,
    (glitch::collada::CColladaDatabase::Self *)a3,
    (glitch::collada::CColladaDatabase::Self *)v13,
    0,
    0,
    (a4 & 4) != 0);
  v6 = (volatile int32_t **)v12;
  if ( v12 != nullptr )
  {
    sub_8B1B00(v12 + 1);
    v7 = (volatile int32_t *)v13[0];
    v13[0] = v6;
    if ( v7 != nullptr )
      sub_5459C0(v7);
    glitch::collada::CColladaDatabase::constructScene(v11, (glitch::video::IVideoDriver::Self *)v13, v9, v10);
    if ( v12 != nullptr )
      sub_5459C0(v12);
  }
  else
  {
    *(uint32_t *)v11 = 0;
  }
  glitch::collada::CColladaDatabase::Destroy(v13);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructNode  (binary VA: 0xdc5070)
// Original: glitch::collada::CColladaDatabase::constructNode
// ----------------------------------------------------------------------------
glitch::collada::CRootSceneNode::Self ** glitch::collada::CColladaDatabase::constructNode(glitch::collada::CRootSceneNode::Self **a1, glitch::collada::CColladaDatabase::Self *a2, int a3, int a4)
{
  glitch::collada::CRootSceneNode::Self **v4;
  glitch::collada::CColladaDatabase::Self *v5;
  glitch::collada::CRootSceneNode::Self *v6;
  bool v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v16;
  typedef int *_g4_t_v17;
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v18;
  typedef uint32_t _g4_t_v19[3];
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v20[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v16)) > _g4_s7 ? (32u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v17)) > _g4_s8 ? (36u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v18)) > _g4_s9 ? (40u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v19)) > _g4_s10 ? (56u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v20)) > _g4_s11 ? (68u + sizeof(_g4_t_v20)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);

  v20[3] = (glitch::collada::CRootSceneNode::Self *)&a1;
  v4 = a1;
  v5 = a2;
  if ( a4 != 0 )
  {
    (*(void (**)(glitch::collada::CRootSceneNode::Self **, uint32_t *, glitch::collada::CColladaDatabase::Self *, int, int, int, int, int, int, int, int, int))(**((uint32_t **)a2 + 1) + 160))(
      &v18,
      *((uint32_t **)a2 + 1),
      a2,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      a3,
      a4);
    v20[0] = v18;
    if ( v18 != nullptr )
      sub_8B1B00((volatile int32_t *)((char *)v18 + *(uint32_t *)(*(uint32_t *)v18 - 16) + 4));
    glitch::collada::CColladaDatabase::constructNode(v19, v5, v16, v17, v20);
    if ( v20[0] != nullptr )
      sub_5459C0((volatile int32_t *)((char *)v20[0] + *(uint32_t *)(*(uint32_t *)v20[0] - 16)));
    G4_VCALL<void>(v18, 104, v19);
    glitch::collada::CRootSceneNode::onPostLoad(v18);
    v6 = v18;
    v7 = v18 == nullptr;
    *v4 = v18;
    if ( !v7 )
      sub_8B1B00((volatile int32_t *)((char *)v6 + *(uint32_t *)(*(uint32_t *)v6 - 16) + 4));
    if ( v19[0] != 0 )
      sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v19[0] - 16) + v19[0]));
    if ( v18 != nullptr )
      sub_5459C0((volatile int32_t *)((char *)v18 + *(uint32_t *)(*(uint32_t *)v18 - 16)));
    return v4;
  }
  else
  {
    *a1 = nullptr;
    return v4;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructNode  (binary VA: 0xdc51b0)
// Original: glitch::collada::CColladaDatabase::constructNode
// ----------------------------------------------------------------------------
glitch::collada::CRootSceneNode::Self ** glitch::collada::CColladaDatabase::constructNode(glitch::collada::CRootSceneNode::Self **self, glitch::video::IVideoDriver::Self *a2, const char *a3, char *a4)
{
  int Node;

  Node = glitch::collada::CColladaDatabase::getNode((glitch::collada::CColladaDatabase::Self *)a2, a4);
  glitch::collada::CColladaDatabase::constructNode(self, a2, (int)(uintptr_t)a3, Node);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructNode  (binary VA: 0xdc5220)
// Original: glitch::collada::CColladaDatabase::constructNode
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructNode(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, glitch::collada::CColladaDatabase::Self *a3, char *a4, volatile int32_t **a5)
{
  volatile int32_t **v5;
  volatile int32_t *v6;
  typedef char *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  typedef volatile int32_t **_g4_t_v12[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  v12[10] = (volatile int32_t **)&self;
  v10 = self;
  v9 = (char *)a2;
  v8 = a4;
  v12[1] = a5;
  v12[0] = nullptr;
  memset(&v12[2], 0, 12);
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)&v11,
    (char *)glitch::collada::CResFileManager::Inst,
    a3,
    (glitch::collada::CColladaDatabase::Self *)v12,
    0);
  v5 = (volatile int32_t **)v11;
  if ( v11 != nullptr )
  {
    sub_8B1B00(v11 + 1);
    v6 = (volatile int32_t *)v12[0];
    v12[0] = v5;
    if ( v6 != nullptr )
      sub_5459C0(v6);
    glitch::collada::CColladaDatabase::constructNode(
      (glitch::collada::CRootSceneNode::Self **)v10,
      (glitch::video::IVideoDriver::Self *)v12,
      v9,
      v8);
    if ( v11 != nullptr )
      sub_5459C0(v11);
  }
  else
  {
    *(uint32_t *)v10 = 0;
  }
  glitch::collada::CColladaDatabase::Destroy(v12);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructNode  (binary VA: 0xdc5340)
// Original: glitch::collada::CColladaDatabase::constructNode
// ----------------------------------------------------------------------------
glitch::collada::CRootSceneNode::Self ** glitch::collada::CColladaDatabase::constructNode(glitch::collada::CRootSceneNode::Self **self, glitch::video::IVideoDriver::Self *a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, char *a4, char a5, volatile int32_t **a6)
{
  glitch::collada::CRootSceneNode::Self **v6;
  char *v7;
  volatile int32_t *v8;
  bool v9;
  typedef volatile int32_t **_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef volatile int32_t *_g4_t_v13;
  typedef volatile int32_t **_g4_t_v14[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v14)) > _g4_s3 ? (32u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v14[10] = (volatile int32_t **)&self;
  v12 = (char *)a2;
  v6 = self;
  v7 = a4;
  v14[1] = a6;
  v14[0] = nullptr;
  memset(&v14[2], 0, 12);
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)&v13,
    (boost::intrusive_ptr<glitch::io::IReadFile> *)glitch::collada::CResFileManager::Inst,
    (glitch::collada::CColladaDatabase::Self *)a3,
    (glitch::collada::CColladaDatabase::Self *)v14,
    0,
    0,
    a5);
  if ( v13 != nullptr )
  {
    v11 = (volatile int32_t **)v13;
    sub_8B1B00(v13 + 1);
    v8 = (volatile int32_t *)v14[0];
    v9 = v14[0] == nullptr;
    v14[0] = v11;
    if ( !v9 )
      sub_5459C0(v8);
    glitch::collada::CColladaDatabase::constructNode(v6, (glitch::video::IVideoDriver::Self *)v14, v12, v7);
    if ( v13 != nullptr )
      sub_5459C0(v13);
  }
  else
  {
    *v6 = nullptr;
  }
  glitch::collada::CColladaDatabase::Destroy(v14);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaDatabase::constructNode  (binary VA: 0xdc5460)
// Original: glitch::collada::CColladaDatabase::constructNode
// ----------------------------------------------------------------------------
glitch::collada::CColladaDatabase::Self * glitch::collada::CColladaDatabase::constructNode(glitch::collada::CColladaDatabase::Self *self, glitch::video::IVideoDriver::Self *a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, char *a4, volatile int32_t **a5)
{
  volatile int32_t **v5;
  volatile int32_t *v6;
  typedef char *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  typedef volatile int32_t **_g4_t_v12[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  v12[10] = (volatile int32_t **)&self;
  v10 = self;
  v9 = (char *)a2;
  v8 = a4;
  v12[1] = a5;
  v12[0] = nullptr;
  memset(&v12[2], 0, 12);
  glitch::collada::CResFileManager::load(
    (glitch::collada::CResFileManager::Self *)&v11,
    (boost::intrusive_ptr<glitch::io::IReadFile> *)glitch::collada::CResFileManager::Inst,
    (glitch::collada::CColladaDatabase::Self *)a3,
    (glitch::collada::CColladaDatabase::Self *)v12,
    0,
    0,
    0);
  v5 = (volatile int32_t **)v11;
  if ( v11 != nullptr )
  {
    sub_8B1B00(v11 + 1);
    v6 = (volatile int32_t *)v12[0];
    v12[0] = v5;
    if ( v6 != nullptr )
      sub_5459C0(v6);
    glitch::collada::CColladaDatabase::constructNode(
      (glitch::collada::CRootSceneNode::Self **)v10,
      (glitch::video::IVideoDriver::Self *)v12,
      v9,
      v8);
    if ( v11 != nullptr )
      sub_5459C0(v11);
  }
  else
  {
    *(uint32_t *)v10 = 0;
  }
  glitch::collada::CColladaDatabase::Destroy(v12);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::Destroy  (binary VA: 0xdcb9f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_f8f63d::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::Destroy  (binary VA: 0xdcba10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_e59312::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::Destroy  (binary VA: 0xdcba30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_bfebfc::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionMixin<char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::Destroy  (binary VA: 0xdcba50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_5b4482::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::Destroy  (binary VA: 0xdcba70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_7ce6c9::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::Destroy  (binary VA: 0xdcba90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion,glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_86c733::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::quaternion::Self, glitch::collada::animation_track::CSceneNodeQuaternionAngleMixin<char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::Destroy  (binary VA: 0xdcbab0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_f31928::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::Destroy  (binary VA: 0xdcbad0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_a211a7::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::Destroy  (binary VA: 0xdcbaf0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionMixin<char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_34035d::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionMixin<char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::Destroy  (binary VA: 0xdcbb10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>,0,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_0bcb07::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<float>, 0, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::Destroy  (binary VA: 0xdcbb30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>,0,short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_2e9fdb::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<short>, 0, short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::Destroy  (binary VA: 0xdcbb50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>,0,char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_3f6c93::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionXEx<char>, 0, char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::Destroy  (binary VA: 0xdcbb70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>,1,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_402786::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<float>, 1, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::Destroy  (binary VA: 0xdcbb90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>,1,short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_c0b4ca::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<short>, 1, short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::Destroy  (binary VA: 0xdcbbb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>,1,char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_00ebf0::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionYEx<char>, 1, char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::Destroy  (binary VA: 0xdcbbd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>,2,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_6c2bf1::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<float>, 2, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::Destroy  (binary VA: 0xdcbbf0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>,2,short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_e789e0::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<short>, 2, short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::Destroy  (binary VA: 0xdcbc10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>,2,char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_def1c4::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodePositionComponentMixin<glitch::collada::animation_track::CSceneNodePositionZEx<char>, 2, char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::Destroy  (binary VA: 0xdcbc30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_3a1318::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::Destroy  (binary VA: 0xdcbc50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_a45b22::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::Destroy  (binary VA: 0xdcbc70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleMixin<char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_359443::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleMixin<char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::Destroy  (binary VA: 0xdcbc90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>,0,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_c06440::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<float>, 0, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::Destroy  (binary VA: 0xdcbcb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>,0,short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_652842::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<short>, 0, short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::Destroy  (binary VA: 0xdcbcd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>,0,char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_546c00::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleXEx<char>, 0, char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::Destroy  (binary VA: 0xdcbcf0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>,1,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_715729::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<float>, 1, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::Destroy  (binary VA: 0xdcbd10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>,1,short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_49b4b4::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<short>, 1, short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::Destroy  (binary VA: 0xdcbd30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>,1,char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_d7d85e::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleYEx<char>, 1, char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::Destroy  (binary VA: 0xdcbd50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>,2,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_c6b072::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<float>, 2, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::Destroy  (binary VA: 0xdcbd70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>,2,short>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_3cd4d9::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<short>, 2, short>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::Destroy  (binary VA: 0xdcbd90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>,2,char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_930338::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CSceneNodeScaleComponentMixin<glitch::collada::animation_track::CSceneNodeScaleZEx<char>, 2, char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::Destroy  (binary VA: 0xdcbdb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_be3bd2::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeFovyMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::Destroy  (binary VA: 0xdcbdd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_c08b52::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeMagyMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::Destroy  (binary VA: 0xdcbdf0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_8481a6::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZNearMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::Destroy  (binary VA: 0xdcbe10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_49e3ec::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CCameraSceneNodeZFarMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::Destroy  (binary VA: 0xdcbe30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CLightColorMixin<unsigned char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_873f02::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CLightColorMixin<unsigned char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::Destroy  (binary VA: 0xdcbe50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CLightIntensityMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_27ff64::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CLightIntensityMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::Destroy  (binary VA: 0xdcbe70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamMixin<float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_3edeea::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamMixin<float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::Destroy  (binary VA: 0xdcbe90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>,0,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_fcefc0::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamXEx<float>, 0, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::Destroy  (binary VA: 0xdcbeb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>,1,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_d809b4::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamYEx<float>, 1, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::Destroy  (binary VA: 0xdcbed0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>,glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>,2,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_94789c::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<glitch::core::vector3d<float>, glitch::collada::animation_track::CEmitter3dParamComponentMixin<glitch::collada::animation_track::CEmitter3dParamZEx<float>, 2, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::Destroy  (binary VA: 0xdcbef0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, -1, unsigned char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::Destroy  (binary VA: 0xdcbf10)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5], glitch::collada::animation_track::CEmitterParamMixin<float, 5>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::Destroy  (binary VA: 0xdcbf30)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float, glitch::collada::animation_track::CMixin<float, 1, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float, float>>, -1, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::Destroy  (binary VA: 0xdcbf50)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2], glitch::collada::animation_track::CMixin<float, 2, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2], float [2]>>, -1, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bd9a4d::Destroy  (binary VA: 0xdcbf70)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_bd9a4d::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2], glitch::collada::animation_track::CMixin<float, 2, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2], float [2]>>, 0, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::Destroy  (binary VA: 0xdcbf90)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2], glitch::collada::animation_track::CMixin<float, 2, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2], float [2]>>, 1, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::Destroy  (binary VA: 0xdcbfb0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, -1, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::Destroy  (binary VA: 0xdcbfd0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3], glitch::collada::animation_track::CMixin<float, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3], float [3]>>, 0, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::Destroy  (binary VA: 0xdcbff0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, -1, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::Destroy  (binary VA: 0xdcc010)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 0, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::Destroy  (binary VA: 0xdcc030)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 1, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::Destroy  (binary VA: 0xdcc050)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 2, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::Destroy  (binary VA: 0xdcc070)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4], glitch::collada::animation_track::CMixin<float, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4], float [4]>>, 3, float>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::Destroy  (binary VA: 0xdcc090)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 0, unsigned char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::Destroy  (binary VA: 0xdcc0b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 1, unsigned char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::Destroy  (binary VA: 0xdcc0d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 2, unsigned char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::Destroy  (binary VA: 0xdcc0f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4], glitch::collada::animation_track::CMixin<unsigned char, 4, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4], glitch::video::SColor>>, 3, unsigned char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::Destroy  (binary VA: 0xdcc110)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::~CVirtualEx
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::Destroy(glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3], glitch::collada::animation_track::CMixin<unsigned char, 3, glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3], glitch::video::SColor>>, -1, unsigned char>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20792A8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CEventsManager::Destroy  (binary VA: 0xdcc170)
// Original: glitch::collada::CEventsManager::~CEventsManager
// ----------------------------------------------------------------------------
void glitch::collada::CEventsManager::Destroy(glitch::collada::CEventsManager::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getValueSize  (binary VA: 0xdcc1d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getValueSize()
{
  return 3;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getType  (binary VA: 0xdcc1e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::retrieveValue  (binary VA: 0xdcc1f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [3],glitch::collada::animation_track::CMixin<unsigned char,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [3],glitch::video::SColor>>,-1,unsigned char>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_dd3925::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getValueSize  (binary VA: 0xdcc200)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getValueSize()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getType  (binary VA: 0xdcc210)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::retrieveValue  (binary VA: 0xdcc220)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,3,unsigned char>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_b785bf::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getValueSize  (binary VA: 0xdcc230)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getValueSize()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getType  (binary VA: 0xdcc240)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::retrieveValue  (binary VA: 0xdcc250)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,2,unsigned char>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_73dbcd::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getValueSize  (binary VA: 0xdcc260)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getValueSize()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getType  (binary VA: 0xdcc270)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::retrieveValue  (binary VA: 0xdcc280)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,1,unsigned char>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_48bb76::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getValueSize  (binary VA: 0xdcc290)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getValueSize()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getType  (binary VA: 0xdcc2a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::retrieveValue  (binary VA: 0xdcc2b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,0,unsigned char>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_6abb3f::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getValueSize  (binary VA: 0xdcc2c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getValueSize()
{
  return 16;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getType  (binary VA: 0xdcc2d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::retrieveValue  (binary VA: 0xdcc2e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,3,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_79fc4e::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getValueSize  (binary VA: 0xdcc2f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getValueSize()
{
  return 16;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getType  (binary VA: 0xdcc300)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::retrieveValue  (binary VA: 0xdcc310)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,2,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_aed3b0::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getValueSize  (binary VA: 0xdcc320)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getValueSize()
{
  return 16;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getType  (binary VA: 0xdcc330)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::retrieveValue  (binary VA: 0xdcc340)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,1,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_8f1db7::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getValueSize  (binary VA: 0xdcc350)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getValueSize()
{
  return 16;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getType  (binary VA: 0xdcc360)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::retrieveValue  (binary VA: 0xdcc370)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,0,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_4aefdd::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getValueSize  (binary VA: 0xdcc380)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getValueSize()
{
  return 16;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getType  (binary VA: 0xdcc390)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::retrieveValue  (binary VA: 0xdcc3a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [4],glitch::collada::animation_track::CMixin<float,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [4],float [4]>>,-1,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_b57676::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getValueSize  (binary VA: 0xdcc3b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getValueSize()
{
  return 12;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getType  (binary VA: 0xdcc3c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::retrieveValue  (binary VA: 0xdcc3d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,0,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_6a1135::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getValueSize  (binary VA: 0xdcc3e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getValueSize()
{
  return 12;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getType  (binary VA: 0xdcc3f0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::retrieveValue  (binary VA: 0xdcc400)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [3],glitch::collada::animation_track::CMixin<float,3,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [3],float [3]>>,-1,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_b5227f::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::getValueSize  (binary VA: 0xdcc410)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::getValueSize()
{
  return 8;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::getType  (binary VA: 0xdcc420)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::retrieveValue  (binary VA: 0xdcc430)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,1,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_07b5fa::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bd9a4d::getValueSize  (binary VA: 0xdcc440)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_bd9a4d::getValueSize()
{
  return 8;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bd9a4d::getType  (binary VA: 0xdcc450)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_bd9a4d::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_bd9a4d::retrieveValue  (binary VA: 0xdcc460)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,0,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_bd9a4d::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::getValueSize  (binary VA: 0xdcc470)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::getValueSize()
{
  return 8;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::getType  (binary VA: 0xdcc480)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::retrieveValue  (binary VA: 0xdcc490)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [2],glitch::collada::animation_track::CMixin<float,2,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float [2],float [2]>>,-1,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_57d732::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getValueSize  (binary VA: 0xdcc4a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getValueSize()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getType  (binary VA: 0xdcc4b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::retrieveValue  (binary VA: 0xdcc4c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float,glitch::collada::animation_track::CMixin<float,1,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<float,float>>,-1,float>>>::retrieveValue
// ----------------------------------------------------------------------------
void glitch::collada::animation_track::CVirtualEx_collada_animation_track_0709e3::retrieveValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getValueSize  (binary VA: 0xdcc4d0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getValueSize()
{
  return 20;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getHandledValue  (binary VA: 0xdcc4e0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getHandledValue
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getHandledValue(int a1, int a2, int a3, uint8_t a4, int a5)
{
  int v5;
  int result;
  int v7;

  if ( a3 == 2 )
  {
    if ( (a4 & 3) != 0 )
    {
      if ( (a4 & 3) == 1 )
        *(float *)a5 = *(float *)a2 - *(float *)(a2 + 20);
    }
    else
    {
      *(uint32_t *)a5 = *(uint32_t *)a2;
    }
    if ( (((int)a4 >> 2) & 3) != 0 )
    {
      if ( (((int)a4 >> 2) & 3) == 1 )
        *(float *)(a5 + 4) = *(float *)(a2 + 4) - *(float *)(a2 + 24);
    }
    else
    {
      *(uint32_t *)(a5 + 4) = *(uint32_t *)(a2 + 4);
    }
    if ( (((int)a4 >> 4) & 3) != 0 )
    {
      if ( (((int)a4 >> 4) & 3) == 1 )
        *(float *)(a5 + 8) = *(float *)(a2 + 8) - *(float *)(a2 + 28);
    }
    else
    {
      *(uint32_t *)(a5 + 8) = *(uint32_t *)(a2 + 8);
    }
    v7 = (int)a4 >> 6;
    if ( v7 != 0 )
    {
      if ( v7 == 1 )
        *(float *)(a5 + 12) = *(float *)(a2 + 12) - *(float *)(a2 + 32);
    }
    else
    {
      *(uint32_t *)(a5 + 12) = *(uint32_t *)(a2 + 12);
    }
    result = *(uint32_t *)(a2 + 16);
    *(uint32_t *)(a5 + 16) = result;
  }
  else
  {
    if ( (a4 & 3) != 0 )
    {
      if ( (a4 & 3) == 1 )
        *(float *)a5 = (float)((float)(*(float *)(a2 + 40) + *(float *)a2) - *(float *)(a2 + 60)) - *(float *)(a2 + 20);
    }
    else
    {
      *(uint32_t *)a5 = *(uint32_t *)(a2 + 40);
    }
    if ( (((int)a4 >> 2) & 3) != 0 )
    {
      if ( (((int)a4 >> 2) & 3) == 1 )
        *(float *)(a5 + 4) = (float)((float)(*(float *)(a2 + 44) + *(float *)(a2 + 4)) - *(float *)(a2 + 64))
                           - *(float *)(a2 + 24);
    }
    else
    {
      *(uint32_t *)(a5 + 4) = *(uint32_t *)(a2 + 44);
    }
    if ( (((int)a4 >> 4) & 3) != 0 )
    {
      if ( (((int)a4 >> 4) & 3) == 1 )
        *(float *)(a5 + 8) = (float)((float)(*(float *)(a2 + 48) + *(float *)(a2 + 8)) - *(float *)(a2 + 68))
                           - *(float *)(a2 + 28);
    }
    else
    {
      *(uint32_t *)(a5 + 8) = *(uint32_t *)(a2 + 48);
    }
    v5 = (int)a4 >> 6;
    if ( v5 == 0 )
    {
      *(uint32_t *)(a5 + 12) = *(uint32_t *)(a2 + 52);
LABEL_11:
      result = *(uint32_t *)(a2 + 56);
      *(uint32_t *)(a5 + 16) = result;
      return result;
    }
    if ( v5 != 1 )
      goto LABEL_11;
    *(float *)(a5 + 12) = (float)((float)(*(float *)(a2 + 52) + *(float *)(a2 + 12)) - *(float *)(a2 + 72))
                        - *(float *)(a2 + 32);
    result = *(uint32_t *)(a2 + 56);
    *(uint32_t *)(a5 + 16) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getType  (binary VA: 0xdcc6a0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<float [5],glitch::collada::animation_track::CEmitterParamMixin<float,5>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_327187::getType()
{
  return 57;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getValueSize  (binary VA: 0xdcc6b0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getValueSize
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getValueSize()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getType  (binary VA: 0xdcc6c0)
// Original: glitch::collada::animation_track::CVirtualEx<glitch::collada::animation_track::CApplyValueEx<unsigned char [4],glitch::collada::animation_track::CMixin<unsigned char,4,glitch::collada::animation_track::SMaterialSetParam<glitch::collada::animation_track::SAnimationTypes<unsigned char [4],glitch::video::SColor>>,-1,unsigned char>>>::getType
// ----------------------------------------------------------------------------
int glitch::collada::animation_track::CVirtualEx_collada_animation_track_5149af::getType()
{
  return 57;
}


