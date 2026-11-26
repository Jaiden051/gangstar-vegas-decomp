#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_abilities.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_abilities_struct
void giv_abilities_struct::Init()
{
	base_struct::Init();

	// Field : StartFactor
	StartFactor_f = 0.0f;

	// Field : UpgradeFactor1
	UpgradeFactor1_f = 0.0f;

	// Field : UpgradeFactor2
	UpgradeFactor2_f = 0.0f;

	// Field : UpgradeFactor3
	UpgradeFactor3_f = 0.0f;

	// Field : UpgradeFactor4
	UpgradeFactor4_f = 0.0f;

	// Field : UpgradeFactor5
	UpgradeFactor5_f = 0.0f;

	// Field : NextBenefitString
	NextBenefitString = 0;
	NextBenefitString_hash = 0;

}

void giv_abilities_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : StartFactor
	stream->ReadAs(StartFactor_f);

	// Field : UpgradeFactor1
	stream->ReadAs(UpgradeFactor1_f);

	// Field : UpgradeFactor2
	stream->ReadAs(UpgradeFactor2_f);

	// Field : UpgradeFactor3
	stream->ReadAs(UpgradeFactor3_f);

	// Field : UpgradeFactor4
	stream->ReadAs(UpgradeFactor4_f);

	// Field : UpgradeFactor5
	stream->ReadAs(UpgradeFactor5_f);

	// Field : NextBenefitString
	stream->ReadString(NextBenefitString);
	NextBenefitString_hash = static_cast<uint32>(glitch::core::hashString(NextBenefitString));

}

void giv_abilities_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : NextBenefitString
	if (NextBenefitString && NextBenefitString[0] != '\0') gll_delete[] NextBenefitString;
	NextBenefitString = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_abilities
size_t giv_abilities::size = 0;
giv_abilities::struct_type* giv_abilities::entries = 0;

void giv_abilities::Load(StreamBase* stream)
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

void giv_abilities::Unload()
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

