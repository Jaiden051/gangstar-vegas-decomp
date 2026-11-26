#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/parametric_controllers.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : parametric_controllers_struct
void parametric_controllers_struct::Init()
{
	base_struct::Init();

	// Field : bankNames
	bankNames = 0;
	bankNames_hash = 0;

	// Field : maxPlayback
	maxPlayback = 0;

	// Field : deviceFamily
	deviceFamily = 0;

	// Field : scriptMaxLOD
	scriptMaxLOD = 0;

	// Field : windowWidth
	windowWidth = 0;

	// Field : windowHeight
	windowHeight_f = 0.0f;

	// Field : names
	names = 0;
	names_hash = 0;

	// Field : streamingUseVbo
	streamingUseVbo = 0;
	streamingUseVbo_hash = 0;

	// Field : streamingIndexBlockCount
	streamingIndexBlockCount = 0;

	// Field : streamingIndexBlockSize
	streamingIndexBlockSize = 0;

	// Field : streamingVertexBufferSize
	streamingVertexBufferSize = 0;
	streamingVertexBufferSize_hash = 0;

	// Field : streamingVertexBufferHighWatermark
	streamingVertexBufferHighWatermark = 0;
	streamingVertexBufferHighWatermark_hash = 0;

	// Field : frustumPlanes_TransitionBlending
	frustumPlanes_TransitionBlending = 0;

	// Field : frustumPlanes_TransitionWidth
	frustumPlanes_TransitionWidth = 0;

	// Field : frustumPlanes_MainFrustum_NearPlane
	frustumPlanes_MainFrustum_NearPlane = 0;

	// Field : frustumPlanes_MainFrustum_FarPlane
	frustumPlanes_MainFrustum_FarPlane = 0;

	// Field : frustumPlanes_LowResFrustum_FarPlaneInitial
	frustumPlanes_LowResFrustum_FarPlaneInitial = 0;

	// Field : frustumPlanes_LowResFrustum_FarPlaneMax
	frustumPlanes_LowResFrustum_FarPlaneMax = 0;

	// Field : frustumPlanes_biasInFragment
	frustumPlanes_biasInFragment = 0;

	// Field : frustumPlanes_biasInVertex
	frustumPlanes_biasInVertex = 0;

	// Field : frameBufferScale
	frameBufferScale_f = 0.0f;

	// Field : mergedAtlasMipMapToSkip
	mergedAtlasMipMapToSkip = 0;

	// Field : cityLowResMipMapToSkip
	cityLowResMipMapToSkip = 0;

	// Field : envMipMapToSkip
	envMipMapToSkip = 0;

	// Field : cubeMipMapToSkip
	cubeMipMapToSkip = 0;

	// Field : envAlphaMipMapToSkip
	envAlphaMipMapToSkip = 0;

	// Field : mainCharMipMapToSkip
	mainCharMipMapToSkip = 0;

	// Field : cutsceneCharMipMapToSkip
	cutsceneCharMipMapToSkip = 0;

	// Field : characterMipMapToSkip
	characterMipMapToSkip = 0;

	// Field : vehicleMipMapToSkip
	vehicleMipMapToSkip = 0;

	// Field : weaponMipMapToSkip
	weaponMipMapToSkip = 0;

	// Field : gameObjectMipMapToSkip
	gameObjectMipMapToSkip = 0;

	// Field : generalMipMapToSkip
	generalMipMapToSkip = 0;

	// Field : glitchTextureMemoryPool
	glitchTextureMemoryPool = 0;
	glitchTextureMemoryPool_hash = 0;

	// Field : lockUpdateTime
	lockUpdateTime_f = 0.0f;

	// Field : enableAnamorphicLensFlare
	enableAnamorphicLensFlare = 0;

	// Field : UseLowResCityTransparent
	UseLowResCityTransparent = 0;

	// Field : UseVehicleMorphingMesh
	UseVehicleMorphingMesh = 0;

	// Field : UseLowResWater
	UseLowResWater = 0;

	// Field : UseLowResCinematics
	UseLowResCinematics = 0;

	// Field : ReplaceTexturesInIGM
	ReplaceTexturesInIGM = 0;
	ReplaceTexturesInIGM_hash = 0;

	// Field : CinematicStreamingLookAhead
	CinematicStreamingLookAhead = 0;
	CinematicStreamingLookAhead_hash = 0;

	// Field : DisableFacebook
	DisableFacebook = 0;

	// Field : DisableAds
	DisableAds = 0;

	// Field : removeTreeShaders
	removeTreeShaders = 0;

	// Field : removeCarLights
	removeCarLights = 0;

	// Field : UseLowResParticles
	UseLowResParticles = 0;

	// Field : UseLowResGameObjects
	UseLowResGameObjects = 0;

	// Field : UseLowResCollectibles
	UseLowResCollectibles = 0;

	// Field : UseLowResItemDrops
	UseLowResItemDrops = 0;

	// Field : enableSkyboxSunAndMoon
	enableSkyboxSunAndMoon = 0;

	// Field : enableSkyboxAnimation
	enableSkyboxAnimation = 0;
	enableSkyboxAnimation_hash = 0;

	// Field : enableSkyboxStars
	enableSkyboxStars = 0;

	// Field : enableSkyboxClouds
	enableSkyboxClouds = 0;

	// Field : minFemalePedestrianPreloadedInstances
	minFemalePedestrianPreloadedInstances = 0;
	minFemalePedestrianPreloadedInstances_hash = 0;

	// Field : maxFemalePedestrianPreloadedInstances
	maxFemalePedestrianPreloadedInstances = 0;
	maxFemalePedestrianPreloadedInstances_hash = 0;

	// Field : minMalePedestrianPreloadedInstances
	minMalePedestrianPreloadedInstances = 0;
	minMalePedestrianPreloadedInstances_hash = 0;

	// Field : maxMalePedestrianPreloadedInstances
	maxMalePedestrianPreloadedInstances = 0;
	maxMalePedestrianPreloadedInstances_hash = 0;

	// Field : maxSpawnCivilians
	maxSpawnCivilians = 0;

	// Field : maxSpawnParkedVehicles
	maxSpawnParkedVehicles = 0;

	// Field : maxSpawnVehicles
	maxSpawnVehicles = 0;

	// Field : maxSpawn
	maxSpawn = 0;

	// Field : disableVehicleVfxDistance
	disableVehicleVfxDistance = 0;
	disableVehicleVfxDistance_hash = 0;

	// Field : useMenuTextureHighRes
	useMenuTextureHighRes = 0;
	useMenuTextureHighRes_hash = 0;

	// Field : useMenuAtlasTextureVeryLowRes
	useMenuAtlasTextureVeryLowRes = 0;
	useMenuAtlasTextureVeryLowRes_hash = 0;

	// Field : sdk
	sdk = 0;

	// Field : GraphicsSpecific_level
	GraphicsSpecific_level = 0;

	// Field : snipingViewRangeMod
	snipingViewRangeMod_f = 0.0f;

	// Field : streamingUseDoubleBuffering
	streamingUseDoubleBuffering = 0;
	streamingUseDoubleBuffering_hash = 0;

	// Field : streamingLookAheadFactor
	streamingLookAheadFactor = 0;
	streamingLookAheadFactor_hash = 0;

	// Field : EnableGPSLine
	EnableGPSLine = 0;

	// Field : streamingReduxMinRadiusFactor
	streamingReduxMinRadiusFactor = 0;
	streamingReduxMinRadiusFactor_hash = 0;

	// Field : streamingReduxSpeed1
	streamingReduxSpeed1_f = 0.0f;

	// Field : streamingReduxSpeed2
	streamingReduxSpeed2_f = 0.0f;

	// Field : UseTransparentNodeScreenGrouper
	UseTransparentNodeScreenGrouper = 0;
	UseTransparentNodeScreenGrouper_hash = 0;

	// Field : TNSGShapeRadiusMinDistance
	TNSGShapeRadiusMinDistance_f = 0.0f;

	// Field : TNSGCullScreenShapeRadius
	TNSGCullScreenShapeRadius_f = 0.0f;

	// Field : useExtendedStreaming
	useExtendedStreaming = 0;
	useExtendedStreaming_hash = 0;

	// Field : transparentFadeDist1
	transparentFadeDist1_f = 0.0f;

	// Field : transparentFadeDist2
	transparentFadeDist2_f = 0.0f;

	// Field : additiveFadeDist1
	additiveFadeDist1_f = 0.0f;

	// Field : additiveFadeDist2
	additiveFadeDist2_f = 0.0f;

	// Field : useBillboardOptim
	useBillboardOptim = 0;

	// Field : updateBillboards
	updateBillboards = 0;

	// Field : updateBillboardsFrames
	updateBillboardsFrames = 0;

	// Field : useLowMem
	useLowMem = 0;

	// Field : useMemoryMapWorkaround
	useMemoryMapWorkaround = 0;

	// Field : useRenderTarget
	useRenderTarget = 0;

	// Field : renderTargetWidth
	renderTargetWidth = 0;

	// Field : renderTargetHeight
	renderTargetHeight_f = 0.0f;

	// Field : useHDWaterShaders
	useHDWaterShaders = 0;

	// Field : usePostEffects
	usePostEffects_f = 0.0f;

	// Field : swfPostProcessTextureWidth
	swfPostProcessTextureWidth = 0;

	// Field : swfPostProcessTextureHeight
	swfPostProcessTextureHeight = 0;
	swfPostProcessTextureHeight_hash = 0;

	// Field : swfPostProcessTextureSize
	swfPostProcessTextureSize = 0;
	swfPostProcessTextureSize_hash = 0;

	// Field : useScreenEffects
	useScreenEffects = 0;

	// Field : useBloomEffects
	useBloomEffects = 0;

	// Field : useDepthOfField
	useDepthOfField = 0;

	// Field : useWaterFade
	useWaterFade = 0;

	// Field : waterFadeRange
	waterFadeRange_f = 0.0f;

	// Field : useSkyReflection
	useSkyReflection = 0;

	// Field : useCharacterBackLight
	useCharacterBackLight = 0;

	// Field : UseLowResParticlePools
	UseLowResParticlePools = 0;

	// Field : useInteriorIrradiance
	useInteriorIrradiance = 0;

	// Field : useSunOcclusion
	useSunOcclusion = 0;

	// Field : tonemapWhiteMultiplier
	tonemapWhiteMultiplier_f = 0.0f;

	// Field : snd_enhanced3d
	snd_enhanced3d = 0;

	// Field : snd_reverb
	snd_reverb = 0;

	// Field : snd_doppler
	snd_doppler = 0;

	// Field : snd_ambienceInCars
	snd_ambienceInCars = 0;

	// Field : snd_ambienceInCarsFade
	snd_ambienceInCarsFade = 0;

	// Field : snd_enableRandomPitch
	snd_enableRandomPitch_f = 0.0f;

	// Field : snd_useSimpleEngineSound
	snd_useSimpleEngineSound = 0;
	snd_useSimpleEngineSound_hash = 0;

	// Field : snd_maxPlaybackOverride
	snd_maxPlaybackOverride = 0;

	// Field : useAntiAliasing
	useAntiAliasing = 0;

	// Field : useParametricsForNPC
	useParametricsForNPC = 0;

	// Field : flareRayCastMax
	flareRayCastMax = 0;

	// Field : flareRayCastPerFrame
	flareRayCastPerFrame = 0;

	// Field : physicsToLoadBBoxOffset
	physicsToLoadBBoxOffset_f = 0.0f;

	// Field : physicsToUnloadBBoxOffset
	physicsToUnloadBBoxOffset_f = 0.0f;

	// Field : havokUpdateThreaded
	havokUpdateThreaded = 0;

	// Field : AnalogHudBoxRatioWidth
	AnalogHudBoxRatioWidth = 0;

	// Field : AnalogHudBoxRatioHeight
	AnalogHudBoxRatioHeight_f = 0.0f;

	// Field : AnalogHudBoxRatioTopLeftPosX
	AnalogHudBoxRatioTopLeftPosX_f = 0.0f;

	// Field : AnalogHudBoxRatioTopLeftPosY
	AnalogHudBoxRatioTopLeftPosY_f = 0.0f;

	// Field : AnalogMotoMaxRangeMultiplier
	AnalogMotoMaxRangeMultiplier_f = 0.0f;

	// Field : OptionalMenu3DModel
	OptionalMenu3DModel = 0;
	OptionalMenu3DModel_hash = 0;

	// Field : LoadingTexture
	LoadingTexture = 0;
	LoadingTexture_hash = 0;

	// Field : shaderRoadSpecularLighting
	shaderRoadSpecularLighting = 0;

	// Field : shaderFog
	shaderFog = 0;

	// Field : FullMotionControl
	FullMotionControl = 0;

	// Field : BulletTraceManager_MaxNumberBullets
	BulletTraceManager_MaxNumberBullets = 0;

	// Field : UseAttachedToPlayer_EnvironementVFX
	UseAttachedToPlayer_EnvironementVFX = 0;
	UseAttachedToPlayer_EnvironementVFX_hash = 0;

	// Field : disableAsserts
	disableAsserts = 0;

	// Field : enableGyroOption
	enableGyroOption = 0;

	// Field : frameRateLimiter
	frameRateLimiter = 0;

	// Field : useMachThreadPolicy
	useMachThreadPolicy = 0;

	// Field : useMachThreadPolicyOnlyMainThread
	useMachThreadPolicyOnlyMainThread = 0;

	// Field : MainThreadPolicyInitValue
	MainThreadPolicyInitValue = 0;

	// Field : CPUTaskThreadPolicyInitValue
	CPUTaskThreadPolicyInitValue = 0;

	// Field : RemoteIOThreadPolicyInitValue
	RemoteIOThreadPolicyInitValue = 0;

	// Field : voxVSUpdateThreadPolicyInitValue
	voxVSUpdateThreadPolicyInitValue = 0;

	// Field : VoxUpdEmtrsThreadPolicyInitValue
	VoxUpdEmtrsThreadPolicyInitValue = 0;

	// Field : VoxUpdSrcsThreadPolicyInitValue
	VoxUpdSrcsThreadPolicyInitValue = 0;

	// Field : RemoveVehicleBurnSound
	RemoveVehicleBurnSound = 0;
	RemoveVehicleBurnSound_hash = 0;

	// Field : lockSensitivity
	lockSensitivity = 0;

	// Field : unloadCityOnInterrupt
	unloadCityOnInterrupt = 0;

	// Field : VBOUsage
	VBOUsage = 0;

	// Field : forceHighp
	forceHighp_f = 0.0f;

	// Field : Regular_MinFilter
	Regular_MinFilter = 0;

	// Field : Regular_MagFilter
	Regular_MagFilter = 0;

	// Field : Regular_MipmapFilter
	Regular_MipmapFilter = 0;

	// Field : Regular_Anisotropy
	Regular_Anisotropy = 0;

	// Field : LightMap_MinFilter
	LightMap_MinFilter = 0;

	// Field : LightMap_MagFilter
	LightMap_MagFilter = 0;

	// Field : LightMap_MipmapFilter
	LightMap_MipmapFilter = 0;

	// Field : LightMap_Anisotropy
	LightMap_Anisotropy = 0;

	// Field : CityAtlas_MinFilter
	CityAtlas_MinFilter = 0;

	// Field : CityAtlas_MagFilter
	CityAtlas_MagFilter = 0;

	// Field : CityAtlas_MipmapFilter
	CityAtlas_MipmapFilter = 0;

	// Field : CityAtlas_Anisotropy
	CityAtlas_Anisotropy = 0;

}

