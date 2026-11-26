#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_options_help.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_options_help_struct
void giv_options_help_struct::Init()
{
	base_struct::Init();

	// Field : spawnPrimitive
	spawnPrimitive = 0;

	// Field : openingTime
	openingTime_f = 0.0f;

	// Field : gliding_acceleration
	gliding_acceleration = 0;

	// Field : gliding_topSpeed
	gliding_topSpeed = 0;

	// Field : falling_topSpeed
	falling_topSpeed_f = 0.0f;

	// Field : diving_glideMultiplier
	diving_glideMultiplier = 0;

	// Field : diving_dragMultiplier
	diving_dragMultiplier_f = 0.0f;

	// Field : braking_glideMultiplier
	braking_glideMultiplier = 0;

	// Field : braking_dragMultiplier
	braking_dragMultiplier_f = 0.0f;

	// Field : drag_airResistCoef
	drag_airResistCoef = 0;

	// Field : drag_inverseCoef
	drag_inverseCoef = 0;

	// Field : drag_sideCoef
	drag_sideCoef = 0;

	// Field : drag_upCoef
	drag_upCoef = 0;

	// Field : drag_frontCoef
	drag_frontCoef = 0;

}

void giv_options_help_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : spawnPrimitive
	stream->ReadAs(spawnPrimitive);

	// Field : openingTime
	stream->ReadAs(openingTime_f);

	// Field : gliding_acceleration
	stream->ReadAs(gliding_acceleration);

	// Field : gliding_topSpeed
	stream->ReadAs(gliding_topSpeed);

	// Field : falling_topSpeed
	stream->ReadAs(falling_topSpeed_f);

	// Field : diving_glideMultiplier
	stream->ReadAs(diving_glideMultiplier);

	// Field : diving_dragMultiplier
	stream->ReadAs(diving_dragMultiplier_f);

	// Field : braking_glideMultiplier
	stream->ReadAs(braking_glideMultiplier);

	// Field : braking_dragMultiplier
	stream->ReadAs(braking_dragMultiplier_f);

	// Field : drag_airResistCoef
	stream->ReadAs(drag_airResistCoef);

	// Field : drag_inverseCoef
	stream->ReadAs(drag_inverseCoef);

	// Field : drag_sideCoef
	stream->ReadAs(drag_sideCoef);

	// Field : drag_upCoef
	stream->ReadAs(drag_upCoef);

	// Field : drag_frontCoef
	stream->ReadAs(drag_frontCoef);

}

void giv_options_help_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_options_help
size_t giv_options_help::size = 0;
giv_options_help::struct_type* giv_options_help::entries = 0;

void giv_options_help::Load(StreamBase* stream)
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

void giv_options_help::Unload()
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

