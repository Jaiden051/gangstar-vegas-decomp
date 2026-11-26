#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/batch_generator.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : batch_generator_struct
void batch_generator_struct::Init()
{
	base_struct::Init();

	// Field : lookAtX
	lookAtX = 0;

	// Field : lookAtY
	lookAtY = 0;

	// Field : lookAtZ
	lookAtZ = 0;

	// Field : projOffX
	projOffX = 0;
	projOffX_hash = 0;

	// Field : projOffY
	projOffY = 0;

	// Field : projOffZ
	projOffZ = 0;

	// Field : minVerticalAngle
	minVerticalAngle_f = 0.0f;

	// Field : maxVerticalAngle
	maxVerticalAngle_f = 0.0f;

	// Field : elevation
	elevation = 0;

	// Field : walkingDistance
	walkingDistance_f = 0.0f;

	// Field : runningDistance
	runningDistance_f = 0.0f;

	// Field : sprintingDistance
	sprintingDistance_f = 0.0f;

	// Field : distanceChangeSpeed
	distanceChangeSpeed_f = 0.0f;

	// Field : swipeTargetTransitionSpeed
	swipeTargetTransitionSpeed_f = 0.0f;

	// Field : transitionSpeed
	transitionSpeed_f = 0.0f;

	// Field : fov
	fov_f = 0.0f;

	// Field : brawlCamTimer
	brawlCamTimer_f = 0.0f;

	// Field : backwardAngleFactor
	backwardAngleFactor_f = 0.0f;

	// Field : forwardAngleFactor
	forwardAngleFactor_f = 0.0f;

	// Field : elevationOffsetDown
	elevationOffsetDown_f = 0.0f;

	// Field : elevationOffsetUp
	elevationOffsetUp_f = 0.0f;

	// Field : elevationOffsetMaxVel
	elevationOffsetMaxVel_f = 0.0f;

	// Field : minDistance
	minDistance_f = 0.0f;

	// Field : maxDistance
	maxDistance_f = 0.0f;

	// Field : distanceLowerSpeedThreshold
	distanceLowerSpeedThreshold_f = 0.0f;

	// Field : distanceUpperSpeedThreshold
	distanceUpperSpeedThreshold_f = 0.0f;

	// Field : distanceMaxChange
	distanceMaxChange_f = 0.0f;

	// Field : CameraFastCorrectionMinSpeedPercent
	CameraFastCorrectionMinSpeedPercent_f = 0.0f;

	// Field : CameraFastCorrectionMaxSpeedPercent
	CameraFastCorrectionMaxSpeedPercent_f = 0.0f;

	// Field : CameraFastCorrectionTime
	CameraFastCorrectionTime_f = 0.0f;

	// Field : CameraFastCorrectionStartDriftTimer
	CameraFastCorrectionStartDriftTimer_f = 0.0f;

	// Field : CameraFastCorrectionStopDriftTimer
	CameraFastCorrectionStopDriftTimer_f = 0.0f;

	// Field : CameraFastCorrectionDriftingFactor
	CameraFastCorrectionDriftingFactor_f = 0.0f;

	// Field : CameraFastCorrectionMaxSpeedPercent_Drifting
	CameraFastCorrectionMaxSpeedPercent_Drifting_f = 0.0f;

	// Field : blurCenterX
	blurCenterX = 0;

	// Field : blurCenterY
	blurCenterY = 0;

	// Field : deadZone
	deadZone = 0;

	// Field : blurMaxScale
	blurMaxScale_f = 0.0f;

	// Field : blurMinSpeed
	blurMinSpeed_f = 0.0f;

	// Field : blurMaxSpeed
	blurMaxSpeed_f = 0.0f;

	// Field : blurFadeStart
	blurFadeStart = 0;

	// Field : blurFadeEnd
	blurFadeEnd = 0;

	// Field : flyingResetCoef
	flyingResetCoef = 0;

	// Field : NPCMovingFactor
	NPCMovingFactor_f = 0.0f;

	// Field : doubleTapSpeed
	doubleTapSpeed_f = 0.0f;

	// Field : targetTapDistance
	targetTapDistance_f = 0.0f;

	// Field : touchHorizontalDirection
	touchHorizontalDirection = 0;

	// Field : touchHorizontalSpeed
	touchHorizontalSpeed_f = 0.0f;

	// Field : touchVerticalDirection
	touchVerticalDirection = 0;

	// Field : touchVerticalSpeed
	touchVerticalSpeed_f = 0.0f;

	// Field : focusDistance
	focusDistance_f = 0.0f;

	// Field : maxZoomIn
	maxZoomIn = 0;

	// Field : maxZoomOut
	maxZoomOut = 0;

	// Field : highAngle
	highAngle_f = 0.0f;

	// Field : lowAngle
	lowAngle_f = 0.0f;

	// Field : swipeFactor
	swipeFactor_f = 0.0f;

	// Field : recoilDuration
	recoilDuration_f = 0.0f;

	// Field : recoilReturnCutoffPercent
	recoilReturnCutoffPercent = 0;

	// Field : recoilZ
	recoilZ = 0;

	// Field : wobbleFactor
	wobbleFactor_f = 0.0f;

	// Field : zoomSpeed
	zoomSpeed_f = 0.0f;

	// Field : inverseX
	inverseX = 0;

	// Field : inverseY
	inverseY = 0;

	// Field : camera_center_reset
	camera_center_reset = 0;

}

