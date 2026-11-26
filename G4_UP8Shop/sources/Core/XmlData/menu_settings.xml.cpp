#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/menu_settings.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : menu_settings_struct
void menu_settings_struct::Init()
{
	base_struct::Init();

	// Field : ZoomMin
	ZoomMin = 0;

	// Field : ZoomMax
	ZoomMax = 0;

	// Field : ZoomDefault
	ZoomDefault = 0;

	// Field : ZoomAnimSpeed
	ZoomAnimSpeed_f = 0.0f;

	// Field : ZoomOutScaleValue
	ZoomOutScaleValue_f = 0.0f;

	// Field : ZoomInScaleValue
	ZoomInScaleValue_f = 0.0f;

	// Field : ZoomInteriorScaleValue
	ZoomInteriorScaleValue_f = 0.0f;

	// Field : ZoomTimeTransition
	ZoomTimeTransition_f = 0.0f;

	// Field : GPSLineThicknessWaypoint
	GPSLineThicknessWaypoint = 0;

	// Field : GPSLineColorWaypoint
	GPSLineColorWaypoint = 0;

	// Field : GPSLineThicknessMoveTo
	GPSLineThicknessMoveTo = 0;

	// Field : GPSLineColorMoveTo
	GPSLineColorMoveTo = 0;

	// Field : BrakeTime
	BrakeTime_f = 0.0f;

	// Field : BrakeIntensityInitValue
	BrakeIntensityInitValue = 0;

	// Field : WheelieMotoIntensity
	WheelieMotoIntensity = 0;

	// Field : DeltaThresholdY
	DeltaThresholdY = 0;

	// Field : DeltaThresholdZ
	DeltaThresholdZ = 0;

	// Field : ResetValueDecremental
	ResetValueDecremental = 0;

}

void menu_settings_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : ZoomMin
	stream->ReadAs(ZoomMin);

	// Field : ZoomMax
	stream->ReadAs(ZoomMax);

	// Field : ZoomDefault
	stream->ReadAs(ZoomDefault);

	// Field : ZoomAnimSpeed
	stream->ReadAs(ZoomAnimSpeed_f);

	// Field : ZoomOutScaleValue
	stream->ReadAs(ZoomOutScaleValue_f);

	// Field : ZoomInScaleValue
	stream->ReadAs(ZoomInScaleValue_f);

	// Field : ZoomInteriorScaleValue
	stream->ReadAs(ZoomInteriorScaleValue_f);

	// Field : ZoomTimeTransition
	stream->ReadAs(ZoomTimeTransition_f);

	// Field : GPSLineThicknessWaypoint
	stream->ReadAs(GPSLineThicknessWaypoint);

	// Field : GPSLineColorWaypoint
	stream->ReadAs(GPSLineColorWaypoint);

	// Field : GPSLineThicknessMoveTo
	stream->ReadAs(GPSLineThicknessMoveTo);

	// Field : GPSLineColorMoveTo
	stream->ReadAs(GPSLineColorMoveTo);

	// Field : BrakeTime
	stream->ReadAs(BrakeTime_f);

	// Field : BrakeIntensityInitValue
	stream->ReadAs(BrakeIntensityInitValue);

	// Field : WheelieMotoIntensity
	stream->ReadAs(WheelieMotoIntensity);

	// Field : DeltaThresholdY
	stream->ReadAs(DeltaThresholdY);

	// Field : DeltaThresholdZ
	stream->ReadAs(DeltaThresholdZ);

	// Field : ResetValueDecremental
	stream->ReadAs(ResetValueDecremental);

}

void menu_settings_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : menu_settings
size_t menu_settings::size = 0;
menu_settings::struct_type* menu_settings::entries = 0;

void menu_settings::Load(StreamBase* stream)
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

void menu_settings::Unload()
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

