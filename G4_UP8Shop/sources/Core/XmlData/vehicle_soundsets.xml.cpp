#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/vehicle_soundsets.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : vehicle_soundsets_struct
void vehicle_soundsets_struct::Init()
{
	base_struct::Init();

	// Field : OptionMinSensitivityFactor
	OptionMinSensitivityFactor_f = 0.0f;

	// Field : OptionMaxSensitivityFactor
	OptionMaxSensitivityFactor_f = 0.0f;

	// Field : MaxAngleLowSensitivity
	MaxAngleLowSensitivity_f = 0.0f;

	// Field : MaxAngleHighSensitivity
	MaxAngleHighSensitivity_f = 0.0f;

	// Field : DeadZoneLowSensitivity
	DeadZoneLowSensitivity = 0;

	// Field : DeadZoneHighSensitivity
	DeadZoneHighSensitivity = 0;

	// Field : CurveExpLowSensitivity
	CurveExpLowSensitivity = 0;

	// Field : CurveExpHighSensitivity
	CurveExpHighSensitivity = 0;

	// Field : accelerometerAngleFactor
	accelerometerAngleFactor_f = 0.0f;

	// Field : accelerometerFilterFactor
	accelerometerFilterFactor_f = 0.0f;

	// Field : accelerometerDeadZone
	accelerometerDeadZone_f = 0.0f;

	// Field : accelerometerRollToPitch
	accelerometerRollToPitch_f = 0.0f;

	// Field : startSmoothingHorizonAngle
	startSmoothingHorizonAngle_f = 0.0f;

	// Field : endSmoothingHorizonAngle
	endSmoothingHorizonAngle_f = 0.0f;

	// Field : CurvePhaseLowSensitivity
	CurvePhaseLowSensitivity = 0;

	// Field : CurvePhaseHighSensitivity
	CurvePhaseHighSensitivity = 0;

	// Field : MotoInAirRampingPoint1_X
	MotoInAirRampingPoint1_X = 0;

	// Field : MotoInAirRampingPoint1_Y
	MotoInAirRampingPoint1_Y = 0;

	// Field : MotoInAirRampingPoint2_X
	MotoInAirRampingPoint2_X = 0;

	// Field : MotoInAirRampingPoint2_Y
	MotoInAirRampingPoint2_Y = 0;

	// Field : MotoInAirRampingTimer
	MotoInAirRampingTimer_f = 0.0f;

	// Field : MotoInAirRampingThreshold
	MotoInAirRampingThreshold = 0;

	// Field : MotoInAirRampingInitialFactor
	MotoInAirRampingInitialFactor_f = 0.0f;

	// Field : MotoWheelieThresholdInput
	MotoWheelieThresholdInput = 0;

}

void vehicle_soundsets_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : OptionMinSensitivityFactor
	stream->ReadAs(OptionMinSensitivityFactor_f);

	// Field : OptionMaxSensitivityFactor
	stream->ReadAs(OptionMaxSensitivityFactor_f);

	// Field : MaxAngleLowSensitivity
	stream->ReadAs(MaxAngleLowSensitivity_f);

	// Field : MaxAngleHighSensitivity
	stream->ReadAs(MaxAngleHighSensitivity_f);

	// Field : DeadZoneLowSensitivity
	stream->ReadAs(DeadZoneLowSensitivity);

	// Field : DeadZoneHighSensitivity
	stream->ReadAs(DeadZoneHighSensitivity);

	// Field : CurveExpLowSensitivity
	stream->ReadAs(CurveExpLowSensitivity);

	// Field : CurveExpHighSensitivity
	stream->ReadAs(CurveExpHighSensitivity);

	// Field : accelerometerAngleFactor
	stream->ReadAs(accelerometerAngleFactor_f);

	// Field : accelerometerFilterFactor
	stream->ReadAs(accelerometerFilterFactor_f);

	// Field : accelerometerDeadZone
	stream->ReadAs(accelerometerDeadZone_f);

	// Field : accelerometerRollToPitch
	stream->ReadAs(accelerometerRollToPitch_f);

	// Field : startSmoothingHorizonAngle
	stream->ReadAs(startSmoothingHorizonAngle_f);

	// Field : endSmoothingHorizonAngle
	stream->ReadAs(endSmoothingHorizonAngle_f);

	// Field : CurvePhaseLowSensitivity
	stream->ReadAs(CurvePhaseLowSensitivity);

	// Field : CurvePhaseHighSensitivity
	stream->ReadAs(CurvePhaseHighSensitivity);

	// Field : MotoInAirRampingPoint1_X
	stream->ReadAs(MotoInAirRampingPoint1_X);

	// Field : MotoInAirRampingPoint1_Y
	stream->ReadAs(MotoInAirRampingPoint1_Y);

	// Field : MotoInAirRampingPoint2_X
	stream->ReadAs(MotoInAirRampingPoint2_X);

	// Field : MotoInAirRampingPoint2_Y
	stream->ReadAs(MotoInAirRampingPoint2_Y);

	// Field : MotoInAirRampingTimer
	stream->ReadAs(MotoInAirRampingTimer_f);

	// Field : MotoInAirRampingThreshold
	stream->ReadAs(MotoInAirRampingThreshold);

	// Field : MotoInAirRampingInitialFactor
	stream->ReadAs(MotoInAirRampingInitialFactor_f);

	// Field : MotoWheelieThresholdInput
	stream->ReadAs(MotoWheelieThresholdInput);

}

void vehicle_soundsets_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : vehicle_soundsets
size_t vehicle_soundsets::size = 0;
vehicle_soundsets::struct_type* vehicle_soundsets::entries = 0;

void vehicle_soundsets::Load(StreamBase* stream)
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

void vehicle_soundsets::Unload()
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