void parametric_controllers_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : bankNames
	stream->ReadString(bankNames);
	bankNames_hash = static_cast<uint32>(glitch::core::hashString(bankNames));

	// Field : maxPlayback
	stream->ReadAs(maxPlayback);

	// Field : deviceFamily
	stream->ReadAs(deviceFamily);

	// Field : scriptMaxLOD
	stream->ReadAs(scriptMaxLOD);

	// Field : windowWidth
	stream->ReadAs(windowWidth);

	// Field : windowHeight
	stream->ReadAs(windowHeight_f);

	// Field : names
	stream->ReadString(names);
	names_hash = static_cast<uint32>(glitch::core::hashString(names));

	// Field : streamingUseVbo
	stream->ReadString(streamingUseVbo);
	streamingUseVbo_hash = static_cast<uint32>(glitch::core::hashString(streamingUseVbo));

	// Field : streamingIndexBlockCount
	stream->ReadAs(streamingIndexBlockCount);

	// Field : streamingIndexBlockSize
	stream->ReadAs(streamingIndexBlockSize);

	// Field : streamingVertexBufferSize
	stream->ReadString(streamingVertexBufferSize);
	streamingVertexBufferSize_hash = static_cast<uint32>(glitch::core::hashString(streamingVertexBufferSize));

	// Field : streamingVertexBufferHighWatermark
	stream->ReadString(streamingVertexBufferHighWatermark);
	streamingVertexBufferHighWatermark_hash = static_cast<uint32>(glitch::core::hashString(streamingVertexBufferHighWatermark));

	// Field : frustumPlanes_TransitionBlending
	stream->ReadAs(frustumPlanes_TransitionBlending);

	// Field : frustumPlanes_TransitionWidth
	stream->ReadAs(frustumPlanes_TransitionWidth);

	// Field : frustumPlanes_MainFrustum_NearPlane
	stream->ReadAs(frustumPlanes_MainFrustum_NearPlane);

	// Field : frustumPlanes_MainFrustum_FarPlane
	stream->ReadAs(frustumPlanes_MainFrustum_FarPlane);

	// Field : frustumPlanes_LowResFrustum_FarPlaneInitial
	stream->ReadAs(frustumPlanes_LowResFrustum_FarPlaneInitial);

	// Field : frustumPlanes_LowResFrustum_FarPlaneMax
	stream->ReadAs(frustumPlanes_LowResFrustum_FarPlaneMax);

	// Field : frustumPlanes_biasInFragment
	stream->ReadAs(frustumPlanes_biasInFragment);

	// Field : frustumPlanes_biasInVertex
	stream->ReadAs(frustumPlanes_biasInVertex);

	// Field : frameBufferScale
	stream->ReadAs(frameBufferScale_f);

	// Field : mergedAtlasMipMapToSkip
	stream->ReadAs(mergedAtlasMipMapToSkip);

	// Field : cityLowResMipMapToSkip
	stream->ReadAs(cityLowResMipMapToSkip);

	// Field : envMipMapToSkip
	stream->ReadAs(envMipMapToSkip);

	// Field : cubeMipMapToSkip
	stream->ReadAs(cubeMipMapToSkip);

	// Field : envAlphaMipMapToSkip
	stream->ReadAs(envAlphaMipMapToSkip);

	// Field : mainCharMipMapToSkip
	stream->ReadAs(mainCharMipMapToSkip);

	// Field : cutsceneCharMipMapToSkip
	stream->ReadAs(cutsceneCharMipMapToSkip);

	// Field : characterMipMapToSkip
	stream->ReadAs(characterMipMapToSkip);

	// Field : vehicleMipMapToSkip
	stream->ReadAs(vehicleMipMapToSkip);

	// Field : weaponMipMapToSkip
	stream->ReadAs(weaponMipMapToSkip);

	// Field : gameObjectMipMapToSkip
	stream->ReadAs(gameObjectMipMapToSkip);

	// Field : generalMipMapToSkip
	stream->ReadAs(generalMipMapToSkip);

	// Field : glitchTextureMemoryPool
	stream->ReadString(glitchTextureMemoryPool);
	glitchTextureMemoryPool_hash = static_cast<uint32>(glitch::core::hashString(glitchTextureMemoryPool));

	// Field : lockUpdateTime
	stream->ReadAs(lockUpdateTime_f);

	// Field : enableAnamorphicLensFlare
	stream->ReadAs(enableAnamorphicLensFlare);

	// Field : UseLowResCityTransparent
	stream->ReadAs(UseLowResCityTransparent);

	// Field : UseVehicleMorphingMesh
	stream->ReadAs(UseVehicleMorphingMesh);

	// Field : UseLowResWater
	stream->ReadAs(UseLowResWater);

	// Field : UseLowResCinematics
	stream->ReadAs(UseLowResCinematics);

	// Field : ReplaceTexturesInIGM
	stream->ReadString(ReplaceTexturesInIGM);
	ReplaceTexturesInIGM_hash = static_cast<uint32>(glitch::core::hashString(ReplaceTexturesInIGM));

	// Field : CinematicStreamingLookAhead
	stream->ReadString(CinematicStreamingLookAhead);
	CinematicStreamingLookAhead_hash = static_cast<uint32>(glitch::core::hashString(CinematicStreamingLookAhead));

	// Field : DisableFacebook
	stream->ReadAs(DisableFacebook);

	// Field : DisableAds
	stream->ReadAs(DisableAds);

	// Field : removeTreeShaders
	stream->ReadAs(removeTreeShaders);

	// Field : removeCarLights
	stream->ReadAs(removeCarLights);

	// Field : UseLowResParticles
	stream->ReadAs(UseLowResParticles);

	// Field : UseLowResGameObjects
	stream->ReadAs(UseLowResGameObjects);

	// Field : UseLowResCollectibles
	stream->ReadAs(UseLowResCollectibles);

	// Field : UseLowResItemDrops
	stream->ReadAs(UseLowResItemDrops);

	// Field : enableSkyboxSunAndMoon
	stream->ReadAs(enableSkyboxSunAndMoon);

	// Field : enableSkyboxAnimation
	stream->ReadString(enableSkyboxAnimation);
	enableSkyboxAnimation_hash = static_cast<uint32>(glitch::core::hashString(enableSkyboxAnimation));

	// Field : enableSkyboxStars
	stream->ReadAs(enableSkyboxStars);

	// Field : enableSkyboxClouds
	stream->ReadAs(enableSkyboxClouds);

	// Field : minFemalePedestrianPreloadedInstances
	stream->ReadString(minFemalePedestrianPreloadedInstances);
	minFemalePedestrianPreloadedInstances_hash = static_cast<uint32>(glitch::core::hashString(minFemalePedestrianPreloadedInstances));

	// Field : maxFemalePedestrianPreloadedInstances
	stream->ReadString(maxFemalePedestrianPreloadedInstances);
	maxFemalePedestrianPreloadedInstances_hash = static_cast<uint32>(glitch::core::hashString(maxFemalePedestrianPreloadedInstances));

	// Field : minMalePedestrianPreloadedInstances
	stream->ReadString(minMalePedestrianPreloadedInstances);
	minMalePedestrianPreloadedInstances_hash = static_cast<uint32>(glitch::core::hashString(minMalePedestrianPreloadedInstances));

	// Field : maxMalePedestrianPreloadedInstances
	stream->ReadString(maxMalePedestrianPreloadedInstances);
	maxMalePedestrianPreloadedInstances_hash = static_cast<uint32>(glitch::core::hashString(maxMalePedestrianPreloadedInstances));

	// Field : maxSpawnCivilians
	stream->ReadAs(maxSpawnCivilians);

	// Field : maxSpawnParkedVehicles
	stream->ReadAs(maxSpawnParkedVehicles);

	// Field : maxSpawnVehicles
	stream->ReadAs(maxSpawnVehicles);

	// Field : maxSpawn
	stream->ReadAs(maxSpawn);

	// Field : disableVehicleVfxDistance
	stream->ReadString(disableVehicleVfxDistance);
	disableVehicleVfxDistance_hash = static_cast<uint32>(glitch::core::hashString(disableVehicleVfxDistance));

	// Field : useMenuTextureHighRes
	stream->ReadString(useMenuTextureHighRes);
	useMenuTextureHighRes_hash = static_cast<uint32>(glitch::core::hashString(useMenuTextureHighRes));

	// Field : useMenuAtlasTextureVeryLowRes
	stream->ReadString(useMenuAtlasTextureVeryLowRes);
	useMenuAtlasTextureVeryLowRes_hash = static_cast<uint32>(glitch::core::hashString(useMenuAtlasTextureVeryLowRes));

	// Field : sdk
	stream->ReadAs(sdk);

	// Field : GraphicsSpecific_level
	stream->ReadAs(GraphicsSpecific_level);

	// Field : snipingViewRangeMod
	stream->ReadAs(snipingViewRangeMod_f);

	// Field : streamingUseDoubleBuffering
	stream->ReadString(streamingUseDoubleBuffering);
	streamingUseDoubleBuffering_hash = static_cast<uint32>(glitch::core::hashString(streamingUseDoubleBuffering));

	// Field : streamingLookAheadFactor
	stream->ReadString(streamingLookAheadFactor);
	streamingLookAheadFactor_hash = static_cast<uint32>(glitch::core::hashString(streamingLookAheadFactor));

	// Field : EnableGPSLine
	stream->ReadAs(EnableGPSLine);

	// Field : streamingReduxMinRadiusFactor
	stream->ReadString(streamingReduxMinRadiusFactor);
	streamingReduxMinRadiusFactor_hash = static_cast<uint32>(glitch::core::hashString(streamingReduxMinRadiusFactor));

	// Field : streamingReduxSpeed1
	stream->ReadAs(streamingReduxSpeed1_f);

	// Field : streamingReduxSpeed2
	stream->ReadAs(streamingReduxSpeed2_f);

	// Field : UseTransparentNodeScreenGrouper
	stream->ReadString(UseTransparentNodeScreenGrouper);
	UseTransparentNodeScreenGrouper_hash = static_cast<uint32>(glitch::core::hashString(UseTransparentNodeScreenGrouper));

	// Field : TNSGShapeRadiusMinDistance
	stream->ReadAs(TNSGShapeRadiusMinDistance_f);

	// Field : TNSGCullScreenShapeRadius
	stream->ReadAs(TNSGCullScreenShapeRadius_f);

	// Field : useExtendedStreaming
	stream->ReadString(useExtendedStreaming);
	useExtendedStreaming_hash = static_cast<uint32>(glitch::core::hashString(useExtendedStreaming));

	// Field : transparentFadeDist1
	stream->ReadAs(transparentFadeDist1_f);

	// Field : transparentFadeDist2
	stream->ReadAs(transparentFadeDist2_f);

	// Field : additiveFadeDist1
	stream->ReadAs(additiveFadeDist1_f);

	// Field : additiveFadeDist2
	stream->ReadAs(additiveFadeDist2_f);

	// Field : useBillboardOptim
	stream->ReadAs(useBillboardOptim);

	// Field : updateBillboards
	stream->ReadAs(updateBillboards);

	// Field : updateBillboardsFrames
	stream->ReadAs(updateBillboardsFrames);

	// Field : useLowMem
	stream->ReadAs(useLowMem);

	// Field : useMemoryMapWorkaround
	stream->ReadAs(useMemoryMapWorkaround);

	// Field : useRenderTarget
	stream->ReadAs(useRenderTarget);

	// Field : renderTargetWidth
	stream->ReadAs(renderTargetWidth);

	// Field : renderTargetHeight
	stream->ReadAs(renderTargetHeight_f);

	// Field : useHDWaterShaders
	stream->ReadAs(useHDWaterShaders);

	// Field : usePostEffects
	stream->ReadAs(usePostEffects_f);

	// Field : swfPostProcessTextureWidth
	stream->ReadAs(swfPostProcessTextureWidth);

	// Field : swfPostProcessTextureHeight
	stream->ReadString(swfPostProcessTextureHeight);
	swfPostProcessTextureHeight_hash = static_cast<uint32>(glitch::core::hashString(swfPostProcessTextureHeight));

	// Field : swfPostProcessTextureSize
	stream->ReadString(swfPostProcessTextureSize);
	swfPostProcessTextureSize_hash = static_cast<uint32>(glitch::core::hashString(swfPostProcessTextureSize));

	// Field : useScreenEffects
	stream->ReadAs(useScreenEffects);

	// Field : useBloomEffects
	stream->ReadAs(useBloomEffects);

	// Field : useDepthOfField
	stream->ReadAs(useDepthOfField);

	// Field : useWaterFade
	stream->ReadAs(useWaterFade);

	// Field : waterFadeRange
	stream->ReadAs(waterFadeRange_f);

	// Field : useSkyReflection
	stream->ReadAs(useSkyReflection);

	// Field : useCharacterBackLight
	stream->ReadAs(useCharacterBackLight);

	// Field : UseLowResParticlePools
	stream->ReadAs(UseLowResParticlePools);

	// Field : useInteriorIrradiance
	stream->ReadAs(useInteriorIrradiance);

	// Field : useSunOcclusion
	stream->ReadAs(useSunOcclusion);

	// Field : tonemapWhiteMultiplier
	stream->ReadAs(tonemapWhiteMultiplier_f);

	// Field : snd_enhanced3d
	stream->ReadAs(snd_enhanced3d);

	// Field : snd_reverb
	stream->ReadAs(snd_reverb);

	// Field : snd_doppler
	stream->ReadAs(snd_doppler);

	// Field : snd_ambienceInCars
	stream->ReadAs(snd_ambienceInCars);

	// Field : snd_ambienceInCarsFade
	stream->ReadAs(snd_ambienceInCarsFade);

	// Field : snd_enableRandomPitch
	stream->ReadAs(snd_enableRandomPitch_f);

	// Field : snd_useSimpleEngineSound
	stream->ReadString(snd_useSimpleEngineSound);
	snd_useSimpleEngineSound_hash = static_cast<uint32>(glitch::core::hashString(snd_useSimpleEngineSound));

	// Field : snd_maxPlaybackOverride
	stream->ReadAs(snd_maxPlaybackOverride);

	// Field : useAntiAliasing
	stream->ReadAs(useAntiAliasing);

	// Field : useParametricsForNPC
	stream->ReadAs(useParametricsForNPC);

	// Field : flareRayCastMax
	stream->ReadAs(flareRayCastMax);

	// Field : flareRayCastPerFrame
	stream->ReadAs(flareRayCastPerFrame);

	// Field : physicsToLoadBBoxOffset
	stream->ReadAs(physicsToLoadBBoxOffset_f);

	// Field : physicsToUnloadBBoxOffset
	stream->ReadAs(physicsToUnloadBBoxOffset_f);

	// Field : havokUpdateThreaded
	stream->ReadAs(havokUpdateThreaded);

	// Field : AnalogHudBoxRatioWidth
	stream->ReadAs(AnalogHudBoxRatioWidth);

	// Field : AnalogHudBoxRatioHeight
	stream->ReadAs(AnalogHudBoxRatioHeight_f);

	// Field : AnalogHudBoxRatioTopLeftPosX
	stream->ReadAs(AnalogHudBoxRatioTopLeftPosX_f);

	// Field : AnalogHudBoxRatioTopLeftPosY
	stream->ReadAs(AnalogHudBoxRatioTopLeftPosY_f);

	// Field : AnalogMotoMaxRangeMultiplier
	stream->ReadAs(AnalogMotoMaxRangeMultiplier_f);

	// Field : OptionalMenu3DModel
	stream->ReadString(OptionalMenu3DModel);
	OptionalMenu3DModel_hash = static_cast<uint32>(glitch::core::hashString(OptionalMenu3DModel));

	// Field : LoadingTexture
	stream->ReadString(LoadingTexture);
	LoadingTexture_hash = static_cast<uint32>(glitch::core::hashString(LoadingTexture));

	// Field : shaderRoadSpecularLighting
	stream->ReadAs(shaderRoadSpecularLighting);

	// Field : shaderFog
	stream->ReadAs(shaderFog);

	// Field : FullMotionControl
	stream->ReadAs(FullMotionControl);

	// Field : BulletTraceManager_MaxNumberBullets
	stream->ReadAs(BulletTraceManager_MaxNumberBullets);

	// Field : UseAttachedToPlayer_EnvironementVFX
	stream->ReadString(UseAttachedToPlayer_EnvironementVFX);
	UseAttachedToPlayer_EnvironementVFX_hash = static_cast<uint32>(glitch::core::hashString(UseAttachedToPlayer_EnvironementVFX));

	// Field : disableAsserts
	stream->ReadAs(disableAsserts);

	// Field : enableGyroOption
	stream->ReadAs(enableGyroOption);

	// Field : frameRateLimiter
	stream->ReadAs(frameRateLimiter);

	// Field : useMachThreadPolicy
	stream->ReadAs(useMachThreadPolicy);

	// Field : useMachThreadPolicyOnlyMainThread
	stream->ReadAs(useMachThreadPolicyOnlyMainThread);

	// Field : MainThreadPolicyInitValue
	stream->ReadAs(MainThreadPolicyInitValue);

	// Field : CPUTaskThreadPolicyInitValue
	stream->ReadAs(CPUTaskThreadPolicyInitValue);

	// Field : RemoteIOThreadPolicyInitValue
	stream->ReadAs(RemoteIOThreadPolicyInitValue);

	// Field : voxVSUpdateThreadPolicyInitValue
	stream->ReadAs(voxVSUpdateThreadPolicyInitValue);

	// Field : VoxUpdEmtrsThreadPolicyInitValue
	stream->ReadAs(VoxUpdEmtrsThreadPolicyInitValue);

	// Field : VoxUpdSrcsThreadPolicyInitValue
	stream->ReadAs(VoxUpdSrcsThreadPolicyInitValue);

	// Field : RemoveVehicleBurnSound
	stream->ReadString(RemoveVehicleBurnSound);
	RemoveVehicleBurnSound_hash = static_cast<uint32>(glitch::core::hashString(RemoveVehicleBurnSound));

	// Field : lockSensitivity
	stream->ReadAs(lockSensitivity);

	// Field : unloadCityOnInterrupt
	stream->ReadAs(unloadCityOnInterrupt);

	// Field : VBOUsage
	stream->ReadAs(VBOUsage);

	// Field : forceHighp
	stream->ReadAs(forceHighp_f);

	// Field : Regular_MinFilter
	stream->ReadAs(Regular_MinFilter);

	// Field : Regular_MagFilter
	stream->ReadAs(Regular_MagFilter);

	// Field : Regular_MipmapFilter
	stream->ReadAs(Regular_MipmapFilter);

	// Field : Regular_Anisotropy
	stream->ReadAs(Regular_Anisotropy);

	// Field : LightMap_MinFilter
	stream->ReadAs(LightMap_MinFilter);

	// Field : LightMap_MagFilter
	stream->ReadAs(LightMap_MagFilter);

	// Field : LightMap_MipmapFilter
	stream->ReadAs(LightMap_MipmapFilter);

	// Field : LightMap_Anisotropy
	stream->ReadAs(LightMap_Anisotropy);

	// Field : CityAtlas_MinFilter
	stream->ReadAs(CityAtlas_MinFilter);

	// Field : CityAtlas_MagFilter
	stream->ReadAs(CityAtlas_MagFilter);

	// Field : CityAtlas_MipmapFilter
	stream->ReadAs(CityAtlas_MipmapFilter);

	// Field : CityAtlas_Anisotropy
	stream->ReadAs(CityAtlas_Anisotropy);

}

