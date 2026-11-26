#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/phone_performance_profiles.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : phone_performance_profiles_struct
void phone_performance_profiles_struct::Init()
{
	base_struct::Init();

	// Field : mass
	mass_f = 0.0f;

	// Field : materialid
	materialid = 0;

	// Field : collisionFilter
	collisionFilter = 0;

	// Field : collisionFilterFlags
	collisionFilterFlags = 0;

	// Field : forceConvex
	forceConvex_f = 0.0f;

	// Field : canBeGrouped
	canBeGrouped = 0;

	// Field : maxVolume
	maxVolume_f = 0.0f;

	// Field : disableDelay
	disableDelay_f = 0.0f;

	// Field : vfxDelay
	vfxDelay = 0;
	vfxDelay_hash = 0;

	// Field : vfxName
	vfxName = 0;
	vfxName_hash = 0;

	// Field : sfxDelay
	sfxDelay = 0;
	sfxDelay_hash = 0;

	// Field : sfxName
	sfxName = 0;
	sfxName_hash = 0;

	// Field : breakPointImpulse
	breakPointImpulse_f = 0.0f;

	// Field : breakPointFactor
	breakPointFactor_f = 0.0f;

	// Field : initialVelocityFactor
	initialVelocityFactor_f = 0.0f;

	// Field : statIncCounterIdx
	statIncCounterIdx = 0;

	// Field : preset
	preset = 0;

}

void phone_performance_profiles_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : mass
	stream->ReadAs(mass_f);

	// Field : materialid
	stream->ReadAs(materialid);

	// Field : collisionFilter
	stream->ReadAs(collisionFilter);

	// Field : collisionFilterFlags
	stream->ReadAs(collisionFilterFlags);

	// Field : forceConvex
	stream->ReadAs(forceConvex_f);

	// Field : canBeGrouped
	stream->ReadAs(canBeGrouped);

	// Field : maxVolume
	stream->ReadAs(maxVolume_f);

	// Field : disableDelay
	stream->ReadAs(disableDelay_f);

	// Field : vfxDelay
	stream->ReadString(vfxDelay);
	vfxDelay_hash = static_cast<uint32>(glitch::core::hashString(vfxDelay));

	// Field : vfxName
	stream->ReadString(vfxName);
	vfxName_hash = static_cast<uint32>(glitch::core::hashString(vfxName));

	// Field : sfxDelay
	stream->ReadString(sfxDelay);
	sfxDelay_hash = static_cast<uint32>(glitch::core::hashString(sfxDelay));

	// Field : sfxName
	stream->ReadString(sfxName);
	sfxName_hash = static_cast<uint32>(glitch::core::hashString(sfxName));

	// Field : breakPointImpulse
	stream->ReadAs(breakPointImpulse_f);

	// Field : breakPointFactor
	stream->ReadAs(breakPointFactor_f);

	// Field : initialVelocityFactor
	stream->ReadAs(initialVelocityFactor_f);

	// Field : statIncCounterIdx
	stream->ReadAs(statIncCounterIdx);

	// Field : preset
	stream->ReadAs(preset);

}

void phone_performance_profiles_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : vfxDelay
	if (vfxDelay && vfxDelay[0] != '\0') gll_delete[] vfxDelay;
	vfxDelay = 0;

	// Field : vfxName
	if (vfxName && vfxName[0] != '\0') gll_delete[] vfxName;
	vfxName = 0;

	// Field : sfxDelay
	if (sfxDelay && sfxDelay[0] != '\0') gll_delete[] sfxDelay;
	sfxDelay = 0;

	// Field : sfxName
	if (sfxName && sfxName[0] != '\0') gll_delete[] sfxName;
	sfxName = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : phone_performance_profiles
size_t phone_performance_profiles::size = 0;
phone_performance_profiles::struct_type* phone_performance_profiles::entries = 0;

void phone_performance_profiles::Load(StreamBase* stream)
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

void phone_performance_profiles::Unload()
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

