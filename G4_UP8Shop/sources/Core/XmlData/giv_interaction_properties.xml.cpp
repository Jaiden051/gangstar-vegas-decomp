#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_interaction_properties.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_interaction_properties_struct
void giv_interaction_properties_struct::Init()
{
	base_struct::Init();

	// Field : Chances
	Chances_f = 0.0f;

	// Field : Amount
	Amount = 0;

	// Field : Order
	Order = 0;

	// Field : TypeChoices
	TypeChoices = 0;

	// Field : LevelChoices
	LevelChoices = 0;

	// Field : WeaponChoices
	WeaponChoices = 0;

	// Field : ClothChoices
	ClothChoices = 0;

	// Field : VehicleChoices
	VehicleChoices = 0;

	// Field : RarityChoices
	RarityChoices = 0;

	// Field : MiscChoices
	MiscChoices = 0;

	// Field : CashChoices
	CashChoices = 0;

	// Field : KeyChoices
	KeyChoices = 0;

	// Field : AmmoChoices
	AmmoChoices = 0;

	// Field : NumberOfDrops
	NumberOfDrops = 0;

	// Field : ItemCount
	ItemCount = 0;

	// Field : PaletteArray
	PaletteArray = 0;

	// Field : ColorId
	ColorId = 0;

}

void giv_interaction_properties_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Chances
	stream->ReadAs(Chances_f);

	// Field : Amount
	stream->ReadAs(Amount);

	// Field : Order
	stream->ReadAs(Order);

	// Field : TypeChoices
	stream->ReadAs(TypeChoices);

	// Field : LevelChoices
	stream->ReadAs(LevelChoices);

	// Field : WeaponChoices
	stream->ReadAs(WeaponChoices);

	// Field : ClothChoices
	stream->ReadAs(ClothChoices);

	// Field : VehicleChoices
	stream->ReadAs(VehicleChoices);

	// Field : RarityChoices
	stream->ReadAs(RarityChoices);

	// Field : MiscChoices
	stream->ReadAs(MiscChoices);

	// Field : CashChoices
	stream->ReadAs(CashChoices);

	// Field : KeyChoices
	stream->ReadAs(KeyChoices);

	// Field : AmmoChoices
	stream->ReadAs(AmmoChoices);

	// Field : NumberOfDrops
	stream->ReadAs(NumberOfDrops);

	// Field : ItemCount
	stream->ReadAs(ItemCount);

	// Field : PaletteArray
	stream->ReadAs(PaletteArray);

	// Field : ColorId
	stream->ReadAs(ColorId);

}

void giv_interaction_properties_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_interaction_properties
size_t giv_interaction_properties::size = 0;
giv_interaction_properties::struct_type* giv_interaction_properties::entries = 0;

void giv_interaction_properties::Load(StreamBase* stream)
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

void giv_interaction_properties::Unload()
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

