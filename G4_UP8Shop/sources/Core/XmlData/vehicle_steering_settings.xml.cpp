#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/vehicle_steering_settings.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : vehicle_steering_settings_struct
void vehicle_steering_settings_struct::Init()
{
	base_struct::Init();

	// Field : IntValue
	IntValue = 0;

	// Field : FloatValue
	FloatValue = 0;

	// Field : BoolValue
	BoolValue = 0;

	// Field : HexValue
	HexValue = 0;

	// Field : ConstantSymbol
	ConstantSymbol = 0;

	// Field : EnumSymbol
	EnumSymbol = 0;

	// Field : FlagSymbol
	FlagSymbol = 0;

	// Field : IntRangeValue
	IntRangeValue_f = 0.0f;

	// Field : FloatRangeValue
	FloatRangeValue_f = 0.0f;

	// Field : StringValue
	StringValue = 0;
	StringValue_hash = 0;

	// Field : StrIDValue
	StrIDValue = 0;

	// Field : OIDValue
	OIDValue = 0;

	// Field : OIDValueNoSType
	OIDValueNoSType = 0;

	// Field : IntList
	IntList = 0;

	// Field : FloatList
	FloatList = 0;

	// Field : EnumList
	EnumList = 0;

	// Field : OIDList
	OIDList = 0;

	// Field : Vector3df
	Vector3df = 0;

}

void vehicle_steering_settings_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : IntValue
	stream->ReadAs(IntValue);

	// Field : FloatValue
	stream->ReadAs(FloatValue);

	// Field : BoolValue
	stream->ReadAs(BoolValue);

	// Field : HexValue
	stream->ReadAs(HexValue);

	// Field : ConstantSymbol
	stream->ReadAs(ConstantSymbol);

	// Field : EnumSymbol
	stream->ReadAs(EnumSymbol);

	// Field : FlagSymbol
	stream->ReadAs(FlagSymbol);

	// Field : IntRangeValue
	stream->ReadAs(IntRangeValue_f);

	// Field : FloatRangeValue
	stream->ReadAs(FloatRangeValue_f);

	// Field : StringValue
	stream->ReadString(StringValue);
	StringValue_hash = static_cast<uint32>(glitch::core::hashString(StringValue));

	// Field : StrIDValue
	stream->ReadAs(StrIDValue);

	// Field : OIDValue
	stream->ReadAs(OIDValue);

	// Field : OIDValueNoSType
	stream->ReadAs(OIDValueNoSType);

	// Field : IntList
	stream->ReadAs(IntList);

	// Field : FloatList
	stream->ReadAs(FloatList);

	// Field : EnumList
	stream->ReadAs(EnumList);

	// Field : OIDList
	stream->ReadAs(OIDList);

	// Field : Vector3df
	stream->ReadAs(Vector3df);

}

void vehicle_steering_settings_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : StringValue
	if (StringValue && StringValue[0] != '\0') gll_delete[] StringValue;
	StringValue = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : vehicle_steering_settings
size_t vehicle_steering_settings::size = 0;
vehicle_steering_settings::struct_type* vehicle_steering_settings::entries = 0;

void vehicle_steering_settings::Load(StreamBase* stream)
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

void vehicle_steering_settings::Unload()
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

