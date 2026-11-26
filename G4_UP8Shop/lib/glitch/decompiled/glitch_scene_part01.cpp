#include "Core/Utils/DecompTypes.h"
#include "glitch_scene_part01.h"

// ----------------------------------------------------------------------------
// Function: glitch::scene::ITimeController::willReachClipEnd  (binary VA: 0xd7d950)
// Original: glitch::scene::ITimeController::willReachClipEnd
// ----------------------------------------------------------------------------
int glitch::scene::ITimeController::willReachClipEnd()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::ITimelineController::setEventsManager  (binary VA: 0xd7d960)
// Original: glitch::scene::ITimelineController::setEventsManager
// ----------------------------------------------------------------------------
void glitch::scene::ITimelineController::setEventsManager()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::ITimelineController::setEventsCallback  (binary VA: 0xd7d970)
// Original: glitch::scene::ITimelineController::setEventsCallback
// ----------------------------------------------------------------------------
void glitch::scene::ITimelineController::setEventsCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::ICameraSceneNode::isOrthogonal  (binary VA: 0xd7dc30)
// Original: glitch::scene::ICameraSceneNode::isOrthogonal
// ----------------------------------------------------------------------------
int glitch::scene::ICameraSceneNode::isOrthogonal(glitch::scene::ICameraSceneNode::Self *self)
{
  return *((uint8_t *)self + 265);
}

