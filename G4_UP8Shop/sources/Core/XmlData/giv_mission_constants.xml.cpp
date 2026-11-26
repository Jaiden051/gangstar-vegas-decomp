#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_mission_constants.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_mission_constants_struct
void giv_mission_constants_struct::Init()
{
	base_struct::Init();

	// Field : GiverName
	GiverName = 0;
	GiverName_hash = 0;

	// Field : FlashLabel
	FlashLabel = 0;
	FlashLabel_hash = 0;

	// Field : District
	District = 0;
	District_hash = 0;

	// Field : ChapterName
	ChapterName = 0;
	ChapterName_hash = 0;

	// Field : ChapterDescription
	ChapterDescription = 0;
	ChapterDescription_hash = 0;

	// Field : MissionType
	MissionType = 0;

	// Field : MissionName
	MissionName = 0;
	MissionName_hash = 0;

	// Field : MissionDescription
	MissionDescription = 0;
	MissionDescription_hash = 0;

	// Field : MissionEndDescription
	MissionEndDescription = 0;
	MissionEndDescription_hash = 0;

	// Field : Giver
	Giver = 0;

	// Field : RewardLevel
	RewardLevel = 0;

	// Field : Chapter
	Chapter = 0;

	// Field : MissionUnlock
	MissionUnlock = 0;

	// Field : MissionUnlockLevelReq
	MissionUnlockLevelReq = 0;

	// Field : State
	State = 0;

	// Field : SkipCost
	SkipCost = 0;

	// Field : SkipFriendGift
	SkipFriendGift = 0;

	// Field : PhotoName
	PhotoName = 0;
	PhotoName_hash = 0;

	// Field : IsAbortRestricted
	IsAbortRestricted = 0;
	IsAbortRestricted_hash = 0;

	// Field : IsSkipRestricted
	IsSkipRestricted = 0;
	IsSkipRestricted_hash = 0;

	// Field : IsInQuickPlay
	IsInQuickPlay = 0;

	// Field : IsSubMap
	IsSubMap = 0;

	// Field : LoadoutID
	LoadoutID = 0;

	// Field : StatCounter_MissionComplete
	StatCounter_MissionComplete = 0;

	// Field : ObjectiveType
	ObjectiveType = 0;

	// Field : Objective0
	Objective0 = 0;

	// Field : Objective1
	Objective1 = 0;

	// Field : Objective2
	Objective2 = 0;

	// Field : Objective3
	Objective3 = 0;

	// Field : StartMode
	StartMode = 0;

	// Field : ApexFiles
	ApexFiles = 0;
	ApexFiles_hash = 0;

	// Field : GrapherFiles
	GrapherFiles = 0;
	GrapherFiles_hash = 0;

	// Field : GrapherStart
	GrapherStart = 0;

	// Field : NavMesh
	NavMesh = 0;

	// Field : TeleportToEstateOnRestart
	TeleportToEstateOnRestart = 0;

	// Field : TeleportToEstateOnAbort
	TeleportToEstateOnAbort = 0;

	// Field : TeleportToEstateOnCompletion
	TeleportToEstateOnCompletion = 0;

	// Field : TeleportToEstateOnSkip
	TeleportToEstateOnSkip = 0;

	// Field : DespawnLastVehicleOrderedOnStart
	DespawnLastVehicleOrderedOnStart = 0;

	// Field : AutoRunScriptOnMissionUnload
	AutoRunScriptOnMissionUnload = 0;

	// Field : IsPhoneCall
	IsPhoneCall = 0;

	// Field : RecommendedItems
	RecommendedItems = 0;

	// Field : DistrictZoneName
	DistrictZoneName = 0;
	DistrictZoneName_hash = 0;

}

