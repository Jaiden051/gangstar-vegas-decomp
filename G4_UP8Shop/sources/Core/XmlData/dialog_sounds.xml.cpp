#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/dialog_sounds.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : dialog_sounds_struct
void dialog_sounds_struct::Init()
{
	base_struct::Init();

	// Field : TitleID
	TitleID = 0;

	// Field : SubTitleID
	SubTitleID = 0;

	// Field : ContentID
	ContentID = 0;

	// Field : IsSkippable
	IsSkippable = 0;

	// Field : DurationMS
	DurationMS_f = 0.0f;

	// Field : Type
	Type = 0;

	// Field : IsUpdatable
	IsUpdatable = 0;

	// Field : GamepadCancelBtn
	GamepadCancelBtn = 0;

	// Field : GamepadOkBtn
	GamepadOkBtn = 0;

	// Field : GamepadCancelFlashName
	GamepadCancelFlashName = 0;
	GamepadCancelFlashName_hash = 0;

	// Field : GamepadOkFlashName
	GamepadOkFlashName = 0;
	GamepadOkFlashName_hash = 0;

}

void dialog_sounds_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : TitleID
	stream->ReadAs(TitleID);

	// Field : SubTitleID
	stream->ReadAs(SubTitleID);

	// Field : ContentID
	stream->ReadAs(ContentID);

	// Field : IsSkippable
	stream->ReadAs(IsSkippable);

	// Field : DurationMS
	stream->ReadAs(DurationMS_f);

	// Field : Type
	stream->ReadAs(Type);

	// Field : IsUpdatable
	stream->ReadAs(IsUpdatable);

	// Field : GamepadCancelBtn
	stream->ReadAs(GamepadCancelBtn);

	// Field : GamepadOkBtn
	stream->ReadAs(GamepadOkBtn);

	// Field : GamepadCancelFlashName
	stream->ReadString(GamepadCancelFlashName);
	GamepadCancelFlashName_hash = static_cast<uint32>(glitch::core::hashString(GamepadCancelFlashName));

	// Field : GamepadOkFlashName
	stream->ReadString(GamepadOkFlashName);
	GamepadOkFlashName_hash = static_cast<uint32>(glitch::core::hashString(GamepadOkFlashName));

}

void dialog_sounds_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : GamepadCancelFlashName
	if (GamepadCancelFlashName && GamepadCancelFlashName[0] != '\0') gll_delete[] GamepadCancelFlashName;
	GamepadCancelFlashName = 0;

	// Field : GamepadOkFlashName
	if (GamepadOkFlashName && GamepadOkFlashName[0] != '\0') gll_delete[] GamepadOkFlashName;
	GamepadOkFlashName = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : dialog_sounds
size_t dialog_sounds::size = 0;
dialog_sounds::struct_type* dialog_sounds::entries = 0;

void dialog_sounds::Load(StreamBase* stream)
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

void dialog_sounds::Unload()
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

