#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/gang_battles.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : gang_battles_struct
void gang_battles_struct::Init()
{
	base_struct::Init();

	// Field : HEAD
	HEAD = 0;

	// Field : TORSO
	TORSO = 0;

	// Field : LEGS
	LEGS = 0;

	// Field : CAR
	CAR = 0;

	// Field : BOAT
	BOAT = 0;

	// Field : AIR
	AIR = 0;

	// Field : HeadModuleName
	HeadModuleName = 0;
	HeadModuleName_hash = 0;

	// Field : TorsoModuleName
	TorsoModuleName = 0;
	TorsoModuleName_hash = 0;

	// Field : LegsModuleName
	LegsModuleName = 0;
	LegsModuleName_hash = 0;

}

void gang_battles_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : HEAD
	stream->ReadAs(HEAD);

	// Field : TORSO
	stream->ReadAs(TORSO);

	// Field : LEGS
	stream->ReadAs(LEGS);

	// Field : CAR
	stream->ReadAs(CAR);

	// Field : BOAT
	stream->ReadAs(BOAT);

	// Field : AIR
	stream->ReadAs(AIR);

	// Field : HeadModuleName
	stream->ReadString(HeadModuleName);
	HeadModuleName_hash = static_cast<uint32>(glitch::core::hashString(HeadModuleName));

	// Field : TorsoModuleName
	stream->ReadString(TorsoModuleName);
	TorsoModuleName_hash = static_cast<uint32>(glitch::core::hashString(TorsoModuleName));

	// Field : LegsModuleName
	stream->ReadString(LegsModuleName);
	LegsModuleName_hash = static_cast<uint32>(glitch::core::hashString(LegsModuleName));

}

void gang_battles_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : HeadModuleName
	if (HeadModuleName && HeadModuleName[0] != '\0') gll_delete[] HeadModuleName;
	HeadModuleName = 0;

	// Field : TorsoModuleName
	if (TorsoModuleName && TorsoModuleName[0] != '\0') gll_delete[] TorsoModuleName;
	TorsoModuleName = 0;

	// Field : LegsModuleName
	if (LegsModuleName && LegsModuleName[0] != '\0') gll_delete[] LegsModuleName;
	LegsModuleName = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : gang_battles
size_t gang_battles::size = 0;
gang_battles::struct_type* gang_battles::entries = 0;

void gang_battles::Load(StreamBase* stream)
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

void gang_battles::Unload()
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