// ----------------------------------------------------------------------------
// Function: glitch::scene::IEventsManager::Destroy  (binary VA: 0xd7dc40)
// Original: glitch::scene::IEventsManager::~IEventsManager
// ----------------------------------------------------------------------------
void glitch::scene::IEventsManager::Destroy(glitch::scene::IEventsManager::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: toglitch::scene::SDrawCompiler::op_boost_intrusive_ptr_15d7a9::scene::SDrawCompiler::postProcess_void_int_non_virtual_thunk_toglitch::scene::SDrawCompiler::getBatchDriver_void_int_non_virtual_thunk_to_ZN6glitch5scene13CPVSEvaluatorD1Evglitch::scene::ISceneNodeAnimator::ISceneNodeAnimator_void_virtual_thunk_toglitch::scene::ISceneNodeAnimator::ISceneNodeAnimator_void_non_virtual_thunk_toglitch::scene::ISceneNodeAnimator::ISceneNodeAnimator_void_virtual_thunk_toglitch::scene::ISceneNodeAnimator::ISceneNodeAnimator_void_non_virtual_thunk_to_ZN6glitch5scene22CSceneCollisionManagerD1Ev_ZN6glitch5scene11CMeshBufferD1Ev_ZN6glitch5scene14CMeshCollisionC1ERKN5boost13intrusive_ptrIKNS0_5IMeshEEEPKNS0_10ISceneNodeE_ZN6glitch5scene14CMeshCollisionC1EPKNS0_10ISceneNodeE_ZN6glitch5scene22CSceneCollisionManagerC1EPNS0_13CSceneManagerERKN5boost13intrusive_ptrINS_5video12IVideoDriverEEE_ZN6glitch5scene11SIKAxisInfoC1Ev_ZN6glitch5scene8SIKJointC1Ev_ZN6glitch5scene10CIKContextC1ERKN5boost13intrusive_ptrINS0_10ISceneNodeEEE_ZN6glitch5scene15SJacobianMatrixC1Eiii_ZN6glitch5scene15SJacobianMatrixD1Ev_ZN6glitch5scene11CJacobianIKC1Ev_ZN6glitch5scene11CJacobianIKD1Evglitch::scene::CSceneNodeAnimatorIK::CSceneNodeAnimatorIK_void_virtual_thunk_toglitch::scene::CSceneNodeAnimatorIK::CSceneNodeAnimatorIK_void_non_virtual_thunk_toglitch::scene::CSceneNodeAnimatorIK::CSceneNodeAnimatorIK_void_virtual_thunk_toglitch::scene::CSceneNodeAnimatorIK::CSceneNodeAnimatorIK_void_non_virtual_thunk_to_ZN6glitch5scene21IShadowReceiverTargetC1ERKN5boost13intrusive_ptrINS_5video6CLightEEEf_ZN6glitch5scene35CShadowReceiverTargetCubeProjectionC1ERKN5boost13intrusive_ptrINS_5video6CLightEEEjjfPNS0_13CSceneManagerEPNS4_12IVideoDriverE_ZN6glitch5scene34CShadowReceiverTargetCubeShadowMapC1ERKN5boost13intrusive_ptrINS_5video6CLightEEEjjfPNS0_13CSceneManagerEPNS4_12IVideoDriverE_ZN6glitch5scene17CAppendMeshBufferC2EjjPNS_5video12IVideoDriverENS2_14E_BUFFER_USAGEEjNS2_12E_INDEX_TYPEE_ZN6glitch5scene18CDefaultAtlasRulesC1Eb_ZN6glitch5scene19SParameterAtlasInfoC1Ev_ZN6glitch5scene24CTextureAtlasCompilePassC1EPNS_5video12IVideoDriverEPKNS0_11IAtlasRulesENS_4core11dimension2dIiEE_ZN6glitch5scene5CMeshC2Ev_ZN6glitch5scene11CMeshBufferC2EPNS_5video12IVideoDriverERNS_7collada5SMeshEjRKNS5_13SBufferConfigESA_j_ZN6glitch5scene17CMeshConnectivityC1ERKN5boost13intrusive_ptrIKNS0_11CMeshBufferEEE_ZN6glitch5scene17CMeshConnectivityD1Ev_ZN6glitch5scene11ICullerBaseC1Ev_ZN6glitch5scene23CCachedSceneGraphCullerC1Ev_ZN6glitch5scene27CProjectionBasedLODSelectorC2Ev_ZN6glitch5scene23CRangedBasedLODSelectorC2Ev_ZN6glitch5scene12CPVSDatabaseC1ERN5boost10scoped_ptrINS0_6detail8SPVSInfoEEERNS3_INS4_8SPVSDataEEEi_ZN6glitch5scene14CGroupDatabaseC1ERN5boost10scoped_ptrINS0_6detail10SGroupInfoEEERNS3_INS4_10SGroupDataEEEi_ZN6glitch5scene14CGroupDatabaseD1Ev_ZN6glitch5scene12CPVSDatabaseD1Ev_ZN6glitch5scene29CCascadedShadowReceiverTargetC1ERKN5boost13intrusive_ptrINS_5video6CLightEEEjfPNS0_13CSceneManagerEPNS4_12IVideoDriverE_ZN6glitch5scene9SBoneNodeC1Ev_ZN6glitch5scene25CLiSPShadowReceiverTargetC2EPNS0_13CSceneManagerEPNS_5video12IVideoDriverE_ZN6glitch5scene21IShadowReceiverTargetD1Ev_ZN6glitch5scene25CLiSPShadowReceiverTargetD1Ev_ZN6glitch5scene29CCascadedShadowReceiverTargetD1Ev_ZN6glitch5scene5CMeshD1Ev_ZN6glitch5scene23CRangedBasedLODSelectorC2EPKfS3_j_ZN6glitch5scene27CProjectionBasedLODSelectorC2EPKfS3_j_ZN6glitch5scene27CProjectionBasedLODSelectorC2ERKSt6vectorIfNS_4core10SAllocatorIfLNS_6memory13E_MEMORY_HINTE0EEEESA_ZN6glitch5scene23CRangedBasedLODSelectorC2ERKSt6vectorIfNS_4core10SAllocatorIfLNS_6memory13E_MEMORY_HINTE0EEEESA_ZN6glitch5scene19CPVSDatabaseManagerC2EPNS_2io11IFileSystemE_ZN6glitch5scene9CIKSolverC2ERKSsNS0_16E_IK_SOLVER_TYPEE_ZN6glitch5scene12CGroupSorterD1Ev_ZN6glitch5scene13CPVSEvaluatorC1ERKNS0_6detail8SPVSDataE_ZN6glitch5scene12CGroupSorterC1ERKNS0_6detail10SGroupDataE_ZN6glitch5scene19CPVSDatabaseManagerD2Ev_ZN6glitch5scene5IMeshD1Ev_ZN6glitch5scene20ICullingDataConsumerD1Ev_ZN6glitch5scene22ISceneCollisionManagerD1Ev_ZN6glitch5scene23ISegmentCompileCallbackD1Ev_ZN6glitch5scene19IEndOfBatchCallbackD1Ev_ZN6glitch5scene21IStartOfBatchCallbackD1Ev_ZN6glitch5scene20IDrawCompilationPassD1Evglitch::scene::IBatchCompiler::IBatchCompiler_void_non_virtual_thunk_toglitch::scene::IBatchCompiler::IBatchCompiler_void_non_virtual_thunk_to_ZN6glitch5scene14IBatchCompilerD1Ev_ZN6glitch5scene11ICullerBaseD1Ev_ZN6glitch5scene12ILODSelectorD1Ev_ZN6glitch5scene33SSceneGraphCullingTraversalTraitsINS0_14SCameraContext7STraitsEE8SProcessINS0_17SSceneGraphCullerES2_ED1Ev_ZN6glitch5scene33SSceneGraphCullingTraversalTraitsINS0_14SCameraContext7STraitsEE8SProcessINS0_7SCullerIS4_NS0_21STrivialCullingOutputINS0_14SFlattenCullerEEEEES2_ED1Ev_ZN6glitch5scene33SSceneGraphCullingTraversalTraitsINS0_14SCameraContext7STraitsEE8SProcessINS0_7SCullerINS0_30SFlattenCullingTraversalTraitsIS4_EENS0_21STrivialCullingOutputINS0_20SSceneNodeRegistererINS0_10ISceneNode14SSceneNodeList13iterator_baseIN5boost9intrusive13list_iteratorINSF_8bhtraitsISB_NSF_16list_node_traitsIPvEELNSF_14link_mode_typeE1ESB_Lj1EEELb0EEESB_EEEEEEEES2_ED1Ev_ZN6glitch5scene19CSceneGraphCullerBWD1Ev_ZN6glitch5scene18CDefaultAtlasRulesD1Ev_ZN6glitch5scene31CSceneGraphTraversalBasedCullerINS0_14SFlattenCullerENS0_14SCameraContextEED1Evglitch::scene::IBatchCompiler::IBatchCompiler_void_non_virtual_thunk_toglitch::scene::IBatchCompiler::IBatchCompiler_void_non_virtual_thunk_to_ZN6glitch5scene9CIKSolverD1Ev_ZN6glitch5scene23CCachedSceneGraphCullerD1Ev_ZN6glitch5scene10CIKContextD1Ev_ZN6glitch5scene18STextureAtlasArrayC1ERKS1_ZN6glitch5scene24CTextureAtlasCompilePass20SArrayChoiceTreeItemD1Ev_ZN6glitch5scene24CTextureAtlasCompilePass21SFactorChoiceTreeItemD1Ev_ZN6glitch5scene27CProjectionBasedLODSelectorD1Ev_ZN6glitch5scene23CRangedBasedLODSelectorD1Ev_ZN6glitch5scene35CShadowReceiverTargetCubeProjectionD1Ev_ZN6glitch5scene34CShadowReceiverTargetCubeShadowMapD1Ev_ZN6glitch5scene18STextureAtlasArrayD1Evglitch::scene::SDrawCompiler::SDrawCompiler_void_virtual_thunk_toglitch::scene::SDrawCompiler::SDrawCompiler_void_non_virtual_thunk_toglitch::scene::SDrawCompiler::SDrawCompiler_void_non_virtual_thunk_toglitch::scene::SDrawCompiler::SDrawCompiler_void_non_virtual_thunk_toglitch::scene::SDrawCompiler::SDrawCompiler_void_virtual_thunk_toglitch::scene::SDrawCompiler::SDrawCompiler_void_non_virtual_thunk_toglitch::scene::SDrawCompiler::SDrawCompiler_void_non_virtual_thunk_toglitch::scene::SDrawCompiler::SDrawCompiler_void_non_virtual_thunk_to_ZN6glitch5scene8SIKJointC1ERKS1_ZN6glitch5scene19SParameterAtlasInfoC1ERKS1_ZN6glitch5scene24CTextureAtlasCompilePassD1Ev_void_glitch::scene::CTextureAtlasCompilePass::Destroy  (binary VA: 0xd7dd00)
// Original: toglitch::scene::SDrawCompiler::operator()(boost::intrusive_ptr<glitch::video::CMaterial> const&) int `non-virtual thunk toglitch::scene::SDrawCompiler::postProcess(void) int `non-virtual thunk toglitch::scene::SDrawCompiler::getBatchDriver(void) int `non-virtual thunk to_ZN6glitch5scene13CPVSEvaluatorD1Evglitch::scene::ISceneNodeAnimator::Destroy() void `virtual thunk toglitch::scene::ISceneNodeAnimator::Destroy() void `non-virtual thunk toglitch::scene::ISceneNodeAnimator::Destroy() void `virtual thunk toglitch::scene::ISceneNodeAnimator::Destroy() void `non-virtual thunk to_ZN6glitch5scene22CSceneCollisionManagerD1Ev_ZN6glitch5scene11CMeshBufferD1Ev_ZN6glitch5scene14CMeshCollisionC1ERKN5boost13intrusive_ptrIKNS0_5IMeshEEEPKNS0_10ISceneNodeE_ZN6glitch5scene14CMeshCollisionC1EPKNS0_10ISceneNodeE_ZN6glitch5scene22CSceneCollisionManagerC1EPNS0_13CSceneManagerERKN5boost13intrusive_ptrINS_5video12IVideoDriverEEE_ZN6glitch5scene11SIKAxisInfoC1Ev_ZN6glitch5scene8SIKJointC1Ev_ZN6glitch5scene10CIKContextC1ERKN5boost13intrusive_ptrINS0_10ISceneNodeEEE_ZN6glitch5scene15SJacobianMatrixC1Eiii_ZN6glitch5scene15SJacobianMatrixD1Ev_ZN6glitch5scene11CJacobianIKC1Ev_ZN6glitch5scene11CJacobianIKD1Evglitch::scene::CSceneNodeAnimatorIK::Destroy() void `virtual thunk toglitch::scene::CSceneNodeAnimatorIK::Destroy() void `non-virtual thunk toglitch::scene::CSceneNodeAnimatorIK::Destroy() void `virtual thunk toglitch::scene::CSceneNodeAnimatorIK::Destroy() void `non-virtual thunk to_ZN6glitch5scene21IShadowReceiverTargetC1ERKN5boost13intrusive_ptrINS_5video6CLightEEEf_ZN6glitch5scene35CShadowReceiverTargetCubeProjectionC1ERKN5boost13intrusive_ptrINS_5video6CLightEEEjjfPNS0_13CSceneManagerEPNS4_12IVideoDriverE_ZN6glitch5scene34CShadowReceiverTargetCubeShadowMapC1ERKN5boost13intrusive_ptrINS_5video6CLightEEEjjfPNS0_13CSceneManagerEPNS4_12IVideoDriverE_ZN6glitch5scene17CAppendMeshBufferC2EjjPNS_5video12IVideoDriverENS2_14E_BUFFER_USAGEEjNS2_12E_INDEX_TYPEE_ZN6glitch5scene18CDefaultAtlasRulesC1Eb_ZN6glitch5scene19SParameterAtlasInfoC1Ev_ZN6glitch5scene24CTextureAtlasCompilePassC1EPNS_5video12IVideoDriverEPKNS0_11IAtlasRulesENS_4core11dimension2dIiEE_ZN6glitch5scene5CMeshC2Ev_ZN6glitch5scene11CMeshBufferC2EPNS_5video12IVideoDriverERNS_7collada5SMeshEjRKNS5_13SBufferConfigESA_j_ZN6glitch5scene17CMeshConnectivityC1ERKN5boost13intrusive_ptrIKNS0_11CMeshBufferEEE_ZN6glitch5scene17CMeshConnectivityD1Ev_ZN6glitch5scene11ICullerBaseC1Ev_ZN6glitch5scene23CCachedSceneGraphCullerC1Ev_ZN6glitch5scene27CProjectionBasedLODSelectorC2Ev_ZN6glitch5scene23CRangedBasedLODSelectorC2Ev_ZN6glitch5scene12CPVSDatabaseC1ERN5boost10scoped_ptrINS0_6detail8SPVSInfoEEERNS3_INS4_8SPVSDataEEEi_ZN6glitch5scene14CGroupDatabaseC1ERN5boost10scoped_ptrINS0_6detail10SGroupInfoEEERNS3_INS4_10SGroupDataEEEi_ZN6glitch5scene14CGroupDatabaseD1Ev_ZN6glitch5scene12CPVSDatabaseD1Ev_ZN6glitch5scene29CCascadedShadowReceiverTargetC1ERKN5boost13intrusive_ptrINS_5video6CLightEEEjfPNS0_13CSceneManagerEPNS4_12IVideoDriverE_ZN6glitch5scene9SBoneNodeC1Ev_ZN6glitch5scene25CLiSPShadowReceiverTargetC2EPNS0_13CSceneManagerEPNS_5video12IVideoDriverE_ZN6glitch5scene21IShadowReceiverTargetD1Ev_ZN6glitch5scene25CLiSPShadowReceiverTargetD1Ev_ZN6glitch5scene29CCascadedShadowReceiverTargetD1Ev_ZN6glitch5scene5CMeshD1Ev_ZN6glitch5scene23CRangedBasedLODSelectorC2EPKfS3_j_ZN6glitch5scene27CProjectionBasedLODSelectorC2EPKfS3_j_ZN6glitch5scene27CProjectionBasedLODSelectorC2ERKSt6vectorIfNS_4core10SAllocatorIfLNS_6memory13E_MEMORY_HINTE0EEEESA__ZN6glitch5scene23CRangedBasedLODSelectorC2ERKSt6vectorIfNS_4core10SAllocatorIfLNS_6memory13E_MEMORY_HINTE0EEEESA__ZN6glitch5scene19CPVSDatabaseManagerC2EPNS_2io11IFileSystemE_ZN6glitch5scene9CIKSolverC2ERKSsNS0_16E_IK_SOLVER_TYPEE_ZN6glitch5scene12CGroupSorterD1Ev_ZN6glitch5scene13CPVSEvaluatorC1ERKNS0_6detail8SPVSDataE_ZN6glitch5scene12CGroupSorterC1ERKNS0_6detail10SGroupDataE_ZN6glitch5scene19CPVSDatabaseManagerD2Ev_ZN6glitch5scene5IMeshD1Ev_ZN6glitch5scene20ICullingDataConsumerD1Ev_ZN6glitch5scene22ISceneCollisionManagerD1Ev_ZN6glitch5scene23ISegmentCompileCallbackD1Ev_ZN6glitch5scene19IEndOfBatchCallbackD1Ev_ZN6glitch5scene21IStartOfBatchCallbackD1Ev_ZN6glitch5scene20IDrawCompilationPassD1Evglitch::scene::IBatchCompiler::Destroy() void `non-virtual thunk toglitch::scene::IBatchCompiler::Destroy() void `non-virtual thunk to_ZN6glitch5scene14IBatchCompilerD1Ev_ZN6glitch5scene11ICullerBaseD1Ev_ZN6glitch5scene12ILODSelectorD1Ev_ZN6glitch5scene33SSceneGraphCullingTraversalTraitsINS0_14SCameraContext7STraitsEE8SProcessINS0_17SSceneGraphCullerES2_ED1Ev_ZN6glitch5scene33SSceneGraphCullingTraversalTraitsINS0_14SCameraContext7STraitsEE8SProcessINS0_7SCullerIS4_NS0_21STrivialCullingOutputINS0_14SFlattenCullerEEEEES2_ED1Ev_ZN6glitch5scene33SSceneGraphCullingTraversalTraitsINS0_14SCameraContext7STraitsEE8SProcessINS0_7SCullerINS0_30SFlattenCullingTraversalTraitsIS4_EENS0_21STrivialCullingOutputINS0_20SSceneNodeRegistererINS0_10ISceneNode14SSceneNodeList13iterator_baseIN5boost9intrusive13list_iteratorINSF_8bhtraitsISB_NSF_16list_node_traitsIPvEELNSF_14link_mode_typeE1ESB_Lj1EEELb0EEESB_EEEEEEEES2_ED1Ev_ZN6glitch5scene19CSceneGraphCullerBWD1Ev_ZN6glitch5scene18CDefaultAtlasRulesD1Ev_ZN6glitch5scene31CSceneGraphTraversalBasedCullerINS0_14SFlattenCullerENS0_14SCameraContextEED1Evglitch::scene::IBatchCompiler::Destroy() void `non-virtual thunk toglitch::scene::IBatchCompiler::Destroy() void `non-virtual thunk to_ZN6glitch5scene9CIKSolverD1Ev_ZN6glitch5scene23CCachedSceneGraphCullerD1Ev_ZN6glitch5scene10CIKContextD1Ev_ZN6glitch5scene18STextureAtlasArrayC1ERKS1__ZN6glitch5scene24CTextureAtlasCompilePass20SArrayChoiceTreeItemD1Ev_ZN6glitch5scene24CTextureAtlasCompilePass21SFactorChoiceTreeItemD1Ev_ZN6glitch5scene27CProjectionBasedLODSelectorD1Ev_ZN6glitch5scene23CRangedBasedLODSelectorD1Ev_ZN6glitch5scene35CShadowReceiverTargetCubeProjectionD1Ev_ZN6glitch5scene34CShadowReceiverTargetCubeShadowMapD1Ev_ZN6glitch5scene18STextureAtlasArrayD1Evglitch::scene::SDrawCompiler::Destroy() void `virtual thunk toglitch::scene::SDrawCompiler::Destroy() void `non-virtual thunk toglitch::scene::SDrawCompiler::Destroy() void `non-virtual thunk toglitch::scene::SDrawCompiler::Destroy() void `non-virtual thunk toglitch::scene::SDrawCompiler::Destroy() void `virtual thunk toglitch::scene::SDrawCompiler::Destroy() void `non-virtual thunk toglitch::scene::SDrawCompiler::Destroy() void `non-virtual thunk toglitch::scene::SDrawCompiler::Destroy() void `non-virtual thunk to_ZN6glitch5scene8SIKJointC1ERKS1__ZN6glitch5scene19SParameterAtlasInfoC1ERKS1__ZN6glitch5scene24CTextureAtlasCompilePassD1Ev' void glitch::scene::CTextureAtlasCompilePass::~CTextureAtlasCompilePass
// ----------------------------------------------------------------------------
void glitch::scene::CTextureAtlasCompilePass::Destroy(glitch::scene::CTextureAtlasCompilePass::Self *self)
{
  int *v1;
  unsigned int v2;
  int v3;
  int v4;
  int *v5;
  uint32_t *v6;
  bool v7;
  int *v8;
  int *v9;
  glitch::scene::CTextureAtlasCompilePass::Self *v10;
  int *v11;
  int *v12;
  int v13;
  int v14;
  int *v15;
  int *v16;
  int v17;

  v1 = *((int **)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20818A8);
  v15 = v1;
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)self + 6);
    v14 = v2;
    if ( v2 <= 3 )
    {
      v14 = 4;
    }
    else
    {
      v3 = v2 & 3;
      if ( v3 != 0 )
        v14 = v14 + 4 - v3;
    }
    v4 = *((uint32_t *)self + 5);
    v12 = *((int **)self + 3);
    while ( 1 )
    {
      v17 = *(int *)((char *)v1 + v4 - 4);
      v16 = *(int **)((char *)v1 + v4 - 8);
      v13 = (int)(uintptr_t)(v1) + v4 - 8;
      if ( (int *)v13 != v15 )
      {
        v5 = v15;
        do
        {
          if ( v5 == v12 )
          {
            v12 = (int *)*v5;
          }
          else
          {
            v6 = (uint32_t *)v5[4];
            if ( v6 != nullptr )
            {
              v7 = v6[1]-- == 1;
              if ( v7 )
              {
                G4_VCALL<void>(v6, 8);
                v7 = v6[2]-- == 1;
                if ( v7 )
                  G4_VCALL<void>(v6, 12);
              }
            }
            v8 = (int *)v5[1];
            v9 = (int *)*v5;
            if ( v8 != (int *)*v5 )
            {
              do
              {
                v11 = v9;
                v9 += 3;
                sub_5ED480(v11);
              }
              while ( v8 != v9 );
              v9 = (int *)*v5;
            }
            if ( v9 != nullptr )
              opDelete(v9);
          }
          v5 = (int *)((char *)v5 + v14);
        }
        while ( (int *)v13 != v5 );
      }
      if ( v15 != nullptr )
        opDeleteArray(v15);
      if ( v16 == nullptr )
        break;
      v4 = v17;
      v15 = v16;
      v1 = v16;
    }
    v10 = self;
    *((uint32_t *)self + 4) = 0;
  }
  else
  {
    sub_6025A0((uint32_t *)self + 3);
    v10 = self;
  }
  *(uint32_t *)v10 = ((uint32_t)(uintptr_t)&off_2082808);
}