void batch_generator_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : lookAtX
	stream->ReadAs(lookAtX);

	// Field : lookAtY
	stream->ReadAs(lookAtY);

	// Field : lookAtZ
	stream->ReadAs(lookAtZ);

	// Field : projOffX
	stream->ReadString(projOffX);
	projOffX_hash = static_cast<uint32>(glitch::core::hashString(projOffX));

	// Field : projOffY
	stream->ReadAs(projOffY);

	// Field : projOffZ
	stream->ReadAs(projOffZ);

	// Field : minVerticalAngle
	stream->ReadAs(minVerticalAngle_f);

	// Field : maxVerticalAngle
	stream->ReadAs(maxVerticalAngle_f);

	// Field : elevation
	stream->ReadAs(elevation);

	// Field : walkingDistance
	stream->ReadAs(walkingDistance_f);

	// Field : runningDistance
	stream->ReadAs(runningDistance_f);

	// Field : sprintingDistance
	stream->ReadAs(sprintingDistance_f);

	// Field : distanceChangeSpeed
	stream->ReadAs(distanceChangeSpeed_f);

	// Field : swipeTargetTransitionSpeed
	stream->ReadAs(swipeTargetTransitionSpeed_f);

	// Field : transitionSpeed
	stream->ReadAs(transitionSpeed_f);

	// Field : fov
	stream->ReadAs(fov_f);

	// Field : brawlCamTimer
	stream->ReadAs(brawlCamTimer_f);

	// Field : backwardAngleFactor
	stream->ReadAs(backwardAngleFactor_f);

	// Field : forwardAngleFactor
	stream->ReadAs(forwardAngleFactor_f);

	// Field : elevationOffsetDown
	stream->ReadAs(elevationOffsetDown_f);

	// Field : elevationOffsetUp
	stream->ReadAs(elevationOffsetUp_f);

	// Field : elevationOffsetMaxVel
	stream->ReadAs(elevationOffsetMaxVel_f);

	// Field : minDistance
	stream->ReadAs(minDistance_f);

	// Field : maxDistance
	stream->ReadAs(maxDistance_f);

	// Field : distanceLowerSpeedThreshold
	stream->ReadAs(distanceLowerSpeedThreshold_f);

	// Field : distanceUpperSpeedThreshold
	stream->ReadAs(distanceUpperSpeedThreshold_f);

	// Field : distanceMaxChange
	stream->ReadAs(distanceMaxChange_f);

	// Field : CameraFastCorrectionMinSpeedPercent
	stream->ReadAs(CameraFastCorrectionMinSpeedPercent_f);

	// Field : CameraFastCorrectionMaxSpeedPercent
	stream->ReadAs(CameraFastCorrectionMaxSpeedPercent_f);

	// Field : CameraFastCorrectionTime
	stream->ReadAs(CameraFastCorrectionTime_f);

	// Field : CameraFastCorrectionStartDriftTimer
	stream->ReadAs(CameraFastCorrectionStartDriftTimer_f);

	// Field : CameraFastCorrectionStopDriftTimer
	stream->ReadAs(CameraFastCorrectionStopDriftTimer_f);

	// Field : CameraFastCorrectionDriftingFactor
	stream->ReadAs(CameraFastCorrectionDriftingFactor_f);

	// Field : CameraFastCorrectionMaxSpeedPercent_Drifting
	stream->ReadAs(CameraFastCorrectionMaxSpeedPercent_Drifting_f);

	// Field : blurCenterX
	stream->ReadAs(blurCenterX);

	// Field : blurCenterY
	stream->ReadAs(blurCenterY);

	// Field : deadZone
	stream->ReadAs(deadZone);

	// Field : blurMaxScale
	stream->ReadAs(blurMaxScale_f);

	// Field : blurMinSpeed
	stream->ReadAs(blurMinSpeed_f);

	// Field : blurMaxSpeed
	stream->ReadAs(blurMaxSpeed_f);

	// Field : blurFadeStart
	stream->ReadAs(blurFadeStart);

	// Field : blurFadeEnd
	stream->ReadAs(blurFadeEnd);

	// Field : flyingResetCoef
	stream->ReadAs(flyingResetCoef);

	// Field : NPCMovingFactor
	stream->ReadAs(NPCMovingFactor_f);

	// Field : doubleTapSpeed
	stream->ReadAs(doubleTapSpeed_f);

	// Field : targetTapDistance
	stream->ReadAs(targetTapDistance_f);

	// Field : touchHorizontalDirection
	stream->ReadAs(touchHorizontalDirection);

	// Field : touchHorizontalSpeed
	stream->ReadAs(touchHorizontalSpeed_f);

	// Field : touchVerticalDirection
	stream->ReadAs(touchVerticalDirection);

	// Field : touchVerticalSpeed
	stream->ReadAs(touchVerticalSpeed_f);

	// Field : focusDistance
	stream->ReadAs(focusDistance_f);

	// Field : maxZoomIn
	stream->ReadAs(maxZoomIn);

	// Field : maxZoomOut
	stream->ReadAs(maxZoomOut);

	// Field : highAngle
	stream->ReadAs(highAngle_f);

	// Field : lowAngle
	stream->ReadAs(lowAngle_f);

	// Field : swipeFactor
	stream->ReadAs(swipeFactor_f);

	// Field : recoilDuration
	stream->ReadAs(recoilDuration_f);

	// Field : recoilReturnCutoffPercent
	stream->ReadAs(recoilReturnCutoffPercent);

	// Field : recoilZ
	stream->ReadAs(recoilZ);

	// Field : wobbleFactor
	stream->ReadAs(wobbleFactor_f);

	// Field : zoomSpeed
	stream->ReadAs(zoomSpeed_f);

	// Field : inverseX
	stream->ReadAs(inverseX);

	// Field : inverseY
	stream->ReadAs(inverseY);

	// Field : camera_center_reset
	stream->ReadAs(camera_center_reset);

}

void batch_generator_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : projOffX
	if (projOffX && projOffX[0] != '\0') gll_delete[] projOffX;
	projOffX = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : batch_generator
size_t batch_generator::size = 0;
batch_generator::struct_type* batch_generator::entries = 0;

void batch_generator::Load(StreamBase* stream)
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

void batch_generator::Unload()
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