void giv_mission_constants_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : GiverName
	stream->ReadString(GiverName);
	GiverName_hash = static_cast<uint32>(glitch::core::hashString(GiverName));

	// Field : FlashLabel
	stream->ReadString(FlashLabel);
	FlashLabel_hash = static_cast<uint32>(glitch::core::hashString(FlashLabel));

	// Field : District
	stream->ReadString(District);
	District_hash = static_cast<uint32>(glitch::core::hashString(District));

	// Field : ChapterName
	stream->ReadString(ChapterName);
	ChapterName_hash = static_cast<uint32>(glitch::core::hashString(ChapterName));

	// Field : ChapterDescription
	stream->ReadString(ChapterDescription);
	ChapterDescription_hash = static_cast<uint32>(glitch::core::hashString(ChapterDescription));

	// Field : MissionType
	stream->ReadAs(MissionType);

	// Field : MissionName
	stream->ReadString(MissionName);
	MissionName_hash = static_cast<uint32>(glitch::core::hashString(MissionName));

	// Field : MissionDescription
	stream->ReadString(MissionDescription);
	MissionDescription_hash = static_cast<uint32>(glitch::core::hashString(MissionDescription));

	// Field : MissionEndDescription
	stream->ReadString(MissionEndDescription);
	MissionEndDescription_hash = static_cast<uint32>(glitch::core::hashString(MissionEndDescription));

	// Field : Giver
	stream->ReadAs(Giver);

	// Field : RewardLevel
	stream->ReadAs(RewardLevel);

	// Field : Chapter
	stream->ReadAs(Chapter);

	// Field : MissionUnlock
	stream->ReadAs(MissionUnlock);

	// Field : MissionUnlockLevelReq
	stream->ReadAs(MissionUnlockLevelReq);

	// Field : State
	stream->ReadAs(State);

	// Field : SkipCost
	stream->ReadAs(SkipCost);

	// Field : SkipFriendGift
	stream->ReadAs(SkipFriendGift);

	// Field : PhotoName
	stream->ReadString(PhotoName);
	PhotoName_hash = static_cast<uint32>(glitch::core::hashString(PhotoName));

	// Field : IsAbortRestricted
	stream->ReadString(IsAbortRestricted);
	IsAbortRestricted_hash = static_cast<uint32>(glitch::core::hashString(IsAbortRestricted));

	// Field : IsSkipRestricted
	stream->ReadString(IsSkipRestricted);
	IsSkipRestricted_hash = static_cast<uint32>(glitch::core::hashString(IsSkipRestricted));

	// Field : IsInQuickPlay
	stream->ReadAs(IsInQuickPlay);

	// Field : IsSubMap
	stream->ReadAs(IsSubMap);

	// Field : LoadoutID
	stream->ReadAs(LoadoutID);

	// Field : StatCounter_MissionComplete
	stream->ReadAs(StatCounter_MissionComplete);

	// Field : ObjectiveType
	stream->ReadAs(ObjectiveType);

	// Field : Objective0
	stream->ReadAs(Objective0);

	// Field : Objective1
	stream->ReadAs(Objective1);

	// Field : Objective2
	stream->ReadAs(Objective2);

	// Field : Objective3
	stream->ReadAs(Objective3);

	// Field : StartMode
	stream->ReadAs(StartMode);

	// Field : ApexFiles
	stream->ReadString(ApexFiles);
	ApexFiles_hash = static_cast<uint32>(glitch::core::hashString(ApexFiles));

	// Field : GrapherFiles
	stream->ReadString(GrapherFiles);
	GrapherFiles_hash = static_cast<uint32>(glitch::core::hashString(GrapherFiles));

	// Field : GrapherStart
	stream->ReadAs(GrapherStart);

	// Field : NavMesh
	stream->ReadAs(NavMesh);

	// Field : TeleportToEstateOnRestart
	stream->ReadAs(TeleportToEstateOnRestart);

	// Field : TeleportToEstateOnAbort
	stream->ReadAs(TeleportToEstateOnAbort);

	// Field : TeleportToEstateOnCompletion
	stream->ReadAs(TeleportToEstateOnCompletion);

	// Field : TeleportToEstateOnSkip
	stream->ReadAs(TeleportToEstateOnSkip);

	// Field : DespawnLastVehicleOrderedOnStart
	stream->ReadAs(DespawnLastVehicleOrderedOnStart);

	// Field : AutoRunScriptOnMissionUnload
	stream->ReadAs(AutoRunScriptOnMissionUnload);

	// Field : IsPhoneCall
	stream->ReadAs(IsPhoneCall);

	// Field : RecommendedItems
	stream->ReadAs(RecommendedItems);

	// Field : DistrictZoneName
	stream->ReadString(DistrictZoneName);
	DistrictZoneName_hash = static_cast<uint32>(glitch::core::hashString(DistrictZoneName));

}

void giv_mission_constants_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : GiverName
	if (GiverName && GiverName[0] != '\0') gll_delete[] GiverName;
	GiverName = 0;

	// Field : FlashLabel
	if (FlashLabel && FlashLabel[0] != '\0') gll_delete[] FlashLabel;
	FlashLabel = 0;

	// Field : District
	if (District && District[0] != '\0') gll_delete[] District;
	District = 0;

	// Field : ChapterName
	if (ChapterName && ChapterName[0] != '\0') gll_delete[] ChapterName;
	ChapterName = 0;

	// Field : ChapterDescription
	if (ChapterDescription && ChapterDescription[0] != '\0') gll_delete[] ChapterDescription;
	ChapterDescription = 0;

	// Field : MissionName
	if (MissionName && MissionName[0] != '\0') gll_delete[] MissionName;
	MissionName = 0;

	// Field : MissionDescription
	if (MissionDescription && MissionDescription[0] != '\0') gll_delete[] MissionDescription;
	MissionDescription = 0;

	// Field : MissionEndDescription
	if (MissionEndDescription && MissionEndDescription[0] != '\0') gll_delete[] MissionEndDescription;
	MissionEndDescription = 0;

	// Field : PhotoName
	if (PhotoName && PhotoName[0] != '\0') gll_delete[] PhotoName;
	PhotoName = 0;

	// Field : IsAbortRestricted
	if (IsAbortRestricted && IsAbortRestricted[0] != '\0') gll_delete[] IsAbortRestricted;
	IsAbortRestricted = 0;

	// Field : IsSkipRestricted
	if (IsSkipRestricted && IsSkipRestricted[0] != '\0') gll_delete[] IsSkipRestricted;
	IsSkipRestricted = 0;

	// Field : ApexFiles
	if (ApexFiles && ApexFiles[0] != '\0') gll_delete[] ApexFiles;
	ApexFiles = 0;

	// Field : GrapherFiles
	if (GrapherFiles && GrapherFiles[0] != '\0') gll_delete[] GrapherFiles;
	GrapherFiles = 0;

	// Field : DistrictZoneName
	if (DistrictZoneName && DistrictZoneName[0] != '\0') gll_delete[] DistrictZoneName;
	DistrictZoneName = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_mission_constants
size_t giv_mission_constants::size = 0;
giv_mission_constants::struct_type* giv_mission_constants::entries = 0;

void giv_mission_constants::Load(StreamBase* stream)
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

void giv_mission_constants::Unload()
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

