#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_real_estate_definitions.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_real_estate_definitions_struct
void giv_real_estate_definitions_struct::Init()
{
	base_struct::Init();

	// Field : AbilityPoints
	AbilityPoints = 0;

	// Field : Percentage
	Percentage = 0;
	Percentage_hash = 0;

	// Field : APLevel
	APLevel = 0;

	// Field : LevelName
	LevelName = 0;
	LevelName_hash = 0;

	// Field : Reward
	Reward = 0;

	// Field : MaxRespect
	MaxRespect = 0;

}

void giv_real_estate_definitions_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : AbilityPoints
	stream->ReadAs(AbilityPoints);

	// Field : Percentage
	stream->ReadString(Percentage);
	Percentage_hash = static_cast<uint32>(glitch::core::hashString(Percentage));

	// Field : APLevel
	stream->ReadAs(APLevel);

	// Field : LevelName
	stream->ReadString(LevelName);
	LevelName_hash = static_cast<uint32>(glitch::core::hashString(LevelName));

	// Field : Reward
	stream->ReadAs(Reward);

	// Field : MaxRespect
	stream->ReadAs(MaxRespect);

}

void giv_real_estate_definitions_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : Percentage
	if (Percentage && Percentage[0] != '\0') gll_delete[] Percentage;
	Percentage = 0;

	// Field : LevelName
	if (LevelName && LevelName[0] != '\0') gll_delete[] LevelName;
	LevelName = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_real_estate_definitions
size_t giv_real_estate_definitions::size = 0;
giv_real_estate_definitions::struct_type* giv_real_estate_definitions::entries = 0;

void giv_real_estate_definitions::Load(StreamBase* stream)
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

void giv_real_estate_definitions::Unload()
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

