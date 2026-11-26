#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/camera_presets.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : camera_presets_struct
void camera_presets_struct::Init()
{
	base_struct::Init();

	// Field : FollowCamera
	FollowCamera = 0;

	// Field : CoverStanding
	CoverStanding = 0;

	// Field : CoverStandingLeft
	CoverStandingLeft = 0;

	// Field : CoverStandingRight
	CoverStandingRight = 0;

	// Field : CoverCrouch
	CoverCrouch = 0;

	// Field : CoverCrouchLeft
	CoverCrouchLeft = 0;

	// Field : CoverCrouchRight
	CoverCrouchRight = 0;

	// Field : BrawlingCamera
	BrawlingCamera = 0;

	// Field : ParachuteCamera
	ParachuteCamera = 0;

	// Field : SkydivingCamera
	SkydivingCamera = 0;

	// Field : SwimCamera
	SwimCamera = 0;

	// Field : EjectCamera
	EjectCamera = 0;

}

void camera_presets_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : FollowCamera
	stream->ReadAs(FollowCamera);

	// Field : CoverStanding
	stream->ReadAs(CoverStanding);

	// Field : CoverStandingLeft
	stream->ReadAs(CoverStandingLeft);

	// Field : CoverStandingRight
	stream->ReadAs(CoverStandingRight);

	// Field : CoverCrouch
	stream->ReadAs(CoverCrouch);

	// Field : CoverCrouchLeft
	stream->ReadAs(CoverCrouchLeft);

	// Field : CoverCrouchRight
	stream->ReadAs(CoverCrouchRight);

	// Field : BrawlingCamera
	stream->ReadAs(BrawlingCamera);

	// Field : ParachuteCamera
	stream->ReadAs(ParachuteCamera);

	// Field : SkydivingCamera
	stream->ReadAs(SkydivingCamera);

	// Field : SwimCamera
	stream->ReadAs(SwimCamera);

	// Field : EjectCamera
	stream->ReadAs(EjectCamera);

}

void camera_presets_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : camera_presets
size_t camera_presets::size = 0;
camera_presets::struct_type* camera_presets::entries = 0;

void camera_presets::Load(StreamBase* stream)
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

void camera_presets::Unload()
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

