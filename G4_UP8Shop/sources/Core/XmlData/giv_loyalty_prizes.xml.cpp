#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_loyalty_prizes.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_loyalty_prizes_struct
void giv_loyalty_prizes_struct::Init()
{
	base_struct::Init();

	// Field : floor_ring
	floor_ring = 0;

	// Field : MaterialId
	MaterialId = 0;

	// Field : MaterialFriction
	MaterialFriction_f = 0.0f;

	// Field : Footstep_Start
	Footstep_Start = 0;

	// Field : Footstep_Walk
	Footstep_Walk = 0;

	// Field : Footstep_Run
	Footstep_Run = 0;

	// Field : Footstep_Sprint
	Footstep_Sprint = 0;

	// Field : Footstep_End
	Footstep_End = 0;

	// Field : Footstep_Jump
	Footstep_Jump = 0;

	// Field : Footstep_Land
	Footstep_Land = 0;

	// Field : VFX_CarSkid
	VFX_CarSkid = 0;

	// Field : VFX_CarBurnout
	VFX_CarBurnout = 0;
	VFX_CarBurnout_hash = 0;

	// Field : VFX_CarBraking
	VFX_CarBraking = 0;
	VFX_CarBraking_hash = 0;

	// Field : VFX_CarHitFront
	VFX_CarHitFront = 0;
	VFX_CarHitFront_hash = 0;

	// Field : VFX_CarHitBack
	VFX_CarHitBack = 0;
	VFX_CarHitBack_hash = 0;

	// Field : VFX_CarScratchSide
	VFX_CarScratchSide = 0;

	// Field : VFX_CarScratchTop
	VFX_CarScratchTop = 0;
	VFX_CarScratchTop_hash = 0;

	// Field : VFX_CarHitOther
	VFX_CarHitOther = 0;
	VFX_CarHitOther_hash = 0;

	// Field : Concrete
	Concrete = 0;

	// Field : Asphalt
	Asphalt = 0;

	// Field : Sand
	Sand = 0;

	// Field : Carpet
	Carpet = 0;

	// Field : Grass
	Grass = 0;

	// Field : Glass
	Glass = 0;

	// Field : Rock
	Rock = 0;

	// Field : Wood
	Wood = 0;

}

void giv_loyalty_prizes_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : floor_ring
	stream->ReadAs(floor_ring);

	// Field : MaterialId
	stream->ReadAs(MaterialId);

	// Field : MaterialFriction
	stream->ReadAs(MaterialFriction_f);

	// Field : Footstep_Start
	stream->ReadAs(Footstep_Start);

	// Field : Footstep_Walk
	stream->ReadAs(Footstep_Walk);

	// Field : Footstep_Run
	stream->ReadAs(Footstep_Run);

	// Field : Footstep_Sprint
	stream->ReadAs(Footstep_Sprint);

	// Field : Footstep_End
	stream->ReadAs(Footstep_End);

	// Field : Footstep_Jump
	stream->ReadAs(Footstep_Jump);

	// Field : Footstep_Land
	stream->ReadAs(Footstep_Land);

	// Field : VFX_CarSkid
	stream->ReadAs(VFX_CarSkid);

	// Field : VFX_CarBurnout
	stream->ReadString(VFX_CarBurnout);
	VFX_CarBurnout_hash = static_cast<uint32>(glitch::core::hashString(VFX_CarBurnout));

	// Field : VFX_CarBraking
	stream->ReadString(VFX_CarBraking);
	VFX_CarBraking_hash = static_cast<uint32>(glitch::core::hashString(VFX_CarBraking));

	// Field : VFX_CarHitFront
	stream->ReadString(VFX_CarHitFront);
	VFX_CarHitFront_hash = static_cast<uint32>(glitch::core::hashString(VFX_CarHitFront));

	// Field : VFX_CarHitBack
	stream->ReadString(VFX_CarHitBack);
	VFX_CarHitBack_hash = static_cast<uint32>(glitch::core::hashString(VFX_CarHitBack));

	// Field : VFX_CarScratchSide
	stream->ReadAs(VFX_CarScratchSide);

	// Field : VFX_CarScratchTop
	stream->ReadString(VFX_CarScratchTop);
	VFX_CarScratchTop_hash = static_cast<uint32>(glitch::core::hashString(VFX_CarScratchTop));

	// Field : VFX_CarHitOther
	stream->ReadString(VFX_CarHitOther);
	VFX_CarHitOther_hash = static_cast<uint32>(glitch::core::hashString(VFX_CarHitOther));

	// Field : Concrete
	stream->ReadAs(Concrete);

	// Field : Asphalt
	stream->ReadAs(Asphalt);

	// Field : Sand
	stream->ReadAs(Sand);

	// Field : Carpet
	stream->ReadAs(Carpet);

	// Field : Grass
	stream->ReadAs(Grass);

	// Field : Glass
	stream->ReadAs(Glass);

	// Field : Rock
	stream->ReadAs(Rock);

	// Field : Wood
	stream->ReadAs(Wood);

}

void giv_loyalty_prizes_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : VFX_CarBurnout
	if (VFX_CarBurnout && VFX_CarBurnout[0] != '\0') gll_delete[] VFX_CarBurnout;
	VFX_CarBurnout = 0;

	// Field : VFX_CarBraking
	if (VFX_CarBraking && VFX_CarBraking[0] != '\0') gll_delete[] VFX_CarBraking;
	VFX_CarBraking = 0;

	// Field : VFX_CarHitFront
	if (VFX_CarHitFront && VFX_CarHitFront[0] != '\0') gll_delete[] VFX_CarHitFront;
	VFX_CarHitFront = 0;

	// Field : VFX_CarHitBack
	if (VFX_CarHitBack && VFX_CarHitBack[0] != '\0') gll_delete[] VFX_CarHitBack;
	VFX_CarHitBack = 0;

	// Field : VFX_CarScratchTop
	if (VFX_CarScratchTop && VFX_CarScratchTop[0] != '\0') gll_delete[] VFX_CarScratchTop;
	VFX_CarScratchTop = 0;

	// Field : VFX_CarHitOther
	if (VFX_CarHitOther && VFX_CarHitOther[0] != '\0') gll_delete[] VFX_CarHitOther;
	VFX_CarHitOther = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_loyalty_prizes
size_t giv_loyalty_prizes::size = 0;
giv_loyalty_prizes::struct_type* giv_loyalty_prizes::entries = 0;

void giv_loyalty_prizes::Load(StreamBase* stream)
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

void giv_loyalty_prizes::Unload()
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

