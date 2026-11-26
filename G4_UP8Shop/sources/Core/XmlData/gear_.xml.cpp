#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/gear_.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : gear__struct
void gear__struct::Init()
{
	base_struct::Init();

	// Field : Upgrade1
	Upgrade1 = 0;

	// Field : Upgrade2
	Upgrade2 = 0;

	// Field : Upgrade3
	Upgrade3 = 0;

	// Field : Upgrade4
	Upgrade4 = 0;

	// Field : Upgrade5
	Upgrade5 = 0;

	// Field : Icon
	Icon = 0;
	Icon_hash = 0;

	// Field : SettingsID
	SettingsID = 0;

	// Field : TrackingEventId
	TrackingEventId = 0;

	// Field : Description
	Description = 0;
	Description_hash = 0;

	// Field : SPLevel
	SPLevel = 0;

	// Field : Section
	Section = 0;

	// Field : Definitions
	Definitions = 0;

	// Field : Model
	Model = 0;
	Model_hash = 0;

	// Field : WeaponOid
	WeaponOid = 0;

	// Field : CameraDistance
	CameraDistance_f = 0.0f;

	// Field : ModelRotationAngle
	ModelRotationAngle = 0;
	ModelRotationAngle_hash = 0;

	// Field : AnimationNames
	AnimationNames = 0;
	AnimationNames_hash = 0;

	// Field : VFXID
	VFXID = 0;

}

void gear__struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Upgrade1
	stream->ReadAs(Upgrade1);

	// Field : Upgrade2
	stream->ReadAs(Upgrade2);

	// Field : Upgrade3
	stream->ReadAs(Upgrade3);

	// Field : Upgrade4
	stream->ReadAs(Upgrade4);

	// Field : Upgrade5
	stream->ReadAs(Upgrade5);

	// Field : Icon
	stream->ReadString(Icon);
	Icon_hash = static_cast<uint32>(glitch::core::hashString(Icon));

	// Field : SettingsID
	stream->ReadAs(SettingsID);

	// Field : TrackingEventId
	stream->ReadAs(TrackingEventId);

	// Field : Description
	stream->ReadString(Description);
	Description_hash = static_cast<uint32>(glitch::core::hashString(Description));

	// Field : SPLevel
	stream->ReadAs(SPLevel);

	// Field : Section
	stream->ReadAs(Section);

	// Field : Definitions
	stream->ReadAs(Definitions);

	// Field : Model
	stream->ReadString(Model);
	Model_hash = static_cast<uint32>(glitch::core::hashString(Model));

	// Field : WeaponOid
	stream->ReadAs(WeaponOid);

	// Field : CameraDistance
	stream->ReadAs(CameraDistance_f);

	// Field : ModelRotationAngle
	stream->ReadString(ModelRotationAngle);
	ModelRotationAngle_hash = static_cast<uint32>(glitch::core::hashString(ModelRotationAngle));

	// Field : AnimationNames
	stream->ReadString(AnimationNames);
	AnimationNames_hash = static_cast<uint32>(glitch::core::hashString(AnimationNames));

	// Field : VFXID
	stream->ReadAs(VFXID);

}

void gear__struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : Icon
	if (Icon && Icon[0] != '\0') gll_delete[] Icon;
	Icon = 0;

	// Field : Description
	if (Description && Description[0] != '\0') gll_delete[] Description;
	Description = 0;

	// Field : Model
	if (Model && Model[0] != '\0') gll_delete[] Model;
	Model = 0;

	// Field : ModelRotationAngle
	if (ModelRotationAngle && ModelRotationAngle[0] != '\0') gll_delete[] ModelRotationAngle;
	ModelRotationAngle = 0;

	// Field : AnimationNames
	if (AnimationNames && AnimationNames[0] != '\0') gll_delete[] AnimationNames;
	AnimationNames = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : gear_
size_t gear_::size = 0;
gear_::struct_type* gear_::entries = 0;

void gear_::Load(StreamBase* stream)
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

void gear_::Unload()
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