void parametric_controllers_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : bankNames
	if (bankNames && bankNames[0] != '\0') gll_delete[] bankNames;
	bankNames = 0;

	// Field : names
	if (names && names[0] != '\0') gll_delete[] names;
	names = 0;

	// Field : streamingUseVbo
	if (streamingUseVbo && streamingUseVbo[0] != '\0') gll_delete[] streamingUseVbo;
	streamingUseVbo = 0;

	// Field : streamingVertexBufferSize
	if (streamingVertexBufferSize && streamingVertexBufferSize[0] != '\0') gll_delete[] streamingVertexBufferSize;
	streamingVertexBufferSize = 0;

	// Field : streamingVertexBufferHighWatermark
	if (streamingVertexBufferHighWatermark && streamingVertexBufferHighWatermark[0] != '\0') gll_delete[] streamingVertexBufferHighWatermark;
	streamingVertexBufferHighWatermark = 0;

	// Field : glitchTextureMemoryPool
	if (glitchTextureMemoryPool && glitchTextureMemoryPool[0] != '\0') gll_delete[] glitchTextureMemoryPool;
	glitchTextureMemoryPool = 0;

	// Field : ReplaceTexturesInIGM
	if (ReplaceTexturesInIGM && ReplaceTexturesInIGM[0] != '\0') gll_delete[] ReplaceTexturesInIGM;
	ReplaceTexturesInIGM = 0;

	// Field : CinematicStreamingLookAhead
	if (CinematicStreamingLookAhead && CinematicStreamingLookAhead[0] != '\0') gll_delete[] CinematicStreamingLookAhead;
	CinematicStreamingLookAhead = 0;

	// Field : enableSkyboxAnimation
	if (enableSkyboxAnimation && enableSkyboxAnimation[0] != '\0') gll_delete[] enableSkyboxAnimation;
	enableSkyboxAnimation = 0;

	// Field : minFemalePedestrianPreloadedInstances
	if (minFemalePedestrianPreloadedInstances && minFemalePedestrianPreloadedInstances[0] != '\0') gll_delete[] minFemalePedestrianPreloadedInstances;
	minFemalePedestrianPreloadedInstances = 0;

	// Field : maxFemalePedestrianPreloadedInstances
	if (maxFemalePedestrianPreloadedInstances && maxFemalePedestrianPreloadedInstances[0] != '\0') gll_delete[] maxFemalePedestrianPreloadedInstances;
	maxFemalePedestrianPreloadedInstances = 0;

	// Field : minMalePedestrianPreloadedInstances
	if (minMalePedestrianPreloadedInstances && minMalePedestrianPreloadedInstances[0] != '\0') gll_delete[] minMalePedestrianPreloadedInstances;
	minMalePedestrianPreloadedInstances = 0;

	// Field : maxMalePedestrianPreloadedInstances
	if (maxMalePedestrianPreloadedInstances && maxMalePedestrianPreloadedInstances[0] != '\0') gll_delete[] maxMalePedestrianPreloadedInstances;
	maxMalePedestrianPreloadedInstances = 0;

	// Field : disableVehicleVfxDistance
	if (disableVehicleVfxDistance && disableVehicleVfxDistance[0] != '\0') gll_delete[] disableVehicleVfxDistance;
	disableVehicleVfxDistance = 0;

	// Field : useMenuTextureHighRes
	if (useMenuTextureHighRes && useMenuTextureHighRes[0] != '\0') gll_delete[] useMenuTextureHighRes;
	useMenuTextureHighRes = 0;

	// Field : useMenuAtlasTextureVeryLowRes
	if (useMenuAtlasTextureVeryLowRes && useMenuAtlasTextureVeryLowRes[0] != '\0') gll_delete[] useMenuAtlasTextureVeryLowRes;
	useMenuAtlasTextureVeryLowRes = 0;

	// Field : streamingUseDoubleBuffering
	if (streamingUseDoubleBuffering && streamingUseDoubleBuffering[0] != '\0') gll_delete[] streamingUseDoubleBuffering;
	streamingUseDoubleBuffering = 0;

	// Field : streamingLookAheadFactor
	if (streamingLookAheadFactor && streamingLookAheadFactor[0] != '\0') gll_delete[] streamingLookAheadFactor;
	streamingLookAheadFactor = 0;

	// Field : streamingReduxMinRadiusFactor
	if (streamingReduxMinRadiusFactor && streamingReduxMinRadiusFactor[0] != '\0') gll_delete[] streamingReduxMinRadiusFactor;
	streamingReduxMinRadiusFactor = 0;

	// Field : UseTransparentNodeScreenGrouper
	if (UseTransparentNodeScreenGrouper && UseTransparentNodeScreenGrouper[0] != '\0') gll_delete[] UseTransparentNodeScreenGrouper;
	UseTransparentNodeScreenGrouper = 0;

	// Field : useExtendedStreaming
	if (useExtendedStreaming && useExtendedStreaming[0] != '\0') gll_delete[] useExtendedStreaming;
	useExtendedStreaming = 0;

	// Field : swfPostProcessTextureHeight
	if (swfPostProcessTextureHeight && swfPostProcessTextureHeight[0] != '\0') gll_delete[] swfPostProcessTextureHeight;
	swfPostProcessTextureHeight = 0;

	// Field : swfPostProcessTextureSize
	if (swfPostProcessTextureSize && swfPostProcessTextureSize[0] != '\0') gll_delete[] swfPostProcessTextureSize;
	swfPostProcessTextureSize = 0;

	// Field : snd_useSimpleEngineSound
	if (snd_useSimpleEngineSound && snd_useSimpleEngineSound[0] != '\0') gll_delete[] snd_useSimpleEngineSound;
	snd_useSimpleEngineSound = 0;

	// Field : OptionalMenu3DModel
	if (OptionalMenu3DModel && OptionalMenu3DModel[0] != '\0') gll_delete[] OptionalMenu3DModel;
	OptionalMenu3DModel = 0;

	// Field : LoadingTexture
	if (LoadingTexture && LoadingTexture[0] != '\0') gll_delete[] LoadingTexture;
	LoadingTexture = 0;

	// Field : UseAttachedToPlayer_EnvironementVFX
	if (UseAttachedToPlayer_EnvironementVFX && UseAttachedToPlayer_EnvironementVFX[0] != '\0') gll_delete[] UseAttachedToPlayer_EnvironementVFX;
	UseAttachedToPlayer_EnvironementVFX = 0;

	// Field : RemoveVehicleBurnSound
	if (RemoveVehicleBurnSound && RemoveVehicleBurnSound[0] != '\0') gll_delete[] RemoveVehicleBurnSound;
	RemoveVehicleBurnSound = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : parametric_controllers
size_t parametric_controllers::size = 0;
parametric_controllers::struct_type* parametric_controllers::entries = 0;

void parametric_controllers::Load(StreamBase* stream)
{
	if(entries != 0)
		Unload();

	uint32 sz;
	stream->ReadAs(sz);

	if(sz > 0)
	{
		entries = gll_new struct_type[sz];
		size = sz;

		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Init();
			entries[i].Load(stream);
		}
	}
}

void parametric_controllers::Unload()
{
	if(entries)
	{
		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Unload();
		}

		gll_delete[] entries;
		entries = 0;
		size = 0;
	}
}

}; // namespace arrays
}; // namespace xmldata

