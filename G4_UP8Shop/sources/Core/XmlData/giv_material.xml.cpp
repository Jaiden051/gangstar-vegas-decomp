#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_material.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_material_struct
void giv_material_struct::Init()
{
	base_struct::Init();

	// Field : GroundFierceStrikes
	GroundFierceStrikes = 0;
	GroundFierceStrikes_hash = 0;

	// Field : LeftFierceStrikes
	LeftFierceStrikes = 0;
	LeftFierceStrikes_hash = 0;

	// Field : RightFierceStrikes
	RightFierceStrikes = 0;
	RightFierceStrikes_hash = 0;

	// Field : GroundQuickStrikes
	GroundQuickStrikes = 0;
	GroundQuickStrikes_hash = 0;

	// Field : LeftQuickStrikes
	LeftQuickStrikes = 0;
	LeftQuickStrikes_hash = 0;

	// Field : RightQuickStrikes
	RightQuickStrikes = 0;
	RightQuickStrikes_hash = 0;

	// Field : WeaponGroundStrike
	WeaponGroundStrike = 0;
	WeaponGroundStrike_hash = 0;

	// Field : WeaponStrike
	WeaponStrike = 0;
	WeaponStrike_hash = 0;

	// Field : WeaponComboStrike
	WeaponComboStrike = 0;
	WeaponComboStrike_hash = 0;

	// Field : WeaponFierceStrike
	WeaponFierceStrike = 0;
	WeaponFierceStrike_hash = 0;

}

void giv_material_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : GroundFierceStrikes
	stream->ReadString(GroundFierceStrikes);
	GroundFierceStrikes_hash = static_cast<uint32>(glitch::core::hashString(GroundFierceStrikes));

	// Field : LeftFierceStrikes
	stream->ReadString(LeftFierceStrikes);
	LeftFierceStrikes_hash = static_cast<uint32>(glitch::core::hashString(LeftFierceStrikes));

	// Field : RightFierceStrikes
	stream->ReadString(RightFierceStrikes);
	RightFierceStrikes_hash = static_cast<uint32>(glitch::core::hashString(RightFierceStrikes));

	// Field : GroundQuickStrikes
	stream->ReadString(GroundQuickStrikes);
	GroundQuickStrikes_hash = static_cast<uint32>(glitch::core::hashString(GroundQuickStrikes));

	// Field : LeftQuickStrikes
	stream->ReadString(LeftQuickStrikes);
	LeftQuickStrikes_hash = static_cast<uint32>(glitch::core::hashString(LeftQuickStrikes));

	// Field : RightQuickStrikes
	stream->ReadString(RightQuickStrikes);
	RightQuickStrikes_hash = static_cast<uint32>(glitch::core::hashString(RightQuickStrikes));

	// Field : WeaponGroundStrike
	stream->ReadString(WeaponGroundStrike);
	WeaponGroundStrike_hash = static_cast<uint32>(glitch::core::hashString(WeaponGroundStrike));

	// Field : WeaponStrike
	stream->ReadString(WeaponStrike);
	WeaponStrike_hash = static_cast<uint32>(glitch::core::hashString(WeaponStrike));

	// Field : WeaponComboStrike
	stream->ReadString(WeaponComboStrike);
	WeaponComboStrike_hash = static_cast<uint32>(glitch::core::hashString(WeaponComboStrike));

	// Field : WeaponFierceStrike
	stream->ReadString(WeaponFierceStrike);
	WeaponFierceStrike_hash = static_cast<uint32>(glitch::core::hashString(WeaponFierceStrike));

}

void giv_material_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : GroundFierceStrikes
	if (GroundFierceStrikes && GroundFierceStrikes[0] != '\0') gll_delete[] GroundFierceStrikes;
	GroundFierceStrikes = 0;

	// Field : LeftFierceStrikes
	if (LeftFierceStrikes && LeftFierceStrikes[0] != '\0') gll_delete[] LeftFierceStrikes;
	LeftFierceStrikes = 0;

	// Field : RightFierceStrikes
	if (RightFierceStrikes && RightFierceStrikes[0] != '\0') gll_delete[] RightFierceStrikes;
	RightFierceStrikes = 0;

	// Field : GroundQuickStrikes
	if (GroundQuickStrikes && GroundQuickStrikes[0] != '\0') gll_delete[] GroundQuickStrikes;
	GroundQuickStrikes = 0;

	// Field : LeftQuickStrikes
	if (LeftQuickStrikes && LeftQuickStrikes[0] != '\0') gll_delete[] LeftQuickStrikes;
	LeftQuickStrikes = 0;

	// Field : RightQuickStrikes
	if (RightQuickStrikes && RightQuickStrikes[0] != '\0') gll_delete[] RightQuickStrikes;
	RightQuickStrikes = 0;

	// Field : WeaponGroundStrike
	if (WeaponGroundStrike && WeaponGroundStrike[0] != '\0') gll_delete[] WeaponGroundStrike;
	WeaponGroundStrike = 0;

	// Field : WeaponStrike
	if (WeaponStrike && WeaponStrike[0] != '\0') gll_delete[] WeaponStrike;
	WeaponStrike = 0;

	// Field : WeaponComboStrike
	if (WeaponComboStrike && WeaponComboStrike[0] != '\0') gll_delete[] WeaponComboStrike;
	WeaponComboStrike = 0;

	// Field : WeaponFierceStrike
	if (WeaponFierceStrike && WeaponFierceStrike[0] != '\0') gll_delete[] WeaponFierceStrike;
	WeaponFierceStrike = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_material
size_t giv_material::size = 0;
giv_material::struct_type* giv_material::entries = 0;

void giv_material::Load(StreamBase* stream)
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

void giv_material::Unload()
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