// ============================================================================
// Address:   0xeb08f0 (size: 55 bytes)
// Symbol:    _ZN6glitch5scene11ICullerBaseC2Ev
// Demangled: glitch::scene::ICullerBase::ICullerBase(void)
// ============================================================================
glitch::scene::ICullerBase::Self *glitch::scene::ICullerBase::Construct(glitch::scene::ICullerBase::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)&off_2081F68;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  return self;
}

// ============================================================================
// Address:   0xea7840 (size: 116 bytes)
// Symbol:    _ZN6glitch5scene22CSceneCollisionManagerC2EPNS0_13CSceneManagerERKN5boost13intrusive_ptrINS_5video12IVideoDriverEEE
// Demangled: glitch::scene::CSceneCollisionManager::CSceneCollisionManager(glitch::scene::CSceneManager *,boost::intrusive_ptr<glitch::video::IVideoDriver> const&)
// ============================================================================
volatile int32_t *glitch::scene::CSceneCollisionManager::Construct(
        uint32_t *a1,
        int a2,
        volatile int32_t **a3)
{
  volatile int32_t *result;

  *a1 = (uint32_t)(uintptr_t)&off_2081348;
  a1[2] = (uint32_t)a2;
  a1[1] = 0;
  result = *a3;
  a1[3] = (uint32_t)(uintptr_t)result;
  if ( result != nullptr )
    result = sub_8B1B00((volatile int32_t *)((char *)result + *(int32_t *)(*(uint32_t *)result - 12) + 4));
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  return result;
}



