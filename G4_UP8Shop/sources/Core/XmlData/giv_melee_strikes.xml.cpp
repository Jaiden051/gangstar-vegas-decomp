#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_melee_strikes.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_melee_strikes_struct
void giv_melee_strikes_struct::Init()
{
	base_struct::Init();

	// Field : EnableBrakeAndGas
	EnableBrakeAndGas = 0;

	// Field : EnableLinearBraking
	EnableLinearBraking = 0;

	// Field : EnableObjectiveIcon
	EnableObjectiveIcon = 0;
	EnableObjectiveIcon_hash = 0;

	// Field : EnableAnalogStickVisible
	EnableAnalogStickVisible = 0;

	// Field : EnableDistrictUpgrade
	EnableDistrictUpgrade = 0;
	EnableDistrictUpgrade_hash = 0;

}

void giv_melee_strikes_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : EnableBrakeAndGas
	stream->ReadAs(EnableBrakeAndGas);

	// Field : EnableLinearBraking
	stream->ReadAs(EnableLinearBraking);

	// Field : EnableObjectiveIcon
	stream->ReadString(EnableObjectiveIcon);
	EnableObjectiveIcon_hash = static_cast<uint32>(glitch::core::hashString(EnableObjectiveIcon));

	// Field : EnableAnalogStickVisible
	stream->ReadAs(EnableAnalogStickVisible);

	// Field : EnableDistrictUpgrade
	stream->ReadString(EnableDistrictUpgrade);
	EnableDistrictUpgrade_hash = static_cast<uint32>(glitch::core::hashString(EnableDistrictUpgrade));

}

void giv_melee_strikes_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : EnableObjectiveIcon
	if (EnableObjectiveIcon && EnableObjectiveIcon[0] != '\0') gll_delete[] EnableObjectiveIcon;
	EnableObjectiveIcon = 0;

	// Field : EnableDistrictUpgrade
	if (EnableDistrictUpgrade && EnableDistrictUpgrade[0] != '\0') gll_delete[] EnableDistrictUpgrade;
	EnableDistrictUpgrade = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_melee_strikes
size_t giv_melee_strikes::size = 0;
giv_melee_strikes::struct_type* giv_melee_strikes::entries = 0;

void giv_melee_strikes::Load(StreamBase* stream)
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

void giv_melee_strikes::Unload()
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

