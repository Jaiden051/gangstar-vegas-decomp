#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_daily_gifts.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_daily_gifts_struct
void giv_daily_gifts_struct::Init()
{
	base_struct::Init();

	// Field : OnCharacterHitVFX
	OnCharacterHitVFX = 0;
	OnCharacterHitVFX_hash = 0;

	// Field : OnVehicleHitVFX
	OnVehicleHitVFX = 0;
	OnVehicleHitVFX_hash = 0;

	// Field : OnSceneHitVFX
	OnSceneHitVFX = 0;
	OnSceneHitVFX_hash = 0;

}

void giv_daily_gifts_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : OnCharacterHitVFX
	stream->ReadString(OnCharacterHitVFX);
	OnCharacterHitVFX_hash = static_cast<uint32>(glitch::core::hashString(OnCharacterHitVFX));

	// Field : OnVehicleHitVFX
	stream->ReadString(OnVehicleHitVFX);
	OnVehicleHitVFX_hash = static_cast<uint32>(glitch::core::hashString(OnVehicleHitVFX));

	// Field : OnSceneHitVFX
	stream->ReadString(OnSceneHitVFX);
	OnSceneHitVFX_hash = static_cast<uint32>(glitch::core::hashString(OnSceneHitVFX));

}

void giv_daily_gifts_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : OnCharacterHitVFX
	if (OnCharacterHitVFX && OnCharacterHitVFX[0] != '\0') gll_delete[] OnCharacterHitVFX;
	OnCharacterHitVFX = 0;

	// Field : OnVehicleHitVFX
	if (OnVehicleHitVFX && OnVehicleHitVFX[0] != '\0') gll_delete[] OnVehicleHitVFX;
	OnVehicleHitVFX = 0;

	// Field : OnSceneHitVFX
	if (OnSceneHitVFX && OnSceneHitVFX[0] != '\0') gll_delete[] OnSceneHitVFX;
	OnSceneHitVFX = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_daily_gifts
size_t giv_daily_gifts::size = 0;
giv_daily_gifts::struct_type* giv_daily_gifts::entries = 0;

void giv_daily_gifts::Load(StreamBase* stream)
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

void giv_daily_gifts::Unload()
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

