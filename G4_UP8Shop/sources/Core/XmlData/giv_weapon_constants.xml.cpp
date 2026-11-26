#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_weapon_constants.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_weapon_constants_struct
void giv_weapon_constants_struct::Init()
{
	base_struct::Init();

	// Field : vehicleAttachNode
	vehicleAttachNode = 0;

	// Field : gunBarrelNode
	gunBarrelNode = 0;

	// Field : turretYawAcceleration
	turretYawAcceleration_f = 0.0f;

	// Field : turretYawMaxVelocity
	turretYawMaxVelocity_f = 0.0f;

	// Field : turretPitchAcceleration
	turretPitchAcceleration_f = 0.0f;

	// Field : turretPitchMaxVelocity
	turretPitchMaxVelocity_f = 0.0f;

	// Field : turretPitchMinAngle
	turretPitchMinAngle_f = 0.0f;

	// Field : turretPitchMaxAngle
	turretPitchMaxAngle_f = 0.0f;

	// Field : turretPitchOffsetAngle
	turretPitchOffsetAngle_f = 0.0f;

	// Field : turretAimResetTimer
	turretAimResetTimer_f = 0.0f;

	// Field : turretAimResetMinVelocity
	turretAimResetMinVelocity_f = 0.0f;

	// Field : turretShootImpulse
	turretShootImpulse_f = 0.0f;

}

void giv_weapon_constants_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : vehicleAttachNode
	stream->ReadAs(vehicleAttachNode);

	// Field : gunBarrelNode
	stream->ReadAs(gunBarrelNode);

	// Field : turretYawAcceleration
	stream->ReadAs(turretYawAcceleration_f);

	// Field : turretYawMaxVelocity
	stream->ReadAs(turretYawMaxVelocity_f);

	// Field : turretPitchAcceleration
	stream->ReadAs(turretPitchAcceleration_f);

	// Field : turretPitchMaxVelocity
	stream->ReadAs(turretPitchMaxVelocity_f);

	// Field : turretPitchMinAngle
	stream->ReadAs(turretPitchMinAngle_f);

	// Field : turretPitchMaxAngle
	stream->ReadAs(turretPitchMaxAngle_f);

	// Field : turretPitchOffsetAngle
	stream->ReadAs(turretPitchOffsetAngle_f);

	// Field : turretAimResetTimer
	stream->ReadAs(turretAimResetTimer_f);

	// Field : turretAimResetMinVelocity
	stream->ReadAs(turretAimResetMinVelocity_f);

	// Field : turretShootImpulse
	stream->ReadAs(turretShootImpulse_f);

}

void giv_weapon_constants_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_weapon_constants
size_t giv_weapon_constants::size = 0;
giv_weapon_constants::struct_type* giv_weapon_constants::entries = 0;

void giv_weapon_constants::Load(StreamBase* stream)
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

void giv_weapon_constants::Unload()
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

